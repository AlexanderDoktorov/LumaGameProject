// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "SpawnLumaCapsuleAbility.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API USpawnLumaCapsuleAbility : public UGameplayAbilityBase
{
	GENERATED_BODY()
public:
	USpawnLumaCapsuleAbility();
protected:
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
};
