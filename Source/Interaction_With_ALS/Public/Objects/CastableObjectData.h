// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaTypes.h"
#include "UObject/Object.h"
#include "CastableObjectData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class INTERACTION_WITH_ALS_API UCastableObjectData : public UObject
{
	GENERATED_BODY()
public:
	UCastableObjectData() = default;
	
	UPROPERTY(BlueprintReadOnly)
	FCastableObjectDesc CastableObjectDesc{};
};
