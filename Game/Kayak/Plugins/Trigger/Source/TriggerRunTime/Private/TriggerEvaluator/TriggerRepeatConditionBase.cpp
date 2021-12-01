#include "TriggerRepeatConditionBase.h"
#include "TriggerRepeatStyleBase.h"

UTriggerTaskRepeatCondtionBase::UTriggerTaskRepeatCondtionBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UTriggerTaskRepeatCondtionBase::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);
}

int UTriggerTaskRepeatCondtionBase::GetRepeatCount_Implementation()
{
	return -1;
}

bool UTriggerTaskRepeatCondtionBase::TryToRepeat_Implementation( UObject* Object )
{
	return false;
}

