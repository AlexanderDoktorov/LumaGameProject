// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FunctionalGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTIONALUE5RUNTIME_API AFunctionalGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	AFunctionalGameModeBase() = default;

	virtual void OnPostLogin(AController* NewPlayer) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PlayerSpawn)
	TSubclassOf<APawn> PlayerSpawnPawn;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = PlayerSpawn)
	uint8 bSpawnPawnAtPlayerStart : 1 = 1; 
};
