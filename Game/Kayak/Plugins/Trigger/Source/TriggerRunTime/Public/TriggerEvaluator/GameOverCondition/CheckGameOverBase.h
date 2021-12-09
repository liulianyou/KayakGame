#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	The base condition to toggle the game over
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "EvaluatorCondition.h"

#include "CheckGameOverBase.generated.h"

UCLASS(Abstract, Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOverBase : public UEvaluatorCondition
{
	GENERATED_UCLASS_BODY()

public:
	//Override Evaluator Base
	virtual bool Evaluator( bool DoLocalCheck  ) override;
	virtual bool NativeEvaluator() override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

public:
	
	//Get the players who should get the game over informations
	UFUNCTION(BlueprintCallable)
	virtual TArray<APlayerController*>& GetGameOverPlayers(){ return Players; };

	UFUNCTION(BlueprintCallable)
	virtual void AddGameOverPlayer(APlayerController* PlayerController);

	UFUNCTION(BlueprintCallable)
	virtual void RemoveGameOverPlayer(APlayerController* PlayerController);

	UFUNCTION()
	void OnControllerDestroyedCallback(AActor* Actor);

	//Get all player controllers in the target world
	UFUNCTION(BlueprintCallable)
	TArray<APlayerController*> GetAllPlayerControllersInWorld();


protected:
	/*
	* When OtherGameOverCondition had passed. this condition will update local data
	*/
	virtual void GameOverConditionPassCallback(UCheckGameOverBase* OtherGameOverCondition);

private:
	
	//The players who should execute game over
	UPROPERTY()
	TArray<APlayerController*> Players;

	//Handle for game over condition pass event
	FDelegateHandle GameOverConditionPassHandle;

};