// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaGatherModMagnituteCalculation.h"
#include "Abilities/GameplayAbilityBase.h"
#include "LumaAttributeSet.h"

ULumaGatherModMagnituteCalculation::ULumaGatherModMagnituteCalculation()
{
	
}

float ULumaGatherModMagnituteCalculation::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const auto Ability = Cast<UGameplayAbilityBase>(Spec.GetContext().GetAbilityInstance_NotReplicated());

	if(!Ability)
	{
		return 0.0f;
	}
	
	//return Ability->GetAbilityCost().GetValueAtLevel(Ability->GetAbilityLevel());
	return 0.f;
}
