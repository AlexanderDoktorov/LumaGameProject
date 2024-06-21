

#include "JWAN_ModifyLayeringLogic.h"
#include "AnimationRuntime.h"
#include "Animation/AnimInstanceProxy.h"


void FAnimNode_ModifyLayering::Initialize_AnyThread(const FAnimationInitializeContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Initialize_AnyThread)
	//Initialize_AnyThread(Context);
	SourcePose.Initialize(Context);
	if (IsValid(AnimInst)==false)
	{ AnimInst = Cast<UAnimInstance>(Context.AnimInstanceProxy->GetAnimInstanceObject()); }

}

void FAnimNode_ModifyLayering::CacheBones_AnyThread(const FAnimationCacheBonesContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(CacheBones_AnyThread)
	//CacheBones_AnyThread(Context);
	SourcePose.CacheBones(Context);
	if (IsValid(AnimInst)==false)
	{ AnimInst = Cast<UAnimInstance>(Context.AnimInstanceProxy->GetAnimInstanceObject()); }
}

void FAnimNode_ModifyLayering::Evaluate_AnyThread(FPoseContext& Output)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Evaluate_AnyThread)
	FPoseContext SourceData(Output);
	SourcePose.Evaluate(SourceData);
	Output = SourceData;

	USkeleton* Skeleton = Output.AnimInstanceProxy->GetSkeleton(); //Get Skeleton

	// Process curve map if available.
	for (FLayeringCurvesData& CurveNameValue : CurvesStructure)
	{
		FString ENumToName;
		UEnum::GetValueAsString(CurveNameValue.CurveName, ENumToName); //Convet Enum To String
		ENumToName = ENumToName.Replace(TEXT("ELayeringCurvesName::"), TEXT(""), ESearchCase::IgnoreCase);
		SmartName::UID_Type NameUID = Skeleton->GetUIDByName(USkeleton::AnimCurveMappingName, FName(ENumToName)); //Get Curve UID by name
		//GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Red, ENumToName);
		if (NameUID != SmartName::MaxUID)
		{
			float CurrentValue = Output.Curve.Get(NameUID);
			float NewValue = CurveNameValue.Value;
			ProcessCurveOperation(CurveNameValue.BlendMode, Output, NameUID, CurrentValue, NewValue);
		}
	}

}

void FAnimNode_ModifyLayering::ProcessCurveOperation(const EModifyLayeringApplyMode& InApplyMode, FPoseContext& Output, const SmartName::UID_Type& NameUID, float CurrentValue, float NewValue)
{
	float UseNewValue = CurrentValue;

	// Use ApplyMode enum to decide how to apply
	if (InApplyMode == EModifyLayeringApplyMode::Add)
	{
		UseNewValue = CurrentValue + NewValue;
	}
	else if (InApplyMode == EModifyLayeringApplyMode::Scale)
	{
		UseNewValue = CurrentValue * NewValue;
	}
	else if (InApplyMode == EModifyLayeringApplyMode::RemapCurve)
	{
		const float RemapScale = 1.f / FMath::Max(1.f - NewValue, 0.01f);
		UseNewValue = FMath::Min(FMath::Max(CurrentValue - NewValue, 0.f) * RemapScale, 1.f);
	}
	else if (InApplyMode == EModifyLayeringApplyMode::Blend)
	{
		UseNewValue = NewValue;
	}

	float UseAlpha = FMath::Clamp(InternalBlendAlpha, 0.f, 1.f);
	Output.Curve.Set(NameUID, FMath::Lerp(CurrentValue, UseNewValue, UseAlpha));
}


void FAnimNode_ModifyLayering::ProcessCurveWMAOperation(FPoseContext& Output, const SmartName::UID_Type& NameUID, float CurrentValue, float NewValue, float& InOutLastValue)
{
	const float WAvg = FMath::WeightedMovingAverage(CurrentValue, InOutLastValue, InternalBlendAlpha);
	// Update the last curve value for next run
	InOutLastValue = WAvg;

	Output.Curve.Set(NameUID, WAvg);
}

void FAnimNode_ModifyLayering::Update_AnyThread(const FAnimationUpdateContext& Context)
{
	DECLARE_SCOPE_HIERARCHICAL_COUNTER_ANIMNODE(Update_AnyThread)

	// Run update on input pose nodes
	SourcePose.Update(Context);

	InternalBlendAlpha = 0.f;
	switch (AlphaInputType)
	{
	case EAnimAlphaInputType::Float:
		InternalBlendAlpha = AlphaScaleBias.ApplyTo(AlphaScaleBiasClamp.ApplyTo(Alpha, Context.GetDeltaTime()));
		break;
	case EAnimAlphaInputType::Bool:
		InternalBlendAlpha = AlphaScaleBias.ApplyTo(AlphaScaleBiasClamp.ApplyTo(Alpha, Context.GetDeltaTime()));
		break;
	case EAnimAlphaInputType::Curve:
		if (AnimInst)
		{ 
			InternalBlendAlpha = AlphaScaleBiasClamp.ApplyTo(AnimInst->GetCurveValue(AlphaCurveName), Context.GetDeltaTime()); 
		}
		break;
	};

	// Make sure Alpha is clamped between 0 and 1.
	InternalBlendAlpha = FMath::Clamp<float>(InternalBlendAlpha, 0.f, 1.f);

	// Evaluate any BP logic plugged into this node
	GetEvaluateGraphExposedInputs().Execute(Context);
}


