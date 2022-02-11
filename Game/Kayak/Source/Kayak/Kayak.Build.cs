// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;
using System.IO;

public class Kayak : ModuleRules
{
	public Kayak(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
            "Core", "CoreUObject", "Engine", "InputCore",
            "SlateCore", "Slate", "UMG",
            "AIModule",
            "GameplayAbilities", "GameplayTags", "GameplayTasks",
            "TriggerRuntime", "Item", "Evaluator"});

        PublicIncludePaths.AddRange(GetPublicIncludePath());

        PrivateIncludePaths.AddRange(GetPrivateIncludePath());
    }

    public virtual string[] GetPublicIncludePath()
    {
       return Directory.GetDirectories(ModuleDirectory + "/Public", "*", SearchOption.AllDirectories);
    }

    public virtual string[] GetPrivateIncludePath()
    {
        return new string[] {
        };
    }
}
