// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "UI/CastWidget.h"
#include "LumaCastAbilityEventData.generated.h"

enum class ECastType : uint8;
/**
 * 
 */
UCLASS(Blueprintable, BlueprintType)
class INTERACTION_WITH_ALS_API ULumaCastAbilityEventData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = LumaCastAbilityData)
	ECastType CastType{};
};
