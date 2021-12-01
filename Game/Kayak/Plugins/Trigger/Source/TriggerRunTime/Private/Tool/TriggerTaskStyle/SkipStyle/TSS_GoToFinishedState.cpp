#include "TSS_GoToFinishedState.h"
#include "TriggerTaskBase.h"

UTSS_GoToFinishedState::UTSS_GoToFinishedState(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UTSS_GoToFinishedState::Execute()
{
	Super::Execute();

	if (GetOwner() == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The task ower of the skip method is invaild!!"));
	}

	//Just go to finished state directly
	UTriggerTaskBase* TaskOwner = Cast<UTriggerTaskBase>(GetOwner());

	if (TaskOwner != nullptr)
	{
		TaskOwner->Finished();
	}
}