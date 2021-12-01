#include "InteractionRuleBase.h"
#include "TT_Interaction.h"
#include "TriggerDefinition.h"
#include "ContributeRuleBase.h"
#include "InteractionEffectBase.h"
#include "Engine/ActorChannel.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"

#include "TriggerNetPlayerSupportComponent.h"
#include "TriggerBlueprintLib.h"
#include "CancleContribution.h"
#include "AddContribution.h"
#include "TriggerToolFactory.h"
#include "Serialize/UE4ConfigSerialize.h"

UInteractionRuleBase::UInteractionRuleBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer),
	InteractionTask(nullptr)
{

}

void UInteractionRuleBase::PostInitProperties()
{
	Super::PostInitProperties();
}

void UInteractionRuleBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UInteractionRuleBase::Initialize(UTriggerTaskBase* Task)
{
	SetOwnerTask(Cast<UTT_Interaction>(Task));
}

bool UInteractionRuleBase::CanAddNewContributor_Implementation(UContributeRuleBase* Contributor)
{
	return true;
}

void UInteractionRuleBase::AddContributor(UContributeRuleBase* Contributor)
{
	if (InteractionTask == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("Add new contribute to interaction rule while its Interaction Task is null!!"));

		return;
	}

	AActor* OwnerActor = InteractionTask->TryToGetOwnerActor();

	AddContributeInternal(Contributor);

	//If this contributor do not exist in the data means this contributor have been removed when it is added in the AddContributeInternal
	bool Exist = false;
	for (int i = 0; i < GetActualInteractionRuleData().Num(); i++)
	{
		if (GetActualInteractionRuleData()[i].Actor == Contributor->Contributor)
		{
			Exist = true;
		}
	}
	if(!Exist)
		return;

	//Notify client to add new contributor
	if(OwnerActor != nullptr && (OwnerActor->GetNetMode() != ENetMode::NM_Client && OwnerActor->GetNetMode() != ENetMode::NM_Standalone))
	{
		/*
		* I don't use multi cast as it will use a lot net budget if there are a lot clients
		*/
		if (CanCooperate)
		{
			TArray<AActor*> ContributorActors;
			ContributorActors.Empty();

			for (int i = 0; i < Contributors.Num(); i++)
			{
				ContributorActors.AddUnique(Contributors[i]->Contributor);
			}

			for (int i = 0; i < ContributorActors.Num(); i++)
			{
				NotifyClientToAddNewContribute(ContributorActors[i], Contributor);
			}
		}
		else
		{
			NotifyClientToAddNewContribute(Contributor->Contributor, Contributor);
		}
	}
}


void UInteractionRuleBase::NotifyClientToAddNewContribute(AActor* TargetClientActor, UContributeRuleBase* Contributor)
{
	UTriggerNetPlayerSupportComponent* NetSupport = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(TargetClientActor);

	if (NetSupport == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The target contributor is not contain UTriggerNetPlayerSupportComponent which will cause the client cann't add new contribute!! "));
		return;
	}

	Contributor->AddContributeToRemote(NetSupport, InteractionTask);
}

void UInteractionRuleBase::AddContributeInternal(UContributeRuleBase* Contributor)
{
	PreProcessWhenAdded(Contributor);

	if (Contributor == nullptr)
	{
		return;
	}

	if (Contributor->CanExecutedWhenAdded)
	{
		if (GetWorld() != nullptr)
		{
			if (Contributor->Execute(GetWorld()->GetDeltaSeconds()))
			{
				if (CanBeAddedContributorHidtory(Contributor))
				{
					ContributionHistory.Add(Contributor);
				}

				ApplayContributeExecutonResult(Contributor, GetWorld()->GetDeltaSeconds());
			}
		}
	}

	if (CanBeAddedContributors(Contributor))
	{
		Contributors.Add(Contributor);
	}

	CheckConditions();
}

