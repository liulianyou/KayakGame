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
            "SlateCore", "Slate", "UMG"});

        PublicIncludePaths.AddRange(GetPublicIncludePath());

        PrivateIncludePaths.AddRange(GetPrivateIncludePath());
    }

    public string[] GetPublicIncludePath()
    {
       return Directory.GetDirectories(ModulePath);

    }

    public string[] GetPrivateIncludePath()
    {
        return new string[] {
        };
    }

    private string ModulePath
    {
        get
        {
            //return Path.GetDirectoryName(RulesCompiler.GetModuleFilename(this.GetType().Name));
            string ModuleFilename = UnrealBuildTool.RulesCompiler.GetFileNameFromType(GetType());
            string ModuleBaseDirectory = Path.GetDirectoryName(ModuleFilename);
            return ModuleBaseDirectory;
        }
    }
}
