// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaTeamSubsystem.h"

void ULumaTeamSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	// Create default teams
	auto& TeamManager = GetTeamManager<LumaTeamClass>();
	
	TeamManager.GetTeamCreateIfNull(ELumaTeam::TeamNeutral).SetIsNeutral(true);
	TeamManager.GetTeamCreateIfNull(ELumaTeam::TeamPlayers).SetIsNeutral(false);
	TeamManager.GetTeamCreateIfNull(ELumaTeam::TeamAI).SetIsNeutral(false);
}
