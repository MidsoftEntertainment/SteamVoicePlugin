// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using System.IO;
using UnrealBuildTool;

public class SteamVoicePlugin : ModuleRules
{
	public SteamVoicePlugin(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				"SteamVoicePlugin/Public"
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"SteamVoicePlugin/Private",
				// ... add other private include paths required here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
                "Core",
                "CoreUObject",
                "Engine",
                "Slate",
                "SlateCore",
                "SteamVoicePlugin",
            }
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
