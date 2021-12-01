#include "Record/TR_TriggerTask.h"
#include "TriggerDefinition.h"
#include "Filter/TriggerFilterBase.h"
#include "TriggerTaskBase.h"


bool FRecordTaskInformation::CanAddNewTriggerTask(UTriggerTaskBase* TriggerTask)
{
	return true;
}

UTR_TriggerTask::UTR_TriggerTask(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Informations.Empty();
}

void UTR_TriggerTask::Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo)
{

}

void UTR_TriggerTask::StartRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo)
{
	int Index = GetRecordInfoIndex(InstigatorInfo);

	if (Index == INDEX_NONE)
	{
		Index = AddNewRecordInfo(InstigatorInfo);
	}

	if (!FTriggerDelegate::TriggerTaskStateNativeEvent.IsBoundToObject(this))
	{
		FTriggerDelegate::TriggerTaskStateNativeEvent.AddUObject(this, &UTR_TriggerTask::OnTriggerTaskState);
	}
}

void UTR_TriggerTask::EndRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType)
{
	
}

void UTR_TriggerTask::OnTriggerTaskState(UTriggerTaskBase* InstanecTask)
{
	AddNewRecoredTask(InstanecTask);
	AddNewRecoredTask(InstanecTask->GetTemplate());
}

void UTR_TriggerTask::AddNewRecoredTask(UTriggerTaskBase* Task)
{
	if (!IsTaskValid(Task))
		return;

	for (int i = 0; i < Informations.Num(); i++)
	{
		if (Informations[i].CanAddNewTriggerTask(Task))
		{
			Informations[i].TriggerTasks.AddUnique(Task);
		}
	}
}

bool UTR_TriggerTask::IsTaskValid(UTriggerTaskBase* Task)
{
	if (Task == nullptr)
		return false;

	bool Result = true;

	for (auto Filter : Filters)
	{
		if(Filter == nullptr)
			continue;

		Filter->SetFilterData(Task);

		if (!Filter->BP_Pass())
		{
			Result = false;
		}
	}

	return Result;
}

int UTR_TriggerTask::GetRecordInfoIndex(const FRecordInstigatorInfo& InstigatorInfo)
{
	int Result = INDEX_NONE;

	for (int i = 0; i < Informations.Num(); i++)
	{
		if (Informations[i].InstigatorInfo == InstigatorInfo)
		{
			Result = i;
			break;
		}
	}

	return Result;
}

int UTR_TriggerTask::AddNewRecordInfo(const FRecordInstigatorInfo& InstigatorInfo)
{
	FRecordTaskInformation Info;
	Info.InstigatorInfo = InstigatorInfo;

	return Informations.Add(Info);

}
