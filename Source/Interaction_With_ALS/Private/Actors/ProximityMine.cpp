// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Actors/ProximityMine.h"
#include "Animation/AnimSequence.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystem.h"
#include "GeometryCollection/GeometryCollectionComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/PhysicsObjectBlueprintLibrary.h"


// Sets default values
AProximityMine::AProximityMine()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = Mesh = CreateDefaultSubobject<USkeletalMeshComponent>("Mesh");
	
	TriggerSphere = CreateDefaultSubobject<USphereComponent>("Sphere Trigger");
	TriggerSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	TriggerSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	TriggerSphere->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	TriggerSphere->SetupAttachment(RootComponent);

	GeometryCollectionComponent = CreateDefaultSubobject<UGeometryCollectionComponent>("GC_ProximityMine");
	GeometryCollectionComponent->SetupAttachment(Mesh);
	
	AudioComponent = CreateDefaultSubobject<UAudioComponent>("AudioComponent");
}

void AProximityMine::Explode_Implementation()
{
	// Mark as has been exploded
	bHasBeenExploded = true;
	
	// Spawn FX
	UGameplayStatics::SpawnEmitterAtLocation(this, ExplosionFX.LoadSynchronous(), Mesh->GetComponentLocation());

	// Hide Skeletal Mesh
	Mesh->SetHiddenInGame(true);

	// Show geometry collection and enable collision
	GeometryCollectionComponent->SetHiddenInGame(/* bNewHidden = */false);
	GeometryCollectionComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	
	// Add impulse to explode geometry collection
	UPhysicsObjectBlueprintLibrary::ApplyRadialImpulse(
		GeometryCollectionComponent.LoadSynchronous(), GeometryCollectionComponent->GetComponentLocation(),
		30.f, 6000.f, RIF_Constant, true, 200'000'000.f);

	AudioComponent->SetSound(ExplosionSound.LoadSynchronous());
	AudioComponent->Play();

	// Destroy actor after DestroyAfterExplodeDelay seconds
	if(auto World = GetWorld(); DestroyAfterExplodeDelay > 0.f && !World->GetTimerManager().IsTimerActive(DestroyTimerHandle))
	{
		World->GetTimerManager().SetTimer(DestroyTimerHandle, [this]()
		{
			this->Destroy();
		}, DestroyAfterExplodeDelay, false);
	}
}

void AProximityMine::BeginPlay()
{
	TriggerSphere->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnTriggerBeginOverlap);

	// Be default when spawning this actor geometry collection doesn't have any collisions and is hidden
	if(bGeometryCollectionHidden != 0)
	{
		GeometryCollectionComponent->SetHiddenInGame(true);
		GeometryCollectionComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}

	if(!bTriggerEnabled)
	{
		// By default when spawning mine has trigger collision disabled
		TriggerSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	}
	
	Super::BeginPlay();
}

void AProximityMine::SetTriggerEnabled(bool bIsEnabled)
{
	bIsEnabled ? TriggerSphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly) :
		TriggerSphere->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AProximityMine::OnTriggerBeginOverlap_Implementation(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if(!bHasBeenExploded)
	{
		Explode();
	}
}
