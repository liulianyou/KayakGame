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
	FString GetRewardID_Implementation() const override;
	void SetRewardID_Implementation(const FString& NewID) override;
	FString GenerateNextID_Implementation(const FString& ID) const override;
	bool IsLarger_Implementation( const FString& ID ) const  override;
	FString GetRewardIDFromStrings_Implementation(const TArray<FString>& Strings) const override;
	bool IsValidRewardID_Implementation(const FString& ID) const override;
	void RequestReward_Implementation() override;
	void AcceptReward_Implementation(const TArray<FRewardData>& RewardDatas) override;
	//Override UTriggerEventRewardDataBase

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

	UPROPERTY()
	int ID;

};