// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayEffect.h"
#include "Components/ActorComponent.h"
#include "EmotionSourceComponent.generated.h"

enum class EEmotion : uint8;

USTRUCT(BlueprintType, Blueprintable)
struct FEmotionalEffectModifierInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	FGameplayModifierInfo DirectEffectModifier{};

	UPROPERTY(EditAnywhere)
	FGameplayModifierInfo InverseEffectModifier{};
};

// Used by luma system component to react to the emotion source by changing it's emotion values
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTION_WITH_ALS_API UEmotionSourceComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UEmotionSourceComponent();

	UFUNCTION(BlueprintCallable)
	bool ApplyEmotionalAffect(const AActor* EmotionReciever,bool bInverse = false) const;
protected:
	UGameplayEffect* CreateNewEmotionalEffect(const bool& bInverse) const;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = EmotionSourceComponent)
	TMap<EEmotion, FEmotionalEffectModifierInfo> EmotionalAffects;
};
