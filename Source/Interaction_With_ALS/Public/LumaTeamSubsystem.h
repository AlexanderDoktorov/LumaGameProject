// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTeamSubsystem.h"
#include "LumaTeamSubsystem.generated.h"

UENUM()
enum class ELumaTeam : uint8
{
	TeamNeutral,
	TeamAI,
	TeamPlayers,
	Team2,
	Team3,
};

static FString AsString(const ELumaTeam& LumaTeam)
{
	switch (LumaTeam) {
	case ELumaTeam::TeamNeutral:
		return "TeamNeutral";
	case ELumaTeam::TeamAI:
		return "TeamAI";
	case ELumaTeam::TeamPlayers:
		return "TeamPlayers";
	case ELumaTeam::Team2:
		return "Team2";
	case ELumaTeam::Team3:
		return "Team3";
	}
	
	return "UnknownTeam";
}

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaTeamSubsystem : public UFunctionalTeamSubsystem
{
	GENERATED_BODY()
public:
	using LumaTeamClass = FunctionalTeams::FunctionalTeam<ELumaTeam, AActor*>;
	using LumaTeamManagerClass = FunctionalTeams::TeamManager_<LumaTeamClass>;

	FORCEINLINE LumaTeamManagerClass& GetLumaTeamManager() const { return GetTeamManager<LumaTeamClass>(); }
	FORCEINLINE void AddToAITeam(AActor* ActorToAdd) const { GetLumaTeamManager().RegisterAsTeamMember(ActorToAdd, ELumaTeam::TeamAI); }
	FORCEINLINE void AddToPlayersTeam(AActor* ActorToAdd) const { GetLumaTeamManager().RegisterAsTeamMember(ActorToAdd, ELumaTeam::TeamPlayers); }
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
};
