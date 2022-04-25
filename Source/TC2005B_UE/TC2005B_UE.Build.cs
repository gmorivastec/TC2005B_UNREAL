// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TC2005B_UE : ModuleRules
{
	public TC2005B_UE(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
