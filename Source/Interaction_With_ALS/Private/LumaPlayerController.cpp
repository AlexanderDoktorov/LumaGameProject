// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#include "LumaPlayerController.h"
#include "EnhancedInputComponent.h"
#include "LumaCharacterBase.h"
#include "LumaInputDataAsset.h"
#include "EnhancedInputSubsystems.h"
#include "LumaGameplayTags.h"
#include "UI/LumaHUD.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "UI/LumaCastSelectorWidget.h"

void ALumaPlayerController::Call_PickUpCapsule()
{
	if(auto GASPawn = Cast<IAbilitySystemInterface>(GetPawn()))
	{
		if(auto GAS = GASPawn->GetAbilitySystemComponent())
		{
			const FGameplayTagContainer TagsToActivate {TAG_Interaction_PickItem_Luma };
			if(!GAS->TryActivateAbilitiesByTag(TagsToActivate))
				UE_LOG(LogAbilitySystemComponent, Warning, TEXT("Unable to activate ability"));
		}
	}
}

void ALumaPlayerController::Call_TryPerformLumaCast(const ECastType& CastType)
{
	if(auto LumaCharacter = Cast<ALumaCharacterBase>(GetPawn()))
		LumaCharacter->TryPerformLumaCast(CastType);

	/*
	if(auto GASPawn = Cast<IAbilitySystemInterface>(GetPawn()))
	{
		if(auto GAS = GASPawn->GetAbilitySystemComponent())
		{
			UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(AActor* Actor, FGameplayTag EventTag, FGameplayEventData Payload).
			const FGameplayTagContainer TagsToActivate {TAG_Action_LumaCast };
			if(!GAS->TryActivateAbilitiesByTag(TagsToActivate))
				UE_LOG(LogAbilitySystemComponent, Warning, TEXT("Unable to perform luma cast"));
		}
	}
	*/
}

void ALumaPlayerController::Call_ChargeLumaCapsule(const FCapsuleChargingProperties& ChargingProperties)
{
	if(auto LumaCharacter = Cast<ALumaCharacterBase>(GetPawn()))
		LumaCharacter->ChargeLumaCapsule(ChargingProperties);
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

		// Move mouse to widget
		FVector2d PixelPosition{};
		FVector2d ViewPortPosition{};
		
		USlateBlueprintLibrary::LocalToViewport(
			GetWorld(),
			SelectorWidget->GetCachedGeometry(),
			{SelectorWidget->GetCachedGeometry().GetLocalSize().X / 2.f,SelectorWidget->GetCachedGeometry().GetLocalSize().Y / 2.f},
			PixelPosition,
			ViewPortPosition);
		SetMouseLocation(PixelPosition.X, PixelPosition.Y);
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
		//EnhancedInputComponent->BindAction(InputData->IA_PerfromLumaCast, ETriggerEvent::Triggered, this, &ThisClass::Call_TryPerformLumaCast);
		EnhancedInputComponent->BindAction(InputData->IA_OpenLumaCastSelector, ETriggerEvent::Triggered, this, &ThisClass::SwitchLumaSelectorWidget);
	}
}
