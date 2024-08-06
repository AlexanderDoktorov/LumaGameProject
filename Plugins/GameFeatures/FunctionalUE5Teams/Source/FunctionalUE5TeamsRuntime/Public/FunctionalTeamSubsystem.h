// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalTeamManager.h"
#include "FunctionalTeamSubsystem.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTIONALUE5TEAMSRUNTIME_API UFunctionalTeamSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	using TeamType_uint8 = FunctionalTeams::FunctionalTeam<uint8, AActor*>;
public:
	UFunctionalTeamSubsystem() = default;
	
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	template<class TeamClass = TeamType_uint8>
	FunctionalTeams::TeamManager_<TeamClass>& GetTeamManager() const
	{
		// return newely create empty manager or already created with teams in it
		return CreateTeamManager(TArray<TeamClass>{});
	}
	
	template<class TeamClass = TeamType_uint8>
	FunctionalTeams::TeamManager_<TeamClass>& CreateTeamManager([[maybe_unused]] TArray<TeamClass>&& InitialTeams) const
	{
		static FunctionalTeams::TeamManager_<TeamClass> TeamManager;
		static bool bManagerInitialized = false;
		if(!bManagerInitialized)
		{
			TeamManager = FunctionalTeams::TeamManager_<TeamClass>(Forward<TArray<TeamClass>>(InitialTeams));
			bManagerInitialized = true;
		}
		return TeamManager;
	}
};
