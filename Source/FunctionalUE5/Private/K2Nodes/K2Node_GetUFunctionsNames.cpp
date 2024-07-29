// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "K2Nodes/K2Node_GetUFunctionsNames.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "GraphEditorSettings.h"
#include "K2Node_CallFunction.h"
#include "K2Node_GetDataTableRow.h"
#include "KismetCompiler.h"

#define LOCTEXT_NAMESPACE "K2Node_GetUFunctionsNames"

UK2Node_GetUFunctionsNames::UK2Node_GetUFunctionsNames()
{
}

void UK2Node_GetUFunctionsNames::AllocateDefaultPins()
{
	const auto* K2Schema = GetSchema();

	// Execution pins
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Execute);
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_Exec, UEdGraphSchema_K2::PN_Then);

	// Input params
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Class, UObject::StaticClass(), FGetPinNames::GetClassPinName());
	CreatePin(EGPD_Input, UEdGraphSchema_K2::PC_Boolean, FGetPinNames::GetIncludeSuperPinName());
	
	// Output params
	UEdGraphNode::FCreatePinParams CreatePinParams{};
	CreatePinParams.ContainerType = EPinContainerType::Array;
	CreatePin(EGPD_Output, UEdGraphSchema_K2::PC_String, FGetPinNames::GetDelegatesArrayPinName(), CreatePinParams);
	
	Super::AllocateDefaultPins();
}

void UK2Node_GetUFunctionsNames::ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)
{
	Super::ExpandNode(CompilerContext, SourceGraph);
	
	// Create a call function node
	UK2Node_CallFunction* CallGetClassFunctionsNode = CompilerContext.SpawnIntermediateNode<UK2Node_CallFunction>(this, SourceGraph);
	CallGetClassFunctionsNode->FunctionReference.SetExternalMember(
		GET_FUNCTION_NAME_CHECKED(ThisClass, GetClassFunctionsNames), ThisClass::StaticClass());
	CallGetClassFunctionsNode->AllocateDefaultPins();
	
	// Connect inputs
	CompilerContext.MovePinLinksToIntermediate(*FindPinChecked(FGetPinNames::GetClassPinName()), *CallGetClassFunctionsNode->FindPinChecked(TEXT("Class")));
	CompilerContext.MovePinLinksToIntermediate(*FindPinChecked(FGetPinNames::GetIncludeSuperPinName()), *CallGetClassFunctionsNode->FindPinChecked(TEXT("bIncludeSuper")));

	// Connect outputs
	CompilerContext.MovePinLinksToIntermediate(*FindPinChecked(FGetPinNames::GetDelegatesArrayPinName()), *CallGetClassFunctionsNode->GetReturnValuePin());

	// Connect execs
	CompilerContext.MovePinLinksToIntermediate(*GetExecPin(), *CallGetClassFunctionsNode->GetExecPin());
	CompilerContext.MovePinLinksToIntermediate(*GetThenPin(), *CallGetClassFunctionsNode->GetThenPin());
	

	// Connect the output pin of the call function node to the output pin of this node

	// Break the node so it is replaced by the intermediate nodes
	BreakAllNodeLinks();
}

FSlateIcon UK2Node_GetUFunctionsNames::GetIconAndTint(FLinearColor& OutColor) const
{
	OutColor = GetDefault<UGraphEditorSettings>()->FunctionCallNodeTitleColor;
	return FSlateIcon(FAppStyle::GetAppStyleSetName(), "Kismet.AllClasses.FunctionIcon");
}

//This method adds our node to the context menu
void UK2Node_GetUFunctionsNames::GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegistrar) const
{
	Super::GetMenuActions(ActionRegistrar);
	
	UClass* Action = GetClass();
	if (ActionRegistrar.IsOpenForRegistration(Action))
	{
		UBlueprintNodeSpawner* Spawner = UBlueprintNodeSpawner::Create(GetClass());
		check(Spawner != nullptr);

		ActionRegistrar.AddBlueprintAction(Action, Spawner);
	}
}

FText UK2Node_GetUFunctionsNames::GetMenuCategory() const
{
	return LOCTEXT("K2Node_GetUFunctionsNames_MenuCategory", "UE5FunctionalNodes");
}

FText UK2Node_GetUFunctionsNames::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (CachedNodeTitle.IsOutOfDate(this))
	{
		CachedNodeTitle.SetCachedText(LOCTEXT("K2Node_GetUFunctionsNames_Title", "Get Class Functions Names"), this);
	}

	return CachedNodeTitle;
}

FText UK2Node_GetUFunctionsNames::GetTooltipText() const
{
	return LOCTEXT("K2Node_GetUFunctionsNames_Tooltip", "Returns the array of methods of a specified class");
}

TArray<FString> UK2Node_GetUFunctionsNames::GetClassFunctionsNames(UClass* Class, const bool& bIncludeSuper)
{
	TArray<FString> FunctionNames{};
	if (Class)
	{
		for (TFieldIterator<UFunction> FuncIt(Class, bIncludeSuper ? EFieldIteratorFlags::IncludeSuper : EFieldIteratorFlags::ExcludeSuper); FuncIt; ++FuncIt)
		{
			if (UFunction* Function = *FuncIt)
				FunctionNames.Emplace(Function->GetName());
		}
	}
	return FunctionNames;
}



#undef LOCTEXT_NAMESPACE