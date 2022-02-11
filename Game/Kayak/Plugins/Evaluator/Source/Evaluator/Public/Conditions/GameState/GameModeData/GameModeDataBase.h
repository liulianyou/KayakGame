#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/27
* Purpose:	The base data which is used to hold the some confined information for gamemode,
*			And this class will use these data to check weather the target game mode have matched the target 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameModeDataBase.generated.h"

class AGameModeBase;
class AGameStateBase;
class UCheckGameModeState;

/*
* The base data which is used to be confined by the LD to inspect weather the target game mode have reach the target state
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Within="CheckGameModeState", DefaultToInstanced, editinlinenew)
class EVALUATOR_API UTriggerGameModeDataBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Try to check weather this data can be passed as all the value this data focused has reach to target state
	*/
	UFUNCTION(BlueprintImplementableEvent)
	bool OnIsPassed();
	UFUNCTION(BlueprintCallable)
	virtual bool IsPassed();

	UFUNCTION(BlueprintImplementableEvent)
	void OnInitialize(UCheckGameModeState* OwnerObject);
	UFUNCTION(BlueprintCallable)
	virtual void Initialize(UCheckGameModeState* OwnerObject );

	UFUNCTION(BlueprintImplementableEvent)
	void OnReset();
	UFUNCTION(BlueprintCallable)
	virtual void Reset();

	//Get the owner of this data
	UFUNCTION(BlueprintCallable)
	UCheckGameModeState* GetOwner() { return Owner; }

	/*
	* Get current game mode
	* 
	* #return This maybe return null as the game mode is not exist at client in Server/Client mode
	*/
	UFUNCTION(BlueprintCallable)
	virtual AGameModeBase* GetGameMode() const;

	/*
	* Get the game state for current game mode
	*/
	UFUNCTION(BlueprintCallable)
	virtual AGameStateBase* GetGameState() const;

	/*
	* When the inspect content have changed this data should notify the owner to evaluate
	*/
	UFUNCTION(BlueprintCallable)
	void NotifyOwnerToEvaluate();

private:
	UCheckGameModeState* Owner;

};