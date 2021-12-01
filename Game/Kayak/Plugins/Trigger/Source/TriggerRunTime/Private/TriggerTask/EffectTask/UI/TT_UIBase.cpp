#include "TT_UIBase.h"

UTT_UIBase::UTT_UIBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UTT_UIBase::CanBeToggled()
{
	return Super::CanBeToggled();
}

bool UTT_UIBase::Prepare()
{
	return Super::Prepare();
}

void UTT_UIBase::Active(bool ForceActive /* = true */)
{
	Super::Active(ForceActive);
}

bool UTT_UIBase::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	return Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);
}

void UTT_UIBase::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_UIBase::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_UIBase::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_UIBase::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_UIBase::PostFinished()
{
	Super::PostFinished();
}

void UTT_UIBase::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_UIBase::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);
}

void UTT_UIBase::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);
}

void UTT_UIBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UTT_UIBase::CanTick()
{
	return Super::CanTick();
}

void UTT_UIBase::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);
}


