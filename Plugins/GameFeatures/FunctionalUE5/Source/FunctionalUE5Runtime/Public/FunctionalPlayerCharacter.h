// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "FunctionalCharacterBase.h"
#include "FunctionalPlayerCharacter.generated.h"

UCLASS()
class FUNCTIONALUE5RUNTIME_API AFunctionalPlayerCharacter : public AFunctionalCharacterBase
{
	GENERATED_BODY()
public:
	AFunctionalPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
private:
	void InitializeAbilitySystem() override;
};