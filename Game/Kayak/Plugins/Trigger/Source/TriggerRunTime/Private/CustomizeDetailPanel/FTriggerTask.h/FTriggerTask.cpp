#include "FTriggerTask.h"
#include "TriggerTaskBase.h"

UTriggerTaskBase* FTriggerTask::GetTriggerTask() const
{
	if (IsGarbageCollecting())
	{
		if (CashedTask != nullptr && CashedTask->IsValidLowLevel() && !CashedTask->IsPendingKill())
		{
			return CashedTask;
		}
		else
			return nullptr;
	}
	else
	{
		return SoftTaskObject.Get();
	}
}

void FTriggerTask::UpdateTriggerTask(UTriggerTaskBase* TriggerTask)
{
	if (TriggerTask == nullptr)
	{
		CashedTask = SoftTaskObject.Get();
	}
	else
	{
		SoftTaskObject = TriggerTask;

		CashedTask = TriggerTask;
	}
}