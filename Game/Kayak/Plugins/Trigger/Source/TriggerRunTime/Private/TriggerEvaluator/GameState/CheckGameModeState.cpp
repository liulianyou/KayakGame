#include "CheckGameModeState.h"
#include "GameModeData/TriggerGameModeDataBase.h"

UCheckGameModeState::UCheckGameModeState(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
}

void UCheckGameModeState::BeginDestroy()
{
	Super::BeginDestroy();
}

void UCheckGameModeState::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	if (InspectData != nullptr)
	{
		InspectData->Initialize(this);
	}
}

bool UCheckGameModeState::NativeEvaluator()
{
	bool Result = Super::NativeEvaluator();

	if (InspectData != nullptr)
	{
		Result = InspectData->IsPassed();
	}

	return Result;
}

void UCheckGameModeState::NativeReset()
{
	Super::NativeReset();

	if (InspectData != nullptr)
	{
		InspectData->Reset();
	}
}

void UCheckGameModeState::NotifyedByInspectDataToEvaluate()
{
	NotifyToEvaluate();
}