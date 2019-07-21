// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class KayakClientTarget : TargetRules
{
	public KayakClientTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Client;
		ExtraModuleNames.Add("Kayak");
	}
}
