#include "TriggerTaskStart_TaskInternalExecuteInfoBase.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"

UTriggerTaskStart_TaskInternalExecutionInfoBase::UTriggerTaskStart_TaskInternalExecutionInfoBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

AActor* UTriggerTaskStart_TaskInternalExecutionInfoBase::GetToggledActor_Implementation() const
{
	AActor* Result = Super::GetToggledActor_Implementation();

	if (Result == nullptr && GetParentOperationInfo() != nullptr)
	{
		UTriggerTaskStartInformationBase* StartOperation = Cast<UTriggerTaskStartInformationBase>(GetParentOperationInfo());

		if (StartOperation != nullptr)
		{
			Result = StartOperation->GetToggledActor();
		}
	}

	return Result;
}

void UTriggerTaskStart_TaskInternalExecutionInfoBase::CopyFromActiveInfo_Implementation(const FTaskActivationInfo& ActiveInfo)
{
	SetParentOperationInfo(ActiveInfo.ProcessedExternalData);
}

void UTriggerTaskStart_TaskInternalExecutionInfoBase::SetParentOperationInfo(UOperationInformationBase* ParentToggleInfoParam)
{
	ParentOperationInfo = ParentToggleInfoParam;
}

UTriggerTaskStart_BeginPlay::UTriggerTaskStart_BeginPlay(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UTriggerTaskStart_StartTaskByStartConditions::UTriggerTaskStart_StartTaskByStartConditions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}


UTriggerTaskStart_TaskFinishedToNotifyChild::UTriggerTaskStart_TaskFinishedToNotifyChild(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UTriggerTaskStart_NotifyChildNode::UTriggerTaskStart_NotifyChildNode(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskStart_RepeatTaskBase::UTriggerTaskStart_RepeatTaskBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskStart_RepeatTaskWhenReachState::UTriggerTaskStart_RepeatTaskWhenReachState(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskStart_RepeatConditionsWithNoStyles::UTriggerTaskStart_RepeatConditionsWithNoStyles(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

UTriggerTaskStart_BeginPlay* UTriggerTaskStart_BeginPlay::StartTaskAtBeginPlay(UTriggerTaskBase* StartedTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle/* = nullptr*/)
{
	UTriggerTaskStart_BeginPlay* Result = Cast<UTriggerTaskStart_BeginPlay>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(StartedTask, UTriggerTaskStart_BeginPlay::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(StartedTask, OperationStyle, StartedTask);

	Result->SetParentOperationInfo(ParentOperation);

	return Result;
}

UTriggerTaskStart_StartTaskByStartConditions* UTriggerTaskStart_StartTaskByStartConditions::StartTaskByStartConditions(UTriggerTaskBase* StartedTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle/* = nullptr*/)
{
	UTriggerTaskStart_StartTaskByStartConditions* Result = Cast<UTriggerTaskStart_StartTaskByStartConditions>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(StartedTask, UTriggerTaskStart_StartTaskByStartConditions::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(StartedTask, OperationStyle, StartedTask);

	Result->SetParentOperationInfo(ParentOperation);

	return Result;
}

UTriggerTaskStart_TaskFinishedToNotifyChild* UTriggerTaskStart_TaskFinishedToNotifyChild::TaskFinishedToNotifyChild(UTriggerTaskBase* ParentTask, UTriggerTaskBase* ChildTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle/* = nullptr*/)
{
	UTriggerTaskStart_TaskFinishedToNotifyChild* Result = Cast<UTriggerTaskStart_TaskFinishedToNotifyChild>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(ParentTask, UTriggerTaskStart_TaskFinishedToNotifyChild::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(ParentTask, OperationStyle, ChildTask);

	Result->SetParentOperationInfo(ParentOperation);

	return Result;
}

UTriggerTaskStart_NotifyChildNode* UTriggerTaskStart_NotifyChildNode::NotifyChildNode(UTriggerTaskBase* FinishedTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle/* = nullptr*/)
{
	UTriggerTaskStart_NotifyChildNode* Result = Cast<UTriggerTaskStart_NotifyChildNode>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(FinishedTask, UTriggerTaskStart_NotifyChildNode::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(FinishedTask, OperationStyle, FinishedTask != nullptr ? FinishedTask->GetTriggerOwner() ? FinishedTask->GetTriggerOwner() : nullptr : nullptr);

	Result->SetParentOperationInfo(ParentOperation);

	return Result;
}

UTriggerTaskStart_RepeatConditionsWithNoStyles* UTriggerTaskStart_RepeatConditionsWithNoStyles::RepeatConditionsWithNoStyles(UObject* Causer, UTriggerTaskBase* TargetTask, UTriggerStyleBase* OperationStyle /*= nullptr*/)
{
	UTriggerTaskStart_RepeatConditionsWithNoStyles* Result = Cast<UTriggerTaskStart_RepeatConditionsWithNoStyles>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Causer, UTriggerTaskStart_RepeatConditionsWithNoStyles::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(Causer, OperationStyle, TargetTask);

	return Result;
}

UTriggerTaskStart_RepeatTaskWhenReachState* UTriggerTaskStart_RepeatTaskWhenReachState::RepeatTaskWhenReachState(UObject* Causer, UTriggerTaskBase* TargetTask, ETriggerTaskState TargetState, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle/* = nullptr*/)
{
	UTriggerTaskStart_RepeatTaskWhenReachState* Result = Cast<UTriggerTaskStart_RepeatTaskWhenReachState>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Causer, UTriggerTaskStart_RepeatTaskWhenReachState::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(Causer, OperationStyle, TargetTask);

	Result->SetParentOperationInfo(ParentOperation);

	Result->SetTaskState(TargetState);

	return Result;
}