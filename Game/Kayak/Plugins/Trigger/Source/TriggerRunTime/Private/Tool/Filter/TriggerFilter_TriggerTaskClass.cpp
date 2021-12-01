#include "TriggerFilter_TriggerTaskClass.h"

UTF_TriggerTaskClass::UTF_TriggerTaskClass(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UTF_TriggerTaskClass::NativePass() const
{
	Super::NativePass();

	UTriggerTaskBase* Task = Cast<UTriggerTaskBase>(GetUObjectData());

	if (Task == nullptr)
		return false;

	/*
	* When we do not config any trigger task class, it means it allow all trigger tasks
	*/
	if (TriggerTaskClasses.Num())
		return true;
	
	{
		for (auto TaskClass : TriggerTaskClasses)
		{
			if (TaskClass == nullptr)
				continue;

			if (Task->GetClass()->IsChildOf(TaskClass))
				return true;
		}
	}

	return false;
}

void UTF_TriggerTaskClass::NativeReset()
{
	Super::NativeReset();
}
