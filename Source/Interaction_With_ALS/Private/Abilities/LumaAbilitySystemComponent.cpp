// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "Abilities/LumaAbilitySystemComponent.h"


// Sets default values for this component's properties
ULumaAbilitySystemComponent::ULumaAbilitySystemComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

void ULumaAbilitySystemComponent::BeginPlay()
{
	Super::BeginPlay();
}
