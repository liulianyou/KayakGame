#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/12
* Purpose:	I will add one button to the editor toolbar so that we can access trigger tool more easily
*/

#include "CoreMinimal.h"

#include "Templates/SharedPointer.h"
#include "Framework/MultiBox/MultiBoxExtender.h"

class FLevelEditorModule;
class FTriggerEditorEngine;
class FSpawnPointActorPicker;

class FTriggerEditorUI : public TSharedFromThis<FTriggerEditorUI>
{
public:
	FTriggerEditorUI();
	~FTriggerEditorUI();
public:
	
	void Initialize();
	void Destroyed();

protected:

	//Add the menu extension to the editor menu
	void AddMenuExtension(FString Category, EExtensionHook::Position HookType, const TSharedPtr< FUICommandList >& CommandList, const FMenuExtensionDelegate& ExtensionDelegate);

	//Add the menu extension to the editor menu
	void AddMenuBarExtension(FString Category, EExtensionHook::Position HookType, const TSharedPtr< FUICommandList >& CommandList, const FMenuBarExtensionDelegate& ExtensionDelegate);

	//Add extension UI to the main tool bar which is up the view port
	void AddToolBarExtension(FString Category, EExtensionHook::Position HookType, const TSharedPtr< FUICommandList >& CommandList, const FToolBarExtensionDelegate& ExtensionDelegate);

protected:
	void ShowAllTasksAndTheirRelationships();

	/*
	* Export the persistent map the smaller map to support trigger variety at runtime
	*/
	void ExportNewTriggerMap();

	void OpenTriggerEditPanel();

    void TogglePointActorPick();
private:

	//Create the root trigger tool menu in the editor, we can access all trigger menus from it
	void CreateRootMenuBarMenu(class FMenuBarBuilder&);

	//Create serialize sub menu in the trigger root button
	void CreateSerializeButton(class FMenuBuilder&);
	void CreateSerializeSubMenu(class FMenuBuilder& MenuBuilder);

	//Create visualizations operation menu in the trigger root button
	void CreateVisualizationButton(class FMenuBuilder&);
	void CreateVisualizationSubMen(class FMenuBuilder& MenuBuilder);


	//All actual triggers should below here
	void CreateSubSections(class FMenuBuilder& MenuBuilder);

	//Create triggers edit panel open button
	void CreateEditPanelButton(FMenuBuilder& MenuBuilder);

    //Create toggle point actor pick mode button
    void CreateTogglePointPickModeButton(FMenuBuilder& MenuBuilder);
private:

	FLevelEditorModule* LevelEditorModule  = nullptr;

	TSharedPtr<FUICommandList> TriggerCommandList;
    TSharedPtr<FSpawnPointActorPicker> PointActorPicker;

	//Access to the trigger editor engine
	TSharedPtr<FTriggerEditorEngine> TriggerEditorEngine = nullptr;

};
