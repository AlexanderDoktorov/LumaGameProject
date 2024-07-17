// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Actors/LocallyCastedActor.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"


ALocallyCastedActor::ALocallyCastedActor()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>("Root");
}


void ALocallyCastedActor::BeginPlay()
{
	Super::BeginPlay();

	// By default disable collisions
	SetPrimitiveCollisionEnabled(false);
	
	// Hide all meshes on begin play so only their overlay material is shown
	MakeMaterialsTransparent();
	SetActorHiddenInGame(true);
}

void ALocallyCastedActor::AddBoxCollision()
{
	AddNewPrimitive<UBoxComponent>();
}

void ALocallyCastedActor::AddSphereCollision()
{
	AddNewPrimitive<USphereComponent>();
}

void ALocallyCastedActor::SetPrimitiveCollisionEnabled(bool bEnabled)
{
	for(auto& Primitive : CastPrimitives)
	{
		if(!Primitive)
			continue;
		
		Primitive->SetCollisionEnabled(bEnabled ? ECollisionEnabled::QueryOnly : ECollisionEnabled::NoCollision);
		Primitive->SetCollisionObjectType(ECC_WorldStatic);
		Primitive->SetCollisionResponseToAllChannels(ECR_Ignore);
		Primitive->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	}
}

void ALocallyCastedActor::MakeMaterialsTransparent_Implementation()
{
	TArray<UStaticMeshComponent*> StaticMeshComponents{};
	GetComponents(UStaticMeshComponent::StaticClass(), StaticMeshComponents);
	for(auto& StaticMeshComp : StaticMeshComponents)
	{
		if(!StaticMeshComp)
			continue;
		
		StaticMeshComp->SetScalarParameterValueOnMaterials(MaterialParamName_OpacityMask, 0.f);
	}
}
