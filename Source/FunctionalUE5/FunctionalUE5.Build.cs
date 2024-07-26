using UnrealBuildTool;

public class FunctionalUE5 : ModuleRules
{
	public FunctionalUE5(ReadOnlyTargetRules Target) : base(Target)
	{
		CppStandard = CppStandardVersion.Cpp20;

        PrivateDependencyModuleNames.AddRange(new string[] 
        {
            "Core", 
            "CoreUObject", 
            "Engine",
            "UnrealEd"
        }); 
	}
}