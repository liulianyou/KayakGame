#include "TT_SimpleMove.h"
#include "GameFramework/Actor.h"

UTT_SimpleMove::UTT_SimpleMove(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

bool UTT_SimpleMove::CanBeToggled()
{
	bool Result = Super::CanBeToggled();

	if(TargetActor == nullptr)
		Result = false;

	return Result;
}

bool UTT_SimpleMove::Prepare()
{
	if( !Super::Prepare())
		return false;

	if (!TargetActor->OnActorBeginOverlap.IsAlreadyBound(this, &UTT_SimpleMove::OnTargetActorOverlap))
	{
		TargetActor->OnActorBeginOverlap.AddDynamic(this, &UTT_SimpleMove::OnTargetActorOverlap);
	}

	Active();

	return true;
}

void UTT_SimpleMove::Active(bool ForceActive /* = true */)
{
	Super::Active(ForceActive);
}

bool UTT_SimpleMove::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
	bool Result = Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo);

	if(TargetActor == nullptr)
		return false;

	Prepare();

	return true;
}

void UTT_SimpleMove::Pause(UOperationInformationBase* PauseOperationInfo)
{
	Super::Pause(PauseOperationInfo);
}

void UTT_SimpleMove::Resume(UOperationInformationBase* ResumeOperationInfo)
{
	Super::Resume(ResumeOperationInfo);
}

void UTT_SimpleMove::Skip(UOperationInformationBase* SkipOperationInfo)
{
	Super::Skip(SkipOperationInfo);
}

void UTT_SimpleMove::Finished(UOperationInformationBase* FinishOperationInfo)
{
	Super::Finished(FinishOperationInfo);
}

void UTT_SimpleMove::PostFinished()
{
	RemoveOverlapEvent();
	
	Super::PostFinished();
}

void UTT_SimpleMove::TryToSleep(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToSleep(Causer);
}

void UTT_SimpleMove::TryToStop(UOperationInformationBase* Causer /* = nullptr */)
{
	Super::TryToStop(Causer);
}

void UTT_SimpleMove::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	Super::Reset(Operation);
}

void UTT_SimpleMove::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UTT_SimpleMove::CanTick()
{
	return Super::CanTick();
}

void UTT_SimpleMove::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
	Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);

	RemoveOverlapEvent();
}

void UTT_SimpleMove::RemoveOverlapEvent()
{
	if(TargetActor == nullptr)
		return;

	if (TargetActor->OnActorBeginOverlap.IsAlreadyBound(this, &UTT_SimpleMove::OnTargetActorOverlap))
	{
		TargetActor->OnActorBeginOverlap.RemoveDynamic(this, &UTT_SimpleMove::OnTargetActorOverlap);
	}
}

void UTT_SimpleMove::OnTargetActorOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	if(OverlappedActor != TargetActor)
		return;

	Finished();
}