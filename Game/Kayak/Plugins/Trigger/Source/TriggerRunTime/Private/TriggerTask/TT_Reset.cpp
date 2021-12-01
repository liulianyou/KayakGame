#include "TriggerTask/TT_Reset.h"

#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "TriggerDefinition.h"
#include "TriggerTaskResetCommonOperationInfos.h"

UTT_Reset::UTT_Reset(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	ResetType(EResetType::EResetType_ResetALL)
{

}

void UTT_Reset::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);
}


bool UTT_Reset::CanBeToggled()
{
	return Super::CanBeToggled();
}

bool UTT_Reset::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	return Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);
}

bool UTT_Reset::Prepare()
{
	bool Result = true;

	Result = Super::Prepare();

	Active();

	return Result;
}

void UTT_Reset::Active(bool ForceActive )
{
	Super::Active();

	switch (ResetType)
	{
	case EResetType::EResetType_ResetCharacterAttributes:
		ResetCharacterAttributes();
		break;
	case EResetType::EResetType_ResetTriggers:
		ResetTrigger();
		break;
	case EResetType::EResetType_ResetALL:
		ResetAll();
		break;
	default:
		UE_LOG(LogTrigger, Warning, TEXT("Please check the reset type, or I need to implement new reset type"));
	}
}

void UTT_Reset::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_Reset::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_Reset::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_Reset::PostFinished()
{
	Super::PostFinished();
}

void UTT_Reset::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_Reset::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_Reset::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);
}

void UTT_Reset::Reset(UOperationInformationBase* ResetOperation /* = nullptr */)
{
	Super::Reset(ResetOperation);
}

bool UTT_Reset::CanTick()
{
	return Super::CanTick();
}

void UTT_Reset::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void UTT_Reset::ResetTrigger()
{
	UTriggerManager* TriggerManager = GetTriggerManager();

	if (TriggerManager == nullptr)
		return;

	UTriggerTaskManager* TriggerTaskManager = TriggerManager->GetTriggerTaskManager();

	if (TriggerTaskManager == nullptr)
		return;

	for (auto Task : TriggerTaskManager->GetTriggerTasks())
	{
		UTriggerTaskReset_CommonReset* ResetOperation = UTriggerTaskReset_CommonReset::CommonReset(ETriggerTaskResetType::ETriggerTaskResetType_All, this, this);

		Task->Reset(ResetOperation);
	}
}


void UTT_Reset::ResetCharacterAttributes()
{
	if (FTriggerDelegate::OnReset.IsBound())
	{
		FTriggerDelegate::OnReset.Broadcast(this);
	}
}

void UTT_Reset::ResetAll()
{
	ResetTrigger();

	ResetCharacterAttributes();
}

