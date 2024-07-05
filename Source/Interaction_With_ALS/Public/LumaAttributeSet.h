// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "IWALS_BaseAttributeSet.h"
#include "LumaAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class INTERACTION_WITH_ALS_API ULumaAttributeSet : public UIWALS_BaseAttributeSet
{
	GENERATED_BODY()
public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_Luma)
	FGameplayAttributeData Luma;
	ATTRIBUTE_ACCESSORS(ThisClass, Luma);
	
	UPROPERTY(BlueprintReadOnly, Category = "Attributes", ReplicatedUsing = OnRep_MaxLuma)
	FGameplayAttributeData MaxLuma;
	ATTRIBUTE_ACCESSORS(ThisClass, MaxLuma);
	
	UFUNCTION()
	virtual void OnRep_Luma(const FGameplayAttributeData& OldLuma);
	
	UFUNCTION()
	virtual void OnRep_MaxLuma(const FGameplayAttributeData& OldMaxLuma);
};
