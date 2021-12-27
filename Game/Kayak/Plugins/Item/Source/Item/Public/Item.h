// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class UItemGlobal;


class IItemModuleInterface : public IModuleInterface
{

public:
	
	/*
	* Singleton access to item module
	*/
	static inline IItemModuleInterface& Get()
	{
		QUICK_SCOPE_CYCLE_COUNTER(STAT_IGameplayAbilitiesModule_Get);
		static IItemModuleInterface& Singleton = FModuleManager::LoadModuleChecked< IItemModuleInterface >("Item");
		return Singleton;
	}

	virtual UItemGlobal* GetItemGlobal() const = 0;

};
