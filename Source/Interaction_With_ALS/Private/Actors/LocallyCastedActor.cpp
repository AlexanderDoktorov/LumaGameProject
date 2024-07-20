// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Actors/LocallyCastedActor.h"
#include "Selection.h"
#include "Components/MeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/ShapeComponent.h"

ALocallyCastedActor::ALocallyCastedActor()
{
	PrimaryActorTick.bCanEverTick = true;
#if WITH_EDITOR
	PrimitiveClass = UBoxComponent::StaticClass();
#endif
}

void ALocallyCastedActor::BeginPlay()
{
	Super::BeginPlay();

	if(!bInitilizeAsCastable)
	{
		SetPrimitiveCollisionEnabled(false);
		bHasBeenReseted = true;
		return;
	}

	// Fill Default Primitives Set
	TArray<const UActorComponent*> DefaultComponemnts;
	GetActorClassDefaultComponents(GetClass(), UPrimitiveComponent::StaticClass(), DefaultComponemnts);
	for(auto& Comp: DefaultComponemnts)
	{
		if(auto Primitive = Cast<UPrimitiveComponent>(Comp))
			DefaultPrimtivies.Add(Primitive);
	}
	
	// By default disable all the primitives collisions
	ForEachComponent<UPrimitiveComponent>([this](UPrimitiveComponent*& Component)
	{
		Component->BodyInstance.bSimulatePhysics = false;
		Component->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		
		// And if it is mesh comp, set it's overlay material
		if(!OverlayMaterial)
			return;
		
		if(auto MeshComp = Cast<UMeshComponent>(Component))
			MeshComp->SetOverlayMaterial(OverlayMaterial);
	});

	// Hide actor
	SetActorHiddenInGame(true);

	// Hide all meshes on begin play so only their overlay material is shown
	SetMateialsOpacityMask(0.f);
}


void ALocallyCastedActor::SetPrimitiveCollisionEnabled(bool bEnabled)
{
	for(auto& Primitive : CastPrimitives)
	{
		if(!Primitive)
			continue;
		
		Primitive->SetCollisionEnabled(bEnabled ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
	}
}

void ALocallyCastedActor::OnLumaSelectorWidgetOpen()
{
	// Enable primitives collision
	SetPrimitiveCollisionEnabled(true);
	// Unhide
	SetActorHiddenInGame(false);
}

void ALocallyCastedActor::OnLumaSelectorWidgetClosed()
{
	// Disable primitives collision
	SetPrimitiveCollisionEnabled(false);
	// Hide
	SetActorHiddenInGame(true);
}

void ALocallyCastedActor::ResetToInitialState()
{
	// Unhide actor
	SetActorHiddenInGame(false);

	// Return opaque materials back
	SetMateialsOpacityMask(1.f);

	// For each component find it's default version
	ForEachComponent<UPrimitiveComponent>([this](UPrimitiveComponent* PrimitiveComponent)
	{
		auto FoundDefaultComponent = DefaultPrimtivies.FindByPredicate([&PrimitiveComponent](const TWeakObjectPtr<const UPrimitiveComponent>& Prt){
			FString NameWithoutSuffix = Prt->GetName();
			NameWithoutSuffix.RemoveFromEnd(Prt->ComponentTemplateNameSuffix);
			return NameWithoutSuffix == PrimitiveComponent->GetName();
		});
		if(FoundDefaultComponent)
		{
			// And set 
			PrimitiveComponent->BodyInstance.bSimulatePhysics = (*FoundDefaultComponent)->BodyInstance.bSimulatePhysics;
			PrimitiveComponent->SetCollisionEnabled((*FoundDefaultComponent)->GetCollisionEnabled());

			if(UMeshComponent* Mesh = Cast<UMeshComponent>(PrimitiveComponent))
				Mesh->SetOverlayMaterial(nullptr);
		}
	});

	bHasBeenReseted = true;
}

void ALocallyCastedActor::SetMateialsOpacityMask(float Opacity)
{
	Opacity = FMath::Clamp(Opacity, 0.f, 1.f);
	ForEachComponent<UStaticMeshComponent>([&Opacity](UStaticMeshComponent*& Component)
	{
		Component->SetScalarParameterValueOnMaterials(MaterialParamName_OpacityMask, Opacity);
	});
}

#if WITH_EDITOR
void ALocallyCastedActor::AddPrimitive()
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