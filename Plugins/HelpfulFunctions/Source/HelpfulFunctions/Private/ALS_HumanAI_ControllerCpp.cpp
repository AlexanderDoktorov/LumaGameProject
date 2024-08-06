// Copyright Jakub W, All Rights Reserved. 


#include "ALS_HumanAI_ControllerCpp.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"
#include "HelpfulFunctionsBPLibrary.h"
#include "GameFramework/Character.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "ALS_HumanAI_InterfaceCpp.h"
#include "Engine/EngineTypes.h"
#include "CollisionQueryParams.h"
#include "BehaviorTree/BehaviorTree.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AISenseConfig_Hearing.h"

AALS_HumanAI_ControllerCpp::AALS_HumanAI_ControllerCpp()
{
	PrimaryActorTick.bCanEverTick = true;
	
	// Initialize Perception Component
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("PerceptionComponent"));
	SetPerceptionComponent(*PerceptionComponent);

	// Initialize Sight Configuration
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SightConfig"));
	if (SightConfig)
	{
		SightConfig->SightRadius = 2000.0f;
		SightConfig->LoseSightRadius = 2500.0f;
		SightConfig->PeripheralVisionAngleDegrees = 90.0f;
		SightConfig->AutoSuccessRangeFromLastSeenLocation = 520.0f;
		SightConfig->DetectionByAffiliation.bDetectEnemies = true;
		SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
		SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	}

	// Initialize Hearing Configuration
	HearingConfig = CreateDefaultSubobject<UAISenseConfig_Hearing>(TEXT("HearingConfig"));
	if (HearingConfig)
	{
		HearingConfig->HearingRange = 3000.0f;
		HearingConfig->DetectionByAffiliation.bDetectEnemies = true;
		HearingConfig->DetectionByAffiliation.bDetectNeutrals = true;
		HearingConfig->DetectionByAffiliation.bDetectFriendlies = true;
	}

	// Add senses to Perception Component
	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->ConfigureSense(*HearingConfig);
	PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
}

void AALS_HumanAI_ControllerCpp::BeginPlay()
{
	Super::BeginPlay();

	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &ThisClass::OnTargetPerceptionUpdated);
	
	if(BehavioralTree)
	{
		if(!RunBehaviorTree(BehavioralTree))
		{
			//@ DUMMY: Disable tick for some reason, should remove it later
			SetActorTickEnabled(false);
			UE_VLOG(this, LogTemp, Log, TEXT("Unable to run BehavioralTree with [%s] name"), *BehavioralTree->GetName());
		}
	}
}

bool AALS_HumanAI_ControllerCpp::InitializeBlackboard(UBlackboardComponent& BlackboardComp,
	UBlackboardData& BlackboardAsset)
{
	bool bInitialized = Super::InitializeBlackboard(BlackboardComp, BlackboardAsset);
	
	if(bInitialized)
	{
		BlackboardComp.SetValueAsEnum("State", static_cast<uint8>(EAIState::Patrolling) );
	}
	
	return bInitialized;
}


void AALS_HumanAI_ControllerCpp::OnTargetPerceptionUpdated(AActor* Actor, FAIStimulus Stimulus)
{
	//@DUMMY: Needs implementation (maybe), or just dispatch it to BP events
	
	if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>())
	{
		OnSightSenseUpdated(Actor, Stimulus);
	}
	else if(Stimulus.Type == UAISense::GetSenseID<UAISense_Hearing>())
	{
		OnHearingSenseUpdated(Actor, Stimulus);
	}
}

bool AALS_HumanAI_ControllerCpp::CanSeeActor(AActor* Actor) const
{
	if (!PerceptionComponent)
		return false;

	FActorPerceptionBlueprintInfo PerceptionInfo;
	PerceptionComponent->GetActorsPerception(Actor, PerceptionInfo);

	for (const FAIStimulus& Stimulus : PerceptionInfo.LastSensedStimuli)
	{
		if (Stimulus.Type == UAISense::GetSenseID<UAISense_Sight>() && Stimulus.WasSuccessfullySensed())
		{
			return true;
		}
	}

	return false;
}

