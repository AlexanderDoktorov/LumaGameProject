// The use of the project for commercial purposes is partially allowed. Distribution of project files is PROHIBITED. The ban does not apply to packaged versions that have encrypted files. One of the formats allowed for distribution is the game in the form of an .exe file.

#pragma once

#include "NativeGameplayTags.h"

namespace LumaGameplayTags
{
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Data_LumaToGather)

	// Luma Cast Abilties core tag
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Ability_LocalCast);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Ability_ContextCast);

	// Cooldown tags
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Ability_ContextCast_ProximityMine_Cooldown);

	// Events
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Event_Explosion_ProximityMine);
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Event_LumaCast)
	
	// Emotions set by callers data tags
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Data_Aggressiveness)
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Data_Reticence)
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Data_SelfPreservation)
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Data_Curiosity)

	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Interaction_PickItem_Luma)
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_LumaCast)
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Action_SpawnCapsule)
	UE_DECLARE_GAMEPLAY_TAG_EXTERN(TAG_Ability_LumaCast)
}

