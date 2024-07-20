// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CastableObjectsDataAsset.generated.h"

struct FContextCastObjectDesc;
class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaAbilitiesDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Data)
	TArray<TSubclassOf<class ULumaContextCastAbility>> LumaContextAbilities;

	// Call this only on server
	int32 GiveAbilitiesTo(UAbilitySystemComponent* TargetASC, UObject* SourceObject);
};
