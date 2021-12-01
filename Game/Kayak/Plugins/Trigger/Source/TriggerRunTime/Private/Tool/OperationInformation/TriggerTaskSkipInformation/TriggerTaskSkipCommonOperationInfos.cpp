#include "TriggerTaskSkipCommonOperationInfos.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"

UTriggerTaskSkip_AIStaticsSkip::UTriggerTaskSkip_AIStaticsSkip(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

UTriggerTaskSkip_SkipConditions::UTriggerTaskSkip_SkipConditions(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

}

UTriggerTaskSkip_AIStaticsSkip* UTriggerTaskSkip_AIStaticsSkip::AIStaticsSkip(UObject* AIStatic, UObject* TargetTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle /*= nullptr*/)
{
	UTriggerTaskSkip_AIStaticsSkip* Result = Cast<UTriggerTaskSkip_AIStaticsSkip>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(AIStatic, UTriggerTaskSkip_AIStaticsSkip::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(AIStatic, OperationStyle, TargetTask);

	return Result;

}

UTriggerTaskSkip_SkipConditions* UTriggerTaskSkip_SkipConditions::SkipConditions(UObject* TargetTask, UOperationInformationBase* ParentOperation /*= nullptr*/, UTriggerStyleBase* OperationStyle /*= nullptr*/)
{
	UTriggerTaskSkip_SkipConditions* Result = Cast<UTriggerTaskSkip_SkipConditions>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(TargetTask, UTriggerTaskSkip_SkipConditions::StaticClass()).Operation);

	if (Result == nullptr)
		return nullptr;

	Result->AddNewOperation(TargetTask, OperationStyle, TargetTask);

	return Result;
}