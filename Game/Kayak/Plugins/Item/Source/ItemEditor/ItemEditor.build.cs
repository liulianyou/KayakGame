// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class ItemEditor : ModuleRules
{
	public ItemEditor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(GetPublicIncludePaths());
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
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
				"CoreUObject","Engine",
				"Slate","SlateCore",
				"GameplayAbilities","GameplayTags",
                "DeveloperSettings",
				"PropertyEditor",
				"Item"
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
