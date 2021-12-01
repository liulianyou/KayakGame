#pragma once

/*
* Author:	Liulianyou
* Time:		2021/2/8
* Purpose:	This file will hold the information for task activation
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/NetSerialization.h"

#include "TaskActiveInformation.generated.h"

class UTriggerTaskComponentBase;
class UOperationInformationBase;
class UTriggerTaskBase;

USTRUCT()
struct FActiationInfoHandle
{
	GENERATED_BODY()
public:

	FActiationInfoHandle()
	{
		Handle = INDEX_NONE;
	}

	FActiationInfoHandle(int32 InHandle)
		: Handle(InHandle)
	{
	}

	FActiationInfoHandle(const FActiationInfoHandle& InInfo)
		: Handle(InInfo.GetHandleIndex())
	{
	}

public:

	static FActiationInfoHandle GenerateNewHandle();

	bool IsValid();

	void Invalidate();

	friend bool operator==(const FActiationInfoHandle& Left, const FActiationInfoHandle& Right);

	static FActiationInfoHandle InvalidHandle;

	int GetHandleIndex() const { return Handle; }

private:

	UPROPERTY()
	int32 Handle = INDEX_NONE;

};

//The activation information for this task
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTaskActivationInfo : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FTaskActivationInfo(){};
	FTaskActivationInfo(UTriggerTaskComponentBase* Component, UTriggerTaskBase* Task, UOperationInformationBase* Data): 
		OtherTaskComponent(Component),
		OtherTask(Task),
		ProcessedExternalData(Data)
	{
	}

	//The task component which invoke this task
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	UTriggerTaskComponentBase* OtherTaskComponent = nullptr;
	//The actual task in the other task component to invoke this task
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	UTriggerTaskBase* OtherTask = nullptr;
	//The external data which this task will process when it start
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	UOperationInformationBase* ProcessedExternalData = nullptr;
	//The task which own this info, this variable should never be none
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	UTriggerTaskBase* OwnerTask = nullptr;
	/*
	* Flag to check weather this active information has activated the target task successfully
	* As I will store all activate information who toggle the trigger task. part of the toggle is invalid so I use this flag to distinguish them.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "TriggerRuntime")
	bool ActiveSuccessed = false;

	/*
	* The task which is the actual task which will be used to run the content of this task
	*/
	UPROPERTY()
	TArray<UTriggerTaskBase*> RepliactedRunningTask;

	UPROPERTY()
	FActiationInfoHandle Handle;

	UPROPERTY(NotReplicated)
	TArray<UTriggerTaskBase*> UnRepliactedRunningTask;

public:

	void AddTask(UTriggerTaskBase* Task);

	void RemoveTask(UTriggerTaskBase* Task);

	void Reset();

	void GetAllInstancedTask(TArray<UTriggerTaskBase*>& InstancedTasks);

	//Find instanced task which will use the OwnerTask as template if it exist
	UTriggerTaskBase* FindOrAddNewInstance();

	/*
	* Interface function to see weather I need to replicate this information
	* You can treat this function the customize condition in the DOREPLICATETIME marco
	*/
	bool ShouldReplicateActiveInfo() const;

	bool IsVaild() const;

	friend bool operator==(const FTaskActivationInfo& LeftInfo, const FTaskActivationInfo& RightInfo);
	friend bool operator!=(const FTaskActivationInfo& LeftInfo, const FTaskActivationInfo& RightInfo);


	static FTaskActivationInfo InvaildTaskActiveInfo;
};

/*
* The container of the activation information for the target trigger task.
* The last element is the immediate activation information.
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FTaskActivationInfoContainer : public FFastArraySerializer
{
	GENERATED_USTRUCT_BODY()

	FTaskActivationInfoContainer();
	FTaskActivationInfoContainer( const FTaskActivationInfoContainer& OtherContainer);

public:

	void InitializeByTask(UTriggerTaskBase* Task);

	/*
	* Try to find the active info if there is no the same info then create new one
	* 
	* @param ForceAdd force to add new active info
	*/
	int FindOrAddNewActiveInfo(FTaskActivationInfo& ActiveInfo, bool ForceAdd = false);

	/*
	* Get the last element which external data's actor is the same as actor
	*/
	FTaskActivationInfo& FindActiveInfoByActor(AActor* Actor);

	FTaskActivationInfo& FindActiveInfoByIndex(int Index);

	/*
	* Get the last element which owner task is the same as parameter task.
	*/
	FTaskActivationInfo& FindActiveInfoByTriggerTask(UTriggerTaskBase* Task);

	FTaskActivationInfo& FindActiveInfoByActivationInfoHandle(FActiationInfoHandle& ActivationHandle);

	//Empty all items
	void EmptyContainer();

	//Remove ActiveInfo in the other container
	void RemoveActiveInfo( const FTaskActivationInfoContainer& OtherContainer );

	//Remove the target index of the item
	void RemoveActiveInfoByIndex(int Index);

	//Interface to get all items
	TArray<FTaskActivationInfo>& GetItems(){return Items;}

	//Used to serialize this container for net replication
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FTaskActivationInfo, FTaskActivationInfoContainer>(Items, DeltaParms, *this);
	}

	//Give the active information one chance to check weather we should replicate this info
	template< typename Type, typename SerializerType >
	bool ShouldWriteFastArrayItem(const Type& Item, const bool bIsWritingOnClient)
	{
		// if we do not want the FGameplayAbilitySpec to replicated return false;
		if (!Item.ShouldReplicateActiveInfo())
		{
			return false;
		}

		if (bIsWritingOnClient)
		{
			return Item.ReplicationID != INDEX_NONE;
		}

		return true;
	}

private:

	/** List of information for activation */
	UPROPERTY()
	TArray<FTaskActivationInfo> Items;

	UPROPERTY()
	UTriggerTaskBase* TaskOwner;
};

bool operator==(const FTaskActivationInfo& LeftInfo, const FTaskActivationInfo& RightInfo);
bool operator!=(const FTaskActivationInfo& LeftInfo, const FTaskActivationInfo& RightInfo);