bool AALS_HumanAI_ControllerCpp::IsPawnEnemyFor(AActor* OtherActor)
{
	return UHelpfulFunctionsBPLibrary::GetIsEnemyState(GetPawn(), OtherActor);
}

// |||||||||||||||||||||||||||| T I C K   E V E N T ||||||||||||||||||||||||||||
void AALS_HumanAI_ControllerCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FRotator VisionMeshRot = FRotator(0, GetControlRotation().Yaw - 90, 0);
	if (IsValid(VisionStaticMeshC))
	{
		VisionStaticMeshC->SetWorldRotation(UKismetMathLibrary::Conv_RotatorToQuaternion(VisionMeshRot), false);
	}
}

// FUNCTION PURE - 
void AALS_HumanAI_ControllerCpp::GetBestEnemyFromSight(float PlayerDetectionPriority, bool& ReturnValid, ACharacter*& ReturnCharacter)
{
	ReturnValid = false;
	ReturnCharacter = nullptr;
	
	if(!SightComponentC)
		return;
	
	//Local Variables
	TArray<float> EnemiesDistances;
	TArray<ACharacter*> EnemiesCharacters;
	
	// Get currently seen actors
	TArray<AActor*> SeenActors;
	SightComponentC->GetCurrentlyPerceivedActors(UAISense_Sight::StaticClass(), SeenActors);

	//Get Actors Array From Sight Component
	for (AActor* SeenActor : SeenActors)
	{
		ACharacter* SeenCharacter = Cast<ACharacter>(SeenActor);
		if (IsValid(SeenCharacter) && SeenCharacter != GetPawn())
		{
			bool bIsEnemy = false;
			bool bIsDead = false;
			if (UKismetSystemLibrary::DoesImplementInterface(SeenCharacter, UALS_HumanAI_InterfaceCpp::StaticClass()))
			{
				IALS_HumanAI_InterfaceCpp::Execute_HAI_GetDeathState(SeenCharacter, bIsDead);
				bIsEnemy = IsPawnEnemyFor(SeenCharacter);
			}

			// If not dead, is enemy and is not in foliage - 
			if (!bIsDead && bIsEnemy && !CheckIsInFoliage(SeenCharacter))
			{
				EnemiesCharacters.Emplace(SeenCharacter); //Add Current Checked Character To Array
				EnemiesDistances.Emplace(
					UKismetMathLibrary::Vector_Distance(SeenCharacter->GetActorLocation(),
					                                    GetPawn()->GetActorLocation()));
			}
		}
	}

	/*
	else
	{
		TArray<AActor*> ToIgnore;
		// TRACE CONFIG (MAINLY FOR FINDING ZOMBIE CHARACTERS IN SMALL RADIUS)
		ToIgnore.Add(this); // Init Local Variable
		bool DrawTraces = false; // Init Local Variable
		EDrawDebugTrace::Type TraceType = EDrawDebugTrace::None; // Init Local Variable
		TArray<FHitResult> SphereHitResult; // Init Local Variable
		//Make Objects Array For Trace
		EObjectTypeQuery MyTraceQuery = UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn);
		TArray<TEnumAsByte<EObjectTypeQuery>, FDefaultAllocator> TraceObjectsArray;
		TraceObjectsArray.Add(MyTraceQuery);
		//Get Trace Debug From Inteface
		Cast<IALS_HumanAI_InterfaceCpp>(this)->Execute_HAI_DrawDebugTraces(this, DrawTraces);
		//Get Trace Index From Interface
		if (DrawTraces == true) //By Int Value Choose Enum State
		{
			TraceType = EDrawDebugTrace::ForOneFrame;
		}
		// Run Sphere Trace
		const bool SphereHitValid = UKismetSystemLibrary::SphereTraceMultiForObjects(
			this, GetPawn()->GetActorLocation(), GetPawn()->GetActorLocation(), 200, TraceObjectsArray,
			false, ToIgnore, TraceType, SphereHitResult, true, FLinearColor(0.16f, 0.0f, 0.04f, 1.0f),
			FLinearColor(1.0f, 0.0f, 0.0f, 1.0f), 0.05);
		if (SphereHitValid == true)
		{
			bool EnemyDetectedEnemy = false;
			bool EnemyIsthis = false;
			for (FHitResult SingleHitResult : SphereHitResult)
			{
				ACharacter* SeenCharacter = Cast<ACharacter>(SingleHitResult.GetActor());
				bIsDead = false;
				bIsEnemy = false;
				EnemyIsthis = false;
				EnemyDetectedEnemy = false; //Clear Interface Values
				if (IsValid(SeenCharacter) == true && SeenCharacter != GetPawn())
				{
					IALS_HumanAI_InterfaceCpp* CharInterface = Cast<IALS_HumanAI_InterfaceCpp>(SeenCharacter);
					//Cas To Interface
					if (UKismetSystemLibrary::DoesImplementInterface(
						SeenCharacter, UALS_HumanAI_InterfaceCpp::StaticClass()))
					{
						CharInterface->Execute_HAI_GetDeathState(SeenCharacter, bIsDead); //Check Interface State
						//CharInterface->Execute_HAI_GetEnemyState(OverlapedChar, EnemyState); //Check Interface State
						bIsEnemy = IsPawnEnemyFor(SeenCharacter);
						// [NEW ENEMY STATE]
						CharInterface->Execute_HAI_GetDetectedEnemy(SeenCharacter, EnemyDetectedEnemy, EnemyIsthis);
						//Checki Interface State
					}
					if (bIsDead == false && bIsEnemy == true && CheckIsInFoliage(SeenCharacter) == false &&
						SeenCharacter->IsPlayerControlled() == false && EnemyDetectedEnemy == true && EnemyIsthis ==
						true)
					{
						LocalCharactersArray.Emplace(SeenCharacter); //Add Current Checked Character To Array
						DistancesArray.Emplace( UKismetMathLibrary::Vector_Distance(SeenCharacter->GetActorLocation(), GetPawn()->GetActorLocation()));
					}
				}
			}
		}
		else
		{
			ReturnValid = false;
			ReturnCharacter = nullptr;
			return;
		}
	}
	*/

	// Get minimum of distances to this AI
	int32 ClosestCharacterIndx = -1;
	float ClosestCharacterDistance = -1.f;
	UKismetMathLibrary::MinOfFloatArray(EnemiesDistances, ClosestCharacterIndx, ClosestCharacterDistance);

	if(EnemiesCharacters.IsValidIndex(ClosestCharacterIndx))
	{
		ReturnCharacter = EnemiesCharacters[ClosestCharacterIndx];
		ReturnValid = IsValid(ReturnCharacter);
	}

	/*
	if (IsValid(PlayerCharacter))
	{
		// If distance from closest character (could be AI or any other *player* character) is nerly equal to distance to lastly found player character
		// just return closest character (wtf, why do we event check if we found any player)
		// Summary: So if the closest character (let's say another AI) isn't close enough to the player character - we return null (IDIOTISM)
		if (UKismetMathLibrary::NearlyEqual_FloatFloat(ClosestCharacterDistance,
		                                               EnemiesDistances[EnemiesCharacters.Find(PlayerCharacter)],
		                                               3.0f) == true)
		{
			int ValidCharIndex = UKismetMathLibrary::ClampInt64(ClosestCharacterIndx, 0, EnemiesCharacters.Num());
			if (EnemiesCharacters.IsValidIndex(ValidCharIndex))
			{
				ReturnCharacter = EnemiesCharacters[ValidCharIndex];
			}
			ReturnValid = IsValid(ReturnCharacter);
			return; 
		}
	}
	else
	{
		// Otherwise, just return the same value!!! AHHAHA
		ReturnCharacter = EnemiesCharacters[UKismetMathLibrary::ClampInt64(
			ClosestCharacterIndx, 0, EnemiesCharacters.Num())];
		ReturnValid = IsValid(ReturnCharacter);
		return; 
	}
	*/
}

