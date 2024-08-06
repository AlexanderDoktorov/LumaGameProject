// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "LumaHUD.generated.h"

class ULumaCoreOverlayWidget;
class ULumaCastSelectorWidget;
/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ALumaHUD : public AHUD
{
	GENERATED_BODY()
	friend class ALumaPlayerController;
public:
	ALumaHUD();
	ULumaCastSelectorWidget* GetLumaSelectorWidget() const { return LumaSelectorWidget; }
protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
private:
	UPROPERTY(EditDefaultsOnly, Category = Widgets)
	TSubclassOf<ULumaCastSelectorWidget> LumaSelectorClass = nullptr;
	UPROPERTY()
	TObjectPtr<ULumaCastSelectorWidget> LumaSelectorWidget = nullptr;
};
