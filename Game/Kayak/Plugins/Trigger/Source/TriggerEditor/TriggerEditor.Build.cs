// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TriggerEditor : ModuleRules
{
	public TriggerEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				"TriggerEditor/Public/Module/",
				"TriggerEditor/Public/Module/TriggerLevelModule/",
				"TriggerEditor/Public/DetailsPanelCustomize/",
				"TriggerEditor/Public/TriggerEditorUI/",
				"TriggerEditor/Public/Input/"
				// ... add other private include paths required here ...
			}
			);
			
		
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
                "GameplayTagsEditor"
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
}
