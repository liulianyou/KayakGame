#include "TriggerEventRewardDataBase.h"
#include "EvaluatorOperation.h"
#include "TriggerEventRewardManager.h"
#include "TriggerBlueprintLib.h"

FString UTriggerEventRewardDataBase::EmptyRewardID = TEXT("");
FString UTriggerEventRewardDataBase::InvalidRewardID = TEXT("INVALIDREWARDID");

UTriggerEventRewardDataBase::UTriggerEventRewardDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	ClearRewardID();
}

void UTriggerEventRewardDataBase::BeginDestroy()
{
	UTriggerEventRewardManager* RewardManager = UTriggerBlueprintLib::GetTriggerEventRewardManager();

	if (RewardManager != nullptr)
	{
		RewardManager->UnregisterRewardData(this);
	}

	Super::BeginDestroy();
}

void UTriggerEventRewardDataBase::Initialize(UTriggerTaskBase* Owner)
{
	Super::Initialize(Owner);

	if (RequestRewardCondition != nullptr)
	{
		RequestRewardCondition->NativeInitialize(this);

		if (!RequestRewardCondition->EvaluatorDelegate.IsAlreadyBound(this, &UTriggerEventRewardDataBase::EvaluatorRequestCondition))
		{
			RequestRewardCondition->EvaluatorDelegate.AddDynamic(this, &UTriggerEventRewardDataBase::EvaluatorRequestCondition);
		}
	}


	UTriggerEventRewardManager* RewardManager = UTriggerBlueprintLib::GetTriggerEventRewardManager();

	if (RewardManager != nullptr)
	{
		RewardManager->RegisterRewardData(this);
	}
}

void UTriggerEventRewardDataBase::EvaluatorRequestCondition(UEvaluatorBase* Evaluator, bool EvaluatorResult)
{
	if (EvaluatorResult)
	{
		RequestReward();
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

void UTriggerEventRewardDataBase::ClearRewardID_Implementation()
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
	UTriggerEventRewardManager* RewardManager = UTriggerBlueprintLib::GetTriggerEventRewardManager();

	if (RewardManager == nullptr)
		return;

	RewardManager->RequestReward(this);
}

void UTriggerEventRewardDataBase::AcceptReward_Implementation(const TArray<FRewardData>& RewardDatas)
{

}