// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"
#include "EngineUtils.h"
#include "LumaTeamSubsystem.h"
#include "Components/LumaAbilitySystemComponent.h"
#include "Actors/LocalCastActor.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "AttributeSets/LumaAttributeSet.h"
#include "Objects/CastableObjectsDataAsset.h"

ALumaCharacterBase::ALumaCharacterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	// Add new attribute set so ability system && luma system component can manage emotional state of the owner
	EmotionsAttributes = CreateDefaultSubobject<UEmotionsAttributeSet>("Emotion attributes");
}

void ALumaCharacterBase::GiveDefaultAbilities()
{
	Super::GiveDefaultAbilities();
	
	// Grant abilities, but only on the server	
	if (GetLocalRole() != ROLE_Authority || !GetAbilitySystemComponent())
		return;

	if(!LumaAbilitiesDataAsset)
	{
		UE_LOG(LogTemp, Warning, TEXT("LumaAbilitiesDataAsset isn't specified for [%s]"), *GetName());
		return;
	}

	// Give luma cast abilities
	LumaAbilitiesDataAsset->GiveAbilitiesTo(GetAbilitySystemComponent(), this);
}

int32 ALumaCharacterBase::GetNumCapsules() const
{
	if(!GetAbilitySystemComponent())
		return -1;
	
	return FMath::RoundToInt(GetAbilitySystemComponent()->GetNumericAttribute(ULumaAttributeSet::GetLumaAttribute()));
}

void ALumaCharacterBase::BeginPlay()
{
	if(UGameInstance* GameInstance = GetGameInstance())
	{
		ULumaTeamSubsystem* TeamSubsystem = GameInstance->GetSubsystem<ULumaTeamSubsystem>();
		TeamSubsystem->AddToPlayersTeam(this);
	}

	// Logs team for this player
	// LumaTeam Team = LumaTeamManager::Get().GetTeamFor(this);
	// UE_LOG(LogTemp, Warning, TEXT("Team of [%s] is [%s]"), *GetName(), *AsString(Team.TeamID));
	
	Super::BeginPlay();
}

void ALumaCharacterBase::OnLumaSelectorWidgetOpen() const
{
	// Get all actors of ALocallyCastedActor Class
	TArray<ALocalCastActor*> LocalCasts;
	if (UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull))
		for (TActorIterator<ALocalCastActor> It(World, ALocalCastActor::StaticClass()); It; ++It)
			LocalCasts.Add(*It);

	// Show local casts for player
	for(auto& LocalCast : LocalCasts)
	{
		if(!LocalCast)
			continue;

		if(!LocalCast->HasBeenCasted())
			LocalCast->OnLumaSelectorWidgetOpen();
	}
}

void ALumaCharacterBase::OnLumaSelectorWidgetClosed() const
{
	// Get all actors of ALocallyCastedActor Class
	TArray<ALocalCastActor*> LocalCasts;
	if (UWorld* World = GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull))
		for (TActorIterator<ALocalCastActor> It(World, ALocalCastActor::StaticClass()); It; ++It)
			LocalCasts.Add(*It);

	// Hide local casts for player
	for(auto& LocalCast : LocalCasts)
	{
		if(!LocalCast)
			continue;
		if(!LocalCast->HasBeenCasted())
			LocalCast->OnLumaSelectorWidgetClosed();
	}
}
