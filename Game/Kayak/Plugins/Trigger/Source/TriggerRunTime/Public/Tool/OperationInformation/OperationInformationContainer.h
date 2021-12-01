#pragma once

/*
* Author:	Liulianyou
* Time:		2021/10/15
* Purpose:	This is used to hold all the operation information which maybe replicated to client
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/NetSerialization.h"

#include "OperationInformationContainer.generated.h"

class UOperationInformationBase;
class ATriggerEventSystemInfoBase;

//The activation information for this task
USTRUCT()
struct TRIGGERRUNTIME_API FOperationInfoItem : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FOperationInfoItem(){};
	explicit FOperationInfoItem(UObject* Owner, UOperationInformationBase* OperationInfo)
		:OperationOwner(Owner), ReplicatedOperationInfo(OperationInfo)
		{}

public:
	
	/*
	* Interface function to see weather I need to replicate this information
	* You can treat this function the customize condition in the DOREPLICATETIME marco
	*/
	bool ShouldReplicateInformation() const;

	friend bool operator==(const FOperationInfoItem& LeftData, const FOperationInfoItem& RightData);
	friend bool operator!=(const FOperationInfoItem& LeftData, const FOperationInfoItem& RightData);

public:
	
	//Who initiate this operation info
	UPROPERTY()
	UObject* OperationOwner;

	UPROPERTY()
	UOperationInformationBase* ReplicatedOperationInfo;
};

bool operator==(const FOperationInfoItem& LeftData, const FOperationInfoItem& RightData);
bool operator!=(const FOperationInfoItem& LeftData, const FOperationInfoItem& RightData);

/*
* The container of the operation information which is created from TriggerOperationInfoManager
* The last element is the immediate activation information.
* This should only worked at TriggerEventSystemInfoBase
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FOperationInfoContainer : public FFastArraySerializer
{
	GENERATED_USTRUCT_BODY()

public:
	
	/*
	* Initialzie this container
	* 
	* @param ObjectOwner which object own this container, this usually is the outer class which own it as its member value.
	*/
	void Initialzie(ATriggerEventSystemInfoBase* ObjectOwner );

	//Used to serialize this container for net replication
	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms);

	TArray<FOperationInfoItem>& GetItems(){ return Items; }

	//Add new Item to replicated to client
	void AddNewItem( UObject* OperatorOwner, UOperationInformationBase* OperationInfo );

	//Remove the item to replicated
	void RemoveItem( UObject* OperatorOwner, UOperationInformationBase* OperationInfo );

	//Copy from other conatiner
	void CopyFrom(FOperationInfoContainer& OtherContainer);

	//Only work at client side after the items have changed it should update the client operation manager
	void UpdateOperationManager(){};

	void EmptyContaner();
	
	//Give the active information one chance to check weather we should replicate this info
	template< typename Type, typename SerializerType >
	bool ShouldWriteFastArrayItem(const Type& Item, const bool bIsWritingOnClient)
	{
		// if we do not want the FGameplayAbilitySpec to replicated return false;
		if (!Item.ShouldReplicateInformation())
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
		
	/** List of information for the target operation */
	UPROPERTY()
	TArray<FOperationInfoItem> Items;

	//The owner of this container it can only be set at the initialize function
	UPROPERTY(Transient)
	ATriggerEventSystemInfoBase* Owner;
};
