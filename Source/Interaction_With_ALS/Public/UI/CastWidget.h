// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "CastWidget.generated.h"

class ULumaContextCastAbility;
class ALocallyCastedActor;
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

	UFUNCTION(BlueprintCallable)
	void SetAbilityTag(const FGameplayTag& NewAbilityCastTag);

	FOnLumaCastDelegate& OnLumaCast() { return OnLumaCastDelegate;}
	
protected:
	UFUNCTION()
	virtual void OnButtonClicked();
	
	UFUNCTION()
	virtual void OnButtonPressed();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget))
	UButton* CastSelectorButton = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (BindWidget))
	UImage* CastImage = nullptr;

	FOnLumaCastDelegate OnLumaCastDelegate;
private:
	FGameplayTag AbilityCastTag;
};

UCLASS()
class ULocalCastWidget : public UCastWidget
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	void SetLocalActor(ALocallyCastedActor* LocallyCastedActor);
protected:
	virtual void OnButtonPressed() override;

	// Pointer to the actual object
	TWeakObjectPtr<ALocallyCastedActor> CastedActor = nullptr;
private:
	using Super::SetAbilityTag;
};
