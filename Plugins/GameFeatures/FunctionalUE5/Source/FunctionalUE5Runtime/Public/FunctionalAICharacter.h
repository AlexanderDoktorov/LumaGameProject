// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalCharacterBase.h"
#include "FunctionalAICharacter.generated.h"

UCLASS()
class FUNCTIONALUE5RUNTIME_API AFunctionalAICharacter : public AFunctionalCharacterBase
{
	GENERATED_BODY()
public:
	AFunctionalAICharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
protected:
	virtual void BeginPlay() override;
};
