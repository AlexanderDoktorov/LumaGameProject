// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"

#include "CastableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UCastableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class INTERACTION_WITH_ALS_API ICastableInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent)
	void OnLumaCastPerformed(ALumaCharacterBase* WhoPerformed);
};
