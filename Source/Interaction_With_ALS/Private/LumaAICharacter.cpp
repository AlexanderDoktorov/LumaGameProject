// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaAICharacter.h"
#include "LumaGameStateBase.h"


ALumaAICharacter::ALumaAICharacter()
{
	
}

void ALumaAICharacter::BeginPlay()
{
	Super::BeginPlay();

	if(auto LumaGameState = GetWorld()->GetGameState<ALumaGameStateBase>())
	{
		LumaGameState->AddActorToAITeam(this);
	}
}


