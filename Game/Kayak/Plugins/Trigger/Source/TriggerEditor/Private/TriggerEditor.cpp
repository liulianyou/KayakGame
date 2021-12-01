// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TriggerEditor.h"
#include "PropertyEditorModule.h"
#include "PropertyEditorDelegates.h"
#include "TriggerTaskDetailCusomize.h"
#include "TriggerEditorInput.h"
#include "TriggerEditorUI/TriggerEditorUI.h"
#include "TriggerEditorEngine.h"
#include "CustomizeDetailPanel/FTriggerTask.h"
#include "EditorModeRegistry.h"
#include "TriggerEditorUI/SpawnPointActorPicker.h"
#include "Widget/STriggerPointIndexPanel.h"
#include "Interfaces/IMainFrameModule.h"

#define LOCTEXT_NAMESPACE "FTriggerEditorModule"

void FTriggerEditorModule::StartupModule()
{
	//The trigger editor engine should be registered first, as it can be accessed by any other modules used in trigger editor
	RegisterTriggerEditorEngine();

	FTriggerEditorCommonCommands::Register();

	InitCustomizePropertiesName();

	RegisterTriggerEditorUI();

	RegisterCustomizeDetails();

    FEditorModeRegistry::Get().RegisterMode<FEdModeSpawnPointActorPicker>(FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker);
    RegisterPointPanel();
}

void FTriggerEditorModule::ShutdownModule()
{
	UnRegisterTriggerEditorUI();

    UnRegisterCustomizeDetails();

    FEditorModeRegistry::Get().UnregisterMode(FEdModeSpawnPointActorPicker::EM_SpawnPointActorPicker);
    STriggerPointIndexPanel::Clear();

	//Trigger editor engine should be unregistered last
	UnRegisterTriggerEditorEngine();
}

void FTriggerEditorModule::RegisterCustomizeDetails()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.RegisterCustomPropertyTypeLayout(*TriggerTaskStructName, FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FTriggerTaskDetailCustomize::MakeInstance));

}

void FTriggerEditorModule::UnRegisterCustomizeDetails()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.UnregisterCustomPropertyTypeLayout(*TriggerTaskStructName);
}

void FTriggerEditorModule::RegisterPointPanel()
{
    IMainFrameModule& MainFrameModule = IMainFrameModule::Get();
    if (MainFrameModule.IsWindowInitialized())
    {
        STriggerPointIndexPanel::InitPanel();
    }
    else
    {
        MainFrameModule.OnMainFrameCreationFinished().AddRaw(this, &FTriggerEditorModule::MainFrameLoad);
    }
}

void FTriggerEditorModule::MainFrameLoad(TSharedPtr<SWindow> InRootWindow, bool bIsNewProjectWindow)
{
    STriggerPointIndexPanel::InitPanel();
}

void FTriggerEditorModule::InitCustomizePropertiesName()
{
	TriggerTaskStructName = FTriggerTask::StaticStruct()->GetName();
}

void FTriggerEditorModule::RegisterTriggerEditorUI()
{
	if (TriggerEditorUI == nullptr)
		TriggerEditorUI = MakeShareable(new FTriggerEditorUI());

	TriggerEditorUI->Initialize();
}

void FTriggerEditorModule::UnRegisterTriggerEditorUI()
{
	if (TriggerEditorUI.IsValid())
	{
		TriggerEditorUI->Destroyed();
		TriggerEditorUI.Reset();
	}
}

void FTriggerEditorModule::RegisterTriggerEditorEngine()
{
	if (TriggerEditorEngine.IsValid() == false)
	{
		TriggerEditorEngine = MakeShareable(new FTriggerEditorEngine());
	}

	TriggerEditorEngine->Initialize();
}

void FTriggerEditorModule::UnRegisterTriggerEditorEngine()
{
	if (TriggerEditorEngine.IsValid())
	{
		TriggerEditorEngine->Destroyed();
		TriggerEditorEngine.Reset();
	}
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTriggerEditorModule, TriggerEditor)