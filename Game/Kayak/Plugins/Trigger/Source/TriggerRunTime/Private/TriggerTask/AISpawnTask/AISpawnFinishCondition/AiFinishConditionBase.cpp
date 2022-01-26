#include "AIFinishConditionBase.h"

UAIFinisheConditionBase::UAIFinisheConditionBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UAIFinisheConditionBase::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);
}

void UAIFinisheConditionBase::NativeReset()
{
	Super::NativeReset();
}

bool UAIFinisheConditionBase::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	return false;
}