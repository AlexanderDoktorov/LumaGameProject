// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "LumaAttributeSet.h"
#include "LumaCapsule.h"
#include "LumaGameplayTags.h"
#include "Abilities/CapsuleChargeEventData.h"
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

void ALumaCharacterBase::ChargeLumaCapsule(const FCapsuleChargingProperties& ChargingProperties)
{
	FGameplayTagContainer TagsToActivate { TAG_Action_ChargeCapsule };
	if(!GetAbilitySystemComponent()->TryActivateAbilitiesByTag(TagsToActivate))
		UE_LOG(LogTemp, Warning, TEXT("Unable to activate capsule charging ability"));

	// Charge with params
	if(ActiveLumaCapsule)
		ActiveLumaCapsule->Charge(ChargingProperties);
}

void ALumaCharacterBase::SetActiveLumaCapsule(ALumaCapsule* NewActiveLumaCapsule)
{
	ActiveLumaCapsule = NewActiveLumaCapsule;
	// Attach to socket of skeletal mesh
	if(ActiveLumaCapsule)
	{
		ActiveLumaCapsule->AttachToComponent(
			GetMesh(),
			{EAttachmentRule::SnapToTarget, true},
			CapsuleSocketName);
	}
}

int32 ALumaCharacterBase::GetNumCapsules() const
{
	if(!GetAbilitySystemComponent())
		return 0;
	
	return FMath::RoundToInt(GetAbilitySystemComponent()->GetNumericAttribute(ULumaAttributeSet::GetLumaAttribute()));
}
