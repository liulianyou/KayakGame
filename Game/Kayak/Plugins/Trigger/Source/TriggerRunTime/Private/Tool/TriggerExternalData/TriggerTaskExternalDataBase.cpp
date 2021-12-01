#include "TriggerTaskExternalDataBase.h"

UTriggerTaskExternalDataBase::UTriggerTaskExternalDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UTriggerTaskExternalDataBase::Initialize(UTriggerTaskBase* Owner)
{
	OnInitialize(Owner);

	TaskOwner = Owner;
}

void UTriggerTaskExternalDataBase::Finialize()
{
	OnFinialize();
}

UTriggerTaskBase* UTriggerTaskExternalDataBase::GetTriggerTaskOwner()
{
	return TaskOwner;
}

void UTriggerTaskExternalDataBase::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
	OnReset(Operation);
}

bool UTriggerTaskExternalDataBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	return false;
}