// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "RS_RepeatTaskAfterStateDelay.h"
#include "TriggerDefinition.h"
#include "TriggerTaskStart_TaskInternalExecuteInfoBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"

#include "TimerManager.h"

#define RS_RTASD_RATETIME 0.05f

URS_RepeatTaskAfterStateDelay::URS_RepeatTaskAfterStateDelay(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer), DelayTimeToRepeat(0.0f), LeftTime(0.0f)
{

}

void URS_RepeatTaskAfterStateDelay::ReachTargetTriggerState(UTriggerTaskBase* Task)
{
    Super::ReachTargetTriggerState(Task);

    if (!Task->IsRunning() || DelayTimeToRepeat < 0.001f)
    {//if task is not running, or DelayTime is not valid, repeat immediately
        RepeatTask(Task);
        return;
    }
    if (!DelayTimeHandle.IsValid())
    {
        FTaskActivationInfo& ActivationInfo = Task->GetImmediateActivationInformation().FindActiveInfoByTriggerTask(Task);
        if (!ActivationInfo.IsVaild())
        {
            return;
        }
        CachedActivationInfo = ActivationInfo;
        TaskToRepeat = Task;
        LeftTime = DelayTimeToRepeat;
        GetWorld()->GetTimerManager().SetTimer(DelayTimeHandle, this, &URS_RepeatTaskAfterStateDelay::HandleDelayTime, RS_RTASD_RATETIME, true);
    }
}

float URS_RepeatTaskAfterStateDelay::GetLeftTime()
{
    return LeftTime;
}

void URS_RepeatTaskAfterStateDelay::HandleDelayTime()
{
    LeftTime -= RS_RTASD_RATETIME;
    if (LeftTime > 0.001f)
    {//not yet.
        OnDelayTimerUpdate.Broadcast(LeftTime);
        return;
    }
    //the final time
    OnDelayTimerUpdate.Broadcast(0.0f);
    GetWorld()->GetTimerManager().ClearTimer(DelayTimeHandle);

    CustomRepeatTask();
    CachedActivationInfo = FTaskActivationInfo();//empty all info.
}

void URS_RepeatTaskAfterStateDelay::CustomRepeatTask()
{
    if (!TaskToRepeat.IsValid() || UTriggerBlueprintLib::GetOperationInfoManager() == nullptr)
    {
        UE_LOG(LogTrigger, Error, TEXT("URS_RepeatTaskAfterStateDelay::HandleDelayTime Task to repeat is not valid."));
        return;
    }

    UTriggerTaskBase* RepeatTaskPtr = TaskToRepeat.Get();

    UTriggerTaskStart_RepeatTaskWhenReachState* ToggleInformation = Cast<UTriggerTaskStart_RepeatTaskWhenReachState>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass()).Operation);

    if (ToggleInformation)
    {
        ToggleInformation->CopyFromActiveInfo(CachedActivationInfo);
    }
    else
    {
        return;
    }

    for (int i = 0; i < CheckTaskState->TaskDatas.Num(); i++)
    {
        if (CheckTaskState->GetTriggerTask(i) == RepeatTaskPtr)
        {
            ToggleInformation->SetTaskState(CheckTaskState->TaskDatas[i].State);
        }
    }

    //Before start new task, I need to reset the CheckTaskState so that it can get the new state info
    CheckTaskState->BP_Reset();

    RepeatTaskPtr->ReceiveNotifyFromOthersComponent(RepeatTaskPtr->GetTriggerOwner(), RepeatTaskPtr, ToggleInformation);
}
