// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayAbilityBase.generated.h"

class UInputAction;

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API UGameplayAbilityBase : public UGameplayAbility
{
	friend class ULumaAbilitySystemComponent;
	GENERATED_BODY()
public:
	UGameplayAbilityBase(const FObjectInitializer& ObjectInitilizer = FObjectInitializer::Get());
	virtual UGameplayEffect* GetCostGameplayEffect() const override;
	FGameplayEffectSpec GetCostEffectSpec() const;
	virtual void ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo) const override;
	void AddAttributeCost(const FGameplayModifierInfo& ModifierInfo);
	FGameplayModifierInfo GetModInfoByAttribute(const FGameplayAttribute& Attribute) const;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Cost)
	TArray<FGameplayModifierInfo> ModifierInfos{};

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	UInputAction* IA_ActivateAbility = nullptr;
};
