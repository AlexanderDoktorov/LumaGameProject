// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HelpfulFunctions/Public/JacobMotionWarpingComponent.h"
#include "HelpfulFunctions/Public/ALS_StructuresAndEnumsCpp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJacobMotionWarpingComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJacobMotionWarpingComponent();
	HELPFULFUNCTIONS_API UClass* Z_Construct_UClass_UJacobMotionWarpingComponent_NoRegister();
	HELPFULFUNCTIONS_API UScriptStruct* Z_Construct_UScriptStruct_FCALS_ComponentAndTransform();
	UPackage* Z_Construct_UPackage__Script_HelpfulFunctions();
// End Cross Module References
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execTimelineBlendIn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineBlendIn(Z_Param_Duration);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execGetTargetAxis)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Forward);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Right);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Up);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScaleXY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTargetAxis(Z_Param_Out_Forward,Z_Param_Out_Right,Z_Param_Out_Up,Z_Param_ScaleXY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execGetOriginPosition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetOriginPosition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execPredictedSingleMotionPositionAuto)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_GET_UBOOL_REF(Z_Param_Out_HaveRoom);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
		P_GET_OBJECT(ACharacter,Z_Param_WarpTargetActor);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSeqAtt);
		P_GET_OBJECT(UAnimSequence,Z_Param_AnimSeqVic);
		P_GET_STRUCT(FVector,Z_Param_WarpingOrigin);
		P_GET_STRUCT(FVector,Z_Param_ConstantOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedTime);
		P_GET_UBOOL(Z_Param_ExcludeWarpActorRoot);
		P_GET_UBOOL(Z_Param_UseUpAxis);
		P_GET_STRUCT(FRotator,Z_Param_ApplyCustomRotator);
		P_GET_UBOOL(Z_Param_InvertAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PredictedSingleMotionPositionAuto(Z_Param_Out_Valid,Z_Param_Out_HaveRoom,Z_Param_Out_ReturnLocation,Z_Param_WarpTargetActor,Z_Param_AnimSeqAtt,Z_Param_AnimSeqVic,Z_Param_WarpingOrigin,Z_Param_ConstantOffset,Z_Param_NormalizedTime,Z_Param_ExcludeWarpActorRoot,Z_Param_UseUpAxis,Z_Param_ApplyCustomRotator,Z_Param_InvertAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execPredictedSingleMotionPosition)
	{
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_GET_UBOOL_REF(Z_Param_Out_HaveRoom);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_ReturnLocation);
		P_GET_OBJECT(ACharacter,Z_Param_WarpTargetActor);
		P_GET_STRUCT(FVector,Z_Param_ConstantOffset);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NormalizedTime);
		P_GET_OBJECT(UCurveVector,Z_Param_RootMotionChar);
		P_GET_OBJECT(UCurveVector,Z_Param_RootMotionWarpRot);
		P_GET_UBOOL(Z_Param_ExcludeWarpActorRoot);
		P_GET_UBOOL(Z_Param_UseUpAxis);
		P_GET_STRUCT(FRotator,Z_Param_ApplyCustomRotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PredictedSingleMotionPosition(Z_Param_Out_Valid,Z_Param_Out_HaveRoom,Z_Param_Out_ReturnLocation,Z_Param_WarpTargetActor,Z_Param_ConstantOffset,Z_Param_NormalizedTime,Z_Param_RootMotionChar,Z_Param_RootMotionWarpRot,Z_Param_ExcludeWarpActorRoot,Z_Param_UseUpAxis,Z_Param_ApplyCustomRotator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execWarpingUpdate)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_X);
		P_GET_PROPERTY(FNameProperty,Z_Param_Y);
		P_GET_PROPERTY(FNameProperty,Z_Param_Z);
		P_GET_PROPERTY(FNameProperty,Z_Param_R);
		P_GET_UBOOL(Z_Param_UseUpAxis);
		P_GET_UBOOL(Z_Param_WithSweep);
		P_GET_UBOOL(Z_Param_WarpRotation);
		P_GET_PROPERTY(FFloatProperty,Z_Param_StrengthAlpha);
		P_GET_PROPERTY(FNameProperty,Z_Param_ConstAlphaCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WarpingUpdate(Z_Param_X,Z_Param_Y,Z_Param_Z,Z_Param_R,Z_Param_UseUpAxis,Z_Param_WithSweep,Z_Param_WarpRotation,Z_Param_StrengthAlpha,Z_Param_ConstAlphaCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execStopUpdatingWarpPoint)
	{
		P_GET_UBOOL(Z_Param_StopUpdating);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopUpdatingWarpPoint(Z_Param_StopUpdating);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execSetMotionWarpingTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_WarpTargetName);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_STRUCT(FVector,Z_Param_ConstantOffset);
		P_GET_STRUCT(FRotator,Z_Param_ConstRotOffset);
		P_GET_UBOOL(Z_Param_ExcludeRootMotion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotionWarpingTarget(Z_Param_WarpTargetName,Z_Param_TargetActor,Z_Param_ConstantOffset,Z_Param_ConstRotOffset,Z_Param_ExcludeRootMotion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UJacobMotionWarpingComponent::execResetValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetValues();
		P_NATIVE_END;
	}
	void UJacobMotionWarpingComponent::StaticRegisterNativesUJacobMotionWarpingComponent()
	{
		UClass* Class = UJacobMotionWarpingComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOriginPosition", &UJacobMotionWarpingComponent::execGetOriginPosition },
			{ "GetTargetAxis", &UJacobMotionWarpingComponent::execGetTargetAxis },
			{ "PredictedSingleMotionPosition", &UJacobMotionWarpingComponent::execPredictedSingleMotionPosition },
			{ "PredictedSingleMotionPositionAuto", &UJacobMotionWarpingComponent::execPredictedSingleMotionPositionAuto },
			{ "ResetValues", &UJacobMotionWarpingComponent::execResetValues },
			{ "SetMotionWarpingTarget", &UJacobMotionWarpingComponent::execSetMotionWarpingTarget },
			{ "StopUpdatingWarpPoint", &UJacobMotionWarpingComponent::execStopUpdatingWarpPoint },
			{ "TimelineBlendIn", &UJacobMotionWarpingComponent::execTimelineBlendIn },
			{ "WarpingUpdate", &UJacobMotionWarpingComponent::execWarpingUpdate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics
	{
		struct JacobMotionWarpingComponent_eventGetOriginPosition_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetOriginPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Get Origin Position" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "GetOriginPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::JacobMotionWarpingComponent_eventGetOriginPosition_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics
	{
		struct JacobMotionWarpingComponent_eventGetTargetAxis_Parms
		{
			FVector Forward;
			FVector Right;
			FVector Up;
			float ScaleXY;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Forward;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Right;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Up;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleXY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, Forward), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, Right), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Up = { "Up", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, Up), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_ScaleXY = { "ScaleXY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventGetTargetAxis_Parms, ScaleXY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Forward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Right,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_Up,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::NewProp_ScaleXY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_ScaleXY", "1.000000" },
		{ "DisplayName", "Get Target Axis" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "GetTargetAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::JacobMotionWarpingComponent_eventGetTargetAxis_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics
	{
		struct JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms
		{
			bool Valid;
			bool HaveRoom;
			FVector ReturnLocation;
			ACharacter* WarpTargetActor;
			FVector ConstantOffset;
			float NormalizedTime;
			UCurveVector* RootMotionChar;
			UCurveVector* RootMotionWarpRot;
			bool ExcludeWarpActorRoot;
			bool UseUpAxis;
			FRotator ApplyCustomRotator;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static void NewProp_HaveRoom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpTargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionChar;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootMotionWarpRot;
		static void NewProp_ExcludeWarpActorRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeWarpActorRoot;
		static void NewProp_UseUpAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUpAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyCustomRotator;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->HaveRoom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom = { "HaveRoom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_WarpTargetActor = { "WarpTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, WarpTargetActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ConstantOffset = { "ConstantOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, ConstantOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, NormalizedTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionChar = { "RootMotionChar", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, RootMotionChar), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionWarpRot = { "RootMotionWarpRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, RootMotionWarpRot), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->ExcludeWarpActorRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot = { "ExcludeWarpActorRoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms*)Obj)->UseUpAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis = { "UseUpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ApplyCustomRotator = { "ApplyCustomRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms, ApplyCustomRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_HaveRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ReturnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_WarpTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ConstantOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_NormalizedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionChar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_RootMotionWarpRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ExcludeWarpActorRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_UseUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::NewProp_ApplyCustomRotator,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Predicted Single Motion Position" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "PredictedSingleMotionPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::JacobMotionWarpingComponent_eventPredictedSingleMotionPosition_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics
	{
		struct JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms
		{
			bool Valid;
			bool HaveRoom;
			FVector ReturnLocation;
			ACharacter* WarpTargetActor;
			UAnimSequence* AnimSeqAtt;
			UAnimSequence* AnimSeqVic;
			FVector WarpingOrigin;
			FVector ConstantOffset;
			float NormalizedTime;
			bool ExcludeWarpActorRoot;
			bool UseUpAxis;
			FRotator ApplyCustomRotator;
			bool InvertAxis;
		};
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static void NewProp_HaveRoom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_HaveRoom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnLocation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpTargetActor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSeqAtt;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSeqVic;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarpingOrigin;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantOffset;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedTime;
		static void NewProp_ExcludeWarpActorRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeWarpActorRoot;
		static void NewProp_UseUpAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUpAxis;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ApplyCustomRotator;
		static void NewProp_InvertAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->HaveRoom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom = { "HaveRoom", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ReturnLocation = { "ReturnLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, ReturnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpTargetActor = { "WarpTargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, WarpTargetActor), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqAtt = { "AnimSeqAtt", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, AnimSeqAtt), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqVic = { "AnimSeqVic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, AnimSeqVic), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpingOrigin = { "WarpingOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, WarpingOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ConstantOffset = { "ConstantOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, ConstantOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_NormalizedTime = { "NormalizedTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, NormalizedTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->ExcludeWarpActorRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot = { "ExcludeWarpActorRoot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->UseUpAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis = { "UseUpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ApplyCustomRotator = { "ApplyCustomRotator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms, ApplyCustomRotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms*)Obj)->InvertAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis = { "InvertAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_Valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_HaveRoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ReturnLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpTargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqAtt,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_AnimSeqVic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_WarpingOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ConstantOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_NormalizedTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ExcludeWarpActorRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_UseUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_ApplyCustomRotator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::NewProp_InvertAxis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "Predicted Single Motion Position Auto" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "PredictedSingleMotionPositionAuto", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::JacobMotionWarpingComponent_eventPredictedSingleMotionPositionAuto_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C80401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Function Library - PUBLIC (CAN BE EXECUTED BY BLUEPRINT)\n//Reset MotionWarping Variables\n" },
		{ "DisplayName", "Reset Values" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "Function Library - PUBLIC (CAN BE EXECUTED BY BLUEPRINT)\nReset MotionWarping Variables" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "ResetValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics
	{
		struct JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms
		{
			FName WarpTargetName;
			AActor* TargetActor;
			FVector ConstantOffset;
			FRotator ConstRotOffset;
			bool ExcludeRootMotion;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpTargetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstantOffset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstRotOffset;
		static void NewProp_ExcludeRootMotion_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeRootMotion;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_WarpTargetName = { "WarpTargetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, WarpTargetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstantOffset = { "ConstantOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, ConstantOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstRotOffset = { "ConstRotOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms, ConstRotOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms*)Obj)->ExcludeRootMotion = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion = { "ExcludeRootMotion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_WarpTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstantOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ConstRotOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::NewProp_ExcludeRootMotion,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// PL: \n// Ustaw punkt relacji pomiedzy MotionWarping a TargetActor. Za ka\xef\xbf\xbd""dym razem kiedy b\xef\xbf\xbd""dzie u\xef\xbf\xbdywany MotionWarping, zostanie pobrana aktualna \n// pozycja TargetActor, aby skorygowa\xef\xbf\xbd ruch. Dodanie 'Const Offset' spowoduje przesuniecie pozycji Akora o ten wektor. Opcja 'Exclude \n// Root Motion' daje rezultat tylko wtedy gdy nasz Aktor odgrywa Animacj\xef\xbf\xbd z wyodr\xef\xbf\xbd""bnionym RootMotion, kt\xef\xbf\xbdry zosta\xef\xbf\xbd zapisany jako Anim Curve. \n// W\xef\xbf\xbd\xef\xbf\xbd""czenie tego spowoduj\xef\xbf\xbd usuni\xef\xbf\xbd""cie przesuniecia RootMotion z aktualniej pozycji Aktora.\n//\n// ENG:\n// Set a relationship point between MotionWarping and TargetActor. Each time MotionWarping is used, the current TargetActor position will \n// be retrieved to correct for motion. Adding 'Const Offset' will move the Actor's position by this vector. The 'Exclude Root Motion' option \n// only works when our Actor plays an Animation with the extracted RootMotion, which has been saved as Anim Curve. Enabling this will remove \n// the RootMotion shift from the current position of the Actor.\n" },
		{ "DisplayName", "Set Motion Warping Target" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "PL:\nUstaw punkt relacji pomiedzy MotionWarping a TargetActor. Za ka\xef\xbf\xbd""dym razem kiedy b\xef\xbf\xbd""dzie u\xef\xbf\xbdywany MotionWarping, zostanie pobrana aktualna\npozycja TargetActor, aby skorygowa\xef\xbf\xbd ruch. Dodanie 'Const Offset' spowoduje przesuniecie pozycji Akora o ten wektor. Opcja 'Exclude\nRoot Motion' daje rezultat tylko wtedy gdy nasz Aktor odgrywa Animacj\xef\xbf\xbd z wyodr\xef\xbf\xbd""bnionym RootMotion, kt\xef\xbf\xbdry zosta\xef\xbf\xbd zapisany jako Anim Curve.\nW\xef\xbf\xbd\xef\xbf\xbd""czenie tego spowoduj\xef\xbf\xbd usuni\xef\xbf\xbd""cie przesuniecia RootMotion z aktualniej pozycji Aktora.\n\nENG:\nSet a relationship point between MotionWarping and TargetActor. Each time MotionWarping is used, the current TargetActor position will\nbe retrieved to correct for motion. Adding 'Const Offset' will move the Actor's position by this vector. The 'Exclude Root Motion' option\nonly works when our Actor plays an Animation with the extracted RootMotion, which has been saved as Anim Curve. Enabling this will remove\nthe RootMotion shift from the current position of the Actor." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "SetMotionWarpingTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::JacobMotionWarpingComponent_eventSetMotionWarpingTarget_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics
	{
		struct JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms
		{
			bool StopUpdating;
		};
		static void NewProp_StopUpdating_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_StopUpdating;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms*)Obj)->StopUpdating = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating = { "StopUpdating", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::NewProp_StopUpdating,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_StopUpdating", "true" },
		{ "DisplayName", "Stop Updating Warp Point" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "StopUpdatingWarpPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::JacobMotionWarpingComponent_eventStopUpdatingWarpPoint_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics
	{
		struct JacobMotionWarpingComponent_eventTimelineBlendIn_Parms
		{
			float Duration;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventTimelineBlendIn_Parms, Duration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::NewProp_Duration,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::Function_MetaDataParams[] = {
		{ "CPP_Default_Duration", "0.200000" },
		{ "DisplayName", "Timeline Blend In" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "NoExport", "" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "TimelineBlendIn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::JacobMotionWarpingComponent_eventTimelineBlendIn_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics
	{
		struct JacobMotionWarpingComponent_eventWarpingUpdate_Parms
		{
			FName X;
			FName Y;
			FName Z;
			FName R;
			bool UseUpAxis;
			bool WithSweep;
			bool WarpRotation;
			float StrengthAlpha;
			FName ConstAlphaCurve;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_X;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Y;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Z;
		static const UECodeGen_Private::FNamePropertyParams NewProp_R;
		static void NewProp_UseUpAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_UseUpAxis;
		static void NewProp_WithSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WithSweep;
		static void NewProp_WarpRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_WarpRotation;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StrengthAlpha;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ConstAlphaCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, Z), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_R = { "R", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, R), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventWarpingUpdate_Parms*)Obj)->UseUpAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis = { "UseUpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventWarpingUpdate_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventWarpingUpdate_Parms*)Obj)->WithSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep = { "WithSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventWarpingUpdate_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation_SetBit(void* Obj)
	{
		((JacobMotionWarpingComponent_eventWarpingUpdate_Parms*)Obj)->WarpRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation = { "WarpRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(JacobMotionWarpingComponent_eventWarpingUpdate_Parms), &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_StrengthAlpha = { "StrengthAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, StrengthAlpha), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_ConstAlphaCurve = { "ConstAlphaCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(JacobMotionWarpingComponent_eventWarpingUpdate_Parms, ConstAlphaCurve), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_R,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_UseUpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WithSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_WarpRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_StrengthAlpha,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::NewProp_ConstAlphaCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Main Function - Executed By AnimNotify PerFrame\n" },
		{ "CPP_Default_ConstAlphaCurve", "ss" },
		{ "CPP_Default_R", "Root" },
		{ "CPP_Default_StrengthAlpha", "1.000000" },
		{ "CPP_Default_UseUpAxis", "false" },
		{ "CPP_Default_WarpRotation", "true" },
		{ "CPP_Default_WithSweep", "true" },
		{ "CPP_Default_X", "Root" },
		{ "CPP_Default_Y", "Root" },
		{ "CPP_Default_Z", "Root" },
		{ "DisplayName", "Warping Update" },
		{ "Keywords", "MotionWarping" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "Main Function - Executed By AnimNotify PerFrame" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UJacobMotionWarpingComponent, nullptr, "WarpingUpdate", nullptr, nullptr, sizeof(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::JacobMotionWarpingComponent_eventWarpingUpdate_Parms), Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UJacobMotionWarpingComponent);
	UClass* Z_Construct_UClass_UJacobMotionWarpingComponent_NoRegister()
	{
		return UJacobMotionWarpingComponent::StaticClass();
	}
	struct Z_Construct_UClass_UJacobMotionWarpingComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CharacterC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpingTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WarpingTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DevMode_MetaData[];
#endif
		static void NewProp_DevMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DevMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockWarpingActor_MetaData[];
#endif
		static void NewProp_LockWarpingActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockWarpingActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeRootMotionV_MetaData[];
#endif
		static void NewProp_ExcludeRootMotionV_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ExcludeRootMotionV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeltaOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeltaOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendingDuration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendingDuration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AlphaByTimeline_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaByTimeline;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConstOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConstOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExcludedRootValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExcludedRootValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavedWarpActorRot_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SavedWarpActorRot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurvesName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurvesName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurvesName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WarpKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarpKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WarpKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActorLocationLS_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetActorLocationLS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloorComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FloorComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_HelpfulFunctions,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_GetOriginPosition, "GetOriginPosition" }, // 2180856129
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_GetTargetAxis, "GetTargetAxis" }, // 2364510847
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPosition, "PredictedSingleMotionPosition" }, // 3154789292
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_PredictedSingleMotionPositionAuto, "PredictedSingleMotionPositionAuto" }, // 894908291
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_ResetValues, "ResetValues" }, // 1824828011
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_SetMotionWarpingTarget, "SetMotionWarpingTarget" }, // 372550246
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_StopUpdatingWarpPoint, "StopUpdatingWarpPoint" }, // 1473750875
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_TimelineBlendIn, "TimelineBlendIn" }, // 1520942728
		{ &Z_Construct_UFunction_UJacobMotionWarpingComponent_WarpingUpdate, "WarpingUpdate" }, // 184360302
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "JacobMotionWarpingComponent.h" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "Comment", "//Create Base Variables\n//References (Public)\n" },
		{ "DisplayName", "Character" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "Create Base Variables\nReferences (Public)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC = { "CharacterC", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, CharacterC), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "References" },
		{ "DisplayName", "WarpingTarget" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget = { "WarpingTarget", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, WarpingTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "Comment", "//Config Variables (Public)\n" },
		{ "DisplayName", "DevMode" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "Config Variables (Public)" },
	};
#endif
	void Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_SetBit(void* Obj)
	{
		((UJacobMotionWarpingComponent*)Obj)->DevMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode = { "DevMode", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJacobMotionWarpingComponent), &Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "LockWapringActor" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_SetBit(void* Obj)
	{
		((UJacobMotionWarpingComponent*)Obj)->LockWarpingActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor = { "LockWarpingActor", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJacobMotionWarpingComponent), &Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "ExcludeRootMotion" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	void Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_SetBit(void* Obj)
	{
		((UJacobMotionWarpingComponent*)Obj)->ExcludeRootMotionV = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV = { "ExcludeRootMotionV", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UJacobMotionWarpingComponent), &Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_SetBit, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "DeltaOffset" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset = { "DeltaOffset", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, DeltaOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Config" },
		{ "DisplayName", "TargetActorLocation" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation = { "TargetActorLocation", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, TargetActorLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration_MetaData[] = {
		{ "Comment", "//Variables (Not Visible Via Blueprint)\n" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "Variables (Not Visible Via Blueprint)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration = { "BlendingDuration", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, BlendingDuration), METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline = { "AlphaByTimeline", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, AlphaByTimeline), METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset_MetaData[] = {
		{ "Comment", "//VECTOR\n" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "VECTOR" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset = { "ConstOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, ConstOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue_MetaData[] = {
		{ "Comment", "//VECTOR\n" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
		{ "ToolTip", "VECTOR" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue = { "ExcludedRootValue", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, ExcludedRootValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot = { "SavedWarpActorRot", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, SavedWarpActorRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, RotationOffset), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_Inner = { "CurvesName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName = { "CurvesName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, CurvesName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_Inner = { "WarpKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys = { "WarpKeys", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, WarpKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS_MetaData[] = {
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS = { "TargetActorLocationLS", nullptr, (EPropertyFlags)0x0020088000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, TargetActorLocationLS), Z_Construct_UScriptStruct_FCALS_ComponentAndTransform, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS_MetaData)) }; // 3722672540
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/JacobMotionWarpingComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent = { "FloorComponent", nullptr, (EPropertyFlags)0x0020080000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UJacobMotionWarpingComponent, FloorComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CharacterC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpingTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DevMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_LockWarpingActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludeRootMotionV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_DeltaOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_BlendingDuration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_AlphaByTimeline,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ConstOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_ExcludedRootValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_SavedWarpActorRot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_RotationOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_CurvesName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_WarpKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_TargetActorLocationLS,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::NewProp_FloorComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UJacobMotionWarpingComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::ClassParams = {
		&UJacobMotionWarpingComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UJacobMotionWarpingComponent()
	{
		if (!Z_Registration_Info_UClass_UJacobMotionWarpingComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UJacobMotionWarpingComponent.OuterSingleton, Z_Construct_UClass_UJacobMotionWarpingComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UJacobMotionWarpingComponent.OuterSingleton;
	}
	template<> HELPFULFUNCTIONS_API UClass* StaticClass<UJacobMotionWarpingComponent>()
	{
		return UJacobMotionWarpingComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UJacobMotionWarpingComponent);
	UJacobMotionWarpingComponent::~UJacobMotionWarpingComponent() {}
	struct Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UJacobMotionWarpingComponent, UJacobMotionWarpingComponent::StaticClass, TEXT("UJacobMotionWarpingComponent"), &Z_Registration_Info_UClass_UJacobMotionWarpingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UJacobMotionWarpingComponent), 363009826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_1487314774(TEXT("/Script/HelpfulFunctions"),
		Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE___Projects_UE5_2_IWALS__Version_3_0__UE5_2_Plugins_HelpfulFunctions_Source_HelpfulFunctions_Public_JacobMotionWarpingComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
