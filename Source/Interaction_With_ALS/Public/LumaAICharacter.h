// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "ALS_BaseAI_CharacterCpp.h"
#include "LumaAICharacter.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API ALumaAICharacter : public AALS_BaseAI_CharacterCpp
{
	GENERATED_BODY()
public:
	ALumaAICharacter();
protected:
	virtual void BeginPlay() override;
};
