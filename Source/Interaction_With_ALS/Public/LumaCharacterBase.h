// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GAS_MainCharacterCpp.h"
#include "UE5Coro/Coroutine.h"
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

	UFUNCTION(BlueprintNativeEvent)
	void OnLumaCastPerform(const FCastableObjectDesc& CastableObjectDesc);

	void PeformLumaCast(const FCastableObjectDesc& CastableObjectDesc);
	
	int32 GetNumCapsules() const;
protected:
	virtual void BeginPlay() override;
};