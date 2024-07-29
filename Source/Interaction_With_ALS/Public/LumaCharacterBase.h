// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "GAS_MainCharacterCpp.h"
#include "Components/LumaAbilitySystemComponent.h"
#include "LumaCharacterBase.generated.h"

class ULumaAbilitiesDataAsset;
class UEmotionsAttributeSet;
class ULumaAbilitySystemComponent;
class ICastableInterface;
enum class ECastType : uint8;
class ALumaSourceBase;

/**
 * @author Doktorov Alexander
 */
UCLASS()
class INTERACTION_WITH_ALS_API ALumaCharacterBase : public AGAS_MainCharacterCpp
{
	GENERATED_BODY()
	friend class ALumaPlayerController;
public:
	ALumaCharacterBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void GiveDefaultAbilities() const override;

	FORCEINLINE ULumaAbilitySystemComponent* GetLumaAbilitySystemComponent() const { return Cast<ULumaAbilitySystemComponent>(GetAbilitySystemComponent()); }
	
	int32 GetNumCapsules() const;
protected:
	void OnLumaSelectorWidgetOpen() const;
	void OnLumaSelectorWidgetClosed() const;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<ULumaAbilitiesDataAsset> LumaAbilitiesDataAsset = nullptr;

	// All Luma Abilities Data
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UEmotionsAttributeSet> EmotionsAttributes = nullptr;
};