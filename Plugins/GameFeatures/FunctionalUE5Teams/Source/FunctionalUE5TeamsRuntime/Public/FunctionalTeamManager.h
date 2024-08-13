#pragma once

#include "CoreMinimal.h"

namespace FunctionalTeams
{
	enum class ETeamAttitude : uint8
	{
		Hostile,
		Friendly,
		Neutral
	};
	
	struct null_team_t
	{
		explicit null_team_t() = default;
	};
	inline constexpr null_team_t NullTeam{};
	
	// Team desc struct
	// Used for defining TeamID and other parameters of team
	// As well as array of member that belongs to this team
	template<class T, class M = AActor* /* Member Type */>
	requires !std::is_floating_point_v<T> // we don't normally use floating points for id's
	class FunctionalTeam
	{
	public:
		using team_id_type = T;
		using team_member_type = M;
		using team_comparator_type = ETeamAttitude(*)(const FunctionalTeam& WhatTeam, const FunctionalTeam& TeamToCheckAgainst);
	public:
		virtual ~FunctionalTeam() = default;
		FunctionalTeam() = default;
		FunctionalTeam(const team_id_type& ID) : TeamID(ID) {}
		FunctionalTeam(team_id_type&& ID) : TeamID(Forward<team_id_type>(ID)) {}
		FunctionalTeam(null_team_t) : bIsValid(false) {}

		auto operator<=>(const FunctionalTeam&) const = default;
		
		bool IsNeutralForAll() const noexcept { return bIsNeutralForAll; }

		// Return the attitude for other team
		// If this team is Neutral for all, return ETeamAttitude::Neutral
		ETeamAttitude GetAttitudeFor(const FunctionalTeam& OtherTeam) const
		{
			if(IsNeutralForAll())
			{
				return ETeamAttitude::Neutral;
			}
			else
			{
				return GetTeamAttitudeFor(*this, OtherTeam);
			}
		}

		// By default returns Hostile if id's are different and Friendly if same
		virtual ETeamAttitude GetTeamAttitudeFor(const FunctionalTeam& WhatTeam, const FunctionalTeam& TeamToCheckAgainst) const
		{
			// If any of teams is Neutral, attitude is neutral
			if(WhatTeam.IsNeutralForAll() || TeamToCheckAgainst.IsNeutralForAll())
				return ETeamAttitude::Neutral;
			
			return TeamComparatorFunction(WhatTeam, TeamToCheckAgainst);
		}

		void EmplaceMember(M&& NewMember)
		{
			MembersArray.Emplace(Forward<M>(NewMember));
		}
		void EmplaceMember(const M& NewMember)
		{
			MembersArray.Emplace(NewMember);
		}

		void SetTeamID(team_id_type&& Value)
		{
			TeamID = Forward<team_id_type>(Value);
		}

		void SetIsNeutral(const bool& bNewIsNeutral)
		{
			bIsNeutralForAll = bNewIsNeutral;
		}

		bool HasMember(const M& Member) const
		{
			return MembersArray.Find(Member) != INDEX_NONE;
		}

		FORCEINLINE bool IsValidTeam() const { return bIsValid; }

		team_comparator_type TeamComparatorFunction = DefaultTeamComparator;
		team_id_type TeamID = team_id_type{};
		TArray<M> MembersArray{};
		uint8 bIsNeutralForAll : 1 = false;
		
		static team_comparator_type DefaultTeamComparator;
	private:
		bool bIsValid = true;
	};

	// FunctionalTeam inlines
	template<class T, class M = AActor* /* Member Type */>
	requires !std::is_floating_point_v<T>
	typename FunctionalTeam<T, M>::team_comparator_type FunctionalTeam<T, M>::DefaultTeamComparator = [](const FunctionalTeam& WhatTeam, const FunctionalTeam& TeamToCheckAgainst) -> ETeamAttitude 
	{
		return WhatTeam.TeamID == TeamToCheckAgainst.TeamID ? ETeamAttitude::Friendly : ETeamAttitude::Hostile;
	};

	// Team manager singleton class used for managing teams
	template<class T = FunctionalTeam<uint8, AActor*>>
	requires std::_Is_specialization_v<T, FunctionalTeam> // accepts only specializations of FunctionalTeam
	class TeamManager_
	{
	public:
		using team_type = T;
		using team_id_type = typename T::team_id_type;
		using team_member_type = typename T::team_member_type;
	public:
		TeamManager_() = default;
		TeamManager_(const TArray<T>& InitialTeams) : Teams(InitialTeams) {}
		TeamManager_(TArray<T>&& InitialTeams) : Teams(Forward<TArray<T>>(InitialTeams)) {};

		static team_type MakeTeam(const team_id_type& ID)
		{
			return team_type(ID);
		}

		ETeamAttitude GetTeamAttitudeFor(const team_member_type& TeamMember, const team_member_type& OtherTeamMember)
		{
			auto Team1 = GetTeamFor(TeamMember);
			auto Team2 = GetTeamFor(OtherTeamMember);
			ensure(Team1.IsValidTeam() && Team2.IsValidTeam());
			return Team1.GetAttitudeFor(Team2);
		}

		// If there is no team with id from TeamDesc, create new and add actor to it
		void RegisterAsTeamMember(const team_member_type& NewMember, const team_id_type& TeamID)
		{
			T& Team = GetTeamCreateIfNull(TeamID);
			Team.EmplaceMember(NewMember);
		}
		void RegisterAsTeamMember(team_member_type&& NewMember, const team_id_type& TeamID)
		{
			T& Team = GetTeamCreateIfNull(TeamID);
			Team.EmplaceMember(Forward<team_member_type>(NewMember));
		}

		// Retrieves team for team member
		// If has not team, returns NullTeam
		T GetTeamFor(const team_member_type& TeamMember)
		{
			for(T& Team : Teams)
			{
				if(Team.HasMember(TeamMember))
				{
					return Team;
				}
			}
			return NullTeam;
		}

		T& GetTeamCreateIfNull(const team_id_type& TeamID)
		{
			// if exist, return it
			if(T* FoundTeam = GetTeamByID(TeamID))
			{
				return *FoundTeam;
			}
			else
			{
				// if team doesn't exist, create new and return it
				auto Indx = Teams.Emplace(TeamID);
				return Teams[Indx];
			}
		}

		// returns team if found by ID or NullTeam
		// you should check if it is valid
		[[nodiscard]] T* GetTeamByID(const team_id_type& TeamID)
		{
			return Teams.FindByPredicate([&TeamID](const T& Team)
			{
				return Team.TeamID == TeamID;
			});
		}

		TArray<T> GetTeams() const { return Teams; }
		
	private:

		// Array of teams
		TArray<T> Teams{};
	};
}
/*
#define DECLARE_TEAM_MANAGER(ModuleAPI, idType) \
UINTERFACE() \
class UFunctionalTeamsInterface##idType## : public UInterface \
{ \
	GENERATED_BODY() \
}; \
class ModuleAPI IFunctionalTeamsInterface##idType## \
{ \
	GENERATED_BODY() \
public: \
	using TeamDescType = FunctionalTeams::TeamDesc_<idType>; \
	virtual TeamDescType GetTeamDesc() const = 0; \
}; \
using FunctionalTeamManager_##idType## = FunctionalTeams::TeamManager_<IFunctionalTeamsInterface##idType##, idType>; \
using FunctionalTeamDesc_##idType## = FunctionalTeams::TeamDesc_<idType>; \
*/