void UInteractionRuleBase::PreProcessWhenAdded(UContributeRuleBase*& Contributor)
{
	//In cancel contributor I need to check weather we should remove all before contributors
	UCancleContribution* CancleContributor = Cast<UCancleContribution>(Contributor);

	if (CancleContributor != nullptr)
	{
		int RemoveCount = 0;

		if (CanCooperate)
		{
			RemoveCount = ContributionHistory.Num();
		}
		else
		{
			
			for (int i = 0; i < ContributionHistory.Num(); i++)
			{
				if (ContributionHistory[i]->Contributor == Contributor->Contributor)
				{
					RemoveCount++;
				}
			}
		}

		if (CancleContributor->RemoveLastContributionCount < 0
			|| CancleContributor->RemoveLastContributionCount > ContributionHistory.Num())
		{
			CancleContributor->SetActualRemoveCount(RemoveCount);
		}
		else
		{
			CancleContributor->SetActualRemoveCount(CancleContributor->RemoveLastContributionCount);
		}
	}

	OnPreProcessWhenAdded(Contributor);
}


bool UInteractionRuleBase::CanBeAddedContributors(UContributeRuleBase* Contributor)
{
	bool Result = false;
	UCancleContribution* CancleContributor = Cast<UCancleContribution>(Contributor);

	//Disallow cancel contributor to add to Contributors
	if (CancleContributor != nullptr)
	{
		Result = false;
	}
	else
	{
		Result = true;
	}

	OnCanBeAddedToContributors( Result, Contributor);

	return Result;
}

bool UInteractionRuleBase::CanBeAddedContributorHidtory(UContributeRuleBase* Contributor)
{
	bool Result = false;
	UCancleContribution* CancleContributor = Cast<UCancleContribution>(Contributor);

	//Disallow cancel contributor to add to ContributorHidtory
	if (CancleContributor != nullptr)
	{
		Result = false;
	}
	else
	{
		Result = true;
	}

	OnCanBeAddedToContributorHidtory(Result, Contributor);

	return Result;
}

int UInteractionRuleBase::RemoveContributor(UContributeRuleBase* Contributor, int& RemovedHistroyContributorCount, bool RemoveContributedEffort)
{
	int RemoveCount = Contributors.Remove(Contributor);

	RemovedHistroyContributorCount = ContributionHistory.Remove(Contributor);

	return RemoveCount;
}

void UInteractionRuleBase::RemoveContributorsBelongToTargetCausers(const TArray<UObject*>& Causers, bool RemoveContributedEffort)
{
	for (int i = 0; i < Contributors.Num(); i++)
	{
		for (int j = 0; j < Causers.Num(); j++)
		{
			if (Contributors[i]->Contributor == Causers[j])
			{
				int RemoveHistoryCount = 0;
				int RemoveContributorCount = 0;
				RemoveContributorCount = RemoveContributor(Contributors[i], RemoveHistoryCount, RemoveContributedEffort);
				i -= RemoveContributorCount;
				break;
			}
		}
	}
}

void UInteractionRuleBase::Reset(UObject* Causer)
{
	Contributors.Empty();
	ContributionHistory.Empty();
	InteractionData->Reset();

	for (int i = 0; i < ActualInteractionDataMap.Num(); i++)
	{
		if (ActualInteractionDataMap[i].Actor == Causer || Causer == nullptr)
		{
			if (ActualInteractionDataMap[i].Data != nullptr)
			{
				ActualInteractionDataMap[i].Data->Reset();

				//Remove this data map
				ActualInteractionDataMap.RemoveAt(i--);
			}
		}
	}
}

bool UInteractionRuleBase::IsMeetAllCondition(AActor* Causer)
{
	return false;
}

void UInteractionRuleBase::NotifyOwnerSuccess( AActor* Causer )
{
	if (InteractionTask == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The Interaction task is null when we try to notify it success info, Please check the code!!!"));
		return;
	}

	TArray<UObject*> Causers;

	Causers.Add(Causer);

	InteractionTask->EndInteraction(Causers, EInteractionEndType::EInteractionEndType_Success, true);
}

