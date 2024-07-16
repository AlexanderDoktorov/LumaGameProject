// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "Components/EmotionSourceComponent.h"
#include "LumaGameplayTags.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "Components/LumaSystemComponent.h"
#include "Interfaces/EmotionSourceInterface.h"

UEmotionSourceComponent::UEmotionSourceComponent()
{
}

void UEmotionSourceComponent::BeginPlay()
{
	Super::BeginPlay();

	if(GetOwner() && GetOwner()->Implements<UEmotionSourceInterface>())
	{
		if(auto TriggerPrimitive = IEmotionSourceInterface::Execute_GetEmotionTriggerPrimitive(GetOwner()))
		{
			TriggerPrimitive->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnTriggerBeginOverlap);
			TriggerPrimitive->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnTriggerEndOverlap);
			// Overlap only pawn
			TriggerPrimitive->SetCollisionResponseToAllChannels(ECR_Ignore);
			TriggerPrimitive->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
		}
	}
}

void UEmotionSourceComponent::SetEmotionalAffectMagnitude(const FEmotionDesc& EmotionDesc)
{
	if(EmotionDesc.EmotionType != EEmotion::None)
	{
		EmotionalAffects.FindRef(EmotionDesc.EmotionType);
		EmotionalAffects[EmotionDesc.EmotionType] = EmotionDesc.Value;
	}
}

void UEmotionSourceComponent::RemoveAllAffectsAndStopEmmiting()
{
	// Remove all affects currently happening
	for(auto& ActiveHandle : ActiveGameplayEffectHandles)
	{
		check(ActiveHandle.GetOwningAbilitySystemComponent());
		ActiveHandle.GetOwningAbilitySystemComponent()->RemoveActiveGameplayEffect(ActiveHandle);
	}
	ActiveGameplayEffectHandles.Empty();

	// Stop emmiting
	bIsEmmiting = false;
}

bool UEmotionSourceComponent::RemoveAllAffectsFrom(UAbilitySystemComponent* TargetASC)
{
	if(!TargetASC)
		return false;

	for(int32 i = 0; i < ActiveGameplayEffectHandles.Num(); ++i)
	{
		if(TargetASC->RemoveActiveGameplayEffect(ActiveGameplayEffectHandles[i]))
		{
			ActiveGameplayEffectHandles.RemoveAt(i, EAllowShrinking::No);
		}
	}
	ActiveGameplayEffectHandles.Shrink();
	return true;
}

FActiveGameplayEffectHandle UEmotionSourceComponent::ApplyEmotionalAffect(UAbilitySystemComponent* TargetASC)
{
	// Cannot apply effects if it's not emmiting any emotions
 	if (!TargetASC || !GE_ApplyEmotionalAffect || !bIsEmmiting)
		return FActiveGameplayEffectHandle{};
	
	FGameplayEffectContextHandle EffectContext = TargetASC->MakeEffectContext();
	EffectContext.AddSourceObject(this);

	FGameplayEffectSpecHandle SpecHandle = TargetASC->MakeOutgoingSpec(GE_ApplyEmotionalAffect, 1, EffectContext);
	SpecHandle.Data->SetSetByCallerMagnitude(TAG_Data_Aggressiveness,		EmotionalAffects.FindRef(EEmotion::Aggressiveness));
	SpecHandle.Data->SetSetByCallerMagnitude(TAG_Data_Curiosity,			EmotionalAffects.FindRef(EEmotion::Curiosity));
	SpecHandle.Data->SetSetByCallerMagnitude(TAG_Data_Reticence,			EmotionalAffects.FindRef(EEmotion::Reticence));
	SpecHandle.Data->SetSetByCallerMagnitude(TAG_Data_SelfPreservation,	EmotionalAffects.FindRef(EEmotion::SelfPreservation));

	// Apply emotional effect and return active handle
	FActiveGameplayEffectHandle ActiveHandle = TargetASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
	if(ActiveHandle.WasSuccessfullyApplied())
		ActiveGameplayEffectHandles.Add(ActiveHandle);

	return ActiveHandle;
}

void UEmotionSourceComponent::OnTriggerEndOverlap_Implementation(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(!bIsEmmiting)
		return;
	
	if(OtherActor)
	{
		if(auto LumaSystemComponent = Cast<ULumaSystemComponent>(OtherActor->GetComponentByClass(ULumaSystemComponent::StaticClass())))
		{
			LumaSystemComponent->HandleEmotionalSourceAbsence(this);
		}
	}
}

void UEmotionSourceComponent::OnTriggerBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent,
                                                                   AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                                                   const FHitResult& SweepResult)
{
	if(!bIsEmmiting)
		return;
	
	if(OtherActor)
	{
		if(auto LumaSystemComponent = Cast<ULumaSystemComponent>(OtherActor->GetComponentByClass(ULumaSystemComponent::StaticClass())))
		{
			LumaSystemComponent->HandleEmotionalSourcePresense(this);
		}
	}
}