// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Kayak : ModuleRules
{
	public Kayak(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore",
        "SlateCore", "Slate", "UMG"});

        PublicIncludePaths.AddRange(new string[] {
            "Kayak/Public/UI"
        });

        PrivateIncludePaths.AddRange(new string[] {
            "Kayak/Public/Pawn",
            "Kayak/Public/UI",
            "Kayak/Public/PlayerController",
            "Kayak/Public/GameMode",
            "Kayak/Public/GamePlayClass",
        });


    }
}
