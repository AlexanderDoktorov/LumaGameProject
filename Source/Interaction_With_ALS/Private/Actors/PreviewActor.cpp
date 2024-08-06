// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "PreviewActor.h"

APreviewActor::APreviewActor()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>("DefaultRoot");
}

void APreviewActor::BeginPlay()
{
	Super::BeginPlay();
	
	CopyPrimitivesFromActor();
	return;
	
	TArray<const USceneComponent*> AllComponents;
	GetActorClassDefaultComponents(PreviewActorClass, AllComponents);

	// Duplicate the root component
	USceneComponent* SourceRootComponent = PreviewActorClass.GetDefaultObject()->GetRootComponent();
	if(SourceRootComponent)
	{
		if(RootComponent = DuplicateObject<USceneComponent>(SourceRootComponent, this, FName("RootDuplicate")))
			RootComponent->RegisterComponent();  // Register the root component
	}

	TMap<const USceneComponent*, USceneComponent*> ComponentMapping;
	ComponentMapping.Add(SourceRootComponent, RootComponent);

	for (const USceneComponent* SourceComponent : AllComponents)
	{
		if (SourceComponent != SourceRootComponent)  // Skip the root component as it is already duplicated
		{
			// Duplicate the component
			USceneComponent* DuplicatedComponent = DuplicateObject<USceneComponent>(SourceComponent, this, FName(*SourceComponent->GetName().Append("Duplicate")));
			DuplicatedComponent->RegisterComponent();  // Register the duplicated component
			AddInstanceComponent(DuplicatedComponent);

			// Add to the mapping
			ComponentMapping.Add(SourceComponent, DuplicatedComponent);
		}
	}

	// Reattach duplicated components to preserve the hierarchy
	for (const USceneComponent* SourceComponent : AllComponents)
	{
		if (SourceComponent != SourceRootComponent)  // Skip the root component as it is already handled
		{
			if (USceneComponent** DuplicatedComponent = ComponentMapping.Find(SourceComponent))
			{
				if (const USceneComponent* SourceParentComponent = Cast<USceneComponent>(SourceComponent->GetAttachParent()))
				{
					if (USceneComponent** DuplicatedParentComponent = ComponentMapping.Find(SourceParentComponent))
					{
						(*DuplicatedComponent)->AttachToComponent(*DuplicatedParentComponent, FAttachmentTransformRules::KeepRelativeTransform);
					}
				}
			}
		}
	}

	/*
	for(auto& Component : AllComponents)
	{
		UE_LOG(LogTemp, Warning, TEXT("Component Name = [%s]"), *Component->GetName());

		USceneComponent* ComponentDuplicate = DuplicateObject<USceneComponent>(Component, this, FName(Component->GetName().Append("Duplicate")));
		if(!Component->GetAttachParent())
		{
			RootComponent = ComponentDuplicate;
		}
		else
		{
			if(auto FoundRootDuplicate = FindObject<USceneComponent>(this, *Component->GetName().Append("Duplicate")))
			{
				ComponentDuplicate->AttachToComponent(FoundRootDuplicate, FAttachmentTransformRules::KeepRelativeTransform);
			}
		}
		//ComponentDuplicate->RegisterComponent();
		AddInstanceComponent(ComponentDuplicate);
	}
	*/
}

void APreviewActor::CopyPrimitivesFromActor()
{
	if(!PreviewActorClass)
		return;

	// First - original component, second - duplicate
	TMap<const USceneComponent*, USceneComponent*> Pairs{};

	USceneComponent* OriginalRoot = nullptr;
	// Copy Components
	ForEachComponentOfActorClassDefault<USceneComponent>(PreviewActorClass, [this, &Pairs, &OriginalRoot](const USceneComponent* SceneComponent){
		// Configure new name
		FString NewComponentName = SceneComponent->GetName();
		NewComponentName.RemoveFromEnd(SceneComponent->ComponentTemplateNameSuffix);
		NewComponentName.Append("_Duplicate");
		// Duplicate component
		USceneComponent* ComponentDuplicate = DuplicateObject(SceneComponent, this, FName(NewComponentName));
		if(!ComponentDuplicate)
			return true;

		if(!OriginalRoot)
			OriginalRoot = ComponentDuplicate->GetAttachmentRoot();

		// Add it to pairs array
		Pairs.Add(SceneComponent, ComponentDuplicate);
		
		ComponentDuplicate->ClearFlags(RF_ArchetypeObject | RF_ClassDefaultObject);
		ComponentDuplicate->RegisterComponent();
		AddInstanceComponent(ComponentDuplicate);
		return true;
	});

	// Set Root Component
	if(OriginalRoot)
	{
		OriginalRoot->ClearFlags(RF_ArchetypeObject | RF_ClassDefaultObject);
		OriginalRoot->RegisterComponent();
		SetRootComponent(OriginalRoot);
	}

	// Attach components the same way they were attached in Actor
	for(auto& ComponentPair : Pairs)
	{
		// Get the original component
		auto& OriginalComponent = ComponentPair.Key;
		// And find it's parent in the map, then return duplicate of that parent - it'll be our new attach parent

		USceneComponent** DuplicateComponentParent = Pairs.Find(OriginalComponent->GetAttachParent());
		const auto& Duplicate = ComponentPair.Value;
		USceneComponent* RootToAttach = (DuplicateComponentParent != nullptr) ? (*DuplicateComponentParent) : RootComponent.Get();
		
		if(RootToAttach != Duplicate)
			Duplicate->AttachToComponent(RootToAttach, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	}
}
