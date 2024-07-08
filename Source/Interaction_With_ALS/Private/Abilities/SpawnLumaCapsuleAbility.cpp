// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/SpawnLumaCapsuleAbility.h"

#include "LumaAttributeSet.h"
#include "LumaCapsule.h"
#include "LumaCharacterBase.h"
#include "LumaGameplayTags.h"
#include "Abilities/CapsuleChargeEventData.h"

USpawnLumaCapsuleAbility::USpawnLumaCapsuleAbility()
{
	// Add cost = 1 capsule
	FGameplayModifierInfo ModifierInfo{};
	
	ModifierInfo.Attribute = ULumaAttributeSet::GetLumaAttribute();
	ModifierInfo.ModifierMagnitude = { -1.f };
	ModifierInfo.ModifierOp = EGameplayModOp::Additive;
	
	AddAttributeCost(ModifierInfo);

	AbilityTags.AddTag(TAG_Action_ChargeCapsule);
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void USpawnLumaCapsuleAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                const FGameplayEventData* TriggerEventData)
{
	if(!CommitCheck(Handle, ActorInfo, ActivationInfo))
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);

	auto LumaCharacter = Cast<ALumaCharacterBase>(ActorInfo->AvatarActor.Get());
	if(!LumaCharacter)
		EndAbility(Handle, ActorInfo, ActivationInfo, false, true);

	int32 NumCapsules = FMath::RoundToInt(ActorInfo->AbilitySystemComponent->GetNumericAttribute(ULumaAttributeSet::GetLumaAttribute()));
	
	if(NumCapsules > 0)
	{
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
	}
	
	CommitAbility(Handle, ActorInfo, ActivationInfo);
	EndAbility(Handle, ActorInfo, ActivationInfo, false, false);
}
