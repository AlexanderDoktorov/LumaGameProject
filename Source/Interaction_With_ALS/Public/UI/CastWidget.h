// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaTypes.h"
#include "Blueprint/UserWidget.h"
#include "CastWidget.generated.h"

struct FCastableAbilityDesc;
enum class EEmotion : uint8;
class UImage;
class UButton;

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
	void SetFromCastableAbilityDesc(FCastableAbilityDesc AbilityDesc);

	UFUNCTION(BlueprintCallable)
	void MatchButtonColorToCastType();

	UFUNCTION(BlueprintCallable)
	void MatchImageTexture();

	UFUNCTION(BlueprintCallable)
	void SyncShapeBetweenStyles();
protected:

	UFUNCTION()
	void OnButtonHovered();

	UFUNCTION()
	void OnButtonClicked();

	UFUNCTION()
	void OnButtonPressed();
	
	UFUNCTION()
	void OnButtonUnHovered();
	
	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UButton* CastSelectorButton = nullptr;

	UPROPERTY(EditAnywhere, meta = (BindWidget))
	UImage* CastImage = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CastWidget)
	FCastableAbilityDesc CastableAbilityDesc{};
};
