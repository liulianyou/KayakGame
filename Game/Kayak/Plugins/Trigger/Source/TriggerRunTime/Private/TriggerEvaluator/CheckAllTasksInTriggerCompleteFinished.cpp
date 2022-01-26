#include "CheckAllTasksInTriggerCompleteFinished.h"

#include "NewTriggerBase.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"

UCheckAllTasksInTriggerCompleteFinished::UCheckAllTasksInTriggerCompleteFinished(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


bool UCheckAllTasksInTriggerCompleteFinished::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	bool Result = true;

	if(Triggers.Num() == 0)
		Result = false;

	for (auto Trigger : Triggers)
	{
		if (Trigger == nullptr)
		{
			continue;
		}

		if (Trigger->GetTriggerTaskComponent() == nullptr)
		{
			continue;
		}

		TArray<UTriggerTaskComponentBase*> Components;

		Trigger->GetTriggerTaskComponents(Components);

		for (auto Component : Components)
		{
			if(Component == nullptr)
				continue;

			if (!Component->IsAllTaskFinished())
			{
				return false;
			}
		}
	}

	return Result;
}


void UCheckAllTasksInTriggerCompleteFinished::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize( OwnerObject );

	for (auto Trigger : Triggers)
	{
		if (Trigger == nullptr)
		{
			continue;
		}

		TArray<UTriggerTaskComponentBase*> Components;

		Trigger->GetTriggerTaskComponents(Components);

		for (auto Component : Components)
		{
			TArray<UTriggerTaskBase*> Tasks;

			Component->GetAllTriggerTasks(Tasks);

			for (auto Task : Tasks)
			{
				Task->AddTriggerTaskStateUniqueListener( ETriggerTaskState::ETriggerTaskState_Finished, this, &UCheckAllTasksInTriggerCompleteFinished::OnTaskStateChanged);
			}
		}
	}

}

void UCheckAllTasksInTriggerCompleteFinished::NativeReset()
{
	Super::NativeReset();
}

void UCheckAllTasksInTriggerCompleteFinished::BeginDestroy()
{
	Super::BeginDestroy();
}

void UCheckAllTasksInTriggerCompleteFinished::OnTaskStateChanged(UTriggerTaskBase* Task)
{
	if (Task == nullptr)
		return;

	NotifyToEvaluate();
}