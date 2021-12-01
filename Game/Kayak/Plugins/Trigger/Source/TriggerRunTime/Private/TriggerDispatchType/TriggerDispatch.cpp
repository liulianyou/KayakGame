#include "TriggerDispatchType/TriggerDispatchBase.h"

UTriggerDispatchBase::UTriggerDispatchBase(const FObjectInitializer& ObjectInitialize) :
	Super(ObjectInitialize)
{

}

bool UTriggerDispatchBase::Dispatch_Implementation()
{
	return true;
}