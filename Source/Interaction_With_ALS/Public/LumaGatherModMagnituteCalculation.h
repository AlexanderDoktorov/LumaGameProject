// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayModMagnitudeCalculation.h"
#include "LumaGatherModMagnituteCalculation.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaGatherModMagnituteCalculation : public UGameplayModMagnitudeCalculation
{
	GENERATED_BODY()
public:
	ULumaGatherModMagnituteCalculation();
	virtual float CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const override;
};
