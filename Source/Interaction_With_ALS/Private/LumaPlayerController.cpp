// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaPlayerController.h"
#include "EnhancedInputComponent.h"
#include "LumaCharacterBase.h"
#include "LumaInputDataAsset.h"
#include "EnhancedInputSubsystems.h"
#include "LumaGameplayTags.h"
#include "UI/LumaHUD.h"
#include "UI/LumaCastSelectorWidget.h"

void ALumaPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	if(!InputData)
		return;
	
	if (auto Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		Subsystem->AddMappingContext(InputData->IMC_Default, 0);

	if(auto EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		EnhancedInputComponent->BindAction(InputData->IA_PickUpLumaCapsule, ETriggerEvent::Triggered, this, &ThisClass::Call_PickUpCapsule);
		EnhancedInputComponent->BindAction(InputData->IA_OpenLumaCastSelector, ETriggerEvent::Triggered, this, &ThisClass::SwitchLumaSelectorWidget);
	}
}


void ALumaPlayerController::Call_PickUpCapsule()
{
	if(auto GASPawn = Cast<IAbilitySystemInterface>(GetPawn()))
	{
		if(auto GAS = GASPawn->GetAbilitySystemComponent())
		{
			const FGameplayTagContainer TagsToActivate {LumaGameplayTags::TAG_Interaction_PickItem_Luma };
			if(!GAS->TryActivateAbilitiesByTag(TagsToActivate))
				UE_LOG(LogAbilitySystemComponent, Warning, TEXT("Unable to activate ability"));
		}
	}
}

void ALumaPlayerController::Call_ActivateLumaCastAbility(const FCastableObjectDesc& CastableAbilityDesc)
{
	if(auto pawn = Cast<ALumaCharacterBase>(GetPawn()))
		pawn->ActivateLumaCastAbility(CastableAbilityDesc);
}

void ALumaPlayerController::SwitchLumaSelectorWidget(const FInputActionValue& ActionValue)
{
	ULumaCastSelectorWidget* SelectorWidget = nullptr;
	if(auto LumaHud = Cast<ALumaHUD>(GetHUD()))
    	SelectorWidget = LumaHud->LumaSelectorWidget;

	if(!SelectorWidget)
		return;
	
	if(ActionValue.Get<bool>())
	{
		SelectorWidget->SetVisibility(ESlateVisibility::Visible);
		FInputModeGameAndUI InputMode{};
		InputMode.SetWidgetToFocus(SelectorWidget->GetCachedWidget());
		InputMode.SetLockMouseToViewportBehavior(EMouseLockMode::LockOnCapture);
		SetInputMode(InputMode);
		SetShowMouseCursor(true);

		// Move mouse to center of the screen
		int32 PixelSizeX{};
		int32 PixelSizeY{};

		GetViewportSize(PixelSizeX, PixelSizeY);
		SetMouseLocation(PixelSizeX / 2, PixelSizeY / 2);
	}
	else
	{
		SelectorWidget->SetVisibility(ESlateVisibility::Collapsed);
		FInputModeGameOnly InputMode{};
		InputMode.SetConsumeCaptureMouseDown(true);
		SetInputMode(InputMode);
		SetShowMouseCursor(false);
	}
}

