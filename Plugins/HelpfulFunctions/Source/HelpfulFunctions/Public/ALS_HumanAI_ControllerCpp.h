// Copyright Jakub W, All Rights Reserved. 

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "ALS_HumanAI_ControllerCpp.generated.h"

UENUM(BlueprintType)
enum class EAIState : uint8
{
	Patrolling				UMETA(DisplayName = "Patrolling"),
	RandomMovement			UMETA(DisplayName = "Random Movement"),
	LookingAroundMovement	UMETA(DisplayName = "Looking Around Movement"),
	Hearing					UMETA(DisplayName = "Hearing"),
	Attack					UMETA(DisplayName = "Attack"),
	Escape					UMETA(DisplayName = "Escape"),
	None					UMETA(DisplayName = "None"),
};

/**
 * 
 */
UCLASS()
class HELPFULFUNCTIONS_API AALS_HumanAI_ControllerCpp : public AAIController
{
	GENERATED_BODY()
	static constexpr auto AIDebugTraceTag = "TraceDebugTag_AI";
public:
	AALS_HumanAI_ControllerCpp();
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual bool InitializeBlackboard(UBlackboardComponent& BlackboardComp, UBlackboardData& BlackboardAsset) override;

	UFUNCTION()
	void OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus);

	UFUNCTION(BlueprintImplementableEvent)
	void OnHearingSenseUpdated(AActor* Actor, const FAIStimulus& Stimulus);

	UFUNCTION(BlueprintImplementableEvent)
	void OnSightSenseUpdated(AActor* Actor, const FAIStimulus& Stimulus);

	// Check's if Actor is seen by Perception Component
	UFUNCTION(BlueprintPure)
	bool CanSeeActor(AActor* Actor) const;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	class UAISenseConfig_Sight* SightConfig = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AI")
	class UAISenseConfig_Hearing* HearingConfig = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "AI")
	TObjectPtr<class UBehaviorTree> BehavioralTree = nullptr;
protected:
	
	virtual bool IsPawnEnemyFor(AActor* OtherActor);

	// Create Essential Variables
	UPROPERTY(BlueprintReadWrite)
	bool TracePerceptionEnemyValidC = false;

	UPROPERTY(BlueprintReadWrite)
	bool DetectedEnemyC;

	UPROPERTY(BlueprintReadWrite)
	ACharacter* EnemyFromTraceC;

	UPROPERTY(BlueprintReadWrite)
	ACharacter* EnemyFromPerceptionC;

	UPROPERTY(BlueprintReadWrite)
	ACharacter* TargetEnemyActorC;

	UPROPERTY(BlueprintReadWrite)
	UStaticMeshComponent* VisionStaticMeshC;

	UPROPERTY(BlueprintReadWrite)
	UAIPerceptionComponent* SightComponentC;

	UPROPERTY(BlueprintReadWrite)
	int LODsStateIndexC;

	UPROPERTY(BlueprintReadWrite)
	int AttackStateIndexC;

	UPROPERTY(BlueprintReadWrite)
	float CombatModeTimeC;

	UPROPERTY(BlueprintReadWrite)
	float InteligenceC;

	UPROPERTY(BlueprintReadWrite)
	float DetectedEnemyTimeC;

	UPROPERTY(BlueprintReadWrite)
	int RotationModeIndexC;

	UPROPERTY(BlueprintReadWrite)
	int LocomotionModeIndexC;

	UPROPERTY(BlueprintReadWrite)
	int FoliageChannelIndexC;

	UPROPERTY(BlueprintReadWrite)
	FRotator TargetControlRotationC;

	// Gets closest enemy from sight PlayerDetectionPriority - unused
	UFUNCTION(BlueprintPure, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Best Enemy From Sight", Keywords = "AI"))
	virtual void GetBestEnemyFromSight(float PlayerDetectionPriority, bool& ReturnValid, ACharacter*& ReturnCharacter);

	UFUNCTION(BlueprintCallable, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Sight Perception By Trace Fast", Keywords = "AI"))
	virtual void SightPerceptionByTraceFast(FName HeadSocketName, bool& AndDetected, TArray<AActor*>& CharactersList, int DebugIndex, float MaxDistance = 1800);

	UFUNCTION(BlueprintPure, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Check Enemy Is In Foliage Fast", Keywords = "AI"))
	virtual bool CheckIsInFoliage(ACharacter* EnemyCharacter);

	UFUNCTION(BlueprintPure, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Use Trace Sight Perception Fast", Keywords = "AI"))
	virtual bool UseTraceSightPercept();

	// Just sphere overlaps characters and searches for actors that aren't dead, not enemies and has "Human_AI" tag
	UFUNCTION(BlueprintCallable, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Find Other Comrate In Radius Fast", Keywords = "AI"))
	virtual void FindOtherComrate(bool& ReturnValid, TArray<ACharacter*>& ReturnCharacters, float Radius=400);

	UFUNCTION(BlueprintCallable, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Choose Enemy Actor Fast", Keywords = "AI"))
	virtual void ChooseEnemyActor(float InterpSpeedMultiplyDown=1.0, float InterpSpeedMultiplyUp=1.0, float DetectedStateTolerance=0.9);

	UFUNCTION(BlueprintCallable, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Set Focus Actor Transform Fast", Keywords = "AI"))
	virtual void SetFocusActorTransformFast(AActor* FocusActor, FTransform NewTransform, float InterpSpeedA = 1.0, float InterpSpeedB = 3.0, bool PrintInfo = false);

	UFUNCTION(BlueprintPure, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Get Solider Enemy From Other AI Fast", Keywords = "AI"))
	virtual void GetEnemyFromOtherAIs(bool CheckDistanceToPlayer, bool& ReturnValid, ACharacter*& ReturnCharacter);

	UFUNCTION(BlueprintPure, Category = "ALS Human AI", meta = (WorldContext = "WorldContextObject", DisplayName = "Get The Average Value Of Spotted Enemies Fast", Keywords = "AI"))
	virtual float GetTheAverageValueOfSpottedEnemiesFast(float InRadius = 1000);
};
