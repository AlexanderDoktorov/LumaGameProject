// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaGameStateBase.h"

void ALumaGameStateBase::BeginPlay()
{
	Super::BeginPlay();

	// Create default teams
	LumaTeamManager.GetTeamCreateIfNull(ELumaTeam::TeamNeutral).SetIsNeutral(true);
	LumaTeamManager.GetTeamCreateIfNull(ELumaTeam::TeamPlayers).SetIsNeutral(false);
	LumaTeamManager.GetTeamCreateIfNull(ELumaTeam::TeamAI).SetIsNeutral(false);
}

