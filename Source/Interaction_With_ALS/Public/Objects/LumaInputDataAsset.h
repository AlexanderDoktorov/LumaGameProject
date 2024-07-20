#pragma once

#include "CoreMinimal.h"
#include "LumaInputDataAsset.generated.h"

class UInputAction;
class UInputMappingContext;

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaInputDataAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UInputMappingContext* IMC_Default;

	UPROPERTY(EditAnywhere)
	UInputMappingContext* IMC_LumaSelector;

	UPROPERTY(EditAnywhere)
	UInputAction* IA_PickUpLumaCapsule;

	UPROPERTY(EditAnywhere)
	UInputAction* IA_PerfromLumaCast;

	UPROPERTY(EditAnywhere)
	UInputAction* IA_OpenLumaCastSelector;
};
