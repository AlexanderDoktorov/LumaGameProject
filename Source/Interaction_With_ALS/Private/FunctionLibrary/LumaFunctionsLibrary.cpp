// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "FunctionLibrary/LumaFunctionsLibrary.h"
#include "LumaGameStateBase.h"

bool ULumaFunctionsLibrary::IsActorEnemyFor(AActor* ActorFromTeam,AActor* ActorFromOtherTeam)
{
	check(ActorFromTeam && ActorFromOtherTeam);

	const ALumaGameStateBase* LumaGameState = ActorFromTeam->GetWorld()->GetGameState<ALumaGameStateBase>();
	if(!IsValid(LumaGameState))
		LumaGameState =  ActorFromOtherTeam->GetWorld()->GetGameState<ALumaGameStateBase>();
	
	if(!IsValid(LumaGameState))
	{
		UE_LOG(LogGameState, Error, TEXT("LumaGameState is NULL for both actors passed to IsEnemyActorFor(), make sure world uses correct game state"));
		UE_LOG(LogGameState, Error, TEXT("Name of ActorFromTeam = %s, Name of ActorFromOtherTeam = %s"), *ActorFromTeam->GetName(), *ActorFromOtherTeam->GetName());
		return false;
	}
	return LumaGameState->GetLumaTeamManager().GetTeamAttitudeFor(ActorFromTeam, ActorFromOtherTeam) == FunctionalTeams::ETeamAttitude::Hostile;
}

void ULumaFunctionsLibrary::AddActorToTeam(AActor* Actor, ELumaTeam LumaTeam)
{
	check(Actor);
	ALumaGameStateBase* LumaGameState = Actor->GetWorld()->GetGameState<ALumaGameStateBase>();
	if(!IsValid(LumaGameState))
	{
		UE_LOG(LogGameState, Error, TEXT("LumaGameState is NULL for actor passed to AddActorToTeam(), make sure world uses correct game state"));
		UE_LOG(LogGameState, Error, TEXT("Name of Actor = %s, Name of LumaTeam = %s"), *Actor->GetName(), *AsString(LumaTeam));
		return;
	}
	LumaGameState->GetLumaTeamManager().RegisterAsTeamMember(Actor, LumaTeam);
}