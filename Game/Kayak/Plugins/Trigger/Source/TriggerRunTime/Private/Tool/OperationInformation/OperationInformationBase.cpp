#include "OperationInformationBase.h"
#include "TriggerStyleBase.h"
#include "TriggerBlueprintLib.h"
#include "OperationInformationManager.h"

bool operator==(const FOperationScope& LeftData, const FOperationScope& RightData)
{
	if (LeftData.Causer == RightData.Causer &&
		LeftData.OperationStyle == RightData.OperationStyle &&
		LeftData.Target == RightData.Target)
		return true;
	else
		return false;
}


UOperationInformationBase::UOperationInformationBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UOperationInformationBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UOperationInformationBase, Operations);
}

bool UOperationInformationBase::ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags)
{
	return false;
}

bool UOperationInformationBase::ShouldReplicateInformation_Implementation(UObject* OperatorOwner) const
{
	return IsSupportedForNetworking();
}

int UOperationInformationBase::AddNewOperation(UObject* Causer, UTriggerStyleBase* OperationStyle, UObject* Target)
{
	//IF the new input value is invalid just skip add action
	if(Causer == nullptr && OperationStyle == nullptr && Target == nullptr)
		return INDEX_NONE;

	//First try to use the BP to determine weather this scope can be added 
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnCanAddNewOpertion")))
	{
		if (!OnCanAddNewOpertion(Causer, OperationStyle, Target))
			return INDEX_NONE;
	}

	FOperationScope Scope(Causer, OperationStyle, Target);

	return Operations.Add(Scope);
}

void UOperationInformationBase::RemoveOperation(UObject* Causer /*= nullptr*/, UTriggerStyleBase* OperationStyle /*= nullptr*/, UObject* Target /*= nullptr*/)
{
	//First try to use the BP to determine weather this scope can be removed
	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnCanRemoveOperation")))
	{
		if (!OnCanAddNewOpertion(Causer, OperationStyle, Target))
			return;
	}

	TArray<FOperationScope> LocalOpertions;
	FindOperationScope(LocalOpertions, Causer, OperationStyle, Target);

	for (int i = 0; i < LocalOpertions.Num(); i++)
	{
		Operations.Remove(LocalOpertions[i]);
	}
}



void UOperationInformationBase::FindOperationScope(TArray<FOperationScope>& OuterScopes, UObject* Causer /*= nullptr*/, UTriggerStyleBase* OperationStyle /*= nullptr*/, UObject* Target /*= nullptr*/) const
{
	OuterScopes.Empty();

	enum class MatchedRule : uint8
	{
		Empty = 0,
		Causer = 1 << 0,
		OperationStyle = 1 << 1,
		Target = 1 << 2,
		Matched = Causer | OperationStyle | Target
	};

	for (int i = 0; i < Operations.Num(); i++)
	{
		int MatchedResult = 0;

		if (Operations[i].Causer == Causer || Causer == nullptr)
			MatchedResult |= uint8(MatchedRule::Causer);

		if (Operations[i].OperationStyle == OperationStyle || OperationStyle == nullptr)
			MatchedResult |= uint8(MatchedRule::OperationStyle);

		if (Operations[i].Target == Target || Target == nullptr)
			MatchedResult |= uint8(MatchedRule::Target);

		if (MatchedResult == uint8(MatchedRule::Matched))
		{
			OuterScopes.Add(Operations[i]);
		}
	}
}

UOperationInformationBase* UOperationInformationBase::CreateNewOperationInfo(TSubclassOf<UOperationInformationBase> OperationClass, UObject* Owner, UObject* Causer /*= nullptr*/, UObject* Target /*= nullptr*/, UTriggerStyleBase* Style /*= nullptr*/)
{
	UOperationInformationBase* Result = Cast<UOperationInformationBase>(UTriggerBlueprintLib::GetOperationInfoManager()->AddNewOperationByClass(Owner, OperationClass).Operation);

	if(Result == nullptr)
		return Result;

	Result->AddNewOperation(Causer, Style, Target);

	return Result;
}