// FUNCTION PURE - Check Enemy Is In Folage (by Trace)
bool AALS_HumanAI_ControllerCpp::CheckIsInFoliage(ACharacter* EnemyCharacter)
{
	if (DetectedEnemyTimeC < 0.2)
	{
		ECollisionChannel FoliageChannel = static_cast<ECollisionChannel>(FoliageChannelIndexC);
		bool IsNotInFoliage = UHelpfulFunctionsBPLibrary::IsNotHidingInFoliage(
			this, Cast<ACharacter>(GetPawn()), EnemyCharacter, FoliageChannel, 0);
		return !IsNotInFoliage;
	}
	else
	{
		return false;
	}
}

bool AALS_HumanAI_ControllerCpp::UseTraceSightPercept()
{
	UBlackboardComponent* BB = GetBlackboardComponent();
	if (IsValid(BB))
	{
		if (BB->GetValueAsBool(FName(TEXT("MoveToCoverWithSmallWall"))) == true && LocomotionModeIndexC == 1 &&
			RotationModeIndexC == 2)
		{
			return true;
		}
	}
	return false;
}

// Used in blueprints...

//@TODO: Draw debug shapes for debugging
void AALS_HumanAI_ControllerCpp::SightPerceptionByTraceFast(
	FName HeadSocketName, bool& AnyDetected, TArray<AActor*>& CharactersList, int DebugIndex, float MaxDistance)
{
	CharactersList.Empty();
	AnyDetected = false;

	if (!GetPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to get comrades of AI with [%s] controller, but GetPawn() returned NULL"), *GetName());
		return;
	}

	auto World = GetPawn()->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null for [%s]"), *GetPawn()->GetName());
		return;
	}

	//Const Parameters
	constexpr float MaxVisionAngle = 75.0;
	constexpr float MinUpVisionSize = 150;
	constexpr float MaxUpVisionSize = 500;
	
	//Choose Debug Mode For Trace
	EDrawDebugTrace::Type DebugType = EDrawDebugTrace::None;
	if (DebugIndex == 1)
	{
		DebugType = EDrawDebugTrace::ForOneFrame;
	}
	else if (DebugIndex == 2)
	{
		DebugType = EDrawDebugTrace::ForDuration;
	}

	// Run Sphere Overlap For Characters
	FCollisionObjectQueryParams CollisionObjectQueryParams{};
	CollisionObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

	FCollisionQueryParams QueryParams{};
	QueryParams.AddIgnoredActor(GetPawn());
	QueryParams.TraceTag = AIDebugTraceTag;
	
	TArray<FOverlapResult> Overlaps{};
	World->OverlapMultiByObjectType(Overlaps,
		GetPawn()->GetActorLocation(), GetPawn()->GetActorQuat(), CollisionObjectQueryParams, FCollisionShape::MakeSphere(MaxDistance), QueryParams);

	for(FOverlapResult& OverlapResult : Overlaps)
	{
		ACharacter* OverlappedCharacter = Cast<ACharacter>(OverlapResult.GetActor());
		if(!IsValid(OverlappedCharacter))
			continue;

		FVector ControlForwardVector = FRotator(0.f, GetControlRotation().Yaw, 0.f).Vector();
		ControlForwardVector.Normalize();
		
		FVector DirectionToEnemy = UKismetMathLibrary::FindLookAtRotation(GetPawn()->GetActorLocation(), OverlappedCharacter->GetActorLocation()).Vector();
		DirectionToEnemy.Normalize();
		
		const float LookAngle = FMath::RadiansToDegrees(FMath::Acos(ControlForwardVector.Dot(DirectionToEnemy)));
		const float HeightDiff = FMath::Abs(GetPawn()->GetActorLocation().Z - OverlappedCharacter->GetActorLocation().Z);

		// Height diff get's bigger with XY distance between charactaers, that's why we map range like so
		const float MaxHeightDiff = UKismetMathLibrary::MapRangeClamped(
					FVector::DistXY(OverlappedCharacter->GetActorLocation(), GetPawn()->GetActorLocation()),
					50, MaxDistance,
					MinUpVisionSize, MaxUpVisionSize);

		if(LookAngle > MaxVisionAngle || HeightDiff > MaxHeightDiff)
			continue;

		// Death state
		bool bIsDead = false;
		if (UKismetSystemLibrary::DoesImplementInterface(OverlappedCharacter, UALS_HumanAI_InterfaceCpp::StaticClass()))
			IALS_HumanAI_InterfaceCpp::Execute_HAI_GetDeathState(OverlappedCharacter, bIsDead);
		
		// Is Enemy ?
		bool bIsEnemy = IsPawnEnemyFor(OverlappedCharacter);

		if (!bIsDead && bIsEnemy && !CheckIsInFoliage(OverlappedCharacter))
		{
			// Trace from AI head to character head
			ACharacter* PawnCharacter = Cast<ACharacter>(GetPawn());
			checkf(PawnCharacter, TEXT("Make sure AI Controller Controls ACharacter's child class"));

			const FVector Start = PawnCharacter->GetMesh()->GetSocketLocation(HeadSocketName);
			FVector End = OverlappedCharacter->GetMesh()->GetSocketLocation(HeadSocketName);
			End -= UKismetMathLibrary::FindLookAtRotation(Start, End).Vector() * 10.f;
			
			// ignore ourselfs and target character's actor
			QueryParams.ClearIgnoredActors();
			QueryParams.AddIgnoredActor(OverlappedCharacter);
			QueryParams.AddIgnoredActor(GetPawn());

			// If nothing blocks our view, add it to characters list
			bool bBlockingHit = World->SweepTestByChannel(Start, End, FQuat::Identity,
				ECC_Visibility, FCollisionShape::MakeSphere(6.f), QueryParams);
			if(!bBlockingHit)
			{
				CharactersList.Emplace(MoveTemp(OverlappedCharacter));
			}
		}
	}
	// Set Any detected value
	AnyDetected = !CharactersList.IsEmpty();
}

