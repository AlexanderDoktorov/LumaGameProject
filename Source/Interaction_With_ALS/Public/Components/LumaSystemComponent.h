// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "LumaTypes.h"
#include "Components/ActorComponent.h"
#include "LumaSystemComponent.generated.h"

class ULumaCastSelectorWidget;
class ULumaAbilitySystemComponent;
class UEmotionSourceComponent;
class USphereComponent;
class ULumaCastAbility;
class UEmotionsAttributeSet;
class UAbilitySystemComponent;
class UGameplayEffect;
enum class EEmotion : uint8;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEmotionsChangedDelegate, ULumaSystemComponent*, EmotionOwner, UEmotionSourceComponent*, EmotionSource);

/**
 * @author Doktorov Alexander
 */
UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class INTERACTION_WITH_ALS_API ULumaSystemComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	ULumaSystemComponent();

	virtual void BeginPlay() override;

	FORCEINLINE void SetMaxCasts(const int32& NewMaxCasts) { MaxCasts = NewMaxCasts; }
	
	UFUNCTION(BlueprintCallable)
	TArray<FCastableObjectDesc> GetMostPrioritizedCasts() const;

	UFUNCTION(BlueprintCallable)
	virtual void HandleEmotionalSourcePresense(UEmotionSourceComponent* EmotionSourceComponent);

	UFUNCTION(BlueprintCallable)
	virtual void HandleEmotionalSourceAbsence(UEmotionSourceComponent* EmotionSourceComponent);
protected:
	// Emotional Sources that are affecting owner right now
	TArray<UEmotionSourceComponent*> AffectingEmotionalSources{};

	// Gameplay effect that is used to apply emotional effect to the owner actor
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = LumaSystemComponent)
	TSubclassOf<UGameplayEffect> GE_ApplyEmotionalAffect;

	// Max amount of luma casts that owner can select from 
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = LumaSystemComponent)
	int32 MaxCasts = 3;
	
	// Data table for ability casts
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = LumaSystemComponent, Meta=(RequiredAssetDataTags="/Script/Interaction_With_ALS.CastableAbilityDesc"))
	class UDataTable* AbilityDescDataTable = nullptr;

	// Corresponding array that initilized by data table that will be modified at runtime (probably)
	TArray<FCastableObjectDesc> CastableObjectDescs{};
private:
	template<class T = UAbilitySystemComponent>
	requires std::is_base_of_v<UAbilitySystemComponent, T>
	T* GetAbilitySystemComponentFromOwner() const
	{
		if constexpr(std::is_same_v<T, ULumaSystemComponent>)
			return UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetOwner());
		else
			return Cast<T>(UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetOwner()));
	}
	void InitilizeCastableAbilityDescs();
};
