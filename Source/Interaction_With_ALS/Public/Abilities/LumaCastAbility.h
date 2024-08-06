// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilityBase.h"
#include "LumaTypes.h"
#include "LumaCastAbility.generated.h"

class UContextCastWidget;
enum class EEmotion : uint8;

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaContextCastAbility : public UGameplayAbilityBase
{
	GENERATED_BODY()
public:
	ULumaContextCastAbility();

	// Handy function to get primary emotion if it is not set in this struct
	// Determined by max emotion requirement
	FORCEINLINE EEmotion GetPrimaryEmotion() const;
	FORCEINLINE const ULumaContextCastAbility* GetMorePrioritizedAbilityForActor(
		const ULumaContextCastAbility* OtherAbility, const FEmotionDescContainer& ActorEmotions) const;
	FORCEINLINE static const ULumaContextCastAbility* GetMorePrioritizedAbilityForActor(
		const ULumaContextCastAbility* LumaCastAbility0, const ULumaContextCastAbility* LumaCastAbility1, const FEmotionDescContainer& ActorEmotions);
	FORCEINLINE TSoftObjectPtr<UTexture2D> GetAbilityPreview() const { return AbilityPreview; }
	FORCEINLINE FEmotionDescContainer GetEmotionRequirements() const { return EmotionRequirements; }

	UFUNCTION(BlueprintCallable, BlueprintPure)
	FORCEINLINE TSubclassOf<UContextCastWidget> GetContextWidgetClass() const { return ContextWidgetClass; }
protected:
	// Widget that will display this ability
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LumaCastAbility)
	TSubclassOf<UContextCastWidget> ContextWidgetClass;
	
	// Preview for cast widget
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LumaCastAbility)
	TSoftObjectPtr<UTexture2D> AbilityPreview;

	// Object Lifitime
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LumaCastAbility)
	float ObjectLifitme = 0.f;
	
	// Cast time
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = LumaCastAbility)
    float CastTime = 0.f;

	// Emotion Requirements for this ability
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableAbilityDesc)
	FEmotionDescContainer EmotionRequirements{};
	
	// Primary Emotion Type
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableAbilityDesc)
	EEmotion PrimaryEmotion = EEmotion::None;
};

// INLINES \\

EEmotion ULumaContextCastAbility::GetPrimaryEmotion() const
{
	if(PrimaryEmotion != EEmotion::None || EmotionRequirements.IsEmpty())
		return PrimaryEmotion;

	EEmotion MostValuableEmotion = EEmotion::None;
	float MaxValue = 0.f;
		
	for (const auto& EmotionDesc : EmotionRequirements.EmotionDescs)
	{
		if(EmotionDesc.Value > MaxValue)
		{
			MaxValue = EmotionDesc.Value;
			MostValuableEmotion = EmotionDesc.EmotionType;
		}
	}
		
	return MostValuableEmotion;
}

const ULumaContextCastAbility* ULumaContextCastAbility::GetMorePrioritizedAbilityForActor(
	const ULumaContextCastAbility* OtherAbility, const FEmotionDescContainer& ActorEmotions) const
{
	return GetMorePrioritizedAbilityForActor(this, OtherAbility, ActorEmotions);
}

const ULumaContextCastAbility* ULumaContextCastAbility::GetMorePrioritizedAbilityForActor(
	const ULumaContextCastAbility* LumaCastAbility0, const ULumaContextCastAbility* LumaCastAbility1, const FEmotionDescContainer& ActorEmotions)
{
	if(!LumaCastAbility0 || !LumaCastAbility1)
		return nullptr;
	float Distance0 = LumaCastAbility0->EmotionRequirements.GetDistanceTo(ActorEmotions);
	float Distance1 = LumaCastAbility1->EmotionRequirements.GetDistanceTo(ActorEmotions);
	return Distance0 < Distance1 ? LumaCastAbility0 : LumaCastAbility1;
}