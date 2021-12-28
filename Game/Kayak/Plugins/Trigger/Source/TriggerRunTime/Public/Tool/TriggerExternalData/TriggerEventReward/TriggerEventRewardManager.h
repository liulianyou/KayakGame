#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/17
* Purpose:	This class is used to manage all rewards which is created by the trigger event with the TriggerEventRewardData as it external data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "TriggerEventRewardDataWithID.h"

#include "TriggerEventRewardManager.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestRewardDelegate, const FString&, RewardID);


//The struct to hold the max reward ID
struct FMaxRewardID
{
	//The data type which the max reward ID should be applied
	TSubclassOf<UTriggerEventRewardDataBase> DataType;

	//The max revert ID
	FString MaxRewarDID;
};

/*
* The base class to manage the trigger event reward 
*/
UCLASS(BlueprintType, Blueprintable, hidedropdown, Within="TriggerTaskManager", Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerEventRewardManager : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Initialize this reward manager
	* 
	* @param the owner manager which hold the instance of this reward manager
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnInitialize( UTriggerTaskManager* OwnerManager );
	virtual void Initialize( UTriggerTaskManager* OwnerManager );

	/*
	* Try to generated new reward ID
	* 
	* #return false means generated ID failed at current time, the ID maybe regenerated when the map have been loaded
	*/
	UFUNCTION(BlueprintNativeEvent)
	bool TryToGenerateRewardID(UTriggerEventRewardDataBase* TargetData, FString& ID);

	UFUNCTION(BlueprintCallable)
	UTriggerTaskManager* GetTriggerTaskManager() const { return TaskManager; }

	/*
	* Get the max reward ID fro the target data type
	*/
	UFUNCTION(BlueprintCallable)
	FString& GetTheMaxRewardIDByRewardData( UTriggerEventRewardDataBase* RewardData );

	/*
	* Add new max reward ID to the pool
	*/
	UFUNCTION(BlueprintCallable)
	void AddNewMaxRewardID(UTriggerEventRewardDataBase* RewardData, const FString& NewMaxRewardID);

	/*
	* Try to request the actual rewards for the target reward data
	*/
	UFUNCTION(BlueprintNativeEvent)
	void RequestReward( UTriggerEventRewardDataBase* RewardData );

	/*
	* Accept all the actual rewards for the target RewardID
	*/
	UFUNCTION(BlueprintNativeEvent)
	void AcceptReward( const FString& RewardID, const TArray<FRewardData>& RewardDatas );

protected:

	UFUNCTION()
	void OnTaskRegisterEvent( UTriggerTaskBase* TriggerTask );

	UFUNCTION()
	void OnTaskUnRegisterEvent(UTriggerTaskBase* TriggerTask);

private:

	/*
	* The default reward data which all trigger task should have
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="TriggerRuntime|Reward", meta=(AllowPrivateAccess="True"))
	TSubclassOf<UTriggerEventRewardDataBase> RewardDataClass;

	/*
	* Flag to check weather I need to remove the reward data in the trigger task which type is different from RewardDataClass
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime|Reward", meta = (AllowPrivateAccess = "True"))
	bool RemoveDifferentDataType;

	/*
	* Flag to check weather I need to check reward data with the exact data type with RewardDataClass to remove the external reward data if the RemoveDifferentDataType is true
	*/
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "TriggerRuntime|Reward", meta = (AllowPrivateAccess = "True", EditCondition="RemoveDifferentDataType"))
	bool CheckExactDataType;

	UPROPERTY(Transient)
	UTriggerTaskManager* TaskManager;

	/*
	* Give the outer module one chance to process request reward command
	*/
	UPROPERTY(BlueprintAssignable, meta = (AllowPrivateAccess = "True"))
	FRequestRewardDelegate RequestRewardDelegate;

private:

	/*
	* The key is map name, 
	* the value is the max reward ID for the target map
	*/
	TMap<FString, TArray<FMaxRewardID>> RewardIDMap;

	/*
	* All the commands to request the rewards
	*/
	TArray<UTriggerEventRewardDataBase*> RequestRewardCommand;
};
