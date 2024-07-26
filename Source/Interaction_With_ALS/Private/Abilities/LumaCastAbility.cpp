// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/LumaCastAbility.h"
#include "LumaGameplayTags.h"

ULumaContextCastAbility::ULumaContextCastAbility()
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;

	AbilityTags.AddTag(LumaGameplayTags::TAG_Ability_ContextCast);

	/*
	FAbilityTriggerData TriggerData{};
	TriggerData.TriggerSource = EGameplayAbilityTriggerSource::GameplayEvent;
	TriggerData.TriggerTag = LumaGameplayTags::TAG_Event_LumaCast;
	AbilityTriggers.Emplace(TriggerData);
	*/
}
