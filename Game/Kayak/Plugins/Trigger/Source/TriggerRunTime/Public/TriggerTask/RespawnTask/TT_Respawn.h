#pragma once
/*
* Author:		Liulianyou
* Time:			2020/7/16
* Purpose:		When one character dead and need to respawn, the task will manager the spawn style.
*				Respawn task will generate all dead pawns and to check weather I need to respawn the dead pawn. 
*				
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerDefinition.h"
#include "TriggerTaskBase.h"
#include "RespawnDataBase.h"

#include "Engine/NetSerialization.h"

#include "TT_Respawn.generated.h"

class URespawnPostProcessBase;
class APlayerController;
class ACharacter;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FCharacterData
{
	GENERATED_BODY()

	FCharacterData():
		PawnClass(nullptr),
		SpawnedCount(0)
	{  }

	//The pawn class that the player controller processed
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	UClass* PawnClass;

	//Total spawned time
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	int SpawnedCount;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FControllerData
{
	GENERATED_BODY()

	FControllerData()
	{
		CharacterData.Empty();
	}

	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime" )
	TArray<FCharacterData> CharacterData;

	FDelegateHandle SpawnNewPawnHandle;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FRespawnInfo
{
	GENERATED_BODY()

	FRespawnInfo() { ControllerData.Empty(); }

	void Reset();

	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	TMap<APlayerController*, FControllerData> ControllerData;

};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FToggledPawnInfo 
{
	GENERATED_BODY()

	//The pawn who toggled this task
	APawn* Pawn;

	//The handle to hold the delegate which is called when the game play have confirmed the dead event
	FDelegateHandle ConfirmedDeadHandle;

	//Maybe the AI Controller in the game don't inherited from IDeadSupportInterface, So I need to use the inspect the destroy handle to manipulate this pawn
	FDelegateHandle DestroyedHandle;
};

UCLASS(BlueprintType, Blueprintable, Config = Game, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTT_Respawn : public UTriggerTaskBase
{
	GENERATED_UCLASS_BODY()

	TriggerTaskCommonFrameWorkDeclaration();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const;
	virtual void BeginDestroy() override;
public:

	//Override Base class function 
	virtual void SelectedInEditor(UObject* SelectedActor);
	//Override base class function   End

public:
	TArray<APawn*>& GetDeferredPawns() { return DeferredProcessPawns; }

	void RemoveToggledPawn(APawn* Pawn);

	int AddNewToggledPawn(APawn* Pawn);

	int FindToggledPawnIndex(APawn* Pawn);

	void UpdateControllerNewPawnEventHandle(APlayerController* PlayerController, ACharacter* NewCharacter, FRespawnInfo& RespawnInfoParamater, FDelegateHandle& NewHandle);

protected:

	/*
	* Set the target character's transform form RPC to avoid the net delay 
	*/
	UFUNCTION(NetMulticast, Reliable)
	void SetCharacterTransform( ACharacter* Character, FTransform Transform );
	
	/*
	* The different between the PawnDeadEvent && ActorDestroyedEvent is PawnDeadEvent will try to respawn the target actor, but ActorDestroyedEvent not
	*/

	//Called when on pawn is dead and try to respawn it.
	UFUNCTION()
	void PawnDeadEvent(AActor* DestroyedActor);

	//If the target actor is destroyed and don't want to respawn it then should invoke this function
	UFUNCTION()
	void ActorDestroyedEvent(AActor* DestroyedActor);

	//Called when deferred pawn is destroyed
	UFUNCTION()
	void DeferredPawnDestroyed(AActor* DestroyedActor);

	void ActorCreateEvent(AActor* Actor);

	//Add listener to pawn spawned event when new pawn add to controller
	void RegisterPawnSapwnEvent( APawn* NewPawn );

	//Update the spawned count according to the player controller
	void UpdateSpawnedCount( APlayerController* PlayerController, ACharacter* NewCharacter, FRespawnInfo& RespawnInfoParamater, int DeltaCount = 1);

	//Check the respawn info data to add new elements if there is no PlayerController or pawn class in the pool
	void CheckRespawnInfoData(FRespawnInfo& RespawnInfoParamater, APlayerController* PlayerController, UClass* PawnClass);

	//Check weather the target spawn interface have the valid delegate
	void CheckPawnDeadHandCallBack( APawn* Pawn );

	/*
	* Function used to check weather the new spawned pawn can add to the toggled pawns pool, so that this task can inspect the dead event of the new pawn
	*/
	virtual bool CanAddNewSpawnedPawn( APawn* Pawn );

	/*
	* When the one toggled pawn toggle the task, I need to determine the final pawn the task need to inspector.
	*/
	virtual void GeneratePotentialRespawnedPawn(TArray<APawn*>& OutPawns, APawn* ToggledPawn );

	//Register dead callback to all pawns which maybe need to be respawned
	virtual void RegisterPotentialRespawnedPawn();

	/*
	* Stop other respawn task in the map so that only part of activated respawn task is running the content
	* 
	* @param NewToggledPawns the new pawns that this task will inspect
	*/
	virtual void StopOtherRespawnTasks(const TArray<APawn*>& NewToggledPawns );

	/*
	* When one pawn is dead, this task will try to spawn new pawn for target pawn.
	* 
	* @param NewToggledPawns the new pawns that this task will inspect
	*/
	virtual void TryToRespawnNewPawn(APawn* Pawn);

	/*
	* Give child classs one access to customize implementation after new pawn have been respawed
	*/
	virtual void RespawnNewPawn(APawn* OldPawn, APawn* NewPawn, ERespawnType RespawnType);

	//Get the spawn position
	FVector GetSpawnPosition(const FNeedSpawnedPawnInfo& PawnInfo);

	//Get the spawn rotation
	FRotator GetSpawnRotation(const FNeedSpawnedPawnInfo& PawnInfo);

	//Get the transform to spawn new character
	FTransform GetSpawnTransform( const FNeedSpawnedPawnInfo& PawnInfo);

private:

	/*
	* Clear the immediate info for respawn task when the causer want to
	*/
	void ClearInfo(UObject* Causer);

public:

	//Current respawn information
	UPROPERTY(Transient)
	FRespawnInfo RespawnInfo;

	UPROPERTY(Transient)
	//The pawns who toggle this trigger which will 
	TArray<FToggledPawnInfo> ToggledPawns;

	//The type to spawn new pawn
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	ERespawnType RespawnType;

	//All spawn point informations
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
	URespawnDataBase* RespawnTemplateData;

protected:
	//The pawns pending to respawn new pawn
	TArray<FNeedSpawnedPawnInfo> PendingToRespawn;

private:

	/*
	* All though this task only focused on the player controller,
	* but not all pawn will bind with player controller and for now I can't check weather the pawn should have one player controller
	* when the pawn was spawned by the world.
	* So I need to check in the feature tick to determine weather these have its player controller.
	* Once it have its own player controller I need to get its status.
	*/
	TArray<APawn*> DeferredProcessPawns;

	//The handle of spawn actor in the world object
	FDelegateHandle ActorSpawnHandle;

};
