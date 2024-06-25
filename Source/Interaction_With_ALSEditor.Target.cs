// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

using UnrealBuildTool;
using System.Collections.Generic;

public class Interaction_With_ALSEditorTarget : TargetRules
{
	public Interaction_With_ALSEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "Interaction_With_ALS" } );
	}
}
