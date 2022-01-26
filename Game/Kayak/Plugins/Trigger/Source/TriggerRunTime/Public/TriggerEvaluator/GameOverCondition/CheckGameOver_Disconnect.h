#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition is used to check weather the player disconnect from the Dedicated server
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverBase.h"

#include "CheckGameOver_Disconnect.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGameOverDisconnectInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	APawn* Player;

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	int CheckCount = 0;
};

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOver_Disconnect : public UCheckGameOverBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override Evaluator Base
	virtual bool NativeEvaluator(bool DoLocalCheck = false) override;
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
	UFUNCTION()
	void DisconnectEventCallback(AActor* Actor);

	UFUNCTION()
	void OnPlayerControllerDestroyed(AActor* Actor);
private:
	FDelegateHandle DelegateHandle;

	//The pool of character information
	TArray<FPlayerGameOverDisconnectInfo> CharactersInfo;
};
