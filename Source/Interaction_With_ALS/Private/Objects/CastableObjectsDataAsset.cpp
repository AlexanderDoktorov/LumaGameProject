#include "Objects/CastableObjectsDataAsset.h"
#include "Abilities/LumaCastAbility.h"
#include "AbilitySystemComponent.h"

int32 ULumaAbilitiesDataAsset::GiveAbilitiesTo(UAbilitySystemComponent* TargetASC, UObject* SourceObject)
{
	FGameplayAbilitySpec Spec{};
	int32 Count = 0;
	for(auto& LumaAbility : LumaContextAbilities)
	{
		auto DefaultAbility = Cast<UGameplayAbility>(LumaAbility.GetDefaultObject());
		Spec.Ability = DefaultAbility;
		Spec.Level = DefaultAbility->GetAbilityLevel();
		Spec.SourceObject = SourceObject;
		Spec.InputID = -1;

		if(TargetASC->GiveAbility(Spec).IsValid())
			++Count;
	}
	return Count;
}
