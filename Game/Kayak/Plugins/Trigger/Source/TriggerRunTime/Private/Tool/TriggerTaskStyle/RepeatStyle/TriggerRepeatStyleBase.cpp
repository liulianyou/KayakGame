#include "TriggerRepeatStyleBase.h"

#include "TriggerTaskBase.h"

UTriggerRepeatStyleBase::UTriggerRepeatStyleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UTriggerRepeatStyleBase::Execute()
{
	TryToRepeat(GetRepeatedTriggerTask());
}

bool UTriggerRepeatStyleBase::TryToRepeat_Implementation(UObject* Object)
{
	//By default the repeat style will not process any object
	return false;
}

void UTriggerRepeatStyleBase::InitializeStyle(UObject* OwnerObject)
{
	Super::InitializeStyle(OwnerObject);

	if (RepeatedTask.GetTriggerTask() == nullptr)
	{
		RepeatedTask.UpdateTriggerTask(GetTypedOuter<UTriggerTaskBase>());
	}
}

UTriggerTaskBase* UTriggerRepeatStyleBase::GetRepeatedTriggerTask()
{
	return RepeatedTask.GetTriggerTask() == nullptr ? Cast<UTriggerTaskBase>(GetOwner()) : RepeatedTask.GetTriggerTask();
}

