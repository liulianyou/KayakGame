#include "TriggerEventRewardManager.h"
#include "TriggerTaskManager.h"
#include "TriggerEvaluator_OR.h"
#include "CheckTaskState.h"
#include "GameFramework/Actor.h"

#if WITH_EDITOR
#include "Editor.h"
#endif

UTriggerEventRewardManager::UTriggerEventRewardManager(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
	TaskManager(nullptr)
{
	RewardDataClass = UTriggerEventRewardDataWithID::StaticClass();
}

void UTriggerEventRewardManager::Initialize(UTriggerTaskManager* OwnerManager)
{
	OnInitialize(OwnerManager);

	TaskManager = OwnerManager;

	if (TaskManager)
	{
		TaskManager->TaskRegisterEvent.AddDynamic(this, &UTriggerEventRewardManager::OnTaskRegisterEvent);
		TaskManager->TaskUnRegisterEvent.AddDynamic(this, &UTriggerEventRewardManager::OnTaskUnRegisterEvent);
	}
}

bool UTriggerEventRewardManager::IsObjectValid(UObject* Object)
{
	if(Object == nullptr || Object->IsPendingKill() || !Object->IsValidLowLevel() ||
		//This object is created for BP initialization
		Object->GetName().StartsWith(TEXT("TRASH_"), ESearchCase::IgnoreCase))
		return false;

	if(!CheckObjectValidInternal( Object ))
		return false;

	return true;
}

bool UTriggerEventRewardManager::CheckObjectValidInternal(UObject* Object)
{
	if (Object == nullptr)
		return true;

	if (Object->HasAnyFlags(RF_TextExportTransient | RF_NonPIEDuplicateTransient | RF_Transient) ||
		//This object is created for BP initialization
		Object->GetName().StartsWith(TEXT("TRASH_"), ESearchCase::IgnoreCase))
	{
		return false;
	}
	else
		return CheckObjectValidInternal(Object->GetOuter());
}

void UTriggerEventRewardManager::OnTaskRegisterEvent(UTriggerTaskBase* TriggerTask)
{
	if(!IsObjectValid(TriggerTask))
		return;

	UTriggerTaskExternalDataBase* RewardData = TriggerTask->GetTargetUserData(UTriggerEventRewardDataBase::StaticClass());

	if (RewardData != nullptr)
	{
		if (RemoveDifferentDataType)
		{
			bool NeedRemoved = false;

			if (CheckExactDataType)
			{
				if (RewardData->GetClass() != RewardDataClass)
					NeedRemoved = true;
			}
			else
			{
				if (RewardData->GetClass()->IsChildOf(RewardDataClass))
					NeedRemoved = true;
			}

			if (NeedRemoved)
			{
				TriggerTask->RemoveUserDataByInstance(RewardData);
			}
		}
	}
	else
	{
		UTriggerEventRewardDataBase* NewRewardData = Cast<UTriggerEventRewardDataBase>(TriggerTask->AddNewUserDataByClass(RewardDataClass));

		//Add default condition for the target reward request condition
		{
			if (NewRewardData != nullptr && NewRewardData->RequestRewardCondition == nullptr)
			{
				NewRewardData->RequestRewardCondition = NewObject<UTriggerEvaluator_OR>(NewRewardData, UTriggerEvaluator_OR::StaticClass());

				if (NewRewardData->RequestRewardCondition)
				{
					UCheckTaskState* CheckTaskState = NewObject<UCheckTaskState>(NewRewardData->RequestRewardCondition, UCheckTaskState::StaticClass());

					if (CheckTaskState)
					{
						FTaskStateData TaskData;
						TaskData.State = ETriggerTaskState::ETriggerTaskState_Finished;
						TaskData.TriggerTask.SoftTaskObject = TriggerTask;
						TaskData.TriggerTask.UpdateTriggerTask(TriggerTask);

						CheckTaskState->AddTaskData(TaskData);

						NewRewardData->RequestRewardCondition->Condtions.Add(CheckTaskState);
					}
				}
			}
		}

		TriggerTask->MarkPackageDirty();
	}
}

void UTriggerEventRewardManager::OnTaskUnRegisterEvent(UTriggerTaskBase* TriggerTask)
{
	for (int i = 0; i < RequestRewardCommand.Num(); i++)
	{
		if (RequestRewardCommand[i] == nullptr || !RequestRewardCommand[i]->IsValidLowLevel())
		{
			RequestRewardCommand.RemoveAt(i--);
			continue;
		}

		UTriggerTaskBase* TaskOuter = RequestRewardCommand[i]->GetTypedOuter<UTriggerTaskBase>();

		if (TaskOuter == TriggerTask)
		{
			RequestRewardCommand.RemoveAt(i--);
		}
	}
}

FString& UTriggerEventRewardManager::GetTheMaxRewardIDByRewardData(UTriggerEventRewardDataBase* RewardData)
{
	if(RewardData == nullptr)
		return UTriggerEventRewardDataBase::InvalidRewardID;

	ULevel* Level = RewardData->GetTypedOuter<ULevel>();

	//When the level is empty, Should never go this pass
	if(Level == nullptr)
		return UTriggerEventRewardDataBase::InvalidRewardID;

	FString LevelName = Level->GetOuter()->GetName();

	TArray<FMaxRewardID>* RewardIDPoolPtr = RewardIDMap.Find(LevelName);

	//When there is no correspond pool for the target data type
	if(RewardIDPoolPtr == nullptr)
		return UTriggerEventRewardDataBase::EmptyRewardID;

	UClass* DataType = RewardData->GetClass();

	FMaxRewardID* RewardIDPtr = RewardIDPoolPtr->FindByPredicate([&](const FMaxRewardID& Data){
		if(Data.DataType == DataType)
			return true;
		else
			return false;
	});

	if(RewardIDPtr == nullptr)
		return UTriggerEventRewardDataBase::EmptyRewardID;

	return RewardIDPtr->MaxRewarDID;
}

void UTriggerEventRewardManager::RegisterRewardData(UTriggerEventRewardDataBase* RewardData)
{
	if(!IsObjectValid(RewardData))
		return;

	TryToAddMaxRewardID( RewardData );

	TArray<UTriggerEventRewardDataBase*>* DatasPtr = RewardIDPool.Find(RewardData->GetRewardID());

	if (DatasPtr == nullptr)
	{
		TArray<UTriggerEventRewardDataBase*> NewRewardDataPool;

		NewRewardDataPool.Add(RewardData);

		RewardIDPool.Add(RewardData->GetRewardID(), NewRewardDataPool);
	}
	else
	{
		UTriggerTaskBase* Task = RewardData->GetTriggerTaskOwner();

		bool NeedAddToPool = true;

		/*
		* First try to check weather this data is duplicated from original trigger task
		*/
		if (Task != nullptr)
		{
			UTriggerEventRewardDataBase** DataPtr = DatasPtr->FindByPredicate([&](const UTriggerEventRewardDataBase* Data){
				UTriggerTaskBase* LocalTask = Data->GetTriggerTaskOwner();

				if(LocalTask == nullptr)
					return false;

				if (LocalTask->GetID() == Task->GetID())
				{
					return true;
				}
				else
				{
					return false;
				}
			});

			if (DataPtr != nullptr)
			{
				NeedAddToPool = false;
			}
		}

		if (NeedAddToPool)
		{
			if (DatasPtr->Find(RewardData) == INDEX_NONE)
			{
				DatasPtr->Add(RewardData);

				UE_LOG(LogTrigger, Warning, TEXT("RewardID in the target data %s is not right, you should refreh the ID Mannually"), *RewardData->GetTypedOuter<AActor>()->GetName());
			}
		}
	}
}

void UTriggerEventRewardManager::UnregisterRewardData(UTriggerEventRewardDataBase* RewardData)
{
	for (auto IT = RewardIDPool.CreateIterator(); IT; ++IT)
	{
		int Index = IT.Value().Find(RewardData);

		if (Index != INDEX_NONE)
		{
			IT.Value().RemoveAt(Index);
		}

		if (IT.Value().Num() == 0)
		{
			IT.RemoveCurrent();
		}
	}

	RewardIDPool.Compact();
}

bool UTriggerEventRewardManager::TryToGenerateRewardID_Implementation(UTriggerEventRewardDataBase* TargetData, FString& ID)
{
	ID = TEXT("");

	if(TargetData == nullptr)
		return false;

	ULevel* Level = TargetData->GetTypedOuter<ULevel>();

	FString LevelName = Level->GetOuter()->GetName();

	FString MaxRewardID = GetTheMaxRewardIDByRewardData( TargetData );

	bool Result = false;

	if (!TargetData->IsValidRewardID(TargetData->GetRewardID()))
	{
		ID = TargetData->GenerateNextID(MaxRewardID);

		TargetData->SetRewardID(ID);

		//As the next ID is a numeric so I need to convert it with map name
		ID = TargetData->GetRewardID();

		TargetData->MarkPackageDirty();

		Result = true;
	}

	return Result;
}

void UTriggerEventRewardManager::RequestReward_Implementation(UTriggerEventRewardDataBase* RewardData)
{
	if (RewardData != nullptr)
	{
		RequestRewardCommand.AddUnique(RewardData);

		RequestRewardDelegate.Broadcast(RewardData->GetRewardID());

		AActor* Actor = RewardData->GetTypedOuter<AActor>();

		FString ActorName;

		if (Actor != nullptr)
		{
			ActorName = Actor->GetName();
		}

		UE_LOG(LogTrigger, Display, TEXT("Try to request rewar with ID: %s. int task: %s"), *RewardData->GetRewardID(), *ActorName);
	}
}

void UTriggerEventRewardManager::AcceptReward_Implementation(const FString& RewardID, const TArray<FRewardData>& RewardDatas)
{
	for (int i = 0; i < RequestRewardCommand.Num(); i++)
	{
		if(RequestRewardCommand[i] == nullptr || !RequestRewardCommand[i]->IsValidLowLevel())
			continue;

		if (RequestRewardCommand[i]->GetRewardID() == RewardID)
		{
			RequestRewardCommand[i]->AcceptReward(RewardDatas);

			RequestRewardCommand.RemoveAt(i--);
		}
	}
}

void UTriggerEventRewardManager::RefreshRewradID( UObject* WorldContent )
{
	UWorld* World = GEngine->GetWorldFromContextObject(WorldContent, EGetWorldErrorMode::LogAndReturnNull);

	for (auto IT = RewardIDPool.CreateIterator(); IT; ++IT)
	{

		for (int i = 0; i < IT.Value().Num(); i++)
		{
			UTriggerEventRewardDataBase* Reward = IT.Value()[i];
			if (!IsObjectValid(Reward))
			{
				IT.Value().RemoveAt(i--);
			}
		}

		/*
		* If there are several reward ID have the same reward ID, then means I need to regenerate reward ID for them
		* So the first index is from 1 not 0
		*/
		for (int i = 1; i < IT.Value().Num(); i++)
		{
			UTriggerEventRewardDataBase* Reward = IT.Value()[i];

			if (Reward == nullptr || Reward->IsPendingKill())
			{
				continue;
			}

			if (Reward->GetWorld() != World && World != nullptr)
			{
				continue;
			}

			FString MaxRewardID = GetTheMaxRewardIDByRewardData(Reward);

			Reward->SetRewardID(Reward->GenerateNextID(MaxRewardID));

			if (Reward->IsLarger(MaxRewardID))
			{
				TryToAddMaxRewardID(Reward);
			}

			IT.Value().RemoveAt( i-- );

			Reward->MarkPackageDirty();
		}

		if (IT.Value().Num() <= 1)
		{
			IT.RemoveCurrent();
		}
	}

	RewardIDPool.Compact();

	//check(RewardIDPool.Num() == 0);

}

void UTriggerEventRewardManager::TryToAddMaxRewardID(UTriggerEventRewardDataBase* RewardData)
{
	if (RewardData == nullptr)
		return;

	ULevel* Level = RewardData->GetTypedOuter<ULevel>();

	if (Level == nullptr)
		return;

	FString LevelName = Level->GetOuter()->GetName();

	TArray<FMaxRewardID>* RewardIDPoolPtr = RewardIDMap.Find(LevelName);

	if (RewardIDPoolPtr == nullptr)
	{
		RewardIDMap.Add(LevelName, TArray<FMaxRewardID>());

		RewardIDPoolPtr = &RewardIDMap[LevelName];
	}

	UClass* DataType = RewardData->GetClass();

	FMaxRewardID* RewardIDPtr = RewardIDPoolPtr->FindByPredicate([&](const FMaxRewardID& Data) {
		if (Data.DataType == DataType)
			return true;
		else
			return false;
		});

	if (RewardIDPtr == nullptr)
	{
		FMaxRewardID MaxRewardID;
		MaxRewardID.DataType = DataType;
		MaxRewardID.MaxRewarDID = RewardData->GetRewardID();

		RewardIDPoolPtr->Add(MaxRewardID);
	}
	else
	{
		if (RewardData->IsLarger(RewardIDPtr->MaxRewarDID))
		{
			RewardIDPtr->MaxRewarDID = RewardData->GetRewardID();
		}
	}
}