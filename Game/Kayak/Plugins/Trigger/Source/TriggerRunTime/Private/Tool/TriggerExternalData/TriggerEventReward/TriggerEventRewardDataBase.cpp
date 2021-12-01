#include "TriggerEventRewardDataBase.h"
#include "EvaluatorOperation.h"
#include "Engine/World.h"
#include "TimerManager.h"

FString UTriggerEventRewardDataBase::EmptyRewardID = TEXT("");
FString UTriggerEventRewardDataBase::InvalidRewardID = TEXT("INVALIDREWARDID");

UTriggerEventRewardDataBase::UTriggerEventRewardDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UTriggerEventRewardDataBase::Initialize(UTriggerTaskBase* Owner)
{
	Super::Initialize(Owner);

	if (RequestRewardCondition != nullptr)
	{
		RequestRewardCondition->NativeInitialize(this);

		if (GetWorld())
		{
			GetWorld()->GetTimerManager().SetTimer(TimeHandle,this, &UTriggerEventRewardDataBase::EvaluatorRequestCondition, 0.033, true);
		}
	}
}

void UTriggerEventRewardDataBase::EvaluatorRequestCondition()
{
	if (RequestRewardCondition != nullptr && RequestRewardCondition->Evaluator())
	{
		RequestReward();

		GetWorld()->GetTimerManager().ClearTimer(TimeHandle);
	}
}

void UTriggerEventRewardDataBase::Reset(UOperationInformationBase* ResetOperationInfo)
{
	Super::Reset(ResetOperationInfo);
}

FString UTriggerEventRewardDataBase::GetRewardID_Implementation() const
{
	return TEXT("");
}

void UTriggerEventRewardDataBase::SetRewardID_Implementation(const FString& NewID)
{
	
}

bool UTriggerEventRewardDataBase::IsLarger_Implementation(const FString& ID) const
{
	return false;
}

FString UTriggerEventRewardDataBase::GenerateNextID_Implementation(const FString& ID) const
{
	return TEXT("");
}

FString UTriggerEventRewardDataBase::GetRewardIDFromStrings_Implementation(const TArray<FString>& Strings) const
{
	return TEXT("");
}

bool UTriggerEventRewardDataBase::IsValidRewardID_Implementation(const FString& ID) const
{
	return false;
}

void UTriggerEventRewardDataBase::RequestReward_Implementation()
{

}

void UTriggerEventRewardDataBase::AcceptReward_Implementation(const TArray<FRewardData>& RewardDatas)
{

}