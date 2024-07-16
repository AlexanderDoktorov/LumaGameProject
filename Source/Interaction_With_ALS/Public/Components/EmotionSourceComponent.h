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
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTION_WITH_ALS_API UEmotionSourceComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UEmotionSourceComponent();
	virtual void BeginPlay() override;

	bool RemoveAllAffectsFrom(UAbilitySystemComponent* TargetASC);

	UFUNCTION(BlueprintCallable)
	FActiveGameplayEffectHandle ApplyEmotionalAffect(UAbilitySystemComponent* TargetASC);
protected:

	UFUNCTION(BlueprintNativeEvent)
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION(BlueprintNativeEvent)
	void OnTriggerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = EmotionSourceComponent)
	TMap<EEmotion, float> EmotionalAffects;

	UPROPERTY(EditDefaultsOnly, Category = EmotionSourceComponent)
	TSubclassOf<UGameplayEffect> GE_ApplyEmotionalAffect;

	TArray<FActiveGameplayEffectHandle> ActiveGameplayEffectHandles{};
};