//@TODO: Draw debug shapes for debugging
void AALS_HumanAI_ControllerCpp::FindOtherComrate(bool& ReturnValid, TArray<ACharacter*>& ReturnCharacters, float Radius)
{
	ReturnCharacters.Empty();
    ReturnValid = false;
	
	if (!GetPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("Trying to get comrades of AI with [%s] controller, but GetPawn() returned NULL"), *GetName());
		return;
	}

	auto World = GetPawn()->GetWorld();
	if (!World)
	{
		UE_LOG(LogTemp, Warning, TEXT("World is null for [%s]"), *GetPawn()->GetName());
		return;
	}
	
	// Run Sphere Overlap For Characters
	FCollisionObjectQueryParams CollisionObjectQueryParams{};
	CollisionObjectQueryParams.AddObjectTypesToQuery(ECC_Pawn);

	FCollisionQueryParams QueryParams{};
	QueryParams.AddIgnoredActor(GetPawn());
	
	TArray<FOverlapResult> Overlaps{};
	World->OverlapMultiByObjectType(Overlaps,
		GetPawn()->GetActorLocation(), GetPawn()->GetActorQuat(), CollisionObjectQueryParams, FCollisionShape::MakeSphere(Radius), QueryParams);
	
	for (FOverlapResult& OverlapResult : Overlaps)
	{
		ACharacter* OverlappedCharacter = Cast<ACharacter>(OverlapResult.GetActor());
		
		// if overlapped actor has Human_AI gameplay tag, not dead and isn't enemy, add it to return array
		if (IsValid(OverlappedCharacter) && OverlappedCharacter->ActorHasTag("Human_AI"))
		{
			if (UKismetSystemLibrary::DoesImplementInterface(OverlappedCharacter, UALS_HumanAI_InterfaceCpp::StaticClass()))
			{
				bool bIsDead = false;
				IALS_HumanAI_InterfaceCpp::Execute_HAI_GetDeathState(OverlappedCharacter, bIsDead);
				bool bIsEnemy =  IsPawnEnemyFor(OverlappedCharacter);
				if (!bIsDead && !bIsEnemy)
				{
					ReturnCharacters.Emplace(OverlappedCharacter);
				}
			}
		}
	}
	ReturnValid = !ReturnCharacters.IsEmpty();
}

