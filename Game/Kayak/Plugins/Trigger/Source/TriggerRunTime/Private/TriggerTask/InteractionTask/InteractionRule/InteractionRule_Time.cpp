#include "InteractionRule_Time.h"
#include "ContributeRuleBase.h"
#include "CancleContribution.h"
#include "AddContribution.h"
#include "GameFramework/Actor.h"
#include "InteractionRuleData/InteractionRuleData_Number.h"
#include "Net/UnrealNetwork.h"

UInteractionRule_Time::UInteractionRule_Time(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	BaseChangeValue(-1.0f)
{
	InteractionData = CreateDefaultSubobject<UInteractionRuleData_Number>("InteractionRuleData_Time");
}

float UInteractionRule_Time::GetConsumedTime(AActor* Causer )
{
	if (GetInteractionRuleData(Causer) != nullptr)
	{
		UInteractionRuleData_Number* Data = Cast<UInteractionRuleData_Number>(GetInteractionRuleData(Causer));

		if (Data != nullptr)
			return Data->GetCurrentValue();
	}

	return -1.f;
}

void UInteractionRule_Time::SetConsumedTime(AActor* Causer, float Value )
{
	if (GetInteractionRuleData(Causer) != nullptr)
	{
		UInteractionRuleData_Number* Data = Cast<UInteractionRuleData_Number>(GetInteractionRuleData(Causer));

		if (Data != nullptr)
		{
			Data->SetCurrentValue(Value);
		}
	}
}

float UInteractionRule_Time::GetMaxTime()
{
	if (InteractionData != nullptr)
	{
		UInteractionRuleData_Number* Data = Cast<UInteractionRuleData_Number>(InteractionData);

		if (Data != nullptr)
		{
			return Data->MaxValue;
		}
	}
	return -1.0f;
}


bool UInteractionRule_Time::IsMeetAllCondition(AActor* Causer)
{
	if (GetConsumedTime(Causer) >= GetMaxTime())
		return true;
	else
		return false;
}

void UInteractionRule_Time::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}


void UInteractionRule_Time::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

bool UInteractionRule_Time::CanAddNewContributor_Implementation(UContributeRuleBase* Contributor)
{
	bool Result = true;

	//If this contributor have been in this rule
	if (GetInteractionRuleData(Contributor->Contributor) != nullptr)
	{
		UInteractionRuleDataBase* Data = GetInteractionRuleData(Contributor->Contributor);

		if (Data != nullptr)
		{
			//If this data is processing 
			if (Data->IsProcessing())
			{
				//This interaction is using to counter the interaction time
				if (UseDeltaTimeAsBaseValue)
				{
					//The outer will make contributor once and tell the interaction rule to tick 
					if (Contributor->CanEverTick)
					{
						Result = false;
					}
					//Maybe the outer want to add new contributor at its tick function
					else
					{
						Result = true;
					}
				}
				//This rule is used to store interaction counter
				else
				{
					//The outer will make contributor once and tell the interaction rule to tick, and this interaction counter will increased automatically
					if (Contributor->CanEverTick)
					{
						Result = true;
					}
					//Maybe the outer want to add new contributor at its tick function
					else
					{
						Result = true;
					}
				}
			}
		}
	}

	return Result;
}

bool UInteractionRule_Time::CanTickContributor(UContributeRuleBase* Contributor)
{
	if(!Super::CanTickContributor(Contributor))
		return false;

	/*
	* Should ignore the CanEverTick value in the contributor, 
	* as the original design is want to interact successfully after making several contributors. 
	*/
	if(!UseDeltaTimeAsBaseValue && Contributor->CanEverTick)
		return false;

	return true;
}

void UInteractionRule_Time::PreProcessWhenAdded(UContributeRuleBase*& Contributor)
{
	Super::PreProcessWhenAdded(Contributor);

	if(Contributor == nullptr)
		return;

	bool ShouldSkip = false;
	for (int i = 0; i < Contributors.Num(); i++)
	{
		if (Contributors[i]->GetClass() == Contributor->GetClass() &&
			Contributors[i]->Contributor == Contributor->Contributor)
		{
			ShouldSkip = true;
			break;
		}
	}

	if (ShouldSkip)
	{
		Contributor = nullptr;
	}
}

int UInteractionRule_Time::RemoveContributor(UContributeRuleBase* Contributor, int& RemovedHistroyContributorCount, bool RemoveContributedEffort)
{
	if (RemoveContributedEffort)
	{
		UCancleContribution* CancleContribution = NewObject<UCancleContribution>( GetTransientPackage(), UCancleContribution::StaticClass());
		CancleContribution->RemoveLastContributionCount = -1;
		CancleContribution->Contributor = Contributor->Contributor;
		CancleContribution->CanExecutedWhenAdded = true;
		AddContributor(CancleContribution);
	}

	return Super::RemoveContributor(Contributor, RemovedHistroyContributorCount, RemoveContributedEffort);
}

void UInteractionRule_Time::ApplayContributeExecutonResult(UContributeRuleBase* Contributor, float DeltaTime)
{
	if (Contributor == nullptr)
		return;

	ProcessCancelContributor(Cast<UCancleContribution>(Contributor));

	ProcessAddContributor(Cast<UAddContribution>(Contributor), DeltaTime);

	Super::ApplayContributeExecutonResult(Contributor, DeltaTime);
}

void UInteractionRule_Time::ProcessAddContributor(UAddContribution* Contributor, float DeltaTime)
{
	if (Contributor == nullptr)
		return;

	float DeltaChangeValue = ValueChangeRule(Contributor, DeltaTime);

	ValueChangedChain.Add(DeltaChangeValue);

	SetConsumedTime(Contributor->Contributor, GetConsumedTime(Contributor->Contributor) + DeltaChangeValue);
}

void UInteractionRule_Time::ProcessCancelContributor(UCancleContribution* Contributor)
{
	if (Contributor == nullptr)
		return;

	if(ContributionHistory.Num() == 0)
		return;
	
	int LoopCount = ContributionHistory.Num() - Contributor->GetActualRemoveCount();

	for (int i = ContributionHistory.Num() - 1; i >= LoopCount; i--)
	{
		if(ContributionHistory[i] == nullptr || ContributionHistory[i] == Contributor)
			continue;

		if (ContributionHistory[i]->Contributor == Contributor->Contributor)
		{
			SetConsumedTime(Contributor->Contributor, GetConsumedTime(Contributor->Contributor) - ValueChangedChain[i]);

			ValueChangedChain.RemoveAt(i);
			ContributionHistory.RemoveAt(i);
		}
	}

	for (int i = 0; i < Contributors.Num(); i++)
	{
		bool Found = false;
		for (int j = 0; j < ContributionHistory.Num(); j++)
		{
			if (Contributors.Find(ContributionHistory[j]) != INDEX_NONE)
			{
				Found = true;
				break;
			}
		}

		if (!Found)
		{
			Contributors.RemoveAt(i--);
		}
	}

	ContributionHistory.Shrink();
	ValueChangedChain.Shrink();
}

float UInteractionRule_Time::ValueChangeRule(UContributeRuleBase* Constructor, float DeltaTime)
{
	float Result = 1.0f;

	if (UseDeltaTimeAsBaseValue)
	{
		Result = DeltaTime;
	}

	if (Constructor->Contributor == nullptr)
		return Result * BaseChangeValue;

	float* Value = AffectRatio.Find((Constructor->Contributor->GetClass()));

	if (Value == nullptr)
	{
		Result *= BaseChangeValue;
	}
	else
	{
		Result *= *Value;
	}

	return Result;

}
