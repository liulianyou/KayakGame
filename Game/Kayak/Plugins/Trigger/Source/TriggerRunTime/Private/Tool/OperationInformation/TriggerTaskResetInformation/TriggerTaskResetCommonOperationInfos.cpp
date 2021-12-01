#include "TriggerTaskResetCommonOperationInfos.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"

UTriggerTaskReset_CommonReset::UTriggerTaskReset_CommonReset(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UTriggerTaskReset_CommonReset* UTriggerTaskReset_CommonReset::CommonReset(ETriggerTaskResetType InResetType, UObject* Owner, UObject* TargetTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle /*= nullptr*/)
{
	UTriggerTaskReset_CommonReset* Result = Cast<UTriggerTaskReset_CommonReset>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Owner, UTriggerTaskReset_CommonReset::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(Owner, OperationStyle, TargetTask);

	Result->ResetType = InResetType;

	return Result;
}