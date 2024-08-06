// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "CastWidget.h"
#include "ProximityMineWidget.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API UProximityMineWidget : public UContextCastWidget
{
	GENERATED_BODY()
public:
	UProximityMineWidget();
	virtual void NativeConstruct() override;
protected:
	virtual void OnButtonPressed() override;
	
	UFUNCTION()
	virtual void OnButtonHovered();
	
	UFUNCTION()
	virtual void OnButtonUnHovered();
};
