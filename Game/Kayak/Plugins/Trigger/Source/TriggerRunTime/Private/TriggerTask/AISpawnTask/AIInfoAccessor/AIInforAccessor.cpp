#include "AIInfoAccessor/AIInfoAccessor.h"
#include "AISpawnData/AISpawnDataGroup.h"
#include "EnemyGroup_pb.h"
#include "NPC_pb.h"
#include "GroupID_pb.h"
#include "GExcelDataManager.h"
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

}

void UAIInfoAccessFromGroupIDExcel::GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos)
{
	NPCInfos.Empty();

	if(GetAISpawnDataGroup() == nullptr)
		return;

	TArray<FSingleGroupSpawnRoundInfo>& RoundInfos = GetAISpawnDataGroup()->RoundInfos;

	if (GetRoundIndex() >= RoundInfos.Num() ||
		GetGroupIndex() >= RoundInfos[GetRoundIndex()].GroupSpawnDatas.Num())
		return;

	int EnemyGroupID = RoundInfos[GetRoundIndex()].GroupSpawnDatas[GetGroupIndex()].EnemyGroupID;

	UGExcelAIGroupIDTable* GroupDataTable = UGExcelDataManager::Get()->GetExcelTable<UGExcelAIGroupIDTable>();

	if (GroupDataTable == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::GroupID.xlsl"));
		return;
	}

	//The rule of the Group key
	int ActualGroupKey = GetAISpawnDataGroup()->GetPlayerNum() + EnemyGroupID * 100;

	UGExcelAIGroupIDData* GroupData = GroupDataTable->GetByid(ActualGroupKey);

	if (GroupData == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::GroupData, with key: %d"), ActualGroupKey);
		return;
	}

	if (GroupData->AIGroup.Num() == 0)
	{
		//No value skip current group spawn action
		return;
	}

	int Index = FMath::FRandRange(0, GroupData->AIGroup.Num() - 1);

	UGExcelEnemyGroupTable* EnemyDataTable = UGExcelDataManager::Get()->GetExcelTable<UGExcelEnemyGroupTable>();

	if (EnemyDataTable == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::EnemyGroup"));
		return;
	}

	UGExcelEnemyGroupData* EnemyData = EnemyDataTable->GetByid(GroupData->AIGroup[Index]);

	if (EnemyData == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::EnemyData"));
		return;
	}

	FString EnemyIDString = EnemyData->EnemyIDs.ToString();

	TArray<FString> SingleEnemy;

	EnemyIDString.ParseIntoArray(SingleEnemy, TEXT("|"));

	for (int i = 0; i < SingleEnemy.Num(); i++)
	{
		TArray<FString> SingleVlaues;

		SingleEnemy[i].ParseIntoArray(SingleVlaues, TEXT(","));

		TArray<int> IntValues;

		for (int j = 0; j < SingleVlaues.Num(); j++)
		{
			IntValues.Add(FCString::Atoi(*SingleVlaues[j]));
		}

		int ActualNumber = 0;

		if (IntValues.Num() >= 3)
		{
			ActualNumber = FMath::FRandRange(IntValues[1], IntValues[2]);
		}
		else if (IntValues.Num() == 2)
		{
			ActualNumber = IntValues[1];
		}

		for (int NumberIndex = 0; NumberIndex < ActualNumber; NumberIndex++)
		{
			FEnemyIDInfo EnemyInfo;
			EnemyInfo.NPCID = IntValues[0];
			NPCInfos.Add(EnemyInfo);
		}
	}
}

void UAIInfoAccessFromEnemyIDExcel::GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos)
{
	NPCInfos.Empty();

	if (GetAISpawnDataGroup() == nullptr)
		return;

	const TArray<FSingleGroupSpawnRoundInfo>& RoundInfos = GetAISpawnDataGroup()->RoundInfos;

	if (GetRoundIndex() >= RoundInfos.Num() ||
		GetGroupIndex() >= RoundInfos[GetRoundIndex()].GroupSpawnDatas.Num())
		return;

	int EnemyGroupID = RoundInfos[GetRoundIndex()].GroupSpawnDatas[GetGroupIndex()].EnemyGroupID;

	UGExcelEnemyGroupTable* EnemyDataTable = UGExcelDataManager::Get()->GetExcelTable<UGExcelEnemyGroupTable>();

	if (EnemyDataTable == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::EnemyGroup"));
		return;
	}

	UGExcelEnemyGroupData* EnemyData = EnemyDataTable->GetByid(EnemyGroupID);

	if (EnemyData == nullptr)
	{
		UE_LOG(LogTrigger, Error, TEXT("Please check local excel data::EnemyGroupID: %d"), EnemyGroupID);
		return;
	}

	FString EnemyIDString = EnemyData->EnemyIDs.ToString();

	TArray<FString> SingleEnemy;

	EnemyIDString.ParseIntoArray(SingleEnemy, TEXT("|"));

	for (int i = 0; i < SingleEnemy.Num(); i++)
	{
		TArray<FString> SingleVlaues;

		SingleEnemy[i].ParseIntoArray(SingleVlaues, TEXT(","));

		TArray<int> IntValues;

		for (int j = 0; j < SingleVlaues.Num(); j++)
		{
			IntValues.Add(FCString::Atoi(*SingleVlaues[j]));
		}

		int ActualNumber = 0;

		if (IntValues.Num() >= 3)
		{
			ActualNumber = FMath::FRandRange(IntValues[1], IntValues[2]);
		}
		else if (IntValues.Num() == 2)
		{
			ActualNumber = IntValues[1];
		}

		for (int NumberIndex = 0; NumberIndex < ActualNumber; NumberIndex++)
		{
			FEnemyIDInfo EnemyInfo;
			EnemyInfo.NPCID = IntValues[0];
			NPCInfos.Add(EnemyInfo);
		}
	}
}