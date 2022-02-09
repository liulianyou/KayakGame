#include "RS_RepeatTaskWhenReachTargetStateBase.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerTaskStart_TaskInternalExecuteInfoBase.h"
#include "CheckTaskState.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"

URS_RepeatTaskWhenReachTargetStateBase::URS_RepeatTaskWhenReachTargetStateBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	CheckTaskState = CreateDefaultSubobject<UCheckTaskState>(TEXT("CheckTaskState"));

	FTaskStateData Data;
	CheckTaskState->AddTaskData(Data);
}

void URS_RepeatTaskWhenReachTargetStateBase::InitializeStyle(UObject* OwnerObject)
{
	Super::InitializeStyle(OwnerObject);

	if (CheckTaskState != nullptr)
	{
		CheckTaskState->NativeInitialize(this);
	}

	if (RepeatAutomatically 
		&& GetWorld() != nullptr
		&& CheckTaskState != nullptr)
	{
		//Add listener to the target state directly, do not use time hand to loop the evaluator of CheckTaskState as sometimes the state in the task can be changed in one frame 
		//and this will cause information miss.
		for (int i = 0; i < CheckTaskState->TaskDatas.Num(); i++)
		{
			if(CheckTaskState->GetTriggerTask(i) == nullptr)
				continue;

			CheckTaskState->EvaluatorDelegate.AddUniqueDynamic(this, &URS_RepeatTaskWhenReachTargetStateBase::TriggerTaskStateCallbackForLoop);
		}
	}
}

bool URS_RepeatTaskWhenReachTargetStateBase::TryToRepeat_Implementation(UObject* Object)
{
	bool Result = Super::TryToRepeat_Implementation(Object);

	/*
	* When start to repeat I need to copy the activation information for the actual repeat action.
	* As sometimes when repeating the trigger task the target task have empty the activation info such as it have run into end state
	*/
	if (UTriggerTaskBase* TaskOwner = GetRepeatedTriggerTask())
	{
		CashedActivationInfos = TaskOwner->GetImmediateActivationInformation();
	}
	
	UTriggerTaskBase* Task = Cast<UTriggerTaskBase>(Object);

	//This class only support trigger task
	if (Task != nullptr 
		&& Task->CanBeToggled())
	{
		Result = true;
	}

	//If it have not reach target state then add new listener to target task
	if (!CheckTaskState->Evaluator())
	{
		Result = false;
	}
	else
	{
		TryToRepeatTaskInternal();
	}

	return Result;
}

void URS_RepeatTaskWhenReachTargetStateBase::TriggerTaskStateCallbackForLoop(UEvaluatorBase* Evaluator, bool EvaluatorResult)
{
	if (EvaluatorResult)
	{
		Execute();
	}
}

void URS_RepeatTaskWhenReachTargetStateBase::ReachTargetTriggerState(UTriggerTaskBase* Task)
{
}

void URS_RepeatTaskWhenReachTargetStateBase::TryToRepeatTaskInternal()
{
	if (CheckTaskState->Evaluator())
	{
		//This should only the first task will work as task data should only have one element
		for (int i = 0; i < CheckTaskState->TaskDatas.Num(); i++)
		{
			UTriggerTaskBase* Task = CheckTaskState->GetTriggerTask(i);

			if (Task == nullptr)
				continue;

			ReachTargetTriggerState(Task);
		}
	}
}

bool URS_RepeatTaskWhenReachTargetStateBase::RepeatTask(UTriggerTaskBase* Task)
{
	if(Task == nullptr)
		return false;

	FTaskActivationInfo& ActivationInfo = CashedActivationInfos.FindActiveInfoByTriggerTask(Task);

	if (!ActivationInfo.IsValid() || UTriggerBlueprintLib::GetOperationInfoManager() == nullptr)
		return false;

	UTriggerTaskStart_RepeatTaskWhenReachState* ToggleInformation = Cast<UTriggerTaskStart_RepeatTaskWhenReachState>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(this, UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass()).Operation);

	if (ToggleInformation)
	{
		ToggleInformation->CopyFromActiveInfo(ActivationInfo);
	}

	for (int i = 0; i < CheckTaskState->TaskDatas.Num(); i++)
	{
		if (CheckTaskState->GetTriggerTask(i) == Task)
		{
			ToggleInformation->SetTaskState(CheckTaskState->TaskDatas[i].State);
		}
	}

	//Before start new task, I need to reset the CheckTaskState so that it can get the new state info
	CheckTaskState->BP_Reset();

	Task->ReceiveNotifyFromOthersComponent(Task->GetTriggerOwner(), Task, ToggleInformation);

	return true;
}

void URS_RepeatTaskWhenReachTargetStateBase::BeginDestroy()
{
	if (CheckTaskState != nullptr && CheckTaskState->IsValidLowLevel())
	{
		for (int i = 0; i < CheckTaskState->TaskDatas.Num(); i++)
		{
			if (CheckTaskState->GetTriggerTask(i) == nullptr)
				continue;

			CheckTaskState->EvaluatorDelegate.RemoveDynamic(this, &URS_RepeatTaskWhenReachTargetStateBase::TriggerTaskStateCallbackForLoop);
		}
	}

	Super::BeginDestroy();
}

void URS_RepeatTaskWhenReachTargetStateBase::PostLoad()
{
	Super::PostLoad();
}

void URS_RepeatTaskWhenReachTargetStateBase::Serialize(FArchive& Ar)
{
	Super::Serialize(Ar);
}

void URS_RepeatTaskWhenReachTargetStateBase::PostInitProperties()
{
	Super::PostInitProperties();

	if (CheckTaskState != nullptr)
		CheckTaskState->PopulateTriggerTaskData();
}

#if WITH_EDITOR

void URS_RepeatTaskWhenReachTargetStateBase::PreEditChange(FProperty* PropertyAboutToChange)
{
	Super::PreEditChange(PropertyAboutToChange);
}

#endif