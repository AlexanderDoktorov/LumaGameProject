// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "FunctionalGameModeBase.h"
#include "EngineUtils.h"
#include "NavigationSystem.h"
#include "GameFramework/PlayerStart.h"

void AFunctionalGameModeBase::OnPostLogin(AController* NewPlayer)
{
	/*
	if(!bSpawnPawnAtPlayerStart || !PlayerSpawnPawn)
		return;

	APawn* SpawnedPawn  = nullptr;
	FActorSpawnParameters SpawnParameters{};
	SpawnParameters.Owner = this;
	// Find first player start and spawn it on it
	for(TActorIterator<APlayerStart> it(GetWorld()); it; ++it)
	{
		if(*it)
		{
			SpawnedPawn = GetWorld()->SpawnActor<APawn>(PlayerSpawnPawn, (*it)->GetActorTransform(), SpawnParameters);
			NewPlayer->Possess(SpawnedPawn);
			return;
		}
	}

	// Spawn at random location within 1000.f radius
	if(!SpawnedPawn)
	{
		if (UNavigationSystemV1* NavSystem = FNavigationSystem::GetCurrent<UNavigationSystemV1>(GetWorld()))
		{
			FNavLocation FoundLocation{};
			NavSystem->GetRandomReachablePointInRadius(FVector(GetWorld()->OriginLocation), 1000.f, FoundLocation);
			SpawnedPawn = GetWorld()->SpawnActor<APawn>(PlayerSpawnPawn, FoundLocation.Location, FRotator{}, SpawnParameters);
			NewPlayer->Possess(SpawnedPawn);
		}
	}
	*/
}
