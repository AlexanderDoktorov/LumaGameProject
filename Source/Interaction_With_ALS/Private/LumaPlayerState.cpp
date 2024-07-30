// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaPlayerState.h"
#include "Components/LumaAbilitySystemComponent.h"

// Change default ability system component to luma ability system
ALumaPlayerState::ALumaPlayerState(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass(PlayerAbilitySystemComponentName, ULumaAbilitySystemComponent::StaticClass()))
{
	
}
