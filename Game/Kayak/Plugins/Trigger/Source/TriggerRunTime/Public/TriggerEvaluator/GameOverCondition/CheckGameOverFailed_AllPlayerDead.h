#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition is used to check weather the game is failed
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"
#include "GameOverCondition/CheckGameOverFailedBase.h"
#include "CheckGameOverFailed_AllPlayerDead.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGameOverFalidInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	APawn* Player;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	bool IsDead = false;

	FDelegateHandle DeadDelegateHandle;

	void Reset();
};

/*
* This failed condition only check weather all players have dead
* This condition only valid when the player character inherited from IDeadSupportInterface
*/
UCLASS(BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOverFailed_AllPlayerDead : public UCheckGameOverFailedBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override Evaluator Base
	virtual bool NativeEvaluator() override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

		//Override CheckGameOverBase
	virtual void AddGameOverPlayer(APlayerController* PlayerController);
	virtual void RemoveGameOverPlayer(APlayerController* PlayerController);
	//Override CheckGameOverBase

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

public:
	

public:
	UFUNCTION()
	void OnActorSpawned( AActor* Actor );

	UFUNCTION()
	void OnCharacterExit(AActor* Causer, FString URL);

	/*
	* Register event to global failed event
	*/
	UFUNCTION()
	void OnGameOverFaildEvent(TArray<AActor*>& Actor );

	UFUNCTION()
	void OnCharacterDead(AActor* Actor);

protected:
	bool RegisterPawn(APawn* Pawn);

	void RegisterPawnTimeDelegate();

	//Callback function for the target actor destroyed;
	UFUNCTION()
	void ActorDestroyCallback(AActor* DestroyedActor);
private:

	bool DoesMeetCondition;

	//The pawns who have no controller when it spawned immediately, I will use them to check weather these pawns are valid
	TArray<APawn*> DeferredPawns;

	//Handle of spawned delegate
	FDelegateHandle ActorSawnDelegateHandle;

	//Native Field EventHandle of the global event
	//FDelegateHandle NativeFaildEventHandle;

	//FDelegateHandle NativeCharacterExitEventHandle;

	//The pool of character information
	TArray<FPlayerGameOverFalidInfo> CharactersInfo;

	//The handle to register the deffered pawn;
	FTimerHandle RegisterPawnTimeHandle;
};