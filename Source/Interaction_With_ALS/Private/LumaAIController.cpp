// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaAIController.h"
#include "FunctionLibrary/LumaFunctionsLibrary.h"


// Sets default values
ALumaAIController::ALumaAIController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

bool ALumaAIController::IsPawnEnemyFor(AActor* OtherActor)
{
	return ULumaFunctionsLibrary::IsActorEnemyFor(GetPawn(), OtherActor);
}

