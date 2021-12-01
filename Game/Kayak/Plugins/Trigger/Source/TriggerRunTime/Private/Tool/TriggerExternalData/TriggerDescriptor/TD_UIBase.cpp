#include "TriggerDescriptor/TD_UIBase.h"

UTD_UIBase::UTD_UIBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

FString UTD_UIBase::GetAlias_Implementation()
{
	return Alias;
}

FString UTD_UIBase::GetDescription_Implementation()
{
	return Description;
}