// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Actors/LocalCastActor.h"
#include "Selection.h"
#include "Components/MeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ShapeComponent.h"

ALocalCastActor::ALocalCastActor()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("Spawn Root Component");
#if WITH_EDITOR
	PrimitiveClass = UBoxComponent::StaticClass();
#endif
}

void ALocalCastActor::BeginPlay()
{
	Super::BeginPlay();

	// Hide actor
	SetActorHiddenInGame(true);
}


void ALocalCastActor::SetPrimitiveCollisionEnabled(bool bEnabled)
{
	for(auto& Primitive : CastPrimitives)
	{
		if(!Primitive)
			continue;
		
		Primitive->SetCollisionEnabled(bEnabled ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
	}
}

AActor* ALocalCastActor::PerformCast(APawn* InInstigator, bool bDestroyIfSuccess)
{
	if(!CastActorClass)
		return nullptr;
	
	if(auto World = GetWorld())
	{
		const FVector SpawnLocation = RootComponent->GetComponentLocation();
		const FRotator SpawnRotation = RootComponent->GetComponentRotation();
		
		FActorSpawnParameters ActorSpawnParameters{};
		ActorSpawnParameters.Instigator = InInstigator;

		AActor* SpawnedActor = World->SpawnActor(CastActorClass, &SpawnLocation, &SpawnRotation, ActorSpawnParameters);
		if(SpawnedActor)
		{
			SetActorHiddenInGame(true);
			bHasBeenCasted = true;
			if(bDestroyIfSuccess)
				Destroy();
		}
		
		return SpawnedActor;
	}
	return nullptr;
}

void ALocalCastActor::OnLumaSelectorWidgetOpen()
{
	// Enable primitives collision
	SetPrimitiveCollisionEnabled(true);
	// Unhide
	SetActorHiddenInGame(false);
}

void ALocalCastActor::OnLumaSelectorWidgetClosed()
{
	// Disable primitives collision
	SetPrimitiveCollisionEnabled(false);
	// Hide
	SetActorHiddenInGame(true);
}

#if WITH_EDITOR
void ALocalCastActor::AddPrimitive()
{
	UPrimitiveComponent* Primitive = NewObject<UPrimitiveComponent>(this, PrimitiveClass, "CastPrimitive");
	if(Primitive)
	{
		Primitive->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		Primitive->SetCollisionResponseToAllChannels(ECR_Ignore);
		Primitive->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
		Primitive->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
		Primitive->RegisterComponent();
		if(auto ShapeComponent = Cast<UShapeComponent>(Primitive))
		{
			ShapeComponent->ShapeColor = CastPrimitiveColor;
			ShapeComponent->SetLineThickness(2.f);
		}
		AddInstanceComponent(Primitive);
		CastPrimitives.Add(Primitive);
	}
	
	USelection* Selection = GEditor->GetSelectedActors();
	Selection->Deselect(this);
	FViewportClient* ViewportClient = GEditor->GetActiveViewport()->GetClient();
	ViewportClient->RedrawRequested(GEditor->GetActiveViewport());
	if(bSelectNewlyCreatedComponent)
		GEditor->SelectComponent(Primitive, true, true);
	else
		GEditor->SelectActor(this, true, true);
}
#endif