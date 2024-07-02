// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaGatherModMagnituteCalculation.h"

#include "LumaAttributeSet.h"

ULumaGatherModMagnituteCalculation::ULumaGatherModMagnituteCalculation()
{
	FGameplayEffectAttributeCaptureDefinition CaptureDefinition{};
	CaptureDefinition.AttributeToCapture = ULumaAttributeSet::GetLumaAttribute();
	CaptureDefinition.AttributeSource = EGameplayEffectAttributeCaptureSource::Target; // Character
	CaptureDefinition.bSnapshot = false;
	
	RelevantAttributesToCapture.Add(CaptureDefinition);
}

float ULumaGatherModMagnituteCalculation::CalculateBaseMagnitude_Implementation(const FGameplayEffectSpec& Spec) const
{
	// with that function we can get the magnitute of parameter (tag) that was set by caller
	// Spec.GetSetByCallerMagnitude(FGameplayTag)

	// with that we can get the actor who caused effect to be applied
	// Spec.GetContext().GetInstigator()

	return Super::CalculateBaseMagnitude_Implementation(Spec);
}
