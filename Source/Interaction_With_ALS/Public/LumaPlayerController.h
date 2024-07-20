// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "LumaPlayerController.generated.h"

class ALocallyCastedActor;
struct FLocalCastObjectDesc;
struct FContextCastObjectDesc;
enum class ECastType : uint8;
struct FInputActionValue;
struct FCastableObjectDesc;
class ULumaInputDataAsset;
/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ALumaPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ALumaPlayerController() = default;
	
	void Call_PickUpCapsule();
	void SwitchLumaSelectorWidget(const FInputActionValue& ActionValue);
	
protected:
	virtual void SetupInputComponent() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	ULumaInputDataAsset* InputData;
};
