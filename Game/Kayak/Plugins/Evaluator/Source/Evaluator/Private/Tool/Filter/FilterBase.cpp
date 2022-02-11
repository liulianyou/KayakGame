#include "FilterBase.h"

UFilterBase::UFilterBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UFilterBase::BP_Pass_Implementation() const
{
	return NativePass();
}

bool UFilterBase::NativePass() const
{
	return true;
}

void UFilterBase::BP_Reset_Implementation()
{
	return NativeReset();
}

void UFilterBase::NativeReset()
{
	SetFilterData(nullptr);
}

UObject* UFilterBase::GetUObjectData() const
{
	return reinterpret_cast<UObject*>(Data);
}

