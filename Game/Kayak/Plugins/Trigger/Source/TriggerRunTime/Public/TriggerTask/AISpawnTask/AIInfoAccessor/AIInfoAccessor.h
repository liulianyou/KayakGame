#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/3
* Purpose:	Defines how to access the information for AI
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AIInfoAccessor.generated.h"

class UAISpawnDataGroup;

USTRUCT(BlueprintType)
struct FEnemyIDInfo
{
	GENERATED_BODY()

public:
	
	UPROPERTY(BlueprintReadWrite)
	int NPCID;
};


UCLASS(Blueprintable, BlueprintType, Abstract, DefaultToInstanced, editinlinenew, hidedropdown, Category = "NPCInfo Accessor")
class TRIGGERRUNTIME_API UAIInfoAccessorBase : public UObject
{
	GENERATED_UCLASS_BODY()
public:

	UFUNCTION(BlueprintNativeEvent)
	void GetVaildNPCInfos(TArray<FEnemyIDInfo>& NPCInfos);
};

/*
* This class and all its sub class should only be used in AISpawnDataGroup
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Within="AISpawnDataGroup")
class TRIGGERRUNTIME_API UAIInfoAccessorInAISpawnDataGroup : public UAIInfoAccessorBase
{
	GENERATED_UCLASS_BODY()

public:
	UAISpawnDataGroup* GetAISpawnDataGroup();

	void SetGroupAndRoundIndex(int RoundIndex_, int GroupIndex_) {GroupIndex = GroupIndex_; RoundIndex = RoundIndex_;};

	int GetGroupIndex() { return GroupIndex; }
	int GetRoundIndex() { return RoundIndex; }
private:

	int GroupIndex;
	int RoundIndex;

};

/*
* Read the NPC information from the excel data which is stored all Infos directly
*/
UCLASS(Blueprintable, BlueprintType, Abstract)
class TRIGGERRUNTIME_API UAIInfoAccessFromGroupIDExcel : public UAIInfoAccessorInAISpawnDataGroup
{
	GENERATED_UCLASS_BODY()
public:
	void GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos);
};

/*
* Read the NPC information from the excel data which data is just group some data in other data table which store the actual NPC infos
*/
UCLASS(Blueprintable, BlueprintType, Abstract)
class TRIGGERRUNTIME_API UAIInfoAccessFromEnemyIDExcel : public UAIInfoAccessorInAISpawnDataGroup
{
	GENERATED_UCLASS_BODY()
public:
	void GetVaildNPCInfos_Implementation(TArray<FEnemyIDInfo>& NPCInfos);
};