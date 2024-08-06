#include "ALS_BaseAI_CharacterCpp.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "Animation/AnimInstance.h"

AALS_BaseAI_CharacterCpp::AALS_BaseAI_CharacterCpp()
{
	PrimaryActorTick.bCanEverTick = true;
}

// Called every frame
void AALS_BaseAI_CharacterCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UCharacterMovementComponent* CharMove = this->GetCharacterMovement();

	// Character movement information
	AccelerationC = (GetVelocity() - PrevVelocityC) / UGameplayStatics::GetWorldDeltaSeconds(this);
	SpeedC = GetVelocity().Size2D();
	IsMovingC = SpeedC > 1;

	// If moving get rotation of velocity vector
	if (IsMovingC)
	{
		LastVelocityRotationC = UKismetMathLibrary::MakeRotFromX(this->GetVelocity());
	}

	MovementInputAmountC = CharMove->GetCurrentAcceleration().Size() / CharMove->GetMaxAcceleration();
	HasMovementInputC = MovementInputAmountC > 0;

	// If has movement input calculate rotation of acceleration vector
	if (HasMovementInputC)
	{
		LastMovementInputRotationC = UKismetMathLibrary::MakeRotFromX(CharMove->GetCurrentAcceleration());
	}

	AimYawRateC = abs((this->GetControlRotation().Yaw - PrevAimYawC) / UGameplayStatics::GetWorldDeltaSeconds(this));
	// Cached Values
	PrevVelocityC = GetVelocity();
	PrevAimYawC = GetControlRotation().Yaw;
	if (MovementStateC == CALS_MovementState::Grounded)
	{
		//Update if Grunded
		CalculateGroundedRotation();
	}
	else if (MovementStateC == CALS_MovementState::InAir)
	{
		// Update When is in Air
		if (RotationModeC == CALS_RotationMode::Aiming)
		{
			SmoothedCharRotation(FRotator(0, this->GetControlRotation().Yaw, 0), 0, 15, false);
			InAirRotationC = this->GetActorRotation();
		}
		else
		{
			SmoothedCharRotation(InAirRotationC, 0, 5, true);
		}
	}
}

void AALS_BaseAI_CharacterCpp::CalculateGroundedRotation()
{
	if (MovementActionC == CALS_MovementAction::None)
	{
		// sprawdz czy postac sie porusza
		if (CanUpdateRotation() == true)
		{
			//jesli sie porusza wykonaj to:
			if (RotationModeC == CALS_RotationMode::VelocityDirection)
			{
				// IF Moving==True [AND] RotationMode==Velocity
				SmoothedCharRotation(FRotator(0, LastVelocityRotationC.Yaw, 0), 800, CalcGroundedRotationRate(), true);
			}
			else if (RotationModeC == CALS_RotationMode::LookingDirection)
			{
				if (GaitC == CALS_Gait::Walking || GaitC == CALS_Gait::Running)
				{
					// IF Moving==True [AND] RotationMode==Looking [AND] Gait==Walking Or Running
					SmoothedCharRotation(FRotator(0, this->GetControlRotation().Yaw, 0), 400,
					                     CalcGroundedRotationRate(), true);
				}
				else
				{
					// IF Moving==True [AND] RotationMode==Looking [AND] Gait==Sprint
					SmoothedCharRotation(FRotator(0, LastVelocityRotationC.Yaw, 0), 500, CalcGroundedRotationRate(),
					                     true);
				}
			}
			else if (RotationModeC == CALS_RotationMode::Aiming)
			{
				SmoothedCharRotation(FRotator(0, this->GetControlRotation().Yaw, 0), 1200, CalcGroundedRotationRate(),
				                     true);
			}
		}
		else
		{
			FRotator AddRotation = FRotator(
				0, GetMesh()->GetAnimInstance()->GetCurveValue(FName(TEXT("RotationAmount"))) * (UGameplayStatics::GetWorldDeltaSeconds(this) / 0.0333f), 0);
			//jesli sie NIE porusza to wykonaj to:
			if (RotationModeC == CALS_RotationMode::Aiming)
			{
				//IF Moving==FALSE [AND] RotationMode==Aiming (Limit Rotation)
				LimitRotationFast(-100, 100, 20);
				if (abs(this->GetMesh()->GetAnimInstance()->GetCurveValue(FName(TEXT("RotationAmount")))) > 0.001)
				{
					AddActorWorldRotation(UKismetMathLibrary::Conv_RotatorToQuaternion(AddRotation), false);
					TargetRotationC = this->GetActorRotation();
				}
			}
			else
			{
				if (abs(this->GetMesh()->GetAnimInstance()->GetCurveValue(FName(TEXT("RotationAmount")))) > 0.001)
				{
					AddActorWorldRotation(UKismetMathLibrary::Conv_RotatorToQuaternion(AddRotation), false);
					TargetRotationC = this->GetActorRotation();
					//GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Cyan, AddRotation.ToString());
				}
			}
		}
	}
	else if (MovementActionC == CALS_MovementAction::Rolling)
	{
		if (HasMovementInputC == true)
		{
			SmoothedCharRotation(FRotator(0, LastMovementInputRotationC.Yaw, 0), 0, 2, true);
		}
	}
}

