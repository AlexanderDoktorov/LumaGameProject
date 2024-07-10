// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaCharacterBase.h"
#include "LumaAttributeSet.h"
#include "UI/CastWidget.h"

ALumaCharacterBase::ALumaCharacterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer.SetDefaultSubobjectClass("Attributes", ULumaAttributeSet::StaticClass()))
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALumaCharacterBase::OnLumaCastPerform_Implementation(const FCastableObjectDesc& CastableObjectDesc)
{
	
}

void ALumaCharacterBase::PeformLumaCast(const FCastableObjectDesc& CastableObjectDesc)
{
	if(GetAbilitySystemComponent()->TryActivateAbilitiesByTag(CastableObjectDesc.LumaAbilityGameplayTags))
	{
		OnLumaCastPerform(CastableObjectDesc);
	}
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
