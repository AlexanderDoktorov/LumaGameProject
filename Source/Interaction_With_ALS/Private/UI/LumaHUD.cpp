// Fill out your copyright notice in the Description page of Project Settings.

#include "UI/LumaHUD.h"

#include "Blueprint/UserWidget.h"
#include "UI/LumaCastSelectorWidget.h"

ALumaHUD::ALumaHUD()
{
}

void ALumaHUD::BeginPlay()
{
	Super::BeginPlay();

	auto PlayerController = GetOwningPlayerController();

	if(LumaSelectorClass)
	{
		// Create core hud and add it to viewport
		LumaSelectorWidget = CreateWidget<ULumaCastSelectorWidget>(PlayerController, LumaSelectorClass);
		LumaSelectorWidget->AddToViewport(5);
		LumaSelectorWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void ALumaHUD::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if (LumaSelectorWidget)
	{
		// Let garbage collector collect this
		LumaSelectorWidget->RemoveFromParent();
		LumaSelectorWidget = nullptr;
	}

	Super::EndPlay(EndPlayReason);
}