// ------------ PODSTAWOWA DEFINICJA ROTACJI --------------------
//                 FRotator(Pitch,Yaw,Roll)
// --------------------------------------------------------------

// FUNCTION CALLABLE - Smoothed Rotation Update (With Global FRotatior Variable Update)
void AALS_BaseAI_CharacterCpp::SmoothedCharRotation(FRotator Target, float TargetInterpSpeedConst,
                                                    float ActorInterpSpeedSmooth, bool UpdateControl)
{
	AActor* Player = (AActor*)this;
	TargetRotationC = UKismetMathLibrary::RInterpTo_Constant(TargetRotationC, Target,
	                                                         UGameplayStatics::GetWorldDeltaSeconds(this),
	                                                         TargetInterpSpeedConst);
	FQuat NewActorRot = UKismetMathLibrary::Conv_RotatorToQuaternion(UKismetMathLibrary::RInterpTo(
		Player->GetActorRotation(), TargetRotationC, UGameplayStatics::GetWorldDeltaSeconds(this),
		ActorInterpSpeedSmooth));
	Player->SetActorRotation(NewActorRot, ETeleportType::None);
	//!!!!!!!!!!!!!! Dodac Control Rotation!!!!!!!!!!!!!!!!!!!!!!!!!
}

//FUNCTION CALLABLE - Limit Rotation
void AALS_BaseAI_CharacterCpp::LimitRotationFast(float AimYawMin, float AimYawMax, float InterpSpeed)
{
	FRotator DeltaRot =
		UKismetMathLibrary::NormalizedDeltaRotator(this->GetControlRotation(), this->GetActorRotation());
	if (UKismetMathLibrary::InRange_FloatFloat(DeltaRot.Yaw, AimYawMin, AimYawMax, true, true) == false)
	{
		FRotator TargetRot;
		if (DeltaRot.Yaw > 0)
		{
			TargetRot = FRotator(0, this->GetControlRotation().Yaw + AimYawMin, 0);
		}
		else
		{
			TargetRot = FRotator(0, this->GetControlRotation().Yaw + AimYawMax, 0);
		}
		SmoothedCharRotation(TargetRot, 0, InterpSpeed, true);
		return;
	}
	return;
}

// FUNCTION CALLABLE - Update Dynamic Movement Settings
void AALS_BaseAI_CharacterCpp::UpdateMovementSettings(CALS_Gait AllowedGait, FCALSMovementSettings CurrentMovement)
{
	FCALSMovementSettings LocMoveSettings = CurrentMovement;
	CurrentMovementSettingsC = LocMoveSettings;
	if (AllowedGait == CALS_Gait::Running)
	{
		this->GetCharacterMovement()->MaxWalkSpeed = CurrentMovementSettingsC.RunSpeed;
	}
	else if (AllowedGait == CALS_Gait::Sprinting)
	{
		this->GetCharacterMovement()->MaxWalkSpeed = CurrentMovementSettingsC.SprintSpeed;
	}
	else
	{
		this->GetCharacterMovement()->MaxWalkSpeed = CurrentMovementSettingsC.WalkSpeed;
	}

	this->GetCharacterMovement()->MaxWalkSpeedCrouched = this->GetCharacterMovement()->MaxWalkSpeed;
	FVector CurveValue = CurrentMovementSettingsC.MovementCurve->GetVectorValue(GetMappedSpeedFast());
	this->GetCharacterMovement()->MaxAcceleration = CurveValue.X;
	this->GetCharacterMovement()->BrakingDecelerationWalking = CurveValue.Y;
	this->GetCharacterMovement()->GroundFriction = CurveValue.Z;
}

// FUNCTION PURE - Check Can Moving (Bool)
bool AALS_BaseAI_CharacterCpp::CanUpdateRotation() const
{
	bool CanByMove = IsMovingC && HasMovementInputC;
	CanByMove = CanByMove || SpeedC > 150;
	if (CanByMove == true && !this->HasAnyRootMotion() == true)
	{
		return true;
	}
	return false;
}