//@TODO: Refactor
// FUNCTION CALLABLE - Base Tick Function - Choose Best Enemy Actor And Save It To Variable
void AALS_HumanAI_ControllerCpp::ChooseEnemyActor(float InterpSpeedMultiplyDown, float InterpSpeedMultiplyUp, float DetectedStateTolerance)
{
	bool BestTargetEnemyValid = false;
	bool LODsStateValid = LODsStateIndexC == 0 || LODsStateIndexC == 1;
	// Step 1) Choose Enemy Actor (Combine Two Methods - Trace Or Sight Pereption)
	
	ACharacter* EnemyFromCompSight = nullptr;
	ACharacter* LocalCharacter = nullptr;
	if (UseTraceSightPercept())
	{
		LocalCharacter = EnemyFromTraceC;
	}
	else
	{
		GetBestEnemyFromSight(0, BestTargetEnemyValid, EnemyFromCompSight);
		if (BestTargetEnemyValid == true)
		{
			LocalCharacter = EnemyFromCompSight;
		}
		else
		{
			if (LODsStateValid && TracePerceptionEnemyValidC == true && IsValid(EnemyFromTraceC) == true)
			{
				LocalCharacter = EnemyFromTraceC;
			}
			else
			{
				LocalCharacter = EnemyFromCompSight;
			}
		}
	}
	// Step 2)
	bool EnemyIsValidCheck = false;
	if (UseTraceSightPercept() == true)
	{
		EnemyIsValidCheck = TracePerceptionEnemyValidC;
	}
	else
	{
		if (LODsStateValid && TracePerceptionEnemyValidC == true && IsValid(EnemyFromTraceC) == true)
		{
			EnemyIsValidCheck = TracePerceptionEnemyValidC;
		}
		else
		{
			EnemyIsValidCheck = BestTargetEnemyValid && IsValid(EnemyFromCompSight);
		}
	}
	
	// Step 3)
	if (EnemyIsValidCheck == true && IsValid(LocalCharacter))
	{
		// When See Choosed Enemy Character
		float DetectedTargetTime = InterpSpeedMultiplyUp * UKismetMathLibrary::SelectFloat(4.0, 8.0, LocalCharacter->IsPlayerControlled());
		DetectedTargetTime *= UKismetMathLibrary::MapRangeClamped(
			UKismetMathLibrary::Vector_Distance(LocalCharacter->GetActorLocation(), GetPawn()->GetActorLocation()),
			50, 400,
			4, 1);
		DetectedEnemyTimeC = UKismetMathLibrary::FInterpTo(DetectedEnemyTimeC, 1.0,
		                                                   UGameplayStatics::GetWorldDeltaSeconds(this),
		                                                   DetectedTargetTime);
	}
	else
	{
		// When Not See Any Enemy Character
		DetectedEnemyTimeC = UKismetMathLibrary::FInterpTo(DetectedEnemyTimeC, 0.0,
		                                                   UGameplayStatics::GetWorldDeltaSeconds(this),
		                                                   0.2 * InterpSpeedMultiplyDown);
	}
	// Step 4)
	DetectedEnemyC = DetectedEnemyTimeC > DetectedStateTolerance;
	// Step 5)
	if (IsValid(LocalCharacter) == true)
	{
		TargetEnemyActorC = LocalCharacter;
	}
	// Step 6)
	CombatModeTimeC = UKismetMathLibrary::FInterpTo(CombatModeTimeC, DetectedEnemyC * 1.f,
	                                                UGameplayStatics::GetWorldDeltaSeconds(this),
	                                                DetectedEnemyC ? 10.f : FMath::Lerp(0.08, 0.015, InteligenceC));
}

