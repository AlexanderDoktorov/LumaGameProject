// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemGlobals.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "CastWidget.generated.h"

class ULumaAbilitySystemComponent;
class ALocalCastActor;
class ULumaContextCastAbility;
struct FCastableAbilityDesc;
enum class EEmotion : uint8;
class UImage;
class UButton;

DECLARE_MULTICAST_DELEGATE(FOnLumaCastDelegate)

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API UCastWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	void SyncStyle();

	UFUNCTION(BlueprintCallable)
	void SetPreview(const TSoftObjectPtr<UTexture2D>& PreviewTexture);

	FOnLumaCastDelegate& OnLumaCast() { return OnLumaCastDelegate;}
protected:
	UFUNCTION()
	virtual void OnButtonClicked();
	
	UFUNCTION()
	virtual void OnButtonPressed();

	template <class T = UAbilitySystemComponent>
	requires std::is_base_of_v<UAbilitySystemComponent, T>
	T* GetAbilitySytemComponentFromPawn();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget))
	UButton* CastSelectorButton = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget))
	UImage* CastImage = nullptr;

	FOnLumaCastDelegate OnLumaCastDelegate;
};

template <class T> requires std::is_base_of_v<UAbilitySystemComponent, T>
T* UCastWidget::GetAbilitySytemComponentFromPawn()
{
	APawn* Pawn = GetOwningPlayerPawn();
	if(!Pawn)
		return nullptr;

	UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Pawn);
	return Cast<T>(ASC);
}

//////////////////////////////////////////////////////////////////////////

UCLASS()
class UContextCastWidget : public UCastWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetContextAbility(const ULumaContextCastAbility* ContextCastAbility);
protected:
	virtual void OnButtonPressed() override;

	bool TryActivateCastAbility();

	// Pointer to the actual object
	TWeakObjectPtr<const ULumaContextCastAbility> CastAbility = nullptr;
private:
	FGameplayTagContainer AbilityTags;
};

//////////////////////////////////////////////////////////////////////////

UCLASS()
class ULocalCastWidget : public UCastWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetLocalActor(ALocalCastActor* LocallyCastedActor);
protected:
	virtual void OnButtonPressed() override;

	// Pointer to the actual object
	TWeakObjectPtr<ALocalCastActor> CastedActor = nullptr;
};
