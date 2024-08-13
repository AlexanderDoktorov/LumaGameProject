// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "FunctionLibrary/LumaFunctionsLibrary.h"
#include "LumaTeamSubsystem.h"

bool ULumaFunctionsLibrary::IsActorEnemyFor(AActor* ActorFromTeam,AActor* ActorFromOtherTeam)
{
	check(ActorFromTeam && ActorFromOtherTeam);
	if(UGameInstance* GameInstance = ActorFromTeam->GetGameInstance())
	{
		ULumaTeamSubsystem* TeamSubsystem = GameInstance->GetSubsystem<ULumaTeamSubsystem>();
		return TeamSubsystem->GetLumaTeamManager().GetTeamAttitudeFor(ActorFromTeam, ActorFromOtherTeam) == FunctionalTeams::ETeamAttitude::Hostile;
	}
	UE_LOG(LogTemp, Error, TEXT("Unable to find GameInstance for [%s]"), *ActorFromTeam->GetName());
	return false;
}

void ULumaFunctionsLibrary::AddActorToTeam(AActor* Actor, ELumaTeam LumaTeam)
{
	check(Actor);
	if(UGameInstance* GameInstance = Actor->GetGameInstance())
	{
		ULumaTeamSubsystem* TeamSubsystem = GameInstance->GetSubsystem<ULumaTeamSubsystem>();
		TeamSubsystem->GetLumaTeamManager().RegisterAsTeamMember(Actor, LumaTeam);
	}
}