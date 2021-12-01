#include "TriggerEditorUI.h"
#include "Modules/ModuleManager.h"
#include "TriggerEditorInput.h"
#include "TriggerEditor.h"
#include "Framework/Commands/UICommandList.h"
#include "LevelEditor.h"
#include "TriggerEditorEngine.h"

#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"
#include "Editor/Blutility/Public/EditorUtilitySubsystem.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"

#include "TriggerEditorUI/SpawnPointActorPicker.h"
#include "Widget/STriggerPointIndexPanel.h"

FTriggerEditorUI::FTriggerEditorUI()
{

}

FTriggerEditorUI::~FTriggerEditorUI()
{

}

void FTriggerEditorUI::Initialize()
{
	FTriggerEditorModule* TriggerEditorModule = &FModuleManager::LoadModuleChecked<FTriggerEditorModule>("TriggerEditor");

	if (TriggerEditorModule != nullptr)
	{
		TriggerEditorEngine = TriggerEditorModule->GetTriggerEditorEngine();
	}

	LevelEditorModule = &FModuleManager::LoadModuleChecked<FLevelEditorModule>("LevelEditor");

	if (LevelEditorModule == nullptr)
		return;

	//For now I don't create any single UI for trigger so just use the LevelEditorModule action maps
	TriggerCommandList = LevelEditorModule->GetGlobalLevelEditorActions();

	TriggerCommandList->MapAction(FTriggerEditorCommonCommands::Get().ShowAllTaskAndRelations, FExecuteAction::CreateSP(this, &FTriggerEditorUI::ShowAllTasksAndTheirRelationships));

	TriggerCommandList->MapAction(FTriggerEditorCommonCommands::Get().TriggerEditPanel, FExecuteAction::CreateSP(this, &FTriggerEditorUI::OpenTriggerEditPanel));

    TriggerCommandList->MapAction(FTriggerEditorCommonCommands::Get().TogglePointActorPickMode, FExecuteAction::CreateSP(this, &FTriggerEditorUI::TogglePointActorPick));
    
	TriggerCommandList->MapAction(FTriggerEditorCommonCommands::Get().ExportTriggerMap, FExecuteAction::CreateSP(this, &FTriggerEditorUI::ExportNewTriggerMap));

	//Create root bar menu
	AddMenuBarExtension(
		TEXT("Help"), 
		EExtensionHook::After, 
		TriggerCommandList,
		FMenuBarExtensionDelegate::CreateSP(this, &FTriggerEditorUI::CreateRootMenuBarMenu));
}

void FTriggerEditorUI::Destroyed()
{
}

void FTriggerEditorUI::AddMenuExtension(FString Category, EExtensionHook::Position HookType, const TSharedPtr< FUICommandList >& CommandList, const FMenuExtensionDelegate& ExtensionDelegate)
{
	TSharedRef<FExtender> MenuExtendor(new FExtender());

	MenuExtendor->AddMenuExtension(*Category, HookType, CommandList.ToSharedRef(), ExtensionDelegate);

	LevelEditorModule->GetMenuExtensibilityManager()->AddExtender(MenuExtendor);

}

void FTriggerEditorUI::AddMenuBarExtension(FString Category, EExtensionHook::Position HookType, const TSharedPtr< FUICommandList >& CommandList, const FMenuBarExtensionDelegate& ExtensionDelegate)
{
	TSharedRef<FExtender> MenuExtendor(new FExtender());

	MenuExtendor->AddMenuBarExtension(*Category, HookType, CommandList.ToSharedRef(), ExtensionDelegate);

	LevelEditorModule->GetMenuExtensibilityManager()->AddExtender(MenuExtendor);
}

void FTriggerEditorUI::AddToolBarExtension(FString Category, EExtensionHook::Position HookType, const TSharedPtr< FUICommandList >& CommandList, const FToolBarExtensionDelegate& ExtensionDelegate)
{
	TSharedRef<FExtender> MenuExtendor(new FExtender());

	MenuExtendor->AddToolBarExtension(*Category, HookType, CommandList.ToSharedRef(), ExtensionDelegate);

	LevelEditorModule->GetToolBarExtensibilityManager()->AddExtender(MenuExtendor);
}

void FTriggerEditorUI::CreateRootMenuBarMenu(class FMenuBarBuilder& MenuBuilder ) 
{
	MenuBuilder.AddPullDownMenu(
		FText::FromString(TEXT("Trigger")),
		FText::FromString(TEXT("All tools of trigger can be access from here")),
		FNewMenuDelegate::CreateSP(this, &FTriggerEditorUI::CreateSubSections),
		TEXT("Trigger"),
		TEXT("Trigger")
	);
}

void FTriggerEditorUI::CreateSerializeButton(FMenuBuilder& MenuBuilder)
{
	//MenuBuilder.BeginSection(TEXT("Serialize"), FText::FromString(TEXT("Serialize")));

	MenuBuilder.AddMenuSeparator();

	MenuBuilder.AddSubMenu(
		FText::FromString(TEXT("Serialize")),
		FText::FromString(TEXT("Export or inport all triggers in current level")),
		FNewMenuDelegate::CreateSP(this, &FTriggerEditorUI::CreateSerializeSubMenu));

	MenuBuilder.AddMenuSeparator();

	//MenuBuilder.EndSection();
}

