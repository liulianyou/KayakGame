#include "ReplicateType/ReplicateTypeBase.h"

UReplicateTypeBase::UReplicateTypeBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}


void UReplicateTypeBase::InitializeByTriggerTask(UObject* Object)
{
	ObjectOwner = Object;

	BP_InitilalizeByTriggerTask(Object);
}

bool UReplicateTypeBase::CanReplicate_Implementation()
{
	return false;
}
