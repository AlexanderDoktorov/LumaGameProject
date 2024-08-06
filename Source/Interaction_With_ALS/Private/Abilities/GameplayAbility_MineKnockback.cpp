// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/GameplayAbility_MineKnockback.h"

#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"

UGameplayAbility_MineKnockback::UGameplayAbility_MineKnockback()
{
	
}

void UGameplayAbility_MineKnockback::CallApplyKnockbackByDistance(const float& NormalizedDistance,
	ACharacter* Character, AProximityMine* ProximityMine, bool bExectuteOnce)
{
	for(const auto& Range : ExplosionRanges)
	{
		if(UKismetMathLibrary::InRange_FloatFloat(NormalizedDistance, Range.LowerLimitNormalized, Range.UpperLimitNormalized))
		{
			Range.ApplyKnockbackDelegate.ExecuteIfBound(Character, ProximityMine);
#ifdef UE_BUILD_DEBUG
			UE_LOG(LogTemp, Log, TEXT("Knockback is applied to [%s] within [%f] normalized range."),
				Character ? *Character->GetName() : *FString("UNKNOWN"),
				NormalizedDistance);
#endif
			if(bExectuteOnce)
				return;
		}
	}
}

void UGameplayAbility_MineKnockback::OnGiveAbility(const FGameplayAbilityActorInfo* ActorInfo,
                                                   const FGameplayAbilitySpec& Spec)
{
	Super::OnGiveAbility(ActorInfo, Spec);

	InitializeExplosionRanges();
}

void UGameplayAbility_MineKnockback::ActivateAbility(const FGameplayAbilitySpecHandle Handle,
                                                     const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo,
                                                     const FGameplayEventData* TriggerEventData)
{
#if !UE_BUILD_SHIPPING
	ensure(ValidateRanges() == true);
#endif
	Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);
}

bool UGameplayAbility_MineKnockback::ValidateRanges() const
{
	if(ExplosionRanges.IsEmpty())
		return true;

	if(!ExplosionRanges.Top().ValidateRange())
		return false;
	
	FExplosionRange LowerRange = ExplosionRanges[0];

	// Check from first
	for(int32 i = 1; i < ExplosionRanges.Num(); ++i)
	{
		auto& UpperRange = ExplosionRanges[i];
		if(!LowerRange.ValidateAsLowerRange(UpperRange))
			return false;
		LowerRange = UpperRange;
	}

	return true;
}
