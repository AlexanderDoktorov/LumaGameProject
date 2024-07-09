// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/LumaCastAbilityEventData.h"
#include "LumaCapsule.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FCapsuleChargingProperties
{
	GENERATED_BODY()
	
	// Actor to spawn
	// For example it can be spawned in hands or in world
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CapsuleProperties, meta = (MustImplement="CastableInterface"))
	TSubclassOf<UObject> CastableObjectClass = nullptr;
};

USTRUCT(Blueprintable, BlueprintType)
struct FCastableObjectDesc : public FTableRowBase
{
	GENERATED_BODY()

	// Object preview
	UPROPERTY(EditAnywhere, Category = CastableObjectDesc)
	UTexture2D* CastableObjectPreview = nullptr;

	UPROPERTY(EditAnywhere, Category = CastableObjectDesc)
	ECastType ObjectCastType = ECastType::None;

	// Used to charge capsule with object params
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = CastableObjectDesc)
	FCapsuleChargingProperties CapsuleChargingProperties{};
};

enum class ECastType : uint8;

UCLASS()
class INTERACTION_WITH_ALS_API ALumaCapsule : public AActor
{
	GENERATED_BODY()
public:
	ALumaCapsule();
	virtual void Tick(float DeltaTime) override;
	void Charge(const FCapsuleChargingProperties& ChargingProperties);

	UFUNCTION(BlueprintCallable)
	void Discharge();
	
	FORCEINLINE bool IsCharged() const { return CapsuleChargingProperties.CastableObjectClass != nullptr; }
	FORCEINLINE FCapsuleChargingProperties GetChargingProperties() const { return CapsuleChargingProperties; }
protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Charge)
	FCapsuleChargingProperties CapsuleChargingProperties{};
};