//@TODO: Refactor
void AALS_HumanAI_ControllerCpp::SetFocusActorTransformFast(AActor* FocusActor, FTransform NewTransform,
                                                            float InterpSpeedA, float InterpSpeedB, bool PrintInfo)
{
	auto ControlledAICharacter = Cast<ACharacter>(GetPawn());
	if (!ControlledAICharacter)
	{
		return;
	}

	if (FocusActor)
	{
		float MappedSpeed = 1;
		float MultiplyByRotMode = 1;
		if (RotationModeIndexC == 0 || RotationModeIndexC == 1)
		{
			MultiplyByRotMode = 1;
		}
		else
		{
			MultiplyByRotMode = 1.1;
		}
		if (IsValid(TargetEnemyActorC))
		{
			float MappedDistanceTo = UKismetMathLibrary::MapRangeClamped(
				UKismetMathLibrary::Vector_Distance(TargetEnemyActorC->GetActorLocation(),
				                                    ControlledAICharacter->GetActorLocation()), 300, 3000, 1, 0.8);
			MappedSpeed = MappedDistanceTo * UKismetMathLibrary::SelectFloat(1.0, 0.8, DetectedEnemyC);
			MappedSpeed = MappedSpeed * MultiplyByRotMode;
			if (AttackStateIndexC == 0 || AttackStateIndexC == 1)
			{
				MappedSpeed = MappedSpeed - 0.15;
			}
			MappedSpeed = UKismetMathLibrary::FClamp(MappedSpeed, 0.1, 1);
		}
		else
		{
			MappedSpeed = 0.8 * MultiplyByRotMode;
			if (AttackStateIndexC == 0 || AttackStateIndexC == 1)
			{
				MappedSpeed = MappedSpeed - 0.15;
			}
			MappedSpeed = UKismetMathLibrary::FClamp(MappedSpeed, 0.1, 1);
		}
		if (PrintInfo == true)
		{
			GEngine->AddOnScreenDebugMessage(-1, 0, FColor::Cyan, FVector(0, MappedSpeed, 0).ToString());
		}
		FTransform TargetTransform = UKismetMathLibrary::TInterpTo(FocusActor->GetActorTransform(), NewTransform,
		                                                           UGameplayStatics::GetWorldDeltaSeconds(this),
		                                                           UKismetMathLibrary::MapRangeUnclamped(
			                                                           MappedSpeed, 0.1, 1, InterpSpeedA,
			                                                           InterpSpeedB));
		UKismetMathLibrary::MapRangeUnclamped(MappedSpeed, 0.1, 1, InterpSpeedA, InterpSpeedB);
		FocusActor->SetActorTransform(TargetTransform, false);
	}
	else
	{
		return;
	}
}

