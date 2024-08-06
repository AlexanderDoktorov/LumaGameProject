#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ALS_HumanAI_InterfaceCpp.h"
#include "FunctionalAICharacter.h"
#include "ALS_BaseAI_CharacterCpp.generated.h"

UENUM(BlueprintType)
enum class CALS_Gait : uint8
{
	Walking			UMETA(DisplayName = "Walking"),
	Running			UMETA(DisplayName = "Running"),
	Sprinting		UMETA(DisplayName = "Sprinting"),
};

UENUM(BlueprintType)
enum class CALS_MovementState : uint8
{
	None			UMETA(DisplayName = "None"),
	Grounded		UMETA(DisplayName = "Grounded"),
	InAir			UMETA(DisplayName = "In Air"),
	Mantling		UMETA(DisplayName = "Mantling"),
	Ragdoll			UMETA(DisplayName = "Ragdoll"),
	Crawl           UMETA(DisplayName = "Crawl"),
	Prone           UMETA(DisplayName = "Prone")
};

UENUM(BlueprintType)
enum class CALS_OverlayState : uint8
{
	Default,
	Masculine,
	Feminine,
	Injured,
	HandsTied,
	Rifle,
	Pistol1H,
	Pistol2H,
	Bow,
	Torch,
	Binoculars,
	Box,
	Barrel,
	Rope,
	Axe,
	Knife
};

UENUM(BlueprintType)
enum class CALS_RotationMode : uint8
{
	VelocityDirection,
	LookingDirection,
	Aiming
};

UENUM(BlueprintType)
enum class CALS_Stance : uint8
{
	Standing,
	Crouching
};

UENUM(BlueprintType)
enum class CALS_MovementAction : uint8
{
	None,
	LowMantle,
	HighMantle,
	Rolling,
	GettingUp
};

USTRUCT(BlueprintType)
struct FCALSMovementSettings
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Settings")
	float WalkSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Settings")
	float RunSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Settings")
	float SprintSpeed = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Settings")
	TObjectPtr<UCurveVector> MovementCurve = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement Settings")
	TObjectPtr<UCurveFloat> RotationRateCurve = nullptr;
};


UCLASS()
class HELPFULFUNCTIONS_API AALS_BaseAI_CharacterCpp : public AFunctionalAICharacter, public IALS_HumanAI_InterfaceCpp
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AALS_BaseAI_CharacterCpp();

protected:
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FVector PrevVelocityC = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	float PrevAimYawC = 0.0f;
	
	virtual void Tick(float DeltaTime) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI Config",
		meta = (AllowedClasses = "ALS_DamageConfigData"))
	UClass* DamageDataClass;

	// Basic Variables
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FVector AccelerationC = FVector(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	float SpeedC = 0.0f;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	bool IsMovingC = false;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FRotator LastVelocityRotationC = FRotator(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FRotator LastMovementInputRotationC = FRotator(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	float AimYawRateC = 0.0f;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	float MovementInputAmountC = 0.0f;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	bool HasMovementInputC = false;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FRotator SmoothTargetAimingC = FRotator(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FRotator TargetRotationC = FRotator(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FRotator InAirRotationC = FRotator(0, 0, 0);

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	ACharacter* TargetEnemyActorC;

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	float DetectedEnemyTimeC = 0.0f;

	// States
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	//Zmieniono np. TEnumAsByte<CALS_Gait> na CALS_Gait !!!
	CALS_Gait GaitC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	CALS_Gait DesiredGaitC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	CALS_OverlayState OverlayStateC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	CALS_Stance StanceC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	CALS_RotationMode RotationModeC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	CALS_MovementAction MovementActionC;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	CALS_MovementState MovementStateC;

	//Structures
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "True"))
	FCALSMovementSettings CurrentMovementSettingsC;

	bool CanUpdateRotation() const;
	bool CalcCanSprint() const;
	
	void CalculateGroundedRotation();
	void SmoothedCharRotation(FRotator Target, float TargetInterpSpeedConst, float ActorInterpSpeedSmooth, bool UpdateControl);
	void LimitRotationFast(float AimYawMin, float AimYawMax, float InterpSpeed);

	float CalcGroundedRotationRate() const;
	float GetMappedSpeedFast() const;

	UFUNCTION(BlueprintPure, Category = "ALS Character", meta = (DisplayName = "Get Allowed Gait Fast"))
	CALS_Gait GetAllowedGaitFast() const;

	UFUNCTION(BlueprintPure, Category = "ALS Character", meta = (DisplayName = "Get Actual Gait Fast"))
	CALS_Gait GetActualGaitFast(CALS_Gait AllowedGait) const;

	UFUNCTION(BlueprintCallable, Category = "ALS Character", meta = (DisplayName = "Update Dynamic Movement Settings Fast"))
	void UpdateMovementSettings(CALS_Gait AllowedGait, FCALSMovementSettings CurrentMovement);
};
