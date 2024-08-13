// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaTeamSubsystem.h"
#include "LumaFunctionsLibrary.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaFunctionsLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintPure)
	static bool IsActorEnemyFor(AActor* ActorFromTeam, AActor* ActorFromOtherTeam);

	// Add actor to luma team using ULumaTeamSubsystem (GameInstance Subsystem)
	UFUNCTION(BlueprintCallable, meta = (DefaultToSelf = Actor))
	static void AddActorToTeam(AActor* Actor, ELumaTeam LumaTeam);

	//UFUNCTION(BlueprintCallable)
	//static void SetTeamAttitudeForOtherTeam(ELumaTeam TeamToSetBehavior, ELumaTeam OtherTeam);
};
