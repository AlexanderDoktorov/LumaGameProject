// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/SpawnLumaCapsuleAbility.h"

#include "LumaAttributeSet.h"
#include "LumaCapsule.h"
#include "LumaCharacterBase.h"
#include "LumaGameplayTags.h"
#include "MMC's/SpawnLumaCapsuleMMC.h"

USpawnLumaCapsuleAbility::USpawnLumaCapsuleAbility()
{
	// Add cost = 1 capsule
	FGameplayModifierInfo ModifierInfo{};
	
	ModifierInfo.Attribute = ULumaAttributeSet::GetLumaAttribute();
	
	FCustomCalculationBasedFloat MMCSpawnLumaCapsule{};
	MMCSpawnLumaCapsule.Coefficient = -1.f;
	MMCSpawnLumaCapsule.CalculationClassMagnitude = USpawnLumaCapsuleMMC::StaticClass();
	
	ModifierInfo.ModifierMagnitude = MMCSpawnLumaCapsule;
	ModifierInfo.ModifierOp = EGameplayModOp::Additive;
	
	AddAttributeCost(ModifierInfo);

	AbilityTags.AddTag(TAG_Action_SpawnCapsule);
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void USpawnLumaCapsuleAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                const FGameplayEventData* TriggerEventData)
{
	auto LumaCharacter = Cast<ALumaCharacterBase>(ActorInfo->AvatarActor.Get());
	if(!LumaCharacter)
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);
		return;
	}
	
	// If character has active charged luma capsule it should change it's properties, but not spawn
	// Also cost doesn't need to be applied in that case
	if(auto ActiveLumaCapsule = LumaCharacter->GetActiveLumaCapsule())
	{
		ActiveLumaCapsule->SetHidden(false);
		EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
		return;
	}

	// Otherwise spawn capsule as normal using luma attribute
	if(!CommitCheck(Handle, ActorInfo, ActivationInfo))
	{
		// not enought luma
		EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
		return;
	}

	if(auto World = GetWorld())
	{
		FActorSpawnParameters SpawnParameters{};
		SpawnParameters.Instigator = LumaCharacter;
		SpawnParameters.Owner = LumaCharacter;

		// Spawn Capsule
		auto SpawnLocation = LumaCharacter->GetActorLocation();
		auto SpawnRotation = LumaCharacter->GetActorRotation();
		auto SpawnedCapsule = Cast<ALumaCapsule>(World->SpawnActor(LumaCharacter->GetLumaCapsuleToSpawnClass(), &SpawnLocation, &SpawnRotation, SpawnParameters));

		// Set Active Capsule to newly created
		LumaCharacter->SetActiveLumaCapsule(SpawnedCapsule);
	}
	else
	{
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);
		return;
	}
	
	CommitAbility(Handle, ActorInfo, ActivationInfo);
	EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}
