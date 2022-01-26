#include "CheckAvatarAttribute.h"
#include "AvatarData/AvatarInspectedDataBase.h"
#include "AvatarAccessRule/AvatarAccessRuleBase.h"

UCheckAvatarAttribute::UCheckAvatarAttribute(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UCheckAvatarAttribute::NativeEvaluator(bool DoLocalCheck /*= false*/)
{
	bool Result = true;

	for (auto InspectedData : InspectedDatas)
	{
		if(InspectedData == nullptr)
			continue;

		if (!InspectedData->IsDataExceedExpectation())
		{
			Result = false;
			break;
		}
	}

	return Result;
}

void UCheckAvatarAttribute::NativeInitialize(UObject* OwnerObject)
{
	Super::NativeInitialize(OwnerObject);

	for (auto Data : InspectedDatas)
	{
		if(Data == nullptr)
			continue;

		Data->Initialize(this);
	}

	if (AvatorAccessRule != nullptr)
	{
		AvatorAccessRule->Initialize(this);
	}
}

void UCheckAvatarAttribute::NativeReset()
{
	Super::NativeReset();

	for (auto Data : InspectedDatas)
	{
		if (Data == nullptr)
			continue;

		Data->Reset();
	}

	if (AvatorAccessRule != nullptr)
	{
		AvatorAccessRule->Reset();
	}
}

void UCheckAvatarAttribute::GetAvatars(TArray<UObject*>& Avatars) const
{
	Avatars.Empty();

	if (AvatorAccessRule != nullptr)
	{
		AvatorAccessRule->GetTargetAvatars(Avatars);
	}
}

void UCheckAvatarAttribute::NotifiedByDataWhenContentChanged()
{
	NotifyToEvaluate();
}