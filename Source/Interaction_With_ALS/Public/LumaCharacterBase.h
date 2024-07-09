// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GAS_MainCharacterCpp.h"
#include "LumaCharacterBase.generated.h"

// Forward declarations
class ICastableInterface;
class ALumaCapsule;
enum class ECastType : uint8;
struct FCapsuleChargingProperties;
class ALumaSourceBase;

/**
 * @author Doktorov Alexander
 */
UCLASS()
class INTERACTION_WITH_ALS_API ALumaCharacterBase : public AGAS_MainCharacterCpp
{
	GENERATED_BODY()
public:
	ALumaCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	void TryPerformLumaCast();
	void ChargeLumaCapsule(const FCapsuleChargingProperties& ChargingProperties);
	void SetActiveLumaCapsule(ALumaCapsule* NewActiveLumaCapsule);

	// If capsule is hidden, return null as if it isn't active
	UFUNCTION(BlueprintPure)
	ALumaCapsule* GetActiveLumaCapsule() const;

	FORCEINLINE auto GetLumaCapsuleToSpawnClass() const { return LumaCapsuleToSpawn; }
	
	int32 GetNumCapsules() const;
protected:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = CapsuleCharge)
	FName CapsuleSocketName = "EmptySocket";
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = CapsuleCharge)
	TSubclassOf<ALumaCapsule> LumaCapsuleToSpawn = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = CapsuleCharge)
	TObjectPtr<ALumaCapsule> ActiveLumaCapsule = nullptr;
};