// FUNCTION PURE - Rotation Rate
float AALS_BaseAI_CharacterCpp::CalcGroundedRotationRate() const
{
	if (IsValid(CurrentMovementSettingsC.RotationRateCurve))
	{
		float CurveValue = CurrentMovementSettingsC.RotationRateCurve->GetFloatValue(GetMappedSpeedFast());
		CurveValue = CurveValue * UKismetMathLibrary::MapRangeClamped(AimYawRateC, 0, 300, 1, 3);
		return CurveValue;
	}
	return 1;
}

// FUNCTION PURE - Mapped Speed
float AALS_BaseAI_CharacterCpp::GetMappedSpeedFast() const
{
	float LocWalkSpeed = CurrentMovementSettingsC.WalkSpeed;
	float LocRunSpeed = CurrentMovementSettingsC.RunSpeed;
	float LocSprintSpeed = CurrentMovementSettingsC.SprintSpeed;
	if (SpeedC > LocRunSpeed)
	{
		return UKismetMathLibrary::MapRangeClamped(SpeedC, LocRunSpeed, LocSprintSpeed, 2, 3);
	}
	else if (SpeedC > LocWalkSpeed)
	{
		return UKismetMathLibrary::MapRangeClamped(SpeedC, LocWalkSpeed, LocRunSpeed, 1, 2);
	}
	else
	{
		return UKismetMathLibrary::MapRangeClamped(SpeedC, 0, LocWalkSpeed, 0, 1);
	}
}

// FUNCTION PURE - Can Sprint
bool AALS_BaseAI_CharacterCpp::CalcCanSprint() const
{
	if (HasMovementInputC == false)
	{
		return false;
	}
	if (RotationModeC == CALS_RotationMode::Aiming)
	{
		return false;
	}
	else if (RotationModeC == CALS_RotationMode::VelocityDirection)
	{
		return MovementInputAmountC > 0.9;
	}
	else
	{
		FRotator AccRotation = UKismetMathLibrary::MakeRotFromX(this->GetCharacterMovement()->GetCurrentAcceleration());
		AccRotation = UKismetMathLibrary::NormalizedDeltaRotator(AccRotation, this->GetControlRotation());
		AccRotation = FRotator(0, abs(AccRotation.Yaw), 0);
		return MovementInputAmountC > 0.9 && AccRotation.Yaw < 50;
	}
}

// FUNCTION PURE - Get Allowd Gait
CALS_Gait AALS_BaseAI_CharacterCpp::GetAllowedGaitFast() const
{
	if (StanceC == CALS_Stance::Standing)
	{
		if (RotationModeC == CALS_RotationMode::LookingDirection || RotationModeC ==
			CALS_RotationMode::VelocityDirection)
		{
			// For Normal Rotation
			if (DesiredGaitC == CALS_Gait::Walking)
			{
				return CALS_Gait::Walking;
			}
			else if (DesiredGaitC == CALS_Gait::Running)
			{
				return CALS_Gait::Running;
			}
			else if (CalcCanSprint() == true)
			{
				return CALS_Gait::Sprinting;
			}
			else
			{
				return CALS_Gait::Running;
			}
		}
		else
		{
			// For Aiming
			if (DesiredGaitC == CALS_Gait::Walking)
			{
				return CALS_Gait::Walking;
			}
			else
			{
				return CALS_Gait::Running;
			}
		}
	}
	else
	{
		// For Crouch
		if (DesiredGaitC == CALS_Gait::Walking)
		{
			return CALS_Gait::Walking;
		}
		else
		{
			return CALS_Gait::Running;
		}
	}
}

// FUNCTION PURE
CALS_Gait AALS_BaseAI_CharacterCpp::GetActualGaitFast(CALS_Gait AllowedGait) const
{
	float LocWalkSpeed = CurrentMovementSettingsC.WalkSpeed;
	float LocRunSpeed = CurrentMovementSettingsC.RunSpeed;
	float LocSprintSpeed = CurrentMovementSettingsC.SprintSpeed;
	if (SpeedC >= LocRunSpeed + 10)
	{
		if (AllowedGait == CALS_Gait::Sprinting)
		{
			return CALS_Gait::Sprinting;
		}
		else
		{
			return CALS_Gait::Running;
		}
	}
	else if (SpeedC >= LocWalkSpeed + 10)
	{
		return CALS_Gait::Running;
	}
	else
	{
		return CALS_Gait::Walking;
	}
}