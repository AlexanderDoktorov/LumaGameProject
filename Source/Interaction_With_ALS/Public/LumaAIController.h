// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "ALS_HumanAI_ControllerCpp.h"
#include "LumaAIController.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API ALumaAIController : public AALS_HumanAI_ControllerCpp
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ALumaAIController();
protected:
	virtual bool IsPawnEnemyFor(AActor* OtherActor) override;
};
