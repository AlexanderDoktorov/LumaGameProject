// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/CastWidget.h"

#include "AbilitySystemGlobals.h"
#include "LumaCharacterBase.h"
#include "Abilities/LumaCastAbility.h"
#include "Actors/LocalCastActor.h"
#include "Components/Button.h"
#include "Components/Image.h"

/********** BEGIN UCastWidget BEGIN **********/

void UCastWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	CastSelectorButton->OnPressed.AddDynamic(this, &ThisClass::OnButtonPressed);
	CastSelectorButton->OnClicked.AddDynamic(this, &ThisClass::OnButtonClicked);
	CastSelectorButton->SynchronizeProperties();
}

void UCastWidget::SyncStyle()
{
	if(!CastSelectorButton)
		return;

	FButtonStyle ButtonStyle = CastSelectorButton->GetStyle();
	ButtonStyle.Hovered = ButtonStyle.Normal;
	ButtonStyle.Pressed = ButtonStyle.Normal;
	ButtonStyle.Disabled = ButtonStyle.Normal;

	FSlateColor NormalTint = ButtonStyle.Normal.TintColor;
	float HoveredMultiplier = 0.7f;
	float PressedMultiplier = 0.5f;
	float DisabledMultiplier = 0.1f;

	ButtonStyle.Hovered.TintColor = NormalTint.GetSpecifiedColor() * HoveredMultiplier;
	ButtonStyle.Pressed.TintColor = NormalTint.GetSpecifiedColor() * PressedMultiplier;
	ButtonStyle.Disabled.TintColor = NormalTint.GetSpecifiedColor() * DisabledMultiplier;

	CastSelectorButton->SetStyle(ButtonStyle);
	
}

void UCastWidget::SetPreview(const TSoftObjectPtr<UTexture2D>& PreviewTexture)
{
	if(CastImage)
		CastImage->SetBrushFromSoftTexture(PreviewTexture);
}

void UCastWidget::SetAbilityTag(const FGameplayTag& NewAbilityCastTag)
{
	AbilityCastTag = NewAbilityCastTag;
}

void UCastWidget::OnButtonClicked()
{
	OnButtonPressed();
}

void UCastWidget::OnButtonPressed()
{
	if(!AbilityCastTag.IsValid())
		return;
	
	if(auto Pawn = GetOwningPlayer())
	{
		if(auto OwnerAsc = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Pawn))
		{
			if(!OwnerAsc->TryActivateAbilitiesByTag( FGameplayTagContainer { AbilityCastTag }))
			{
				UE_LOG(LogTemp, Warning, TEXT("Unable to activate ability from cast widget with [%s] tag"), *AbilityCastTag.GetTagName().ToString())
			}
			else
				OnLumaCast().Broadcast();
		}
	}
}

void ULocalCastWidget::SetLocalActor(ALocalCastActor* LocallyCastedActor)
{
	CastedActor = LocallyCastedActor;
}

void ULocalCastWidget::OnButtonPressed()
{
	if(CastedActor.Get())
	{
		if(!CastedActor->HasBeenCasted())
		{
			CastedActor->PerformCast(GetOwningPlayerPawn());
			OnLumaCast().Broadcast();
		}
	}
}