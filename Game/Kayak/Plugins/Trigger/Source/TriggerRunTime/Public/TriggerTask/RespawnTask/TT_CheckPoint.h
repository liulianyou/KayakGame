#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/10
* Purpose:	The check point for game.
*			The difference between check point and respawn point is check point only can be work when all team members dead.
*			but respawn point work when one player is dead.
*			check point is same as the respawn point only is 
* 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TT_Respawn.h"

#include "TT_CheckPoint.generated.h"

class APawn;
class UTT_CheckPoint;
class UTriggerRecordBase;

//The potential pawn info which need to be
struct FPotentialRespawnedPawnInfo
{
	//The target pawn which need to respawn
	APawn* OldPawn = nullptr;

	//Flag to check weather this pawn need to respawn
	bool NeedToRespawn = false;

	//Flag to check weather this pawn need to respawn
	bool HaveRespawned = false;

	/*
	* The handle to hold the dead delegate, which the target pawn is start to go into dead state.
	* */
	FDelegateHandle EnterDeadHandle;

	//The task which will inspect this pawn.
	UTT_CheckPoint* CheckPointTask;

public:
	bool IsValid() { return OldPawn != nullptr;}

	~FPotentialRespawnedPawnInfo();

};

/*
* The group data for all single pawns
*/
struct FPotentialRespawnedPawnGroup : public TArray<FPotentialRespawnedPawnInfo>
{
	/*
	* Find the target single pawn info
	* #return index at the PawnInfos, if is INDEX_NONE means this pawn is not in these pawns
	*/
	int FindPawnInfo(APawn* Pawn);

	bool NeedToRespawnAll();
	
	bool AllPawnsSpawned(int GroupIndex);

	//Check weather this check point will respect these pawns
	bool IsVaildCheckPointToRespawn(const UTT_CheckPoint* TargetCheckPoint) const;

public:
	//The level of check point these pawns will be respawned
	int CheckPointLevel = INDEX_NONE;

	//The task which will inspect these pawns.
	UTT_CheckPoint* CheckPointTask;
};

/*
* The group data for all group pawns.
*/
struct FPotentialRespawnGroups : public TArray<FPotentialRespawnedPawnGroup>
{
	/*
	*
	* @param Pawn	the new pawn who should move to the new group with NewGroupIndex
	* @param GroupIndex	the target index in the PawnInfos which need to update
	* @param CPTask		Which ChechPoint should inspect the group pawns with the new GroupIndex
	* 
	* #return int Index of pawn in target group Index
	*/
	int UpdatePawnGroupInfo(int GroupIndex, APawn* Pawn, UTT_CheckPoint* CPTask);

	//Find the target group pawns which the pawn will lay on
	int FindGroupPawns( APawn* Pawn );

	int FindEmptySlotIndex();
};

/*
* Event which is used to define the environment of new check point activated information
* 
* @param ToggledPawn			Who toggled this check point
* @param OutPawns				The pawns who will be respawned at this check point
*/
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNewCheckPointActivated, APawn*, ToggledPawn, const TArray<APawn*>&, OutPawns);

UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_CheckPoint : public UTT_Respawn
{
	GENERATED_UCLASS_BODY()

public:
	virtual void Finished(UOperationInformationBase* FinishOperationInfo);

	void OnCharacterEnterDeadCallBack(AActor* Acotr);

protected:

	//Override UTT_Respawn
	virtual void GeneratePotentialRespawnedPawn(TArray<APawn*>& OutPawns, APawn* ToggledPawn);
	virtual void StopOtherRespawnTasks(const TArray<APawn*>& NewToggledPawns);
	virtual void TryToRespawnNewPawn(APawn* Pawn);
	virtual void RespawnNewPawn(APawn* OldPawn, APawn* NewPawn, ERespawnType RespawnType);
	//Override UTT_Respawn

public:
	/*
	* Callback for destroyed event of pawn
	*/
	UFUNCTION()
	void PawnDestroyedEventCallback(AActor* Actor);

	UFUNCTION()
	void PawnOnEndPlay(AActor* Actor, EEndPlayReason::Type EndPlayReason);

private:

	//Get teammate for the toggled pawn for this check point to inspector
	void GetTeammates(TArray<APawn*>& OutPawns, APawn* ToggledPawn);

	void AddEnterDeadEvent( APawn* Pawn );

	void RemoveEnterDeadEvent(APawn* Pawn);
public:

	/*
	* The level for this check point.
	* As there are a lot check point in one map, and only one check point should work at once(Just like the base class TT_Respawn).
	* the check point with high level will override the one with lower level, and the high level will be the only one check point at current game thread.
	* and the low level will never be toggled again.
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="CheckPoint")
	int Level;

	/*
	* When this task activates, Some recored things will be processed
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Category = "CheckPoint")
	UTriggerRecordBase* RecordTemplate = nullptr;

	//Called when the target toggled pawn have activate new check point
	UPROPERTY(BlueprintAssignable)
	FNewCheckPointActivated NewCheckPointActivated;

private:

	//Temporary store all pawns' information by group
	static FPotentialRespawnGroups GroupInfo;


};
