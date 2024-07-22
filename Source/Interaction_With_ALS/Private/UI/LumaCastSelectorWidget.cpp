// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "UI/LumaCastSelectorWidget.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemComponent.h"
#include "Actors/LocallyCastedActor.h"
#include "AttributeSets/EmotionsAttributeSet.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Character.h"
#include "UI/CastWidget.h"

void ULumaCastSelectorWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if(auto OwnerASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(GetOwningPlayerPawn()))
	{
		for(EEmotion EmotionType : TEnumRange<EEmotion>())
			OwnerASC->GetGameplayAttributeValueChangeDelegate(UEmotionsAttributeSet::GetAttributeByEmotion(EmotionType)).AddUObject(this, &ThisClass::OnEmotionalAttributeChangeInternal);
	}

	if(auto Character = Cast<ACharacter>(GetOwningPlayerPawn()))
	{
		if(auto CapsuleComponent = Character->GetCapsuleComponent())
		{
			CapsuleComponent->OnComponentBeginOverlap.AddDynamic(this, &ThisClass::OnCharacterOverlappedLocallyCastedActor);
			CapsuleComponent->OnComponentEndOverlap.AddDynamic(this, &ThisClass::OnCharacterEndOverlappLocallyCastedActor);
		}
	}

	// By default local cast widget is hidden
	LocalCastWidget->SetVisibility(ESlateVisibility::Collapsed);
	LocalCastWidget->OnLumaCast().AddLambda([this]()
	{
		LocalCastWidget->SetVisibility(ESlateVisibility::Collapsed);
	});
}

void ULumaCastSelectorWidget::OnEmotionalAttributeChangeInternal(const FOnAttributeChangeData& AttributeChangeData)
{
	OnEmotionalAttributeChange();
}

void ULumaCastSelectorWidget::OnCharacterOverlappedLocallyCastedActor(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
	const FHitResult& SweepResult)
{
	// If we overlapp locally casted actor 
	if(auto LocallyCastedActor = Cast<ALocallyCastedActor>(OtherActor))
	{
		// And the primitive is cast primitive
		if(LocallyCastedActor->IsCastPrimitive(OtherComp) && LocalCastWidget && !LocallyCastedActor->HasBeenReseted())
		{
			// Show local cast widget on screen
			LocalCastWidget->SetLocalActor(LocallyCastedActor);
			LocalCastWidget->SetPreview(LocallyCastedActor->LocalCastPreview);
			LocalCastWidget->SetVisibility(ESlateVisibility::Visible);
		}
	}
}

void ULumaCastSelectorWidget::OnCharacterEndOverlappLocallyCastedActor(UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if(LocalCastWidget)
	{
		LocalCastWidget->SetLocalActor(nullptr);
		LocalCastWidget->SetVisibility(ESlateVisibility::Collapsed);
	}
}
