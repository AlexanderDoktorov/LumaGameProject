// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaCastAbility.h"
#include "LumaCastAbility_ProximityMine.generated.h"

class USphereComponent;
/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaCastAbility_ProximityMine : public ULumaContextCastAbility
{
	GENERATED_BODY()
public:
	ULumaCastAbility_ProximityMine() = default;
	
	UFUNCTION(BlueprintPure)
	float GetSpawnHeightOffset() const;
protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class UAnimSequence* PlaceAnimation = nullptr;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	class USoundBase* PlacementSoundCue = nullptr;
};
