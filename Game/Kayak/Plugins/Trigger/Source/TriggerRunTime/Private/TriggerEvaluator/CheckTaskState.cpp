#include "CheckTaskState.h"

UCheckTaskState::UCheckTaskState(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	TaskDatas.Empty();
}

void UCheckTaskState::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		UTriggerTaskBase* Task = GetTriggerTask(i);

		if (Task == nullptr)
			continue;

		TaskDatas[i].TriggerTask.UpdateTriggerTask();

		if (!Task->HasAlreayBind(TaskDatas[i].State, this, &UCheckTaskState::RegisterToTaskEvent))
		{
			Task->AddTriggerTaskStateListener(TaskDatas[i].State, this, &UCheckTaskState::RegisterToTaskEvent);
		}
		else
		{
			UE_LOG(LogTrigger, Error, TEXT("There is more than one condition:%s to inspect the same state of other Task"), *GetPathName());
		}
	}
}

bool UCheckTaskState::NativeEvaluator()
{
	//If there is no data in this state then just make this condition always true, But its value should not be empty!!!
	if (TaskDatas.Num() == 0)
	{
		UE_LOG(LogTrigger, Error, TEXT("The data in this condition %s should never be empty, You can remove this condition!!"), *GetPathName());

		return true;
	}
		
	bool Result = true;

	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		if (GetTriggerTask(i) == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("Please check the data in the CheackTaskState as the target task data is none"));
			continue;
		}
			
		//Skip the task which have satisfy the condition
		if (!TaskDatas[i].HasMeedtCondition)
		{
			Result = false;
			break;
		}
	}

	return Result;
}

void UCheckTaskState::BeginDestroy()
{
	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		if (GetTriggerTask(i) == nullptr)
			continue;

		GetTriggerTask(i)->RemoveTriggerTaskStateListener(TaskDatas[i].State, this, &UCheckTaskState::RegisterToTaskEvent);
	}

	Super::BeginDestroy();
}

void UCheckTaskState::PostLoad()
{
	Super::PostLoad();

	PopulateTriggerTaskData();
}

void UCheckTaskState::RegisterToTaskEvent(UTriggerTaskBase* Task)
{
	int Index = -1;

	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		if (GetTriggerTask(i) == nullptr ||
			GetTriggerTask(i) == Task)
		{
			TaskDatas[i].HasMeedtCondition = true;

			NotifyToEvaluate();
		}
	}
}


void UCheckTaskState::NativeReset()
{
	Super::NativeReset();

	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		TaskDatas[i].HasMeedtCondition = false;

		if (GetTriggerTask(i) == nullptr)
		{
			UE_LOG(LogTrigger, Error, TEXT("Please check the data in the CheackTaskState as the target task data is none"));
			continue;
		}

		//Don't remove this call back so that this task can check target task state again.
		//TaskDatas[i].TriggerTask.Task->RemoveTriggerTaskStateListener(TaskDatas[i].State, this, &UCheckTaskState::RegisterToTaskEvent);
	}
}


int UCheckTaskState::AddTaskData(FTaskStateData& TaskData)
{
	int Index = TaskDatas.Find(TaskData);

	if (Index == INDEX_NONE)
	{
		return TaskDatas.Add(TaskData);
	}

	return Index;
}

void UCheckTaskState::RemoveTaskData(FTaskStateData& TaskData)
{
	TaskDatas.Remove(TaskData);
}

UTriggerTaskBase* UCheckTaskState::GetTriggerTask(int Index)
{
	if(!TaskDatas.IsValidIndex(Index))
		return nullptr;

	UTriggerTaskBase* Result = TaskDatas[Index].TriggerTask.GetTriggerTask();

	if(Result == nullptr)
		Result = Cast<UTriggerTaskBase>(GetOwner());

	if(Result == nullptr)
		Result = GetTypedOuter<UTriggerTaskBase>();

	return Result;
}

bool operator==(const FTaskStateData& Left, const FTaskStateData& Right)
{
	if (Left.State == Right.State &&
		Left.TriggerTask.GetTriggerTask() == Right.TriggerTask.GetTriggerTask())
		return true;
	else
		return false;
}

void UCheckTaskState::PopulateTriggerTaskData()
{
	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		/*
		* Make sure all data in the target task state condition have valid trigger task;
		*/
		TaskDatas[i].TriggerTask.SoftTaskObject = GetTriggerTask(i);

		TaskDatas[i].TriggerTask.UpdateTriggerTask();
	}
}
