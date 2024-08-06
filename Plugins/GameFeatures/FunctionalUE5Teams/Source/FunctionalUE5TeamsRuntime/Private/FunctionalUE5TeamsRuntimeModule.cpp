// Copyright Epic Games, Inc. All Rights Reserved.

#include "FunctionalUE5TeamsRuntimeModule.h"

#define LOCTEXT_NAMESPACE "FFunctionalUE5TeamsRuntimeModule"

void FFunctionalUE5TeamsRuntimeModule::StartupModule()
{
	// This code will execute after your module is loaded into memory;
	// the exact timing is specified in the .uplugin file per-module
}

void FFunctionalUE5TeamsRuntimeModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.
	// For modules that support dynamic reloading, we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FFunctionalUE5TeamsRuntimeModule, FunctionalUE5TeamsRuntime)
