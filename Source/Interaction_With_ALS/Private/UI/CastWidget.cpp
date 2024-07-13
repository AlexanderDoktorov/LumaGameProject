// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/CastWidget.h"
#include "LumaCharacterBase.h"
#include "LumaPlayerController.h"
#include "Components/Button.h"
#include "Components/Image.h"

void UCastWidget::NativeConstruct()
{
	Super::NativeConstruct();

	CastSelectorButton->OnHovered.AddDynamic(this, &ThisClass::OnButtonHovered);
	CastSelectorButton->OnPressed.AddDynamic(this, &ThisClass::OnButtonPressed);
	CastSelectorButton->OnClicked.AddDynamic(this, &ThisClass::OnButtonClicked);
	CastSelectorButton->OnUnhovered.AddDynamic(this, &ThisClass::OnButtonUnHovered);
	CastSelectorButton->SynchronizeProperties();
}

void UCastWidget::SetFromCastableAbilityDesc(FCastableAbilityDesc AbilityDesc)
{
	CastableAbilityDesc = AbilityDesc;

	MatchImageTexture();
	MatchButtonColorToCastType();
}

void UCastWidget::MatchButtonColorToCastType()
{
	if(CastableAbilityDesc.GetPrimaryEmotion() == EEmotion::None)
		return;

	FButtonStyle ButtonStyle = CastSelectorButton->GetStyle();
	ButtonStyle.Normal.TintColor = GetCastColor(CastableAbilityDesc.PrimaryEmotion);
	ButtonStyle.Hovered.TintColor = GetCastColor(CastableAbilityDesc.PrimaryEmotion).ReinterpretAsLinear() * 0.55f;
	ButtonStyle.Pressed.TintColor = GetCastColor(CastableAbilityDesc.PrimaryEmotion).ReinterpretAsLinear() * 0.15f;
	CastSelectorButton->SetStyle(ButtonStyle);
}

void UCastWidget::MatchImageTexture()
{
	if(CastImage)
		CastImage->SetBrushFromSoftTexture(CastableAbilityDesc.CastableObjectPreview);
}

void UCastWidget::SyncShapeBetweenStyles()
{
	FButtonStyle ButtonStyle = CastSelectorButton->GetStyle();
	ButtonStyle.Hovered.DrawAs = ButtonStyle.Normal.DrawAs;
	ButtonStyle.Pressed.DrawAs = ButtonStyle.Normal.DrawAs;
	ButtonStyle.Disabled.DrawAs = ButtonStyle.Normal.DrawAs;

	ButtonStyle.Hovered.OutlineSettings = ButtonStyle.Normal.OutlineSettings;
	ButtonStyle.Pressed.OutlineSettings = ButtonStyle.Normal.OutlineSettings;
	ButtonStyle.Disabled.OutlineSettings = ButtonStyle.Normal.OutlineSettings;
}

void UCastWidget::OnButtonHovered()
{

}

void UCastWidget::OnButtonClicked()
{
	OnButtonPressed();
}

void UCastWidget::OnButtonPressed()
{
	if(auto PlayerController = Cast<ALumaPlayerController>(GetOwningPlayer()))
	{
		if(auto LumaCharacter = Cast<ALumaCharacterBase>(PlayerController->GetPawn()))
		{
			LumaCharacter->PeformLumaCast(CastableAbilityDesc);
		}
	}
}

void UCastWidget::OnButtonUnHovered()
{
}
