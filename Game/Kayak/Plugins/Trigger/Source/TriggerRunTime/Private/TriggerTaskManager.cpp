#include "TriggerTaskManager.h"
#include "NewTriggerBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerToolFactory.h"
#include "TriggerConfig.h"
#include "TriggerManager.h"
#include "SaveGame/TriggerSaveGameManager.h"
#include "TriggerEventRewardManager.h"
#include "TriggerTaskRunHelp.h"
#include "AIController.h"
#include "GameFramework/Pawn.h"

#if WITH_EDITORONLY_DATA
#include "Editor.h"
#endif

UTriggerTaskManager::UTriggerTaskManager(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer),
	TriggerTaskRunHelp(nullptr)
{
	TriggerTasks.Empty();
}

void UTriggerTaskManager::Initialize(UTriggerManager* TriggerManager)
{
	TriggerManagerOwner = TriggerManager;

	CreateNewRewardManager();
}

UTriggerTaskBase* UTriggerTaskManager::CreateNewTaskByClass(UTriggerTaskComponentBase* Owner, TSubclassOf<UTriggerTaskBase> Templete, bool AsTemplate)
{
	 UTriggerTaskBase* NewInstance = NewObject<UTriggerTaskBase>(Owner, Templete);

	if (NewInstance)
	{
		RegisterTask(NewInstance);

		NewInstance->InitializeTask(Owner, AsTemplate, true);

		Owner->AddTask(NewInstance);
	}

	return NewInstance;
}

UTriggerTaskBase* UTriggerTaskManager::CreateNewTaskByObject(UTriggerTaskComponentBase* Owner, UTriggerTaskBase* Templete, bool AsTemplate)
{
	if (Templete == nullptr)
		return nullptr;

	UTriggerTaskBase* NewInstance = NewObject<UTriggerTaskBase>(Owner, Templete->GetClass(), NAME_None, RF_NoFlags, Templete);

	RegisterTask(NewInstance);

	NewInstance->InitializeTask(Owner, AsTemplate, true);

	Owner->AddTask(NewInstance);

	return NewInstance;
}


void UTriggerTaskManager::RegisterTask(UTriggerTaskBase* Task)
{
	if (Task == nullptr) return;

	//When this task should be saved I need to register it to the save game system
	if (Task->ShouldBeSaved)
	{
		GetTriggerManager()->GetTriggerSaveGameManager()->RegisterSaveGameObject(Task);
	}

	if (TriggerTasks.Find(Task) == INDEX_NONE)
	{
		TriggerTasks.Add(Task);

		TaskRegisterEvent.Broadcast(Task);
	}
}

void UTriggerTaskManager::UnRegisterTask(UTriggerTaskBase* Task)
{
	int Index = TriggerTasks.Find(Task);

	if (Index != INDEX_NONE)
	{
		if (UTriggerTaskRunHelp* LocalTriggerTaskRunHelp = GetTriggerTaskRunHelp())
		{
			LocalTriggerTaskRunHelp->TryToRemovePendingRuntimeInfo(TriggerTasks[Index]->GetID());
		}

		TriggerTasks.RemoveAt(Index);

		TaskUnRegisterEvent.Broadcast(Task);
	}
}

FTriggerStaticsTool* UTriggerTaskManager::GetTriggerStaticsTool()
{
	if (TriggerStaticsToolInstance != nullptr)
	{
		return TriggerStaticsToolInstance;
	}
	else
	{
		TriggerStaticsToolInstance = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FTriggerStaticsTool>();
	}

	return TriggerStaticsToolInstance;
}

UTriggerTaskRunHelp* UTriggerTaskManager::GetTriggerTaskRunHelp()
{
	if (TriggerTaskRunHelp != nullptr)
	{
		return TriggerTaskRunHelp;
	}
	else
	{
		TriggerTaskRunHelp = NewObject<UTriggerTaskRunHelp>(this, TEXT("TriggerTaskRunHelp"));

		if (TriggerTaskRunHelp != nullptr)
		{
			TriggerTaskRunHelp->InitializeTriggerTaskRunHelp();
		}

		return TriggerTaskRunHelp;
	}
}

UTriggerEventRewardManager* UTriggerTaskManager::GetRewardManager()
{
	if(IsPendingKill())
		return nullptr;

	return RewardManager;
}

UTriggerEventRewardManager* UTriggerTaskManager::CreateNewRewardManager()
{
	UClass* RewardManagerClass = UTriggerEventRewardManager::StaticClass();

	UTriggerConfig* Config = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

	if (Config->DefalutTriggerEventRewardManagerClass.Get() != nullptr)
	{
		RewardManagerClass = Config->DefalutTriggerEventRewardManagerClass;
	}

	RewardManager = NewObject<UTriggerEventRewardManager>(this, RewardManagerClass);

	if (RewardManager != nullptr)
	{
		RewardManager->Initialize(this);
	}

	return RewardManager;
}