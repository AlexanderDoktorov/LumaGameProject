// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "CastWidget.generated.h"

class UCastableObject;
class UImage;
struct FCastableObjectDesc;

UENUM(BlueprintType)
enum class ECastType : uint8
{
	None,
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
	case ECastType::None:
		return FColor::White;
		break;
	}
	return FColor::White;
}

USTRUCT(Blueprintable, BlueprintType)
struct FCastableObjectDesc : public FTableRowBase
{
	GENERATED_BODY()

	// Object preview
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableObjectDesc)
	UTexture2D* CastableObjectPreview = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableObjectDesc)
	ECastType ObjectCastType = ECastType::None;

	// Used to charge capsule with tags to activate when cast happens
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableObjectDesc)
	FGameplayTagContainer LumaAbilityGameplayTags{};
};

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
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CastWidget, meta = (RowType="/Script/Interaction_With_ALS.CastableObjectDesc"))
	FDataTableRowHandle ObjectDescDataRow{};
};
