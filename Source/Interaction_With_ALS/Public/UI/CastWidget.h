// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CastWidget.generated.h"

UENUM(BlueprintType)
enum class ECastType : uint8
{
	Agressive,
	Quiet,
	Cautious
};

static FColor GetCastColor(const ECastType& CastType)
{
	switch (CastType) {
	case ECastType::Agressive:
		return FColor::Red;
		break;
	case ECastType::Quiet:
		return FColor::Cyan;
		break;
	case ECastType::Cautious:
		return FColor::Green;
		break;
	}
	return FColor::White;
}

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
	void MatchButtonColorToCastType();

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
	
	UPROPERTY(meta = (BindWidget))
	UButton* CastSelectorButton = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CastWidget)
	ECastType CastType = ECastType::Agressive;
};
