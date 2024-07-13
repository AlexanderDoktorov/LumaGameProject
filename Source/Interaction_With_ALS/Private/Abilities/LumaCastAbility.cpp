// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/LumaCastAbility.h"

/*
TMap<EEmotion, float> ULumaCastAbility::GetEmotionsCostMap() const
{
	TMap<EEmotion, float> CostMap{};

	// Find Attributes that has cost and respecitve emotion type
	TArray<FGameplayAttribute> CostEmotionAttributes{};
	for (auto& ModifiedAttribute : GetCostEffectSpec().ModifiedAttributes)
	{
		if(EEmotion EmotionType = UEmotionsAttributeSet::GetEmotionByAttribute(ModifiedAttribute.Attribute); EmotionType != EEmotion::None)
			CostMap.Emplace(EmotionType, ModifiedAttribute.TotalMagnitude);
	}

	return CostMap;
}
*/