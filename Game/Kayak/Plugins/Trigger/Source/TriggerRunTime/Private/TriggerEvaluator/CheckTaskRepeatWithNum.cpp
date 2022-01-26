#include "CheckTaskRepeatWithNum.h"
#include "TriggerTaskStateSwitchBase.h"

UCheckTaskRepeatWithNum::UCheckTaskRepeatWithNum(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UCheckTaskRepeatWithNum::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	bool Result = true;

	if (RepeatTaskData.MaxCount > 0 && RepeatTaskData.CurrentCount >= RepeatTaskData.MaxCount)
	{
		Result = false;
	}

	return Result;
}

void UCheckTaskRepeatWithNum::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	if (RepeatTaskData.TriggerTask.GetTriggerTask() != nullptr)
	{
		if (!RepeatTaskData.TriggerTask.GetTriggerTask()->HasAlreayBind(RepeatTaskData.State, this, &UCheckTaskRepeatWithNum::RegisterToTaskEvent))
		{
			RepeatTaskData.TriggerTask.GetTriggerTask()->AddTriggerTaskStateListener(RepeatTaskData.State, this, &UCheckTaskRepeatWithNum::RegisterToTaskEvent);
		}
	}
}

void UCheckTaskRepeatWithNum::NativeReset()
{
	Super::NativeReset();

	RepeatTaskData.CurrentCount = 0;
}

void UCheckTaskRepeatWithNum::RegisterToTaskEvent(UTriggerTaskBase* Task)
{
	if (RepeatTaskData.TriggerTask.GetTriggerTask() == nullptr ||
		RepeatTaskData.TriggerTask.GetTriggerTask() == Task)
	{
		RepeatTaskData.CurrentCount++;

		NotifyToEvaluate();
	}
}

void UCheckTaskRepeatWithNum::BeginDestroy()
{
	if (RepeatTaskData.TriggerTask.GetTriggerTask() != nullptr)
	{
		RepeatTaskData.TriggerTask.GetTriggerTask()->RemoveTriggerTaskStateListener(RepeatTaskData.State, this, &UCheckTaskRepeatWithNum::RegisterToTaskEvent);
	}

	Super::BeginDestroy();
}

void UCheckTaskRepeatWithNum::PostLoad()
{
	Super::PostLoad();
}

void UCheckTaskRepeatWithNum::PostInitProperties()
{
	Super::PostInitProperties();

	/*
	* Make sure the task will always be the immediate trigger task;
	*/
	RepeatTaskData.TriggerTask.SoftTaskObject = GetTypedOuter<UTriggerTaskBase>();
	RepeatTaskData.TriggerTask.UpdateTriggerTask();
}

void UCheckTaskRepeatWithNum::InitializeLocalMember( void* InData)
{
	if (InData == nullptr)
	{
		RepeatTaskData.CurrentCount = 0;
		RepeatTaskData.MaxCount = INFINIT_COUNT;
		RepeatTaskData.State = ETriggerTaskState::ETriggerTaskState_Active;
		return ;
	}

	FRepeatTaskStateData* Data = static_cast<FRepeatTaskStateData*>(InData);

	RepeatTaskData.TriggerTask.SoftTaskObject = Data->TriggerTask.SoftTaskObject;
	RepeatTaskData.CurrentCount = Data->CurrentCount;
	RepeatTaskData.MaxCount = Data->MaxCount;
	RepeatTaskData.State = Data->State;
}

int UCheckTaskRepeatWithNum::GetRepeatCount_Implementation()
{
	UTriggerTaskBase* Task = RepeatTaskData.TriggerTask.GetTriggerTask();

	if (Task == nullptr)
	{
		UObject* Object = GetOuter();
		for (; Object != nullptr;)
		{
			Task = Cast<UTriggerTaskBase>(Object);

			if (Task != nullptr)
			{
				break;
			}
			Object = Object->GetOuter();

		}
	}

	if(Task == nullptr)
		return INFINIT_COUNT;

	if(Task->GetRepeatConditions() == nullptr)
		return INFINIT_COUNT;

	TArray<UEvaluatorCondition*> Conditions;
	Task->GetRepeatConditions()->GetAllEvaluatorConditions(Conditions);

	int TotalRepeatCount = 0;

	for (auto Condition : Conditions)
	{
		UCheckTaskRepeatWithNum* RepeatWithNumData = Cast<UCheckTaskRepeatWithNum>(Condition);

		if (RepeatWithNumData != nullptr)
		{
			TotalRepeatCount += RepeatWithNumData->RepeatTaskData.CurrentCount;
		}
	}

	return TotalRepeatCount;
}

#if WITH_EDITOR

void UCheckTaskRepeatWithNum::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
}

#endif