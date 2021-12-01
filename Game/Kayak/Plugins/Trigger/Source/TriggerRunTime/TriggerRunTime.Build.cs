// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class TriggerRunTime : ModuleRules
{
	public TriggerRunTime(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		//Maybe This will cause clang compile error
		//bUseRTTI = true;

		PrivateIncludePaths.AddRange(
			new string[] {

			}
			);

		PublicIncludePaths.AddRange(GetPublicIncludePaths());
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Engine",
				"AIModule",
				"UMG",
				"LevelSequence",
				"GameplayAbilities",
				"GameplayTags",
				"DeveloperSettings"
				// ... add other public dependencies that you statically link with here ...
			}
			);

		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.AddRange(new string[]{
			"UnrealEd",
			"WorldBrowser"});
		}

		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Slate",
				"SlateCore",
                "LevelSequence",
                "MovieScene",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}

    public virtual string[] GetPublicIncludePaths()
    {
		return Directory.GetDirectories(ModuleDirectory + "/Public", "*", SearchOption.AllDirectories);
	}
}
