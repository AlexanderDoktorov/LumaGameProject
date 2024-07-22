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
		
		if(TargetASC->GiveAbility(FGameplayAbilitySpec(DefaultAbility, DefaultAbility->GetAbilityLevel(), -1, SourceObject)).IsValid())
			++Count;
	}
	return Count;
}
