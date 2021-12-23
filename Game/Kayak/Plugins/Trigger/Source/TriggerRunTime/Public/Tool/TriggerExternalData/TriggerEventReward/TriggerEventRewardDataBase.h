#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/17
* Purpose:	This is the base data which is used to store the reward info which is used in the external data of trigger event task
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"
#include "TriggerTaskExternalDataBase.h"

#include "TriggerEventRewardDataBase.generated.h"

#define REWARDIDENTIFICATIONDELIMITOR TEXT("_")
#define REWARDIDENTIFICATIONDELIMITOR_CHAR '_'

class UEvaluatorBase;
class UEvaluatorOperation;

/*
* Brief for the item of reward
*/
USTRUCT(Blueprintable)
struct FRewardItem
{
	GENERATED_BODY()

public:

	//The ID for the Item
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ItemID;
	
	//The number of the target Item
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int ItemNumber;
};

USTRUCT(Blueprintable)
struct FRewardData
{
	GENERATED_BODY()

public:
	//The Items for the target players
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FRewardItem> Items;

	//Which player own this Item;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<APlayerController*> Controllers;
};

/*
* The base class used to store the reward information which will be created by the trigger task which bind with this external data
*/
UCLASS(BlueprintType, Blueprintable, Abstract, Category = "TriggerRuntime|ExternalData")
class TRIGGERRUNTIME_API UTriggerEventRewardDataBase : public UTriggerTaskExternalDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerTaskExternalDataBase
	virtual void Initialize(UTriggerTaskBase* Owner) override;
	virtual void Reset(UOperationInformationBase* ResetOperationInfo) override;
	//Override UTriggerTaskExternalDataBase

protected:

	//Callback for the reward condition
	UFUNCTION()
	virtual void EvaluatorRequestCondition(UEvaluatorBase* Evaluator, bool EvaluatorResult);

public:

	/*
	* Get reward ID as one string for this data
	*/
	UFUNCTION(BlueprintNativeEvent)
	FString GetRewardID() const;

	/*
	* Get reward ID from the arrays of string, each element in the string will be one part of the final ID
	*/
	UFUNCTION(BlueprintNativeEvent)
	FString GetRewardIDFromStrings( const TArray<FString>& Strings ) const;

	/*
	* Set the reward ID from the new string ID
	*/
	UFUNCTION(BlueprintNativeEvent)
	void SetRewardID( const FString& NewID );

	/*
	* Help function to define weather the ID int this data is larger then target ID
	*/
	UFUNCTION(BlueprintNativeEvent)
	bool IsLarger( const FString& ID ) const;

	/*
	* Generate the ID which is after the target ID
	*/
	UFUNCTION(BlueprintNativeEvent)
	FString GenerateNextID( const FString& ID ) const;

	/*
	* Check weather the target reward ID is valid for this data
	*/
	UFUNCTION(BlueprintNativeEvent)
	bool IsValidRewardID(const FString& ID) const;

	//Request the actual reward which this data stands for
	UFUNCTION(BlueprintNativeEvent)
	void RequestReward();

	UFUNCTION(BlueprintNativeEvent)
	void AcceptReward( const TArray<FRewardData>& RewardDatas );

public:

	/*
	* The condition to check when to request reward by this data
	*/
	UPROPERTY(BlueprintReadWrite, Instanced, EditAnywhere, Category = "RuntimeCondition")
	UEvaluatorOperation* RequestRewardCondition = nullptr;

public:
	
	//The invalid ID for the reward
	static FString InvalidRewardID;

	//Stands for the empty ID
	static FString EmptyRewardID;
};

