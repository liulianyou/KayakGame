#include "AIInfoAccessor/AIInfoAccessor.h"
#include "AISpawnData/AISpawnDataGroup.h"

#include "TriggerDefinition.h"

UAIInfoAccessorBase::UAIInfoAccessorBase(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{

}

UAIInfoAccessorInAISpawnDataGroup::UAIInfoAccessorInAISpawnDataGroup(const FObjectInitializer& ObjectInitialzier)
	: Super(ObjectInitialzier)
{

}

UAIInfoAccessFromGroupIDExcel::UAIInfoAccessFromGroupIDExcel(const FObjectInitializer& ObjectInitialzier)
	: Super(ObjectInitialzier)
{

}

UAIInfoAccessFromEnemyIDExcel::UAIInfoAccessFromEnemyIDExcel(const FObjectInitializer& ObjectInitialzier)
	: Super(ObjectInitialzier)
{

}

UAISpawnDataGroup* UAIInfoAccessorInAISpawnDataGroup::GetAISpawnDataGroup()
{
	return GetTypedOuter<UAISpawnDataGroup>();
}

void UAIInfoAccessorBase::GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos)
{
	UE_LOG(LogTrigger, Error, TEXT("Please implement the FUNCTION: GetVaildNPCInfos in the derived class %s"), *GetClass()->GetName());
}

void UAIInfoAccessFromGroupIDExcel::GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos)
{
	NPCInfos.Empty();

	UE_LOG(LogTrigger, Error, TEXT("Please implement the FUNCTION: GetVaildNPCInfos in the derived class %s"), *GetClass()->GetName());
}

void UAIInfoAccessFromEnemyIDExcel::GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos)
{
	NPCInfos.Empty();

	UE_LOG(LogTrigger, Error, TEXT("Please implement the FUNCTION: GetVaildNPCInfos in the derived class %s"), *GetClass()->GetName());
}