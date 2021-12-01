#include "RepeatStyle/RS_RepeatTaskWhenReachTargetState.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskResetCommonOperationInfos.h"
#include "TriggerResetStyleBase.h"


URS_RepeatTaskWhenReachTargetStateImmediately::URS_RepeatTaskWhenReachTargetStateImmediately(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}


void URS_RepeatTaskWhenReachTargetStateImmediately::ReachTargetTriggerState(UTriggerTaskBase* Task)
{
	Super::ReachTargetTriggerState(Task);

	UTriggerTaskReset_CommonReset* RestInformation = UTriggerTaskReset_CommonReset::CommonReset(ResetType, this, this, nullptr, CustomizeResetStyle);

	//Before repeat task it should first reset target task
	Task->Reset(RestInformation);

	RepeatTask(Task);
}

bool URS_RepeatTaskWhenReachTargetStateImmediately::TryToRepeat_Implementation(UObject* Object)
{
	bool Result = Super::TryToRepeat_Implementation(Object);

	return Result;
}


URS_RepeatTaskUntilCompleteFinished::URS_RepeatTaskUntilCompleteFinished(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void URS_RepeatTaskUntilCompleteFinished::ReachTargetTriggerState(UTriggerTaskBase* Task)
{
	Super::ReachTargetTriggerState(Task);

	if (!Task->IsRunning())
	{
		RepeatTask(Task); 
	}
	else
	{
		//All task should be restarted when it is completed finished.

		if (!Task->HasAlreayBind(ETriggerTaskState::ETriggerTaskState_End, this, &URS_RepeatTaskUntilCompleteFinished::TaskPostFinishedCallback))
		{
			Task->AddTriggerTaskStateListener(ETriggerTaskState::ETriggerTaskState_End, this, &URS_RepeatTaskUntilCompleteFinished::TaskPostFinishedCallback);
		}

		if (CanStacked)
		{
			PendingToRepeatTasks.Add(Task);
		}
		else
		{
			PendingToRepeatTasks.AddUnique(Task);
		}
	}
}

void URS_RepeatTaskUntilCompleteFinished::TaskPostFinishedCallback(UTriggerTaskBase* Task)
{
	int Index = PendingToRepeatTasks.Find(Task);

	if (Index != INDEX_NONE)
	{
		RepeatTask(PendingToRepeatTasks[Index]);

		PendingToRepeatTasks.RemoveAt(Index);
	}
}