//@TODO: Refactor
void AALS_HumanAI_ControllerCpp::GetEnemyFromOtherAIs(bool CheckDistanceToPlayer, bool& ReturnValid,
                                                      ACharacter*& ReturnCharacter)
{
	auto ControlledAICharacter = Cast<ACharacter>(GetPawn());
	if (!ControlledAICharacter)
	{
		return;
	}

	TArray<AActor*> OverlapedActors; //Actors Array
	TArray<AActor*> ToIgnore; //Actors Array For Setup Sphere Overlap
	TArray<AActor*> ActorsList; //Valid Characters List With Detected Enemy
	ACharacter* OverlapedChar = nullptr; //For Loop Character
	ACharacter* EnemyActor = nullptr; //Interface Value
	bool LocDetectedEnemy = false;
	float LocDetectedTime = 0;
	EObjectTypeQuery MyTraceQuery = UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn);
	TArray<TEnumAsByte<EObjectTypeQuery>, FDefaultAllocator> TraceObjectsArray;
	TraceObjectsArray.Add(MyTraceQuery); //Make Objects Array For Trace
	ToIgnore.Add(ControlledAICharacter);

	if (CheckDistanceToPlayer == true)
	{
		APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
		if (UKismetMathLibrary::Vector_Distance(PlayerPawn->GetActorLocation(),
		                                        ControlledAICharacter->GetActorLocation()) > 2000)
		{
			ReturnValid = false;
			ReturnCharacter = nullptr;
			return;
		}
		// Run Sphere Overlap For Characters
		const bool OverlapValid = UKismetSystemLibrary::SphereOverlapActors(
			ControlledAICharacter, ControlledAICharacter->GetActorLocation(), 1000, TraceObjectsArray,
			TSubclassOf<ACharacter>(), ToIgnore, OverlapedActors);
		if (OverlapValid == true)
		{
			for (AActor* ArrElement : OverlapedActors)
			{
				LocDetectedTime = 0; //Set Default Value
				LocDetectedEnemy = false; //Set Default Value
				EnemyActor = nullptr; //Set Default Value
				OverlapedChar = Cast<ACharacter>(ArrElement);
				if (IsValid(OverlapedChar) == true)
				{
					IALS_HumanAI_InterfaceCpp* CharInterface = Cast<IALS_HumanAI_InterfaceCpp>(OverlapedChar);
					//Cas To Interface
					if (UKismetSystemLibrary::DoesImplementInterface(OverlapedChar,
					                                                 UALS_HumanAI_InterfaceCpp::StaticClass()))
					{
						CharInterface->Execute_HAI_GetControllerSmallValues(
							OverlapedChar, LocDetectedEnemy, LocDetectedTime, EnemyActor);
						if (LocDetectedTime > 0.6 && IsValid(EnemyActor) == true)
						{
							ActorsList.Emplace(OverlapedChar);
						}
					}
				}
			}
			if (ActorsList.Num() == 0)
			{
				ReturnValid = false;
				ReturnCharacter = nullptr;
				return;
			}
			bool ReturnNearFromList = false;
			AActor* ReturnNearActor = nullptr;
			UHelpfulFunctionsBPLibrary::GetNearFromActorsArray(this, ActorsList,
			                                                   ControlledAICharacter->GetActorLocation(),
			                                                   ReturnNearFromList, ReturnNearActor);
			IALS_HumanAI_InterfaceCpp* CharBestInterface = Cast<IALS_HumanAI_InterfaceCpp>(ReturnNearActor);
			//Cas To Interface
			CharBestInterface->Execute_HAI_GetControllerSmallValues(ReturnNearActor, LocDetectedEnemy, LocDetectedTime,
			                                                        EnemyActor);
			ReturnValid = IsValid(EnemyActor);
			ReturnCharacter = Cast<ACharacter>(EnemyActor);
			return;
		}
	}
	return;
}

