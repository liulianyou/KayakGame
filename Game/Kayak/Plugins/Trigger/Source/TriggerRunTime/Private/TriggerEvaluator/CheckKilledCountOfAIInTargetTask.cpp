#include "CheckKilledNumberOfAIInTargetTask.h"
#include "TT_AISpawnBase.h"
#include "AISpawnDataBase.h"

UCheckKilledNumberOfAIInTargetTask::UCheckKilledNumberOfAIInTargetTask(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	TaskDatas.Empty();
	AIDeadDelegateHandles.Empty();
}

bool UCheckKilledNumberOfAIInTargetTask::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	bool Result = true;

	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		UTT_AISpawnBase* AISPawnTask = Cast<UTT_AISpawnBase>(TaskDatas[i].TriggerTask.GetTriggerTask());

		if(AISPawnTask == nullptr || AISPawnTask->AISpawnData == nullptr)
			continue;
		
		if (AISPawnTask->AISpawnData->GetNumberOfTotalDeadAI() < TaskDatas[i].KilledNumber)
		{
			Result = false;
			break;
		}
	}

	return Result;
}

void UCheckKilledNumberOfAIInTargetTask::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	for (int i = 0; i < TaskDatas.Num(); i++)
	{
		TaskDatas[i].TriggerTask.UpdateTriggerTask();
	}

	GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &UCheckKilledNumberOfAIInTargetTask::OnNewActorSpawned));

}

void UCheckKilledNumberOfAIInTargetTask::OnNewActorSpawned(AActor* Actor)
{
	AAIController* AIController = Cast<AAIController>(Actor);

	if(AIController == nullptr)
		return;

	if (AIController->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
	{
		IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(AIController);

		if (AISpawnSupport == nullptr)
		{
			
		}
		else
		{
			FDelegateHandle Handle = AISpawnSupport->OnAICharacterDead.AddUObject(this, &UCheckKilledNumberOfAIInTargetTask::OnActorDestoryCallback);

			AIDeadDelegateHandles.Add(AIController, Handle);
		}
	}
}

void UCheckKilledNumberOfAIInTargetTask::OnActorDestoryCallback(AActor* Actor)
{
	AAIController* AIController = Cast<AAIController>(Actor);

	if (AIController == nullptr)
		return;

	if (AIController->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
	{
		IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(AIController);

		if (AISpawnSupport == nullptr)
		{

		}
		else
		{
			AISpawnSupport->OnAICharacterDead.Remove(AIDeadDelegateHandles[AIController]);
		}
	}

	AIDeadDelegateHandles.Remove(AIController);

	NotifyToEvaluate();
}

void UCheckKilledNumberOfAIInTargetTask::NativeReset()
{
	Super::NativeReset();
}

void UCheckKilledNumberOfAIInTargetTask::PostLoad()
{
	Super::PostLoad();
}

void UCheckKilledNumberOfAIInTargetTask::BeginDestroy()
{
	Super::BeginDestroy();

	for (auto AIDeadDelegateHandleIT = AIDeadDelegateHandles.CreateConstIterator(); AIDeadDelegateHandleIT; ++AIDeadDelegateHandleIT)
	{
		if(AIDeadDelegateHandleIT.Key() == nullptr || !AIDeadDelegateHandleIT.Key()->IsValidLowLevel())
			continue;

		if (AIDeadDelegateHandleIT.Key()->GetClass()->ImplementsInterface(UAISpawnSupportInterface::StaticClass()))
		{
			IAISpawnSupportInterface* AISpawnSupport = Cast<IAISpawnSupportInterface>(AIDeadDelegateHandleIT.Key());

			if (AISpawnSupport == nullptr)
			{

			}
			else
			{
				AISpawnSupport->OnAICharacterDead.Remove(AIDeadDelegateHandleIT.Value());
			}
		}
	}

	AIDeadDelegateHandles.Empty();
}

