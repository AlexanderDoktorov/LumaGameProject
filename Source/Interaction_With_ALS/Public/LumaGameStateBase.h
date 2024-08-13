// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "FunctionalTeamManager.h"
#include "LumaTypes.h"
#include "LumaGameStateBase.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ALumaGameStateBase : public AGameStateBase
{
	GENERATED_BODY()
	using LumaTeamClass = FunctionalTeams::FunctionalTeam<ELumaTeam, AActor*>;
	using LumaTeamManagerClass = FunctionalTeams::TeamManager_<LumaTeamClass>;
public:
	ALumaGameStateBase() = default;
	virtual void BeginPlay() override;

	FORCEINLINE LumaTeamManagerClass& GetLumaTeamManager() { return LumaTeamManager; }
	FORCEINLINE const LumaTeamManagerClass& GetLumaTeamManager() const { return LumaTeamManager; }
	FORCEINLINE void SetTeamAttitueTowards(ELumaTeam TeamToChangeAttitude, ELumaTeam TowardsTeam, FunctionalTeams::ETeamAttitude NewAttitude);
	FORCEINLINE void AddActorToAITeam(AActor* ActorToAdd) { LumaTeamManager.RegisterAsTeamMember(ActorToAdd, ELumaTeam::TeamAI); }
	FORCEINLINE void AddActorToPlayersTeam(AActor* ActorToAdd) { LumaTeamManager.RegisterAsTeamMember(ActorToAdd, ELumaTeam::TeamPlayers); }
private:
	LumaTeamManagerClass LumaTeamManager;
};

FORCEINLINE void ALumaGameStateBase::SetTeamAttitueTowards(ELumaTeam TeamToChangeAttitude, ELumaTeam TowardsTeam, FunctionalTeams::ETeamAttitude NewAttitude)
{
	LumaTeamManager.SetTeamAttitueTowards(TeamToChangeAttitude, TowardsTeam, NewAttitude);
}