//@TODO: Refactor
float AALS_HumanAI_ControllerCpp::GetTheAverageValueOfSpottedEnemiesFast(float InRadius)
{
	return 0.0;
	/*
	bool OtherValid = false;
	float LocalFloat = 0;
	TArray<ACharacter*> ComrateActorsArray;
	ACharacter* OverlapedChar = nullptr;
	FindOtherComrate(OtherValid, ComrateActorsArray, InRadius);
	ACharacter* EnemyActor = nullptr; //Interface Value
	bool LocDetectedEnemy = false; //Interface Value
	float LocDetectedTime = 0; //Interface Value
	if (ComrateActorsArray.Num() > 0)
	{
		for (AActor* ArrElement : ComrateActorsArray)
		{
			LocDetectedTime = 0; //Set Default Value
			LocDetectedEnemy = false; //Set Default Value
			EnemyActor = nullptr; //Set Default Value
			OverlapedChar = Cast<ACharacter>(ArrElement);
			IALS_HumanAI_InterfaceCpp* CharInterface = Cast<IALS_HumanAI_InterfaceCpp>(OverlapedChar); //Cas To Interface
			if (UKismetSystemLibrary::DoesImplementInterface(OverlapedChar, UALS_HumanAI_InterfaceCpp::StaticClass()))
			{
				CharInterface->Execute_HAI_GetControllerSmallValues(OverlapedChar, LocDetectedEnemy, LocDetectedTime, EnemyActor);
				if (LocDetectedEnemy == true && IsValid(EnemyActor) == true)
				{
					LocalFloat = LocalFloat + 1.0;
				}
			}
		}
		return UKismetMathLibrary::SafeDivide(LocalFloat, ComrateActorsArray.Num() * 1.0);
	}
	*/
}