// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"


class FItemEditorGlobal;

class IItemEditorModuleInterface : public IModuleInterface
{

public:

	/*
	* Singleton access to item module
	*/
	static inline IItemEditorModuleInterface& Get()
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_IItemModule_Get);
		static IItemEditorModuleInterface& Singleton = FModuleManager::LoadModuleChecked< IItemEditorModuleInterface >("ItemEditor");
		return Singleton;
	}

	virtual TSharedPtr<FItemEditorGlobal> GetItemGlobal() const = 0;

};
