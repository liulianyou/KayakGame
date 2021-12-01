#include "OperationInformationContainer.h"
#include "OperationInformationBase.h"
#include "TriggerBlueprintLib.h"
#include "TriggerEventSystemInfoBase.h"

bool FOperationInfoItem::ShouldReplicateInformation() const
{
	if (ReplicatedOperationInfo != nullptr)
	{
		return ReplicatedOperationInfo->ShouldReplicateInformation(OperationOwner);
	}
	else
	{
		return false;
	}
}

bool operator==(const FOperationInfoItem& LeftData, const FOperationInfoItem& RightData)
{
	if(LeftData.OperationOwner == RightData.OperationOwner && LeftData.ReplicatedOperationInfo == RightData.ReplicatedOperationInfo)
		return true;
	else
		return false;
}

bool operator!=(const FOperationInfoItem& LeftData, const FOperationInfoItem& RightData)
{
	return !operator==(LeftData, RightData);
}

void FOperationInfoContainer::Initialzie(ATriggerEventSystemInfoBase* ObjectOwner)
{
	Owner = ObjectOwner;
}

void FOperationInfoContainer::AddNewItem(UObject* OperatorOwner, UOperationInformationBase* OperationInfo)
{
	if(OperatorOwner == nullptr || OperationInfo == nullptr || Owner == nullptr)
		return;

	//Only add to the same world
	if(OperatorOwner->GetWorld() != Owner->GetWorld())
		return;

	Items.Add(FOperationInfoItem(OperatorOwner, OperationInfo));
}

void FOperationInfoContainer::RemoveItem(UObject* OperatorOwner, UOperationInformationBase* OperationInfo)
{
	if (OperatorOwner == nullptr || OperationInfo == nullptr || Owner == nullptr)
		return;

	//Only add to the same world
	if (OperatorOwner->GetWorld() != Owner->GetWorld())
		return;

	FOperationInfoItem NewItem(OperatorOwner, OperationInfo);

	for (int i = 0; i < Items.Num(); i++)
	{
		if (Items[i] == NewItem)
		{
			Items.RemoveAt(i--);
		}
	}
}

void FOperationInfoContainer::CopyFrom(FOperationInfoContainer& OtherContainer)
{
	Items.Append(OtherContainer.GetItems());
}

void FOperationInfoContainer::EmptyContaner()
{
	Items.Empty();
}

bool FOperationInfoContainer::NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
{
	return FFastArraySerializer::FastArrayDeltaSerialize<FOperationInfoItem, FOperationInfoContainer>(Items, DeltaParms, *this);
}
