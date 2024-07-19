// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "IWALS_BaseAttributeSet.h"
#include "LumaTypes.h"
#include "EmotionsAttributeSet.generated.h"

enum class EEmotion : uint8;

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API UEmotionsAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
public:
	UEmotionsAttributeSet();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	static FGameplayAttribute GetAttributeByEmotion(const EEmotion& Emotion);
	static EEmotion GetEmotionByAttribute(const FGameplayAttribute& GameplayAttribute);
	static FGameplayTag GetDataTagByEmotion(const EEmotion& Emotion);

	// Агрессивность
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Aggressiveness)
	FGameplayAttributeData Aggressiveness;
	ATTRIBUTE_ACCESSORS(ThisClass, Aggressiveness);

	// Скрытность
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Reticence)
	FGameplayAttributeData Reticence;
	ATTRIBUTE_ACCESSORS(ThisClass, Reticence);

	// Самосохранение
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_SelfPreservation)
	FGameplayAttributeData SelfPreservation;
	ATTRIBUTE_ACCESSORS(ThisClass, SelfPreservation);

	// Любопытство
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Curiosity)
	FGameplayAttributeData Curiosity;
	ATTRIBUTE_ACCESSORS(ThisClass, Curiosity);

	UFUNCTION()
	virtual void OnRep_Aggressiveness(const FGameplayAttributeData& OldLuma);
	
	UFUNCTION()
	virtual void OnRep_Reticence(const FGameplayAttributeData& OldMaxLuma);

	UFUNCTION()
	virtual void OnRep_SelfPreservation(const FGameplayAttributeData& OldMaxLuma);

	UFUNCTION()
	virtual void OnRep_Curiosity(const FGameplayAttributeData& OldCuriosity);
protected:
	static TMap<EEmotion, FGameplayAttribute> Map;
};
