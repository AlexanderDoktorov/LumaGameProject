// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/GameplayAbilityBase.h"
#include "LumaAttributeSet.h"
#include "LumaGatherModMagnituteCalculation.h"

UGameplayAbilityBase::UGameplayAbilityBase(const FObjectInitializer& ObjectInitilizer)
{
}

UGameplayEffect* UGameplayAbilityBase::GetCostGameplayEffect() const
{
	auto GE_CostEffect = NewObject<UGameplayEffect>(GetTransientPackage(), "Cost Gameplay Effect");
	GE_CostEffect->DurationPolicy = EGameplayEffectDurationType::Instant;

	// Modifiers from ModifierInfos Array;
	GE_CostEffect->Modifiers = ModifierInfos;
    
	return GE_CostEffect;
}

void UGameplayAbilityBase::ApplyCost(const FGameplayAbilitySpecHandle Handle,
	const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const
{
	Super::ApplyCost(Handle, ActorInfo, ActivationInfo);

	ActorInfo->AbilitySystemComponent->ApplyGameplayEffectToSelf(GetCostGameplayEffect(), 1.0f, ActorInfo->AbilitySystemComponent->MakeEffectContext());
}

void UGameplayAbilityBase::AddAttributeCost(const FGameplayModifierInfo& ModifierInfo)
{
	ModifierInfos.Emplace(ModifierInfo);
}

FGameplayModifierInfo UGameplayAbilityBase::GetModInfoByAttribute(const FGameplayAttribute& Attribute) const
{
	if(auto ModifierInfo = ModifierInfos.FindByPredicate([&Attribute](const FGameplayModifierInfo& ModifierInfo)
	{
		return ModifierInfo.Attribute == Attribute;
	}))
	{
		return *ModifierInfo;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to SetCostByAttribute  for [%s] attribute"), *Attribute.AttributeName);
	}
	return FGameplayModifierInfo{};
}
