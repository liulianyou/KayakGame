#pragma once

#if WITH_EDITOR
/*
* Author:	Liulianyou
* Time:		2020/7/20
* Purpose:	Hold the default command which only worked in editor mode
*/

#include "CoreMinimal.h"
#include "EditorStyleSet.h"
#include "Framework/Commands/Commands.h"

/** GAIA editor common commands */
class FTriggerEditorCommonCommands : public TCommands< FTriggerEditorCommonCommands >
{
public:

	FTriggerEditorCommonCommands()
		: TCommands< FTriggerEditorCommonCommands >(TEXT("TriggerEditor"), NSLOCTEXT("Contexts", "TriggerEditor", "Trigger Editor"), TEXT("EditorViewport"), FEditorStyle::GetStyleSetName())
	{
	}

	virtual void RegisterCommands() override;

	//This command used when we select on trigger which have AI Spawn task
	TSharedPtr< FUICommandInfo > ShowAllTaskAndRelations;

	//This command used when we select on trigger which have AI Spawn task
	TSharedPtr< FUICommandInfo > TriggerExport;

	//This command used when we select on trigger which have AI Spawn task
	TSharedPtr< FUICommandInfo > TriggerImport;

	/*
	* This command used to divide the persistent trigger map to small trigger map
	* So that the trigger system can support different difficulty and scenario
	*/
	TSharedPtr< FUICommandInfo > ExportTriggerMap;

	//This command used when open edit trigger panel
	TSharedPtr< FUICommandInfo > TriggerEditPanel;

    //This command used when toggle point actor pick mode.
    TSharedPtr< FUICommandInfo > TogglePointActorPickMode;

};
#endif