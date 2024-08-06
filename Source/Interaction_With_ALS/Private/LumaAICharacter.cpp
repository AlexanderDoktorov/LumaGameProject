// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaAICharacter.h"
#include "LumaTeamSubsystem.h"


ALumaAICharacter::ALumaAICharacter()
{
	
}

void ALumaAICharacter::BeginPlay()
{
	if(UGameInstance* GameInstance = GetGameInstance())
	{
		ULumaTeamSubsystem* TeamSubsystem = GameInstance->GetSubsystem<ULumaTeamSubsystem>();
		TeamSubsystem->AddToAITeam(this);
	}
	Super::BeginPlay();
}


