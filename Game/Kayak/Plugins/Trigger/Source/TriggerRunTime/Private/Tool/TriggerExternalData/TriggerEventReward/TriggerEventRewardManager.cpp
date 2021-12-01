#include "TriggerEventRewardManager.h"
#include "TriggerTaskManager.h"
#include "TriggerEvaluator_OR.h"
#include "CheckTaskState.h"

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

void UTriggerEventRewardManager::OnTaskRegisterEvent(UTriggerTaskBase* TriggerTask)
{
	if(TriggerTask == nullptr)
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

	}
}

void UTriggerEventRewardManager::OnTaskUnRegisterEvent(UTriggerTaskBase* TriggerTask)
{
	
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
		return UTriggerEventRewardDataBase::InvalidRewardID;

	UClass* DataType = RewardData->GetClass();

	FMaxRewardID* RewardIDPtr = RewardIDPoolPtr->FindByPredicate([&](const FMaxRewardID& Data){
		if(Data.DataType == DataType)
			return true;
		else
			return false;
	});

	if(RewardIDPtr == nullptr)
		return UTriggerEventRewardDataBase::InvalidRewardID;

	return RewardIDPtr->MaxRewarDID;
}

void UTriggerEventRewardManager::AddNewMaxRewardID(UTriggerEventRewardDataBase* RewardData, const FString& NewMaxRewardID)
{
	if(RewardData == nullptr)
		return ;

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
		MaxRewardID.MaxRewarDID = NewMaxRewardID;

		RewardIDPoolPtr->Add(MaxRewardID);
	}
	else
	{
		RewardIDPtr->MaxRewarDID = NewMaxRewardID;
	}
}

bool UTriggerEventRewardManager::TryToGenerateRewardID_Implementation(UTriggerEventRewardDataBase* TargetData, FString& ID)
{
	ID = TEXT("");

	if(TargetData == nullptr)
		return false;

	ULevel* Level = TargetData->GetTypedOuter<ULevel>();

	FString LevelName = Level->GetOuter()->GetName();

	FString MaxRewardID = GetTheMaxRewardIDByRewardData( TargetData );

	if (MaxRewardID == UTriggerEventRewardDataBase::InvalidRewardID)
	{
		AddNewMaxRewardID(TargetData, UTriggerEventRewardDataBase::EmptyRewardID);

		MaxRewardID = GetTheMaxRewardIDByRewardData(TargetData);
	}

	bool Result = false;

	if (TargetData->GetRewardID().IsEmpty())
	{
		ID = TargetData->GenerateNextID(MaxRewardID);

		TargetData->SetRewardID(ID);

		Result = true;
	}

	if (TargetData->IsLarger(MaxRewardID))
	{
		AddNewMaxRewardID(TargetData, TargetData->GetRewardID());
	}

	return Result;
}

void UTriggerEventRewardManager::RequestReward_Implementation(UTriggerEventRewardDataBase* RewardData)
{
	if (RewardData != nullptr)
	{
		RequestRewardCommand.Add(RewardData);

		RequestRewardDelegate.Broadcast(RewardData->GetRewardID());
	}
}

void UTriggerEventRewardManager::AcceptReward_Implementation(const FString& RewardID, const TArray<FRewardData>& RewardDatas)
{
	for (int i = 0; i < RequestRewardCommand.Num(); i++)
	{
		if(RequestRewardCommand[i] == nullptr)
			continue;

		if (RequestRewardCommand[i]->GetRewardID() == RewardID)
		{
			RequestRewardCommand[i]->AcceptReward(RewardDatas);

			RequestRewardCommand.RemoveAt(i--);
		}
	}
}