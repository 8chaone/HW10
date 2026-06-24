// Copyright Epic Games, Inc. All Rights Reserved.

#include "Temporary.h"
#include "Engine/Engine.h"

#define LOCTEXT_NAMESPACE "FTemporaryModule"

void FTemporaryModule::StartupModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Temporary Plugin Loaded"));
}

void FTemporaryModule::ShutdownModule()
{
	UE_LOG(LogTemp, Warning, TEXT("Temporary Plugin Unloaded"));
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTemporaryModule, Temporary)