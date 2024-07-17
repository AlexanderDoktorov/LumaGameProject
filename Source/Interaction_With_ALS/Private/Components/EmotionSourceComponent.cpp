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

			// Apply effects to actors that initially overlap this component
			TArray<AActor*> OverlappingActors{};
			TriggerPrimitive->GetOverlappingActors(OverlappingActors);
			for(auto& OverlappingActor : OverlappingActors)
			{
				if(auto LumaSystemComponent = Cast<ULumaSystemComponent>(OverlappingActor->GetComponentByClass(ULumaSystemComponent::StaticClass())))
					LumaSystemComponent->HandleEmotionalSourcePresense(this);
			}
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

void UEmotionSourceComponent::FillEmotionalAffects(FGameplayEffectSpec& EffectSpec) const
{
	EffectSpec.SetSetByCallerMagnitude(LumaGameplayTags::TAG_Data_Aggressiveness,		EmotionalAffects.FindRef(EEmotion::Aggressiveness));
	EffectSpec.SetSetByCallerMagnitude(LumaGameplayTags::TAG_Data_Curiosity,			EmotionalAffects.FindRef(EEmotion::Curiosity));
	EffectSpec.SetSetByCallerMagnitude(LumaGameplayTags::TAG_Data_Reticence,			EmotionalAffects.FindRef(EEmotion::Reticence));
	EffectSpec.SetSetByCallerMagnitude(LumaGameplayTags::TAG_Data_SelfPreservation,	EmotionalAffects.FindRef(EEmotion::SelfPreservation));
}

void UEmotionSourceComponent::AddActiveGameplayEffectHandle(
	const FActiveGameplayEffectHandle& ActiveGameplayEffectHandle)
{
	ActiveGameplayEffectHandles.Add(ActiveGameplayEffectHandle);
}

bool UEmotionSourceComponent::RemoveEffectHandlesFrom(UAbilitySystemComponent* TargetASC)
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