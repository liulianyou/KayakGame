#include "TriggerDescriptor/TriggerDescriptorBase.h"

UTriggerDescriptorBase::UTriggerDescriptorBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

FString UTriggerDescriptorBase::GetAlias_Implementation()
{
	return FString(TEXT(""));
}

FString UTriggerDescriptorBase::GetDescription_Implementation()
{
	return FString(TEXT(""));
}


