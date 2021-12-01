#include "Record/TR_TriggerTaskForReset.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskResetCommonOperationInfos.h"

UTR_TriggerTaskForReset::UTR_TriggerTaskForReset(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{

}

void UTR_TriggerTaskForReset::Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo)
{
	Super::Execute_Implementation(InstigatorInfo);

	int Index = GetRecordInfoIndex(InstigatorInfo);

	if (Index == INDEX_NONE)
	{
		return;
	}

	for (int i = 0; i < Informations[Index].TriggerTasks.Num(); i++)
	{
		if (Informations[Index].TriggerTasks[i] == nullptr)
			continue;

		UTriggerTaskReset_CommonReset* CheckPointReset = UTriggerTaskReset_CommonReset::CommonReset(ETriggerTaskResetType::ETriggerTaskResetType_All, this, Informations[Index].TriggerTasks[i]);

		Informations[Index].TriggerTasks[i]->Reset(CheckPointReset);
	}
}