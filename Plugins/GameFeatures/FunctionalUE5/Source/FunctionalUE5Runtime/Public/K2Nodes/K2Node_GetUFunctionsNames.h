// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_GetUFunctionsNames.generated.h"

struct FGetPinNames
{
	static const FName& GetClassPinName()
	{
		static const FName ClassPinName(TEXT("Class"));
		return ClassPinName;
	}

	static const FName& GetDelegatesArrayPinName()
	{
		static const FName DelegatesArrayPinName(TEXT("Delegates"));
		return DelegatesArrayPinName;
	}

	static const FName& GetIncludeSuperPinName()
	{
		static const FName IncludeSuperPinName(TEXT("Include Super"));
		return IncludeSuperPinName;
	}
};

/**
 * Returns array of names of reflected functions (UFUNCTIONS) of specific class
 */
UCLASS()
class FUNCTIONALUE5RUNTIME_API UK2Node_GetUFunctionsNames : public UK2Node
{
	GENERATED_BODY()
public:
	UK2Node_GetUFunctionsNames();

	virtual void AllocateDefaultPins() override;
	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph) override;

	virtual FSlateIcon GetIconAndTint(FLinearColor& OutColor) const override;
	virtual FText GetTooltipText() const override;
	virtual FLinearColor GetNodeBodyTintColor() const override { return FColor::Emerald; }
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const override;
	virtual FText GetMenuCategory() const override;
	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;
private:
	UFUNCTION(BlueprintCallable, BlueprintInternalUseOnly, meta = (AutoCreateRefTerm = "bIncludeSuper"))
	static TArray<FString> GetUFunctionsNames(UClass* Class, const bool& bIncludeSuper);

	mutable FNodeTextCache CachedNodeTitle;
};
