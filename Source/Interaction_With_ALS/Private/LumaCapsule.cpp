// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaCapsule.h"


// Sets default values
ALumaCapsule::ALumaCapsule()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ALumaCapsule::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALumaCapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

