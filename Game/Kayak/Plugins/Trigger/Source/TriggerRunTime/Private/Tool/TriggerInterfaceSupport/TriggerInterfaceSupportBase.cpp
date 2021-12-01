#include "TriggerInterfaceSupportBase.h"

UTriggerInterfaceSupportBase::UTriggerInterfaceSupportBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}


void UTriggerInterfaceSupportBase::Initialize(UObject* ObjectOwner)
{
	Owner = ObjectOwner;
}

bool UTriggerInterfaceSupportBase::GetUniqueRuntimeID(int& OutId) const
{
	OutId = GetUniqueID();

	return true;
}
