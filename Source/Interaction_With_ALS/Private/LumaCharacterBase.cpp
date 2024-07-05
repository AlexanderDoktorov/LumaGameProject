// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "LumaAttributeSet.h"
#include "LumaGameplayTags.h"
#include "Abilities/LumaCastAbilityEventData.h"

ALumaCharacterBase::ALumaCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass("Attributes", ULumaAttributeSet::StaticClass()))
{
	PrimaryActorTick.bCanEverTick = true;

}

void ALumaCharacterBase::TryPerformLumaCast(const ECastType& CastType)
{
	// Fill Payload with info
	FGameplayEventData Payload{};
	auto EventData = NewObject<ULumaCastAbilityEventData>(GetTransientPackage(), "CastEventData");
	EventData->CastType = CastType;
	Payload.OptionalObject = EventData;

	// Send ability an event and if it has trigger set up it will activate the ability with this payload
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(this, TAG_Event_LumaCast, Payload);
}
