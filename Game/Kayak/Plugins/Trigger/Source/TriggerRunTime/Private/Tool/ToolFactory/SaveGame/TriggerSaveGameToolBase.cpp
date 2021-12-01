#include "SaveGame/TriggerSaveGameToolBase.h"
#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#include "Engine/World.h"

TArray<USaveGameStrategyBase*> FTriggerSaveGameToolBase::StrategyInstance;

FTriggerSaveGameToolBase::FTriggerSaveGameToolBase()
{
	FWorldDelegates::OnWorldBeginTearDown.AddRaw(this, &FTriggerSaveGameToolBase::OnWorldTearDown);
}

FTriggerSaveGameToolBase::~FTriggerSaveGameToolBase()
{

}

void FTriggerSaveGameToolBase::InitlalizeTriggerTool()
{
	
}

USaveGameStrategyBase* FTriggerSaveGameToolBase::FindOrAddNewStrategy(TSubclassOf<USaveGameStrategyBase> SaveStrategy)
{
	USaveGameStrategyBase** Result = StrategyInstance.FindByPredicate([&](const USaveGameStrategyBase* Data) {
		if (Data == nullptr)
			return false;
		else if (Data->GetClass() == (SaveStrategy))
		{
			return true;
		}
		else
			return false;
	});

	if (Result == nullptr)
	{
		USaveGameStrategyBase* NewInstance =  NewObject<USaveGameStrategyBase>(GetTransientPackage(), SaveStrategy);

		StrategyInstance.Add(NewInstance);

		return NewInstance;
	}
	else
		return *Result;
}

USaveGameStrategyBase* FTriggerSaveGameToolBase::FindOrAddNewStrategy(USaveGameStrategyBase* SaveStrategy)
{
	int Index = StrategyInstance.Find(SaveStrategy);

	if (Index == INDEX_NONE)
	{
		USaveGameStrategyBase* NewInstance = NewObject<USaveGameStrategyBase>(GetTransientPackage(), NAME_None, RF_NoFlags, SaveStrategy);

		Index = StrategyInstance.Add(NewInstance);
	}

	return StrategyInstance[Index];
}

void FTriggerSaveGameToolBase::RemoveStrategy(TSubclassOf<USaveGameStrategyBase> SaveStrategy)
{
	for (int i = 0; i < StrategyInstance.Num(); i++)
	{
		if (StrategyInstance[i]->IsA(SaveStrategy))
		{
			StrategyInstance.RemoveAt(i--);
		}
	}
}

void FTriggerSaveGameToolBase::OnWorldTearDown(UWorld* World)
{
	StrategyInstance.Empty();
}