void FTriggerEditorUI::CreateVisualizationButton(class FMenuBuilder& MenuBuilder)
{
	//MenuBuilder.BeginSection(TEXT("Visiualization"), FText::FromString(TEXT("Visiualization")));

	MenuBuilder.AddMenuSeparator();

	MenuBuilder.AddSubMenu(
		FText::FromString(TEXT("Visiualization")),
		FText::FromString(TEXT("Visual some information in the target map")),
		FNewMenuDelegate::CreateSP(this, &FTriggerEditorUI::CreateVisualizationSubMen));

	MenuBuilder.AddMenuSeparator();

	//MenuBuilder.EndSection();
}

void FTriggerEditorUI::CreateVisualizationSubMen(class FMenuBuilder& MenuBuilder)
{
	MenuBuilder.AddMenuEntry(
		FTriggerEditorCommonCommands::Get().ShowAllTaskAndRelations,
		TEXT("TaskRelationShips"),
		FText::FromString(TEXT("TaskRelationShips")),
		FText::FromString(TEXT("Show the relations for all tasks in current world"))
	);

}

void FTriggerEditorUI::CreateSerializeSubMenu(class FMenuBuilder& MenuBuilder)
{

	MenuBuilder.AddMenuEntry(
		FTriggerEditorCommonCommands::Get().TriggerExport,
		TEXT("TriggerExport"),
		FText::FromString(TEXT("Export")),
		FText::FromString(TEXT("Export all trigger information in current level to outer excel"))
	);

	MenuBuilder.AddMenuEntry(
		FTriggerEditorCommonCommands::Get().TriggerImport,
		TEXT("TriggerImport"),
		FText::FromString(TEXT("Import")),
		FText::FromString(TEXT("Import all trigger information from outer excel to current level "))
	);

	//Add button to divide the persistent trigger map into small maps
	MenuBuilder.AddMenuEntry(
		FTriggerEditorCommonCommands::Get().ExportTriggerMap,
		TEXT("ExportTriggerMap"),
		FText::FromString(TEXT("ExportTriggerMap")),
		FText::FromString(TEXT("Export the persistent trigger map to small map to support trigger variality at runtime "))
	);

}

void FTriggerEditorUI::CreateSubSections(class FMenuBuilder& MenuBuilder)
{
	CreateSerializeButton(MenuBuilder);

	CreateVisualizationButton(MenuBuilder);

	CreateEditPanelButton(MenuBuilder);

    CreateTogglePointPickModeButton(MenuBuilder);
}

void FTriggerEditorUI::CreateEditPanelButton(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(FTriggerEditorCommonCommands::Get().TriggerEditPanel
        , TEXT("TriggerEditPanel")
        , FText::FromString(TEXT("Edit Panel"))
        , FText::FromString(TEXT("Open the triggers edit panel."))
    );
}

void FTriggerEditorUI::CreateTogglePointPickModeButton(FMenuBuilder& MenuBuilder)
{
    MenuBuilder.AddMenuEntry(FTriggerEditorCommonCommands::Get().TogglePointActorPickMode
        , TEXT("TogglePointPickMode")
        , FText::FromString(TEXT("Toggle Pick Mode"))
        , FText::FromString(TEXT("Toggle point actor pick mode."))
    );
}

void FTriggerEditorUI::ShowAllTasksAndTheirRelationships()
{
    //STriggerPointIndexPanel::TogglePanelVisible();//for test.
}

void FTriggerEditorUI::ExportNewTriggerMap()
{
	TriggerEditorEngine->SyncTriggerLevels();
}

void FTriggerEditorUI::OpenTriggerEditPanel()
{
	UE_LOG(LogTemp, Log, TEXT("OpenTriggerEditPanel"));
	
	UWidgetBlueprint* Blueprint = LoadObject<UWidgetBlueprint>(GetTransientPackage()
		, TEXT("EditorUtilityWidgetBlueprint'/Game/TriggerEditor/EUWBP_TriggerChain.EUWBP_TriggerChain'"));
	if (Blueprint)
	{
		if (Blueprint->GeneratedClass->IsChildOf(UEditorUtilityWidget::StaticClass()))
		{
			UEditorUtilityWidgetBlueprint* EditorWidget = Cast<UEditorUtilityWidgetBlueprint>(Blueprint);
			if (EditorWidget)
			{
				UEditorUtilitySubsystem* EditorUtilitySubsystem = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
				EditorUtilitySubsystem->SpawnAndRegisterTab(EditorWidget);
				return;
			}
 		}
	}

	UE_LOG(LogTemp, Log, TEXT("OpenTriggerEditPanel Error"));
}

void FTriggerEditorUI::TogglePointActorPick()
{
    if (PointActorPicker.IsValid() == false)
    {
        PointActorPicker = MakeShareable(new FSpawnPointActorPicker);
    }
    PointActorPicker->TogglePointActorPickMode();
}