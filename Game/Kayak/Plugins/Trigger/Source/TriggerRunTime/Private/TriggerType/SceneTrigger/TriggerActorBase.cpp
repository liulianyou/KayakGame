#include "TriggerActorBase.h"
#include "TriggerInterfaceForActor.h"


ATriggerActorBase::ATriggerActorBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void ATriggerActorBase::GetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const
{
	if (InterfaceSupport != nullptr)
	{
		InterfaceSupport->GetTriggerTaskComponents(TaskComponents);
	}
	else
	{
		//UE_LOG(LogTrigger, Error, TEXT("Please assign one implementation to InterfaceSupport for %s"), *GetPathName());
		return;
	}
}

bool ATriggerActorBase::RemoveTriggerTaskComponent(const FGuid& ComponentID, bool IncludeChildrenComponent/* = false*/)
{
	if (InterfaceSupport != nullptr)
	{
		return InterfaceSupport->RemoveTriggerTaskComponent(ComponentID, IncludeChildrenComponent);
	}
	else
	{
		//UE_LOG(LogTrigger, Error, TEXT("Please assign one implementation to InterfaceSupport for %s"), *GetPathName());
		return false;
	}
}

UTriggerTaskComponentBase* ATriggerActorBase::AddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent)
{
	if (InterfaceSupport != nullptr)
	{
		return InterfaceSupport->AddTriggerTaskComponent(NewComponent);
	}
	else
	{
		//UE_LOG(LogTrigger, Error, TEXT("Please assign one implementation to InterfaceSupport for %s"), *GetPathName());
		return nullptr;
	}
}

bool ATriggerActorBase::GetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const
{
	if (InterfaceSupport != nullptr)
	{
		return InterfaceSupport->GetBoxBounds(Origin, HalfBoxExtent);
	}
	else
	{
		//UE_LOG(LogTrigger, Error, TEXT("Please assign one implementation to InterfaceSupport for %s"), *GetPathName());
		return false;
	}
}

bool ATriggerActorBase::GetUniqueRuntimeID(int& OutID) const
{
	if (ITriggerInterface::GetUniqueRuntimeID(OutID))
		return true;

	OutID = GetUniqueID();

	return true;
}

bool ATriggerActorBase::CanBeToggled() const
{
	if (InterfaceSupport != nullptr)
	{
		return InterfaceSupport->CanbeToggled();
	}
	else
	{
		return ITriggerInterface::CanBeToggled();
	}
}
