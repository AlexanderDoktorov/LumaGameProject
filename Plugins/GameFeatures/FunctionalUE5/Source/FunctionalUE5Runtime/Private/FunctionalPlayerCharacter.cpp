// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionalPlayerCharacter.h"
#include "AbilitySystemComponent.h"
#include "FunctionalPlayerState.h"

AFunctionalPlayerCharacter::AFunctionalPlayerCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void AFunctionalPlayerCharacter::PossessedBy(AController* NewController)
{
	InitializeAbilitySystem();
	GiveDefaultAbilities();
	ApplyInitAttributeEffect();
	
	Super::PossessedBy(NewController);
}

void AFunctionalPlayerCharacter::OnRep_PlayerState()
{
	InitializeAbilitySystem();
	ApplyInitAttributeEffect();
	
	Super::OnRep_PlayerState();
}

void AFunctionalPlayerCharacter::InitializeAbilitySystem()
{
	// Retrieve ASC from player state and assign it to local AbilitySystemComponent
	
	if(AFunctionalPlayerState* PS = GetPlayerState<AFunctionalPlayerState>())
	{
		AbilitySystemComponent = PS->GetAbilitySystemComponent();
		AbilitySystemComponent->InitAbilityActorInfo(PS, this);
	}
}
