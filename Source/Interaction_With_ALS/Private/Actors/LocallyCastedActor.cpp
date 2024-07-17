// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Actors/LocallyCastedActor.h"


ALocallyCastedActor::ALocallyCastedActor()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALocallyCastedActor::BeginPlay()
{
	Super::BeginPlay();

	for(auto& Primitive : CastPrimitives)
	{
		Primitive->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		Primitive->SetCollisionObjectType(ECC_WorldStatic);
		Primitive->SetCollisionResponseToAllChannels(ECR_Ignore);
		Primitive->SetCollisionResponseToChannel(ECC_Pawn, ECR_Overlap);
	}
}

