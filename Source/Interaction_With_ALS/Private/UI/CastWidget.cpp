// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/CastWidget.h"

#include "AbilitySystemGlobals.h"
#include "LumaCharacterBase.h"
#include "Abilities/LumaCastAbility.h"
#include "Actors/LocalCastActor.h"
#include "Components/Button.h"
#include "Components/Image.h"

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

void UCastWidget::OnButtonClicked()
{
	// No default realization
}

void UCastWidget::OnButtonPressed()
{
	// No default realization
}

//////////////////////////////////////////////////////////////////////////
// Context Cast Widget
//////////////////////////////////////////////////////////////////////////


void UContextCastWidget::SetContextAbility(const ULumaContextCastAbility* ContextCastAbility)
{
	CastAbility = ContextCastAbility;

	// Set preview from ability
	if(ContextCastAbility)
	{
		SetPreview(ContextCastAbility->GetAbilityPreview());
	}
}

void UContextCastWidget::OnButtonPressed()
{
	if(!CastAbility.IsValid())
		return;
	
	if(auto OwnerAsc = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwningPlayerPawn()))
	{
		// Activate an ability by the spec handle from it
		if(!OwnerAsc->TryActivateAbility(CastAbility->GetCurrentAbilitySpecHandle()))
		{
			UE_LOG(LogTemp, Warning, TEXT("Unable to activate [%s] ability from context cast widget"), *CastAbility->GetName());
		}
		else
			OnLumaCast().Broadcast();
	}
}

bool UContextCastWidget::TryActivateCastAbility()
{
	if(!CastAbility.IsValid())
		return false;

	APawn* Pawn = GetOwningPlayerPawn();
	if(!Pawn)
		return false;

	auto OwnerAsc = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Pawn);
	if(!OwnerAsc)
		return false;
	
	// Activate an ability by the spec handle from it
	if(!OwnerAsc->TryActivateAbility(CastAbility->GetCurrentAbilitySpecHandle()))
	{
#ifdef UE_BUILD_DEBUG
		if(CastAbility->GetCooldownTimeRemaining() > 0.f)
			UE_LOG(LogTemp, Log, TEXT("[%s] ability with [%s] spec handle is on cooldown"), *CastAbility->GetName(), *CastAbility->GetCurrentAbilitySpecHandle().ToString());
#endif
		return false;
	}
	else
		OnLumaCast().Broadcast();
	
	return true;
}


//////////////////////////////////////////////////////////////////////////
// Local cast widget
//////////////////////////////////////////////////////////////////////////

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