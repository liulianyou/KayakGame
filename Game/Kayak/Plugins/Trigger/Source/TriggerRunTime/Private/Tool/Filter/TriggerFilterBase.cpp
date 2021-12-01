#include "TriggerFilterBase.h"

UTriggerFilterBase::UTriggerFilterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UTriggerFilterBase::BP_Pass_Implementation() const
{
	return NativePass();
}

bool UTriggerFilterBase::NativePass() const
{
	return true;
}

void UTriggerFilterBase::BP_Reset_Implementation()
{
	return NativeReset();
}

void UTriggerFilterBase::NativeReset()
{
	SetFilterData(nullptr);
}

UObject* UTriggerFilterBase::GetUObjectData() const
{
	return reinterpret_cast<UObject*>(Data);
}

