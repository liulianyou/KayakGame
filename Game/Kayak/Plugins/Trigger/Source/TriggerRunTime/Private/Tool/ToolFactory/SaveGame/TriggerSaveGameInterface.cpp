#include "SaveGame/TriggerSaveGameInterface.h"
#include "TriggerDefinition.h"

void ITriggerSaveGameInterface::LoadGameDataComplete(USaveGameConfigBase* ConfigData)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement the function LoadGameDataComplete in interface ITriggerInterface"));
}

void ITriggerSaveGameInterface::StartToLoadGameData(USaveGameConfigBase* ConfigData)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement the function StartToLoadGameData in interface ITriggerInterface"));
}