// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "LumaAttributeSet.h"
#include "LumaCapsule.h"
#include "LumaGameplayTags.h"
#include "Interfaces/CastableInterface.h"

ALumaCharacterBase::ALumaCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass("Attributes", ULumaAttributeSet::StaticClass()))
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALumaCharacterBase::TryPerformLumaCast()
{
	if(GetActiveLumaCapsule() && GetActiveLumaCapsule()->IsCharged())
	{
		// Spawn actor from charging properties
		if(auto CastableObjectClass = GetActiveLumaCapsule()->GetChargingProperties().CastableObjectClass)
		{
			if(CastableObjectClass->ImplementsInterface(UCastableInterface::StaticClass()))
			{
				if(auto DefaultCastableObject = CastableObjectClass->GetDefaultObject<UObject>())
					ICastableInterface::Execute_OnLumaCastPerformed(DefaultCastableObject, this);
			}
		}
	}
}

void ALumaCharacterBase::ChargeLumaCapsule(const FCapsuleChargingProperties& ChargingProperties)
{
	FGameplayTagContainer TagsToActivate { TAG_Action_SpawnCapsule };
	if(GetAbilitySystemComponent()->TryActivateAbilitiesByTag(TagsToActivate))
	{
		// Charge with params
		ActiveLumaCapsule->Charge(ChargingProperties);
		ActiveLumaCapsule->SetActorEnableCollision(true);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to activate capsule charging ability"));
	}
}

void ALumaCharacterBase::SetActiveLumaCapsule(ALumaCapsule* NewActiveLumaCapsule)
{
	ActiveLumaCapsule = NewActiveLumaCapsule;
	// Attach to socket of skeletal mesh
	if(ActiveLumaCapsule)
	{
		ActiveLumaCapsule->SetOwner(this);
		ActiveLumaCapsule->AttachToComponent(
			GetMesh(),
			{EAttachmentRule::SnapToTarget, true},
			CapsuleSocketName);
	}
}

ALumaCapsule* ALumaCharacterBase::GetActiveLumaCapsule() const
{
	if(!IsValid(ActiveLumaCapsule) || ActiveLumaCapsule->IsHidden())
		return nullptr;
	return ActiveLumaCapsule;
}


int32 ALumaCharacterBase::GetNumCapsules() const
{
	if(!GetAbilitySystemComponent())
		return -1;
	
	return FMath::RoundToInt(GetAbilitySystemComponent()->GetNumericAttribute(ULumaAttributeSet::GetLumaAttribute()));
}
