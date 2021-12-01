#include "TriggerStatics/TriggerStaticsTool.h"

FTriggerStaticsTool::FTriggerStaticsTool() :
	TriggerToolInterface()
{
	TriggerStatics.Empty();
}

FTriggerStaticsTool::~FTriggerStaticsTool()
{
	for (int i = 0; i < TriggerStatics.Num(); i++)
	{
		if (TriggerStatics[i] != nullptr)
		{
			TriggerStatics[i]->RemoveFromRoot();
		}
	}

	TriggerStatics.Empty();
}

void FTriggerStaticsTool::InitlalizeTriggerTool()
{
	
}

UTriggerStaticsBase* FTriggerStaticsTool::FindOrAddTriggerStatics(TSubclassOf<UTriggerStaticsBase> TriggerStaticsClass)
{
	UTriggerStaticsBase* Result = nullptr;

	for (int i = 0; i < TriggerStatics.Num(); i++)
	{
		if (TriggerStatics[i] != nullptr && TriggerStatics[i]->IsA(TriggerStaticsClass))
		{
			Result = TriggerStatics[i];
			break;
		}
	}

	if (Result == nullptr)
	{
		Result = NewObject<UTriggerStaticsBase>(GetTransientPackage(), TriggerStaticsClass);

		if (Result != nullptr)
		{
			Result->AddToRoot();
			TriggerStatics.Add(Result);
		}
	}

	return Result;
}

void FTriggerStaticsTool::RemoveTriggerStatics(TSubclassOf<UTriggerStaticsBase> TriggerStaticsClass)
{
	for (int i = 0; i < TriggerStatics.Num(); i++)
	{
		if (TriggerStatics[i] != nullptr && TriggerStatics[i]->IsA(TriggerStaticsClass))
		{
			TriggerStatics[i]->RemoveFromRoot();

			TriggerStatics.RemoveAt(i);

			break;
		}
	}
}

