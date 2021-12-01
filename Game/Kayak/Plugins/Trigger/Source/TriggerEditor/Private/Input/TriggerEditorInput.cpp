#include "TriggerEditorInput.h"

#define LOCTEXT_NAMESPACE "TriggerEditorCommonCommands"

void FTriggerEditorCommonCommands::RegisterCommands()
{
	UI_COMMAND(ShowAllTaskAndRelations, "ShowAllTaskAndRelations", "Show All Task And their Relations", EUserInterfaceActionType::Button, FInputChord(EModifierKey::Alt, EKeys::One));
	UI_COMMAND(TriggerExport, "TriggerExport", "Export all triggers in the world to excel", EUserInterfaceActionType::Button, FInputChord(EModifierKey::Shift | EModifierKey::Control, EKeys::E));
	UI_COMMAND(TriggerImport, "TriggerImport", "Import trigger data to current level", EUserInterfaceActionType::Button, FInputChord(EModifierKey::Shift | EModifierKey::Control, EKeys::I));
	UI_COMMAND(ExportTriggerMap, "ExportTriggerMap", "Divide the presient map to smaller map", EUserInterfaceActionType::Button, FInputChord(EModifierKey::Shift|EModifierKey::Control, EKeys::M));

	UI_COMMAND(TriggerEditPanel, "TriggerEditPanel", "Open the triggers edit panel", EUserInterfaceActionType::Button, FInputChord(EKeys::P, true, true, false, false));

    UI_COMMAND(TogglePointActorPickMode, "TogglePointPickMode", "Toggle point actor pick mode", EUserInterfaceActionType::Button, FInputChord(EModifierKey::Control, EKeys::Q));
    
}

#undef LOCTEXT_NAMESPACE