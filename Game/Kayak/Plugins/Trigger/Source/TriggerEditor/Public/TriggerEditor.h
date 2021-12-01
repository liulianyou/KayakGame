// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FTriggerEditorUI;
class FTriggerEditorEngine;
class SWindow;

class FTriggerEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/*
	* #return Get the entry to access all functionality for the trigger editor
	*/
	const TSharedPtr<FTriggerEditorEngine> GetTriggerEditorEngine() const { return TriggerEditorEngine.ToSharedRef(); }

protected:

	//Add Trigger menu to tool bar
	void RegisterTriggerEditorUI();
	void UnRegisterTriggerEditorUI();

	//Register trigger editor engine, it should be registered first as it can be used by other modules in trigger editor
	void RegisterTriggerEditorEngine();
	//Trigger editor engine should be unregistered last
	void UnRegisterTriggerEditorEngine();

	//Register all customize details
	void RegisterCustomizeDetails();
	//Unregister all customize details
	void UnRegisterCustomizeDetails();

    void RegisterPointPanel();
    void MainFrameLoad(TSharedPtr<SWindow> InRootWindow, bool bIsNewProjectWindow);
private:
	void InitCustomizePropertiesName();

private:

	FString TriggerTaskStructName;

	//Tool bar which will hold all access to trigger tools
	TSharedPtr<FTriggerEditorUI> TriggerEditorUI = nullptr;

	/*
	* All functions used for trigger editor should be accessed from this instance
	*/
	TSharedPtr<FTriggerEditorEngine> TriggerEditorEngine = nullptr;
};
