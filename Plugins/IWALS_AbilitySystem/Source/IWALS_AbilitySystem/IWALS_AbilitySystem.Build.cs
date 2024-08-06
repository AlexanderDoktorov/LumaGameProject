// Copyright JakubW and Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class IWALS_AbilitySystem : ModuleRules
{
	public IWALS_AbilitySystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        CppStandard = CppStandardVersion.Latest;
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core",
			"Networking", 
			"Sockets", 
			"FunctionalUE5Runtime"
		});
		
		PrivateDependencyModuleNames.AddRange(new string[]
		{
			"CoreUObject",
			"Engine",
			"Slate",
			"SlateCore",
			"GameplayAbilities", 
			"GameplayTags", 
			"GameplayTasks"
		});
	}
}
