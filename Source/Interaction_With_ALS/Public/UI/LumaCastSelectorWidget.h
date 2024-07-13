// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "LumaCastSelectorWidget.generated.h"

class UCanvasPanel;
class UCastWidget;
class UUniformGridPanel;
class UButton;
class UImage;
/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaCastSelectorWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	virtual void NativeConstruct() override;
};
