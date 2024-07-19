// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.


#include "LumaGameplayTags.h"

namespace LumaGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG(TAG_Data_LumaToGather, "Data.LumaToGather");

	// Emotions set by callers data tags
	UE_DEFINE_GAMEPLAY_TAG(TAG_Data_Aggressiveness,		"Data.Aggressiveness")
	UE_DEFINE_GAMEPLAY_TAG(TAG_Data_Reticence,			"Data.Reticence")
	UE_DEFINE_GAMEPLAY_TAG(TAG_Data_SelfPreservation,	"Data.SelfPreservation")
	UE_DEFINE_GAMEPLAY_TAG(TAG_Data_Curiosity,			"Data.Curiosity")

	UE_DEFINE_GAMEPLAY_TAG(TAG_Interaction_PickItem_Luma, "Interaction.PickItem.Luma");
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_LumaCast, "Action.LumaCast");
	UE_DEFINE_GAMEPLAY_TAG(TAG_Event_LumaCast, "Event.LumaCast");
	UE_DEFINE_GAMEPLAY_TAG(TAG_Action_SpawnCapsule, "Action.SpawnCapsule");
	UE_DEFINE_GAMEPLAY_TAG(TAG_Ability_LumaCast, "Ability.LumaCast");
}

