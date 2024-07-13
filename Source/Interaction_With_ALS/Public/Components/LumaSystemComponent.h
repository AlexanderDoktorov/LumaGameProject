// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "Components/ActorComponent.h"
#include "LumaSystemComponent.generated.h"


struct FCastableAbilityDesc;
class UEmotionSourceComponent;
class USphereComponent;
class ULumaCastAbility;
class UEmotionsAttributeSet;
class UAbilitySystemComponent;
class UGameplayEffect;
enum class EEmotion : uint8;

/**
 * @author Doktorov Alexander
 */
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTION_WITH_ALS_API ULumaSystemComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	ULumaSystemComponent();
	virtual void BeginPlay() override;

	FORCEINLINE void SetMaxCasts(const int32& NewMaxCasts) { MaxCasts = NewMaxCasts; }
	
	UFUNCTION(BlueprintCallable)
	TArray<FCastableAbilityDesc> GetMostPrioritizedCasts() const;

	UFUNCTION(BlueprintCallable)
	virtual void HandleEmotionalSourcePresense(AActor* EmoitonSourceActor);

	UFUNCTION(BlueprintCallable)
	virtual void HandleEmotionalSourceAbsence(AActor* EmoitonSourceActor);
	
	void ApplyEmotionAffectToOwner(const AActor* EmoitonSourceActor, const bool& bInverse);
protected:
	// Emotional Sources that are affecting owner right now
	TArray<UEmotionSourceComponent*> AffectingEmotionalSources{};
	
	// Ability System Component From Owner
	UPROPERTY()
	TWeakObjectPtr<UAbilitySystemComponent> OwnerAsc = nullptr;

	// Emotion Attribute Set
	UPROPERTY()
	UEmotionsAttributeSet* EmotionAttributes = nullptr;

	// Gameplay effect initilizing default emotion attributes
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = LumaSystemComponent)
	TSubclassOf<UGameplayEffect> GE_InitilizeAttributes = nullptr;

	// Max amount of luma casts that owner can select from 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = LumaSystemComponent)
	int32 MaxCasts = 3;

	// Abilities that are available to a character
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = LumaSystemComponent)
	TSubclassOf<ULumaCastAbility> LumaCastAbility;
	FGameplayAbilitySpecHandle LumaCastSpecHandle{};
	
	// Data table for ability casts
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LumaSystemComponent, Meta=(RequiredAssetDataTags="/Script/Interaction_With_ALS.CastableAbilityDesc"))
	class UDataTable* AbilityDescDataTable = nullptr;

	// Corresponding array that initilized by data table that will be modified at runtime (probably)
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = LumaSystemComponent)
	TArray<FCastableAbilityDesc> CastableAbilityDescs{};
	
private:
	static double GetDistance(const TMap<EEmotion, float>& Map1, const TMap<EEmotion, float>& Map2);
	void InitilizeCastableAbilityDescs();
};
