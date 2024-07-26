// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "FunctionalBlueprintLibrary.h"
#include "AssetToolsModule.h"
#include "AssetRegistry/AssetRegistryModule.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#include "Factories/BlueprintFactory.h"
#include "GameFramework/Actor.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "UObject/SavePackage.h"

UBlueprint* UFunctionalBlueprintLibrary::CreateBlueprintAsset(const FString& TargetPathWithAssetName,
	UClass* ParentClass)
{
	check(ParentClass);
	// Define the package path where the Blueprint will be created
	//TEXT("/Game/AdvancedLocomotionV4/Blueprints/Actors/BP_PreviewActor");
	FString PackageName = TargetPathWithAssetName;
	FString AssetName = FPackageName::GetLongPackageAssetName(PackageName);

	// Ensure the package path is valid
	UPackage* Package = CreatePackage(*PackageName);
	if (!Package)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create package for %s"), *PackageName);
		return nullptr;
	}

	// Create the Blueprint
	UBlueprintFactory* BlueprintFactory = NewObject<UBlueprintFactory>();
	BlueprintFactory->ParentClass = ParentClass;

	UObject* Asset = FAssetToolsModule::GetModule().Get().CreateAsset(
		AssetName, FPackageName::GetLongPackagePath(PackageName), UBlueprint::StaticClass(), BlueprintFactory);
	UBlueprint* Blueprint = Cast<UBlueprint>(Asset);

	if (!Blueprint)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create Blueprint for %s"), *PackageName);
		return nullptr;
	}

	// Mark the package dirty so that it can be saved
	Package->MarkPackageDirty();

	// Notify the asset registry of the new asset
	FAssetRegistryModule::AssetCreated(Blueprint);

	// Save the package to disk
	FString PackageFileName = FPackageName::LongPackageNameToFilename(PackageName,
	                                                                  FPackageName::GetAssetPackageExtension());
	FSavePackageArgs SavePackageArgs{};
	SavePackageArgs.TopLevelFlags = EObjectFlags::RF_Public | EObjectFlags::RF_Standalone;
	if (!UPackage::SavePackage(Package, Blueprint, *PackageFileName, SavePackageArgs))
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to save package %s"), *PackageFileName);
	}
	
	return Blueprint;
}

bool UFunctionalBlueprintLibrary::CopyComponentsToBlueprintClass(UBlueprint* BlueprintClass, TSubclassOf<AActor> ActorClass)
{
	if(!BlueprintClass || !BlueprintClass->ParentClass->IsChildOf(AActor::StaticClass()) || !ActorClass)
		return false;

	auto ConstuctionScript = BlueprintClass->SimpleConstructionScript;
	if(!ConstuctionScript)
		return false;

	//TODO: Clear all components
	
	AActor::ForEachComponentOfActorClassDefault<USceneComponent>(ActorClass, [&ConstuctionScript](const USceneComponent* SceneComponent){
		// Configure new name
		FString NewComponentName = SceneComponent->GetName();
		NewComponentName.Append("_Duplicate");
				
		// Create Node and add it
		USCS_Node* NewNode = ConstuctionScript->CreateNode(SceneComponent->GetClass(), FName(NewComponentName));
		ConstuctionScript->AddNode(NewNode);

		UEditorEngine::CopyPropertiesForUnrelatedObjects(const_cast<USceneComponent*>(SceneComponent), NewNode->ComponentTemplate);

		return true;
	});

	FBlueprintEditorUtils::MarkBlueprintAsModified(BlueprintClass);

	return true;
}

void UFunctionalBlueprintLibrary::CreatePreviewBlueprint(FString SourceActorPath)
{
	UBlueprint* SourceBlueprint = Cast<UBlueprint>(StaticLoadObject(UBlueprint::StaticClass(), nullptr, *SourceActorPath));
	if(!SourceBlueprint)
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to find blueprint object using path: [%s]"), *SourceActorPath);
		return;
	}
	
	SourceActorPath.Append("Preview");
	UBlueprint* NewPreviewBlueprint = CreateBlueprintAsset(SourceActorPath, AActor::StaticClass());
	if(!NewPreviewBlueprint)
		return;

	if(!CopyComponentsToBlueprintClass(NewPreviewBlueprint, TSubclassOf<AActor>(SourceBlueprint->GeneratedClass)))
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to copy components from [%s] to [%s]"), *SourceBlueprint->GetName(), *NewPreviewBlueprint->GetName());
	}
}
