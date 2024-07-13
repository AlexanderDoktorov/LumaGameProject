// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "LumaTypes.h"
#include "LumaCastAbility.generated.h"

enum class EEmotion : uint8;

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaCastAbility : public UGameplayAbilityBase
{
	GENERATED_BODY()
public:
	ULumaCastAbility() = default;
	FORCEINLINE const FEmotionDescContainer& GetEmotionalRequirements() const { return CastableAbilityDesc.EmotionRequirements; }
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FCastableAbilityDesc CastableAbilityDesc{};
};
