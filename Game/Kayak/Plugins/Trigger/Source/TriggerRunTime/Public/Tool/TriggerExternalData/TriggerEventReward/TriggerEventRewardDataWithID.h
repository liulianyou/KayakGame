#pragma once

/*
* Author:	Liulianyou
* Time:		2021/11/17
* Purpose:	The reward data which only hold one ID which is generated automatically.
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerEventRewardDataBase.h"

#include "TriggerEventRewardDataWithID.generated.h"

UCLASS(BlueprintType, Blueprintable, Category = "TriggerRuntime")
class TRIGGERRUNTIME_API UTriggerEventRewardDataWithID : public UTriggerEventRewardDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UTriggerTaskExternalDataBase
	virtual void Initialize(UTriggerTaskBase* Owner) override;
	//Override UTriggerTaskExternalDataBase

	//Override UTriggerEventRewardDataBase
	virtual FString GetRewardID_Implementation() const override;
	virtual void SetRewardID_Implementation(const FString& NewID) override;
	virtual FString GenerateNextID_Implementation(const FString& ID) const override;
	virtual bool IsLarger_Implementation( const FString& ID ) const  override;
	virtual FString GetRewardIDFromStrings_Implementation(const TArray<FString>& Strings) const override;
	virtual bool IsValidRewardID_Implementation(const FString& ID) const override;
	virtual void RequestReward_Implementation() override;
	virtual void AcceptReward_Implementation(const TArray<FRewardData>& RewardDatas) override;
	virtual void ClearRewardID_Implementation() override;
	//Override UTriggerEventRewardDataBase

	//Override UObject
	virtual void Serialize(FArchive& Ar) override;
	//Override UObject

public:
	
	UFUNCTION(BlueprintNativeEvent)
	FString GeneratedRewardID();

public:
	/*
	* The identification for the reward.
	* This ID will be generated automatically
	* This ID's format is MapName_ID
	*/
	UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly, Transient, Category = "ExternalData")
	mutable FString RewardID;

	//The internal index for this reward data
	UPROPERTY()
	int ID;

};