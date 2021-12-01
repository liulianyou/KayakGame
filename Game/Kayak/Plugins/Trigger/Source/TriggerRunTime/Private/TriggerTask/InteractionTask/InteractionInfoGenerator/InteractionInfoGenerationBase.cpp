#include "InteractionInfoGenerationBase.h"
#include "TT_Interaction.h"
#include "Net/UnrealNetwork.h"
#include "TriggerDefinition.h"
#include "TriggerBlueprintLib.h"

UInteractionGenerationBase::UInteractionGenerationBase(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

void UInteractionGenerationBase::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UInteractionGenerationBase, CurrentEffectInteractionInfo);
	DOREPLIFETIME(UInteractionGenerationBase, InteractionInfos);
}

bool UInteractionGenerationBase::GenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractStage, UTT_Interaction* Task, AActor* Actor)
{
	//As the actor is null, there should no interaction info to be generated
	if(Actor == nullptr)
		return false;

	if (GetClass()->IsFunctionImplementedInScript(TEXT("OnGenerateInteractionInfo")))
	{
		if(OnGenerateInteractionInfo(OutData, InteractStage, Task, Actor))
			return true;
	}

	int Index = FindOrAddInteractionInfo(Actor, Task, InteractStage);

	OutData.Layer = GetinteractionInfo()[Index].Layer;
	OutData.InteractStage = GetinteractionInfo()[Index].InteractStage;
	OutData.Actor = GetinteractionInfo()[Index].Actor;

	return true;
}

void UInteractionGenerationBase::Reset()
{
	InteractionInfos.Empty();

	CurrentEffectInteractionInfo = INDEX_NONE;
}

void UInteractionGenerationBase::RemoveInteraction(TArray<UObject*> interactions, FString& InteractionStage)
{
	for (auto Interaction : interactions)
	{
		for (int i = 0; i < InteractionInfos.Num(); i++)
		{
			if (InteractionInfos[i].Actor == Interaction)
			{
				InteractionInfos.RemoveAt(i);

				if (CurrentEffectInteractionInfo == i)
				{
					CurrentEffectInteractionInfo = InteractionInfos.Num();
				}

				i--;
			}
		}
	}
}

int UInteractionGenerationBase::FindOrAddInteractionInfo(AActor* Interactor, UTriggerTaskBase* Task, const FString& InteractStage)
{
	int Index = INDEX_NONE;

	FInteractionInfo* InteractionInfoPtr = InteractionInfos.FindByPredicate([&](const FInteractionInfo& Data){
		if(Data.Actor == Interactor)
			return true;
		else
			return false;
	});

	EActorLayer NewLayer = GetInteractionLayer(Interactor, Task);

	if (InteractionInfoPtr == nullptr)
	{
		FInteractionInfo Info;
		Info.Actor = Interactor;
		Info.InteractStage = InteractStage;
		Info.Layer = NewLayer;

		InteractionInfos.Add(Info);

		Index  = InteractionInfos.Num() -1;
	}
	else
	{
		InteractionInfoPtr->Layer = NewLayer;
		InteractionInfoPtr->InteractStage = InteractStage;

		Index = InteractionInfos.Find(*InteractionInfoPtr);
	}

	return Index;
}

EActorLayer UInteractionGenerationBase::GetInteractionLayer_Implementation(AActor* Actor, UTriggerTaskBase* Task)
{
	EActorLayer Result;

	if (Task != nullptr && (Task->GetInstigator() == nullptr || Task->GetInstigator() == Actor))
	{
		Result = EActorLayer::EActorLayer_Insignator;
	}
	else
	{
		Result = EActorLayer::EActorLayer_DefaultSlot;
	}

	return Result;
}

bool UInteractionGenerationBase::HasValidInteractionInfo() const
{
	if(InteractionInfos.Num() == 0)
		return false;

	if(!InteractionInfos.IsValidIndex(CurrentEffectInteractionInfo))
		return false;

	return true;
}