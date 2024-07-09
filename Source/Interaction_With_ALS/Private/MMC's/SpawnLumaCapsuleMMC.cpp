// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "MMC's/SpawnLumaCapsuleMMC.h"

#include "LumaCapsule.h"
#include "LumaCharacterBase.h"
#include "Abilities/GameplayAbility.h"

USpawnLumaCapsuleMMC::USpawnLumaCapsuleMMC()
{
}

float USpawnLumaCapsuleMMC::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	const auto Ability = Cast<UGameplayAbility>(Spec.GetContext().GetAbilityInstance_NotReplicated());

	if(!Ability)
		return 1.f;

	// If character already has a capsule, cost for him becomes 0, otherwise return 1 capsule cost
	if(auto LumaCharacter = Cast<ALumaCharacterBase>(Ability->GetActorInfo().AvatarActor))
	{
		if(LumaCharacter->GetActiveLumaCapsule())
		{
			return 0.f;
		}
	}

	return 1.f;
}
