// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProximityMine.generated.h"

UCLASS()
class INTERACTION_WITH_ALS_API AProximityMine : public AActor
{
	GENERATED_BODY()
public:
	AProximityMine();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Explode();

	UFUNCTION(BlueprintCallable)
	void SetTriggerEnabled(bool bIsEnabled);
protected:
	UFUNCTION(BlueprintNativeEvent)
	void OnTriggerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep,
	                           const FHitResult& SweepResult);
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ProximityMine)
	TObjectPtr<USkeletalMeshComponent> Mesh = nullptr;

	// Explosion Trigger
	UPROPERTY(EditDefaultsOnly, Category = ProximityMine)
	class USphereComponent* TriggerSphere = nullptr;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float DestroyAfterExplodeDelay = 5.f;
		 
	// Mine Destruction
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = ProximityMine)
	TSoftObjectPtr<class UGeometryCollectionComponent> GeometryCollectionComponent = nullptr;

	// VFX
	UPROPERTY(EditDefaultsOnly, Category = ProximityMine)
	TSoftObjectPtr<class UParticleSystem> ExplosionFX = nullptr;

	// Sound
	UPROPERTY(EditDefaultsOnly, Category = ProximityMine)
	TSoftObjectPtr<class USoundBase> ExplosionSound = nullptr;

	UPROPERTY(EditDefaultsOnly, Category = ProximityMine)
	class UAudioComponent* AudioComponent = nullptr;

	UPROPERTY(BlueprintReadOnly)
	uint8 bHasBeenExploded : 1 = 0;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	uint8 bTriggerEnabled : 1 = 1;

	UPROPERTY(BlueprintReadOnly, meta = (ExposeOnSpawn = true))
	uint8 bGeometryCollectionHidden : 1 = 1;
private:
	FTimerHandle DestroyTimerHandle{};
};
