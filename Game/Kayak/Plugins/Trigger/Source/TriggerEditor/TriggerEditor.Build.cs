// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class TriggerEditor : ModuleRules
{
	public TriggerEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				
			}
			);
				
		PrivateIncludePaths.AddRange(GetPublicIncludePaths());
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"UnrealEd", 
				"Blutility",
                "UMG",
                "UMGEditor",
				"InputCore",
				"PropertyEditor",
				"TriggerRunTime",
				"LevelEditor",
                "MainFrame",
				"EditorStyle",
				"AssetRegistry",
				"AssetTools",
				"AssetRegistry",
				"SourceControl",
				"GameplayTags",
                "GameplayTagsEditor",
				"DeveloperSettings"
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
