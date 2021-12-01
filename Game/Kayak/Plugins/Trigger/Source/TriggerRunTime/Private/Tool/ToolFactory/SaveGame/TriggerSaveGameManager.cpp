#include "SaveGame/TriggerSaveGameManager.h"
#include "SaveGame/TSGT_LocalFile.h"
#include "TriggerToolFactory.h"
#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#include "SaveGame/SaveGameConfig/SaveGameLocalFileData.h"
#include "SaveGame/SaveGameConfig/SaveGameConfigBase.h"
#include "SaveGame/TriggerSaveGameDefinition.h"
#include "TriggerDefinition.h"
#include "TriggerConfig.h"

TArray<TSubclassOf<USaveGameStrategyBase>> UTriggerSaveGameManager::StrategyClasses;

UTriggerSaveGameManager::UTriggerSaveGameManager(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UTriggerSaveGameManager::Initialize()
{
	if (SaveSystemInfo == nullptr)
	{
		UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

		UClass* HeadInfoClass = USaveGameSystemInfoBase::StaticClass();

		if (TriggerConfig != nullptr)
		{
			UClass* ConfigedClass = TriggerConfig->TriggerSaveSystemHeadInfoClassPath.TryLoadClass<USaveGameSystemInfoBase>();

			if (ConfigedClass != nullptr)
			{
				HeadInfoClass = ConfigedClass; 
			}
		}

		SaveSystemInfo = NewObject<USaveGameSystemInfoBase>(this, HeadInfoClass);
		
	}
}

void UTriggerSaveGameManager::GetCurrentWorkableSaveGameTools( TArray<FTriggerSaveGameToolBase*>& Tools )
{
	Tools.Empty();

	FTriggerSaveGameToolBase* Result = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTSGT_LocalFile>();

	Tools.Add(Result);

}

USaveGameStrategyBase* UTriggerSaveGameManager::GetSaveGameStrategyInstance(TSubclassOf<USaveGameStrategyBase> Class)
{
	FTriggerSaveGameToolBase* SaveGameTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerSaveGameToolBase>();

	//Should never pass
	if (SaveGameTool == nullptr)
		return nullptr;

	return SaveGameTool->FindOrAddNewStrategy(Class);
}

void UTriggerSaveGameManager::SaveGame(USaveGameConfigBase* SaveGameConfig)
{
	if (SaveGameConfig == nullptr)
		return;

	TArray<FTriggerSaveGameToolBase*> Tools;

	GetCurrentWorkableSaveGameTools(Tools);

	if (Tools.Num() == 0)
		return;

	for (int ToolIndex = 0; ToolIndex < Tools.Num(); ToolIndex++)
	{
		if(Tools[ToolIndex] == nullptr)
			continue;

		FTriggerSaveSystemDelegate::StartToSaveGame.Broadcast(SaveGameConfig, Tools[ToolIndex]);
		Tools[ToolIndex]->SaveGame(SaveGameConfig);
		FTriggerSaveSystemDelegate::SaveGameComplete.Broadcast(SaveGameConfig, Tools[ToolIndex]);
	}
}

void UTriggerSaveGameManager::LoadGame(USaveGameConfigBase* SaveGameConfig)
{
	TArray<FTriggerSaveGameToolBase*> Tools;

	GetCurrentWorkableSaveGameTools(Tools);

	if (Tools.Num() == 0)
		return;


	if (SaveGameConfig->StrategyClass != nullptr)
	{
		for (int ToolIndex = 0; ToolIndex < Tools.Num(); ToolIndex++)
		{
			if (Tools[ToolIndex] == nullptr)
				continue;
			FTriggerSaveSystemDelegate::StartToLoadGame.Broadcast(SaveGameConfig, Tools[ToolIndex]);
			Tools[ToolIndex]->LoadGame(SaveGameConfig);
			FTriggerSaveSystemDelegate::LoadGameComplete.Broadcast(SaveGameConfig, Tools[ToolIndex]);
		}
	}
	else
	{
		TArray<TSubclassOf<USaveGameStrategyBase>> LocalStrategyClasses;
		GetAllSaveGameStrategyClasses(LocalStrategyClasses);

		for (int i = 0; i < LocalStrategyClasses.Num(); i++)
		{
			USaveGameStrategyBase* SaveGameStrategy = Cast<USaveGameStrategyBase>(LocalStrategyClasses[i]->GetDefaultObject());

			if (SaveGameStrategy == nullptr)
				continue;

			SaveGameConfig->StrategyClass = SaveGameStrategy->PreporcessData(SaveGameConfig);

			//if (StrategyClass = SaveStrategyPreProcessDelegates[i].Execute(Data))
			if (SaveGameConfig->StrategyClass != nullptr)
			{
				for (int ToolIndex = 0; ToolIndex < Tools.Num(); ToolIndex++)
				{
					if (Tools[ToolIndex] == nullptr)
						continue;

					Tools[ToolIndex]->LoadGame(SaveGameConfig);
				}

				/*
				* Mostly one strategy have one data format, but it still can be exist that two strategies will use the same data format.
				* And all of them will process the data
				*/
				//break;
			}
		}
	}
}

void UTriggerSaveGameManager::RegisterSaveGameObject(UObject* Object, TSubclassOf<USaveGameStrategyBase> StrategyClass)
{
	if (Object == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Cann't register object, as the target object is nullptr"));

		return;
	}

	TArray<TSubclassOf<USaveGameStrategyBase>> AllStrategyClasses;

	if (StrategyClass == nullptr)
	{
		GetAllSaveGameStrategyClasses(AllStrategyClasses);
	}
	else
	{
		AllStrategyClasses.Add(StrategyClass);
	}

	TArray<FTriggerSaveGameToolBase*> Tools;
	GetCurrentWorkableSaveGameTools(Tools);

	if (Tools.Num() == 0)
	{

		UE_LOG(LogTrigger, Warning, TEXT("Cann't register object with name:%s, class:%s, as the There is no available save game tool for current work space"), *Object->GetName(), *Object->GetClass()->GetName());
		return;
	}

	for (auto Class : AllStrategyClasses)
	{
		for (int ToolIndex = 0; ToolIndex < Tools.Num(); ToolIndex++)
		{
			if (Tools[ToolIndex] == nullptr)
				continue;

			USaveGameStrategyBase* SaveGameStrategy = Tools[ToolIndex]->FindOrAddNewStrategy(Class);

			if (SaveGameStrategy == nullptr)
			{
				UE_LOG(LogTrigger, Warning, TEXT("There is no suitable strategy for save game tool for class: %s"), *Class->GetName());
				//Should never pass
				return;
			}

			SaveGameStrategy->RegisterObject(Object);
		}
	}
}

void UTriggerSaveGameManager::UnRegisterSaveGameObject(UObject* Object, TSubclassOf<USaveGameStrategyBase> StrategyClass)
{
	if (Object == nullptr || StrategyClass == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Cann't register object, as the target object is nullptr or class is null"));

		return;
	}

	TArray<TSubclassOf<USaveGameStrategyBase>> AllStrategyClasses;

	if (StrategyClass == nullptr)
	{
		GetAllSaveGameStrategyClasses(AllStrategyClasses);
	}
	else
	{
		AllStrategyClasses.Add(StrategyClass);
	}

	TArray<FTriggerSaveGameToolBase*> Tools;
	GetCurrentWorkableSaveGameTools(Tools);

	if (Tools.Num() == 0)
	{

		UE_LOG(LogTrigger, Warning, TEXT("Cann't register object with name:%s, class:%s, as the There is no available save game tool for current work space"), *Object->GetName(), *Object->GetClass()->GetName());
		return;
	}

	for (auto Class : AllStrategyClasses)
	{
		for (int ToolIndex = 0; ToolIndex < Tools.Num(); ToolIndex++)
		{
			if (Tools[ToolIndex] == nullptr)
				continue;

			USaveGameStrategyBase* SaveGameStrategy = Tools[ToolIndex]->FindOrAddNewStrategy(Class);

			if (SaveGameStrategy == nullptr)
			{
				UE_LOG(LogTrigger, Warning, TEXT("There is no suitable strategy for save game tool for class: %s"), *Class->GetName());
				//Should never pass
				return;
			}

			SaveGameStrategy->UnRegisterObject(Object);
		}
	}
}

void UTriggerSaveGameManager::GetAllSaveGameStrategyClasses(TArray<TSubclassOf<USaveGameStrategyBase>>& OutClasses)
{
	OutClasses.Empty();

	OutClasses.Append(StrategyClasses);
}

void UTriggerSaveGameManager::RegisterSaveGameStrategy( TSubclassOf<USaveGameStrategyBase> Class )
{
	int Index = UTriggerSaveGameManager::StrategyClasses.Find(*Class);

	if (Index == INDEX_NONE)
		UTriggerSaveGameManager::StrategyClasses.AddUnique(*Class);

}

void UTriggerSaveGameManager::UnRegisterSaveGameStrategy(TSubclassOf<USaveGameStrategyBase> Class)
{
	int Index = UTriggerSaveGameManager::StrategyClasses.Find(*Class);

	if (Index != INDEX_NONE)
		UTriggerSaveGameManager::StrategyClasses.RemoveAt(Index);
}

USaveGameConfigBase* UTriggerSaveGameManager::ConstructLocalFileConfigData(bool IsLoading, int UserIndex, FString SlotName, USaveGameSystemInfoBase* SystemInfo, TSubclassOf<USaveGameStrategyBase> Class)
{
	USaveGameLocalFileData* Result = NewObject<USaveGameLocalFileData>(this, USaveGameLocalFileData::StaticClass());

	Result->StrategyClass = Class;
	Result->UserIndex = UserIndex;
	Result->SlotName = SlotName;
	Result->IsLoading = IsLoading;
	Result->Data.Empty();

	if (SystemInfo != nullptr)
	{
		Result->SystemInfo = SystemInfo;
	}
	else
	{
		Result->SystemInfo = SaveSystemInfo;
	}

	if (IsLoading)
	{
		FTSGT_LocalFile* LocalFileTool = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTSGT_LocalFile>();

		LocalFileTool->ReadFile(Result->Data, Result);
	}

	return Result;
}


