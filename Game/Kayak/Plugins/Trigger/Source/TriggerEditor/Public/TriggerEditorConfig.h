#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/4
* Purpose:	This is used confine the default value which is used in the trigger editor mode
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"

#include "TriggerEditorConfig.generated.h"

class UUserWidget;

UCLASS(config = Editor, defaultconfig, meta = (DisplayName = "Trigger Editor Config"))
class TRIGGEREDITOR_API UTriggerEditorConfig : public UDeveloperSettings
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* The widget used to display the details of the FTriggerTask struct in detail panel
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config)
	TSoftClassPtr<UUserWidget> TriggerTaskDetailsPanelWidget;

	/*
	* This widget used to refresh all the data in the trigger event system.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Config)
	TSoftClassPtr<UUserWidget> TriggerDataRefreshWidget;

private:
	
	void SetDefaultValueFromTriggerEditorConfigFile();

};

