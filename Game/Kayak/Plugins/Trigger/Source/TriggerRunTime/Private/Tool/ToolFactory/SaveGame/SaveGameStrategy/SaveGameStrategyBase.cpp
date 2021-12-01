#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#include "TriggerDefinition.h"
#include "SaveGame/TriggerSaveGameManager.h"

USaveGameStrategyBase::USaveGameStrategyBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	UTriggerSaveGameManager::RegisterSaveGameStrategy(GetClass());
}


void USaveGameStrategyBase::SaveGameSerialize(USaveGameConfigBase* SaveConfigData)
{
	if (OnSaveGameDelegate.IsBound())
	{
		OnSaveGameDelegate.Broadcast(SaveConfigData);
	}
	OnSaveGame(SaveConfigData);
}

void USaveGameStrategyBase::PreSaveGameDeSerialize(USaveGameConfigBase* SaveConfigData)
{
	if (OnPreLoadGameDelegate.IsBound())
	{
		OnPreLoadGameDelegate.Broadcast(SaveConfigData);
	}

	OnPreLoadGame(SaveConfigData);
}

void USaveGameStrategyBase::SaveGameDeSerialize(USaveGameConfigBase* SaveConfigData)
{
	if (OnLoadGameDelegate.IsBound())
	{
		OnLoadGameDelegate.Broadcast(SaveConfigData);
	}

	OnLoadGame(SaveConfigData);
}

void USaveGameStrategyBase::PostSaveGameDeSerialalize(USaveGameConfigBase* SaveConfigData)
{
	if (OnPostLoadGameDelegate.IsBound())
	{
		OnPostLoadGameDelegate.Broadcast(SaveConfigData);
	}

	OnPostLoadGame(SaveConfigData);
}

void USaveGameStrategyBase::RegisterObject(UObject* Object)
{
	UE_LOG(LogTrigger, Error, TEXT("Plese implement RegisterObject function in class %s"), *GetClass()->GetName());
}

void USaveGameStrategyBase::UnRegisterObject(UObject* Object)
{
	UE_LOG(LogTrigger, Error, TEXT("Plese implement UnRegisterObject function in class %s"), *GetClass()->GetName());
}

TSubclassOf<USaveGameStrategyBase> USaveGameStrategyBase::PreporcessData(USaveGameConfigBase* SaveConfigData)
{
	UE_LOG(LogTrigger, Error, TEXT("Plese implement PreporcessData function in class %s"), *GetClass()->GetName());
	return nullptr;
}