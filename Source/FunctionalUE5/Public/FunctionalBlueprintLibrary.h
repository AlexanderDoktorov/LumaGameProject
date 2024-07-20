// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FunctionalBlueprintLibrary.generated.h"

/**
 * 
 */
UCLASS()
class FUNCTIONALUE5_API UFunctionalBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	static TArray<UActorComponent*> FindCommonComponents(const AActor* Actor0, const AActor* Actor1)
	{
		bool bIsValid0 = IsValid(Actor0);
		bool bIsValid1 = IsValid(Actor1);

		if(bIsValid1 && !bIsValid0)
			return Actor1->GetComponents().Array();
		
		if(bIsValid0 && !bIsValid1)
			return Actor0->GetComponents().Array();

		const TSet<UActorComponent*>& ComponentsSet0 = Actor0->GetComponents();
		TArray<UActorComponent*> CommonComponents;
		
		for(auto& ComponentFromSet1 : Actor1->GetComponents())
		{
			if(UActorComponent* const* CommonComponent = ComponentsSet0.Find(ComponentFromSet1))
			{
				if(CommonComponent)
					CommonComponents.Add(*CommonComponent);
			}
		}
		
		return CommonComponents;
	}
};
