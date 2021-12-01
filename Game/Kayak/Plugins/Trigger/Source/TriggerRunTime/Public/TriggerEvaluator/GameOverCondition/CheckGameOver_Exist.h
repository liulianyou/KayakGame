#pragma once

/*
* Author:	Liulianyou
* Time:		2020/12/21
* Purpose:	This condition check weather one player have exist this game manually
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameOverCondition/CheckGameOverBase.h"

#include "CheckGameOver_Exist.generated.h"

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FExistPlayerInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite)
	APlayerController* Player;

	//The number for this player been check in the evaluator
	UPROPERTY(BlueprintReadWrite)
	int CheckedCount = true;

	bool operator==( const FExistPlayerInfo& OtherData);

};

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UCheckGameOver_Exist : public UCheckGameOverBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override Evaluator Base
	virtual bool NativeEvaluator() override;
	virtual void NativeInitialize(UObject* OwnerObject) override;
	virtual void NativeReset() override;
	//Override Evaluator Base

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject

	//Override GameOverBase
	virtual void AddGameOverPlayer(APlayerController* PlayerController);
	virtual void RemoveGameOverPlayer(APlayerController* PlayerController);
	//Override GameOverBase

public:

	UFUNCTION()
	void ExistCurrentMapEventCallback(AActor* Causer, FString URL);

private:
	FDelegateHandle DelegateHandle;

	//Player infors pool
	TArray<FExistPlayerInfo> ExistPlayerInfos;
};
