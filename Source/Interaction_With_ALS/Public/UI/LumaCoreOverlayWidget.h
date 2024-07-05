// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LumaCoreOverlayWidget.generated.h"

class ULumaCastSelectorWidget;
/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaCoreOverlayWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(meta = (BindWidget))
	ULumaCastSelectorWidget* LumaCastSelectorWidget = nullptr;
};
