#include "Tool/ToolFactory/TriggerToolFactory.h"

FTriggerFactoryManager* FTriggerFactoryManager::TriggerFactoryInstance = nullptr;

void FTriggerFactoryManager::RemoveFactory(TriggerToolInterface* Factory)
{
	int Index = Factories.Find(Factory);

	if (Index == INDEX_NONE)
	{
		Factories.RemoveAt(Index);
	}
}

FTriggerFactoryManager* FTriggerFactoryManager::GetTriggerFactory()
{
	if (TriggerFactoryInstance == nullptr)
	{
		TriggerFactoryInstance = new FTriggerFactoryManager();
	}

	return TriggerFactoryInstance;
}

void FTriggerFactoryManager::DestroyTriggerFactory()
{
	if (TriggerFactoryInstance)
	{
		delete TriggerFactoryInstance;
		TriggerFactoryInstance = nullptr;
	}
}
