// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"

#include "AbilitySystemBlueprintLibrary.h"
#include "LumaGameplayTags.h"
#include "Abilities/LumaAbilitySystemComponent.h"
#include "Abilities/LumaCastAbility.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "AttributeSets/LumaAttributeSet.h"
#include "Objects/CastableObjectData.h"

ALumaCharacterBase::ALumaCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(
		ObjectInitializer.SetDefaultSubobjectClass("Attributes", ULumaAttributeSet::StaticClass())
		.SetDefaultSubobjectClass("AbilitySystemComp", ULumaAbilitySystemComponent::StaticClass()))
{
	PrimaryActorTick.bCanEverTick = true;

	// Add new attribute set so ability system && luma system component can manage emotional state of the owner
	EmotionsAttributes = CreateDefaultSubobject<UEmotionsAttributeSet>("Emotion attributes");
}

void ALumaCharacterBase::OnLumaCastPerform_Implementation(const FCastableObjectDesc& CastableAbilityDesc)
{
	
}

void ALumaCharacterBase::ActivateLumaCastAbility(const FCastableObjectDesc& ObjectDesc)
{
	UAbilitySystemComponent* ASC = GetAbilitySystemComponent();
	check(ASC);
	
	UCastableObjectData* ObjectData = NewObject<UCastableObjectData>(GetTransientPackage());
	ObjectData->CastableObjectDesc = ObjectDesc;
	
	FGameplayEventData EventData{};
	EventData.EventTag = LumaGameplayTags::TAG_Event_LumaCast;
	EventData.OptionalObject = ObjectData;
	EventData.Instigator = GetController();

	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(this, EventData.EventTag, EventData);
}

int32 ALumaCharacterBase::GetNumCapsules() const
{
	if(!GetAbilitySystemComponent())
		return -1;
	
	return FMath::RoundToInt(GetAbilitySystemComponent()->GetNumericAttribute(ULumaAttributeSet::GetLumaAttribute()));
}

void ALumaCharacterBase::BeginPlay()
{
	Super::BeginPlay();
}
