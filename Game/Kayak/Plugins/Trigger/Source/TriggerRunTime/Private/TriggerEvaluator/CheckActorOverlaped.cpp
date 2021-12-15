#include "CheckActorOverlaped.h"
#include "GameFramework/Actor.h"

UCheckActorOverlaped::UCheckActorOverlaped(const FObjectInitializer& ObjectInitializer):
	Super(ObjectInitializer)
{
	
}

bool UCheckActorOverlaped::NativeEvaluator()
{
	bool Result = false;

	//If there is not filter in this evaluator then just make this condition check failed
	if (OverlapFilters.Num() > 0)
	{
		bool AllFilterPassed = true;

		int EmptyFilterCount = 0;

		for (auto Filter : OverlapFilters)
		{
			if (Filter == nullptr)
			{
				EmptyFilterCount++;
				continue;
			}

			if (!Filter->BP_Pass())
			{
				AllFilterPassed = false;
				break;
			}
		}

		//If All overlap filters are empty then just return false
		if (EmptyFilterCount == OverlapFilters.Num())
		{
			Result = false;
		}
		else
		{
			Result = AllFilterPassed;
		}
	}
	
	return Result;
}

void UCheckActorOverlaped::NativeReset()
{
	Super::NativeReset();

	for (auto Filter : OverlapFilters)
	{
		if (Filter != nullptr)
		{
			Filter->BP_Reset();
		}
	}
}

void UCheckActorOverlaped::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize( OwnerObject );
	
	if (TargetActor == nullptr)
	{
		//Find the first actor who own this condition
		UObject* Outer = GetOuter();
		while (TargetActor == nullptr && Outer != nullptr)
		{
			TargetActor = Cast<AActor>(Outer);
			Outer = Outer->GetOuter();
		}
	}
	
	if (TargetActor != nullptr && TargetActor->IsValidLowLevel())
	{
		if (!TargetActor->OnActorBeginOverlap.IsAlreadyBound(this, &UCheckActorOverlaped::OnActorBeginOverlap))
		{
			TargetActor->OnActorBeginOverlap.AddDynamic(this, &UCheckActorOverlaped::OnActorBeginOverlap);
		}
		
		if (!TargetActor->OnActorEndOverlap.IsAlreadyBound(this, &UCheckActorOverlaped::OnActorEndOverlap))
		{
			TargetActor->OnActorEndOverlap.AddDynamic(this, &UCheckActorOverlaped::OnActorEndOverlap);
		}
		
	}

	//Remove empty filter
	for (int i = 0; i < OverlapFilters.Num(); i++)
	{
		if (OverlapFilters[i] == nullptr)
		{
			OverlapFilters.RemoveAt(i--);
		}
	}
}

void UCheckActorOverlaped::BeginDestroy()
{
	Super::BeginDestroy();

	if (TargetActor->IsValidLowLevel())
	{
		TargetActor->OnActorBeginOverlap.RemoveDynamic(this, &UCheckActorOverlaped::OnActorBeginOverlap);
		TargetActor->OnActorEndOverlap.RemoveDynamic(this, &UCheckActorOverlaped::OnActorEndOverlap);
	}
}

void UCheckActorOverlaped::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	for (auto Filter : OverlapFilters)
	{
		if (Filter == nullptr)
			continue;

		//When this filter have been passed or this filter have no filter data
		if (!Filter->BP_Pass() || Filter->GetFilterData() == nullptr)
		{
			Filter->SetFilterData(OtherActor);

			//When set new filter data and the filter is not passed then just make the filter data to be null, so that it can accept new filter data
			if (!Filter->BP_Pass())
			{
				Filter->SetFilterData(nullptr);
			}
			else
			{
				NotifyToEvaluate();
			}
		}
	}
}

void UCheckActorOverlaped::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	for (auto Filter : OverlapFilters)
	{
		if (Filter == nullptr)
			continue;

		if (Filter->GetFilterData() == OtherActor)
		{
			Filter->SetFilterData(nullptr);
		}
	}
}