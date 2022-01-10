#include "TriggerDefinition.h"
#include "GameOverCondition/CheckGameOverBase.h"
#include "TriggerTaskBase.h"
#include "TriggerTaskComponentBase.h"
#include "OperationInformationBase.h"

DEFINE_LOG_CATEGORY(LogTrigger);

FString FTriggerTaskComponentInformation::AnyMap = TEXT("FTriggerTaskComponentInformation::AnyMap");

FTriggerDelegate::FTriggerSavePoint						FTriggerDelegate::OnSavePoint;
FTriggerDelegate::FTriggerReset							FTriggerDelegate::OnReset;
FTriggerDelegate::FInteraction							FTriggerDelegate::InteractionEvet;
FTriggerDelegate::FNewAICreated							FTriggerDelegate::AICreateEvent;
FTriggerDelegate::FRespawnFinishEvent					FTriggerDelegate::RespawnFinishEvent;
FTriggerDelegate::FRespawnCharacterTransformChange		FTriggerDelegate::RespawnCharacterTransformChange;
FTriggerDelegate::FInteractionValueChanged				FTriggerDelegate::InteractionValueChanged;
FTriggerDelegate::FInteractionEndNativeDelegate			FTriggerDelegate::InteractionEndNativeDelegate;
FTriggerDelegate::FGameOverNativeDelegate				FTriggerDelegate::GameOverNativeDelegate;
FTriggerDelegate::FTriggerTaskStateNativeEvent			FTriggerDelegate::TriggerTaskStateNativeEvent;
FTriggerDelegate::FNewCheckPointActivatedNativeEvent	FTriggerDelegate::NewCheckPointActivatedNativeEvent;
FTriggerDelegate::FEvaluatorNativeEvent					FTriggerDelegate::EvaluatorNativeEvent;

FTriggerNeededDelegate::FreExistCurrentMapNativeEvent	FTriggerNeededDelegate::ExitCurrentMapNativeEvent;
FTriggerNeededDelegate::FDisconnectNativeEvent			FTriggerNeededDelegate::DisconnectNativeEvent;
FTriggerNeededDelegate::FGameFailedEvent				FTriggerNeededDelegate::GameFailedEvent;

FTriggerTaskRuntimeInfo::FTriggerTaskRuntimeInfo(const UTriggerTaskComponentBase* SenderComponent, const UTriggerTaskBase* SenderTask, const UTriggerTaskComponentBase* TargetComponent, const UTriggerTaskBase* TargetTask, const UOperationInformationBase* ToggleInfo)
{
	const UTriggerTaskComponentBase* LocalSenderComponent = SenderComponent;
	SendMapAssetPath = LocalSenderComponent == nullptr ? TEXT("") :LocalSenderComponent->GetTypedOuter<ULevel>()->GetOutermost()->GetName();
	SendComponentMap = LocalSenderComponent == nullptr ? TEXT("") : LocalSenderComponent->GetTypedOuter<ULevel>()->GetOuter()->GetName();
	SendComponentID = LocalSenderComponent == nullptr ? FGuid() : LocalSenderComponent->GetComponentID();
	SendTaskID = SenderTask == nullptr ? FGuid() : SenderTask->GetCopyID(); 

	const UTriggerTaskComponentBase* LocalTargetComponent = TargetComponent;
	TargetMapAssetPath = LocalTargetComponent == nullptr ? TEXT("") : LocalTargetComponent->GetTypedOuter<ULevel>()->GetOutermost()->GetName();
	TargetComponentMap = LocalTargetComponent == nullptr ? TEXT("") : LocalTargetComponent->GetTypedOuter<ULevel>()->GetOuter()->GetName();
	TargetComponentID = LocalTargetComponent == nullptr ? FGuid() : LocalTargetComponent->GetComponentID();
	TargetTaskID = TargetTask == nullptr ? FGuid() : TargetTask->GetCopyID(); 

	World = LocalTargetComponent != nullptr ? LocalTargetComponent->GetWorld() :
		SenderTask != nullptr ? SenderTask->GetWorld() :
		TargetComponent != nullptr ? TargetComponent->GetWorld() :
		TargetTask != nullptr ? TargetTask->GetWorld() : nullptr;

	ToggleInformation = const_cast<UOperationInformationBase*>(ToggleInfo);
}


void FTriggerTaskComponentInformation::Invaidate()
{
	ComponentIDs.Empty();
	MapName.Empty();
}

bool FTriggerTaskComponentInformation::IsValid() const
{
	return !MapName.IsEmpty();
}


void FGameOverInfo::GetALLGameOverPlayers(TArray<APlayerController*>& Players)
{
	Players.Empty();

	for (int i = 0; i < GameOverCondtions.Num(); i++)
	{
		UCheckGameOverBase* GameOverBase = Cast<UCheckGameOverBase>(GameOverCondtions[i]);
		if (GameOverBase)
		{
			TArray<APlayerController*> PlayerControllers = GameOverBase->GetGameOverPlayers();

			for (int PCIndex = 0; PCIndex < PlayerControllers.Num(); PCIndex++)
			{
				Players.AddUnique(PlayerControllers[PCIndex]);
			}
		}
	}
}

void FGameOverInfo::Clear()
{
	URL.Empty();

	for (int i = 0; i < GameOverCondtions.Num(); i++)
	{
		if(GameOverCondtions[i] == nullptr)
			continue;

		GameOverCondtions[i]->MarkPendingKill();
	}

	GameOverCondtions.Empty();
}

FAISpawnBehaviorCommand::FAISpawnBehaviorCommand()
{
	bSetAllPlayerToAIThreat = false;
	TargetPosition = FVector::ZeroVector;
	SpawnMontages.Empty();
}

FAISpawnBehaviorCommand::~FAISpawnBehaviorCommand()
{
	bSetAllPlayerToAIThreat = false;
	TargetPosition = FVector::ZeroVector;
	SpawnMontages.Empty();
}