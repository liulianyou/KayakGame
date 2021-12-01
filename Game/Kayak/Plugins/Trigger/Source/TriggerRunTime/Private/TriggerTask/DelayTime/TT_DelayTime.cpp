#include "TT_DelayTime.h"
#include "TriggerTaskResetCommonOperationInfos.h"

UTT_DelayTime::UTT_DelayTime(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer),
	DelayTime(0.f),
	RemainDelayTime(0.f)
{
	CanEverTick = false;
}

bool UTT_DelayTime::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	if(!Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo))
		return false;

	return Prepare();
}

bool UTT_DelayTime::Prepare()
{
	if(!Super::Prepare())
		return false;

	UTriggerTaskReset_CommonReset* RestInformation = UTriggerTaskReset_CommonReset::CommonReset(ETriggerTaskResetType::ETriggerTaskResetType_All, this, this);

	Reset(RestInformation);

	RemainDelayTime = DelayTime;

	Active();

	return true;
}

void UTT_DelayTime::Active(bool ForceActive)
{
	Super::Active(ForceActive);

	CanEverTick = true;
}

void UTT_DelayTime::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (RemainDelayTime <= 0.f)
	{
		Finished();
	}

	RemainDelayTime -= DeltaTime;

	OnDelayTimeUpdate(RemainDelayTime);

	DelayTimeUpdateDelegate.Broadcast(RemainDelayTime);
}

void UTT_DelayTime::TryToStop(UOperationInformationBase* StopOperationInfo)
{
	CanEverTick = false;

	Super::TryToStop(StopOperationInfo);
}

void UTT_DelayTime::TryToSleep(UOperationInformationBase* SleepOperation /* = nullptr */)
{
	if (CanBeStopped(SleepOperation))
	{
		CashedData.CashedCanEverTick = CanEverTick;

		CanEverTick = false;

		Super::TryToSleep(SleepOperation);
	}
}

void UTT_DelayTime::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);

	CashedData.CashedCanEverTick = CanEverTick;
}

void UTT_DelayTime::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);

	CanEverTick = CashedData.CashedCanEverTick;
}

void UTT_DelayTime::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);

	UTriggerTaskResetInformationBase* RestInformation = Cast<UTriggerTaskResetInformationBase>(Operation);

	if (RestInformation == nullptr)
		return;

	if (EnumHasAnyFlags(RestInformation->ResetType, ETriggerTaskResetType::ETriggerTaskResetType_ClearData))
	{
		RemainDelayTime = 0.0f;

		CanEverTick = false;
	}
}

void UTT_DelayTime::Skip(UOperationInformationBase* SkipOperationInfo /* = nullptr */)
{
	Super::Skip(SkipOperationInfo);
}

bool UTT_DelayTime::CanBeToggled()
{
	return Super::CanBeToggled();
}

void UTT_DelayTime::Finished(UOperationInformationBase* FinishOperationInfo /* = nullptr */)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_DelayTime::PostFinished()
{
	Super::PostFinished();
}

bool UTT_DelayTime::CanTick()
{
	return Super::CanTick();
}

void UTT_DelayTime::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);
}

bool UTT_DelayTime::CanBeStopped_Implementation(UOperationInformationBase* Causer)
{
	if (CanEverTick == false || RemainDelayTime < 0.f)
	{
		return true;
	}
	else
	{
		return false;
	}
}