void UInteractionRuleBase::SetOwnerTask(UTT_Interaction* Owner)
{
	InteractionTask = Owner;
}

UTT_Interaction* UInteractionRuleBase::GetOwnerTask()
{
	return InteractionTask;
}

bool UInteractionRuleBase::CanTickContributor(UContributeRuleBase* Contributor)
{
	if (!Contributor->CanEverTick && Contributor->CanExecutedWhenAdded)
	{
		//This contributor have executed
		return false;
	}

	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnCanTickContributor")))
	{
		return OnCanTickContributor();
	}

	return true;
}

void UInteractionRuleBase::Tick(float DeltaTime)
{
	for (auto Contributor : Contributors)
	{
		if (Contributor == nullptr)
			continue;

		if (!CanTickContributor(Contributor))
		{
			continue;
		}



		if (Contributor->Execute(DeltaTime))
		{
			Contributor->OnExecute(DeltaTime);

			if (CanBeAddedContributorHidtory(Contributor))
			{
				ContributionHistory.Add(Contributor);
			}
			
			ApplayContributeExecutonResult(Contributor, DeltaTime);
		}
	}

	CheckConditions();
}

void UInteractionRuleBase::CheckConditions()
{
	//As the NotifyOwerSuccess maybe remove the map data so I need to process the copy data to avoid crash
	TArray<FInteractionDataMap> CopyMapData;
	CopyMapData.Append(GetActualInteractionRuleData());

	for (int i = 0; i < CopyMapData.Num(); i++)
	{
		if (IsMeetAllCondition(CopyMapData[i].Actor))
		{
			NotifyOwnerSuccess(CopyMapData[i].Actor);

			TArray<UObject*> Causers;

			Causers.Add(CopyMapData[i].Actor);

			RemoveContributorsBelongToTargetCausers(Causers, true);
		}
	}
}

UInteractionRuleDataBase* UInteractionRuleBase::GetInteractionRuleData( AActor* Causer, const FString& SerializedData)
{
	FUE4ConfigSerialize* Serialize = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FUE4ConfigSerialize>();

	UObject* Object = static_cast<UObject*>(GetInteractionRuleData(Causer));
	((FSerializeToolBase*)(Serialize))->FromString<UInteractionRuleDataBase>(Object, SerializedData );

	return GetInteractionRuleData(Causer);
}

void UInteractionRuleBase::ApplayContributeExecutonResult(UContributeRuleBase* Contributor, float DeltaTime)
{
	OnApplayContributeExecutonResult(Contributor, DeltaTime);

	NotifyInteractionEffect(Contributor->Contributor);
}

void UInteractionRuleBase::NotifyInteractionEffect(AActor* Causer)
{
	if (GetOwnerTask() == nullptr)
		return;

	FUE4ConfigSerialize* Serialize = FTriggerFactoryManager::GetTriggerFactory()->FindOrCreateToolFactory<FUE4ConfigSerialize>();

	GetOwnerTask()->InteractionRuleDataChanged(Causer, Serialize->ToString(GetInteractionRuleData(Causer)));

	FTriggerDelegate::InteractionValueChanged.Broadcast(Causer, GetInteractionRuleData(Causer));
}

UInteractionRuleDataBase* UInteractionRuleBase::GetInteractionRuleData(AActor* Causer)
{
	UInteractionRuleDataBase* Result = nullptr;

	for (int i = 0; i < ActualInteractionDataMap.Num(); i++)
	{
		if (ActualInteractionDataMap[i].Actor == Causer)
		{
			Result = ActualInteractionDataMap[i].Data;
			break;
		}
	}

	if (Result == nullptr)
	{
		FInteractionDataMap Data;

		Data.Actor = Causer;

		Data.Data = NewObject<UInteractionRuleDataBase>(this, InteractionData->GetClass(), NAME_None, RF_NoFlags, InteractionData);

		ActualInteractionDataMap.Add(Data);

		Result = Data.Data;
	}

	return Result;
}
