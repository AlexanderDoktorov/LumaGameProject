// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "Blueprint/UserWidget.h"
#include "AttributeDisplayWidget.generated.h"

class UTextBlock;

UCLASS()
class INTERACTION_WITH_ALS_API UAttributeDisplayWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;

	UFUNCTION()
	FText GetAttributeText() const;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UTextBlock* AttributeText = nullptr;
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FGameplayAttribute GameplayAttribute{};
};
