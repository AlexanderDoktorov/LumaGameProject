// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "GameplayAbility_MineKnockback.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FApplyKnockbackDelegate, ACharacter*, TargetCharacter, AProximityMine*, ProximityMine);

USTRUCT(BlueprintType)
struct FExplosionRange
{
	GENERATED_BODY()

	FExplosionRange() = default;
	FExplosionRange(const float& LowerLimitNormalized, const float& UpperLimitNormalized) :
	LowerLimitNormalized(LowerLimitNormalized), UpperLimitNormalized(UpperLimitNormalized) {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f, ClampMax = 1.f))
	float LowerLimitNormalized = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ClampMin = 0.f, ClampMax = 1.f))
	float UpperLimitNormalized = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FApplyKnockbackDelegate ApplyKnockbackDelegate;
	//TDelegate<void(ACharacter* /* TargetCharacter */, AProximityMine* /*Proximity mine */)> KnockbackDelegate;
	
#if !UE_BUILD_SHIPPING
	FORCEINLINE bool ValidateRange() const {
		return
		(LowerLimitNormalized < UpperLimitNormalized)
		&& UpperLimitNormalized <= 1.f && UpperLimitNormalized > 0.f
		&& LowerLimitNormalized >= 0.f && LowerLimitNormalized < 1.f;
	}
	FORCEINLINE bool ValidateAsLowerRange(const FExplosionRange& UpperRange) const {
		return FMath::IsNearlyEqual(UpperLimitNormalized,UpperRange.LowerLimitNormalized, 0.01) && UpperRange.ValidateRange() && this->ValidateRange();
	}
#endif
};

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API UGameplayAbility_MineKnockback : public UGameplayAbilityBase
{
	GENERATED_BODY()
public:
	UGameplayAbility_MineKnockback();
protected:
	UFUNCTION(BlueprintImplementableEvent)
	void InitializeExplosionRanges();

	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm="NormalizedDistance"))
	void CallApplyKnockbackByDistance(const float& NormalizedDistance,
		ACharacter* Character, AProximityMine* ProximityMine, bool bExectuteOnce = true);
	
	virtual void OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilitySpec& Spec) override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FExplosionRange> ExplosionRanges{};
private:
#if !UE_BUILD_SHIPPING
	bool ValidateRanges() const;
#endif
};
