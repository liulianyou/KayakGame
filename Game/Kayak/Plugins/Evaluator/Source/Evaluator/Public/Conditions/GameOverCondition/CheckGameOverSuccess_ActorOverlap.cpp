#include "GameOverCondition/CheckGameOverSuccess_ActorOverlap.h"
#include "CheckActorOverlaped.h"
#include "GameFramework/PlayerController.h"

UCheckGameOverSuccess_ActorOverlap::UCheckGameOverSuccess_ActorOverlap(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UCheckGameOverSuccess_ActorOverlap::GetOverlapingActorArrayData(TArray<AActor*>& OverlapingActor)
{
	OverlapingActor.Empty();

	if(OverlapEvent == nullptr)
		return;

	for (int i = 0; i < OverlapEvent->OverlapFilters.Num(); i++)
	{
		if(OverlapEvent->OverlapFilters[i] == nullptr)
			continue;

		AActor* ActorData = reinterpret_cast<AActor*>(OverlapEvent->OverlapFilters[i]->GetFilterData());

		if (ActorData != nullptr)
		{
			OverlapingActor.Add(ActorData);
		}
	}
}

bool UCheckGameOverSuccess_ActorOverlap::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	bool Result = false;
	
	if (OverlapEvent)
	{
		Result = OverlapEvent->Evaluator();
	}

	if (Result == true)
	{
		TArray<AActor*> Actors;

		GetOverlapingActorArrayData(Actors);

		for (int i = 0; i < Actors.Num(); i++)
		{
			APlayerController* Controller = Cast<APlayerController>(Actors[i]);

			if (Controller == nullptr)
			{
				APawn* Pawn = Cast<APawn>(Actors[i]);

				if (Pawn != nullptr)
				{
					Controller = Cast<APlayerController>(Pawn->GetController());
				}
			}

			if (Controller != nullptr)
			{
				AddGameOverPlayer(Controller);
			}
		}
	}

	return Result;
}


void UCheckGameOverSuccess_ActorOverlap::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	if (OverlapEvent)
	{
		OverlapEvent->NativeInitialize(OwnerObject);

		OverlapEvent->EvaluatorDelegate.AddUniqueDynamic( this, &UCheckGameOverSuccess_ActorOverlap::OnOverlapEventCallback);
	}
}

void UCheckGameOverSuccess_ActorOverlap::NativeReset()
{
	if (OverlapEvent)
	{
		OverlapEvent->NativeReset();
	}

	for (int i = 0; i < GetGameOverPlayers().Num(); i++)
	{
		RemoveGameOverPlayer(GetGameOverPlayers()[i]);
	}
}

void UCheckGameOverSuccess_ActorOverlap::BeginDestroy()
{
	Super::BeginDestroy();

	if (OverlapEvent)
	{
		OverlapEvent->EvaluatorDelegate.RemoveDynamic(this, &UCheckGameOverSuccess_ActorOverlap::OnOverlapEventCallback);
		OverlapEvent = nullptr;
	}
}

void UCheckGameOverSuccess_ActorOverlap::OnOverlapEventCallback(UEvaluatorBase* Evaluator, bool EvaluatorResult)
{
	if (EvaluatorResult)
	{
		NotifyToEvaluate();
	}
}