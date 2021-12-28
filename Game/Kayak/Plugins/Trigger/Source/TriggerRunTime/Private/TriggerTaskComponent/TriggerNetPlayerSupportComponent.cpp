#include "TriggerTaskComponent/TriggerNetPlayerSupportComponent.h"
#include "InteractionTask/TT_Interaction.h"
#include "GameOverCondition/CheckGameOver_BlueprintInvoke.h"
#include "TT_EffectBase.h"
#include "TriggerTaskComponentBase.h"
#include "ContributeRuleBase.h"
#include "TriggerBlueprintLib.h"
#include "TriggerTaskRunHelp.h"
#include "TriggerTaskManager.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Character.h"
#include "Net/UnrealNetwork.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "TriggerTask/TT_LevelSequence.h"
#include "Misc/FrameTime.h"


UTriggerNetPlayerSupportComponent::UTriggerNetPlayerSupportComponent(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{
	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		SetIsReplicatedByDefault(true);

		PrimaryComponentTick.bCanEverTick = true;
	}
}

void UTriggerNetPlayerSupportComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

}

void  UTriggerNetPlayerSupportComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}


#pragma region InteractionTask

void UTriggerNetPlayerSupportComponent::Server_Interaction_Implementation(UTT_Interaction* InteractionTask, AActor* TargetActor)
{
	if (InteractionTask == nullptr)
		return;

	InteractionTask->Server_Interaction(TargetActor);
}

void UTriggerNetPlayerSupportComponent::Client_RunInteractionTask_Implementation(UTT_Interaction* InteractionTask, const FInteractionInfo& InteractionInfo )
{
	if (InteractionTask == nullptr)
		return;

	InteractionTask->Client_RunTask(InteractionInfo);
}

void UTriggerNetPlayerSupportComponent::Server_CommitCancleInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, int RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
{
	if (InteractionTask == nullptr)
		return;

	UContributeRuleBase* CancleContribution = UTriggerBlueprintLib::MakeCancleContributor(Contributor, RemoveCount, CanEverTick, TickGradual, CanExecutedImmediately, NeedToCheckGameplayAbility);

	InteractionTask->Server_CommitInteraction(CancleContribution);
}

void UTriggerNetPlayerSupportComponent::Server_CommitAddInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
{
	if (InteractionTask == nullptr)
		return;

	UContributeRuleBase* AddContribution = UTriggerBlueprintLib::MakeAddContributor(Contributor, CanEverTick, TickGradual, CanExecutedImmediately, NeedToCheckGameplayAbility);

	InteractionTask->Server_CommitInteraction(AddContribution);
}

void UTriggerNetPlayerSupportComponent::Client_CommitCancleInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, int RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
{
	if (InteractionTask == nullptr)
		return;

	UContributeRuleBase* CancleContribution = UTriggerBlueprintLib::MakeCancleContributor(Contributor, RemoveCount, CanEverTick, TickGradual, CanExecutedImmediately, NeedToCheckGameplayAbility);

	InteractionTask->Client_CommitInteraction(CancleContribution);
}

void UTriggerNetPlayerSupportComponent::Client_CommitAddInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
{
	if (InteractionTask == nullptr)
		return;

	UContributeRuleBase* AddContribution = UTriggerBlueprintLib::MakeAddContributor(Contributor, CanEverTick, TickGradual, CanExecutedImmediately, NeedToCheckGameplayAbility);

	InteractionTask->Client_CommitInteraction(AddContribution);
}

#pragma endregion InteractionTask

#pragma region RespawnTask


void UTriggerNetPlayerSupportComponent::Multicast_ChangeTranfrom_Implementation( bool InUsePosition, bool InUseRotation, bool InUseSize, FTransform Transform)
{
	AController* AC = Cast<AController>(GetOwner());

	UsePostioion = InUsePosition;
	UseRotation = InUseRotation;
	UseScale = InUseSize;

	Position = Transform.GetLocation();
	Rotation = Transform.GetRotation().Rotator();
	Scale = Transform.GetScale3D();

	if (AC == nullptr)
		return;

	APawn* Pawn = AC->GetPawn();

	if (Pawn == nullptr)
	{

		GetWorld()->GetTimerManager().SetTimer(TransformChangeTimeHandle, FTimerDelegate::CreateUObject(this,&UTriggerNetPlayerSupportComponent::HandleReapwnTransform), 0.1, true);
		return;
	}
		
	HandleReapwnTransform();
}

void UTriggerNetPlayerSupportComponent::HandleReapwnTransform()
{
	AController* AC = Cast<AController>(GetOwner());

	if (AC == nullptr)
		return;

	APawn* Pawn = AC->GetPawn();

	if (Pawn == nullptr)
		return;

	if (UsePostioion)
	{
		Pawn->SetActorLocation(Position);
	}

	if (UseRotation)
	{
		Pawn->SetActorRotation(Rotation);

		Pawn->GetController()->SetControlRotation(Rotation);
	}

	if (UseScale)
	{
		Pawn->SetActorScale3D(Scale);
	}

	FTransform Transform(Rotation, Position, Scale);

	FTriggerDelegate::RespawnCharacterTransformChange.Broadcast(Pawn, Transform);

	GetWorld()->GetTimerManager().ClearTimer(TransformChangeTimeHandle);

}

#pragma endregion RespawnTask

#pragma  region TriggerEffect

void UTriggerNetPlayerSupportComponent::Server_CloseEffect_Implementation(UTriggerTaskBase* Task, const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/, bool ShouldTryToFinishTask)
{
	if(Task == nullptr)
		return;

	UTT_EffectBase* Effect = Cast<UTT_EffectBase>(Task);

	if (Effect != nullptr)
	{
		Effect->CloseEffect(Causers, EffectDataIndex, ShouldTryToFinishTask);
	}
}

void UTriggerNetPlayerSupportComponent::Server_OpenEffect_Implementation(UTriggerTaskBase* Task, const TArray<UObject*>& Causers, int EffectDataIndex /*= INDEX_NONE*/ )
{
	if (Task == nullptr)
		return;

	UTT_EffectBase* Effect = Cast<UTT_EffectBase>(Task);

	if (Effect != nullptr)
	{
		Effect->OpenEffect(Causers, EffectDataIndex);
	}
}

#pragma  region TriggerEffect

#pragma  region LevelSequence

void UTriggerNetPlayerSupportComponent::Server_SyncSequenceProgress_Implementation(UTT_LevelSequence* LevelSequence)
{
    if (LevelSequence == nullptr)
    {
        return;
    }
    FFrameTime CurFrameTime;
    LevelSequence->GetCurFrameTime(CurFrameTime);
    Client_SyncSequenceProgress(LevelSequence, CurFrameTime);
}

void UTriggerNetPlayerSupportComponent::Client_SyncSequenceProgress_Implementation(UTT_LevelSequence* LevelSequence, const FFrameTime& CurFFrameTime)
{
    if (LevelSequence)
    {
        LevelSequence->PlaySequenceFromFrameTime(CurFFrameTime);
    }
}

#pragma endregion LevelSequence

#pragma  region TriggerTaskComponentBase

void UTriggerNetPlayerSupportComponent::Server_InvokeServerTask_Implementation(const FTriggerTaskRuntimeInfo& RuntimeInfo)
{
	if (UTriggerBlueprintLib::GetTriggerTaskManager() && UTriggerBlueprintLib::GetTriggerTaskManager()->GetTriggerTaskRunHelp())
	{
		UTriggerBlueprintLib::GetTriggerTaskManager()->GetTriggerTaskRunHelp()->RunTriggerTaskWithRuntimeInfo(RuntimeInfo);
	}
}

#pragma endregion TriggerTaskComponentBase


#pragma  region GameOver

void UTriggerNetPlayerSupportComponent::Server_BPGameOver_Implementation(const TArray<APlayerController*>& GameOverPlayers, const FString& URL)
{
	FGameOverInfo GameOverInfo;

	UCheckGameOver_BlueprintInvoke* BI = NewObject<UCheckGameOver_BlueprintInvoke>(GetTransientPackage(), UCheckGameOver_BlueprintInvoke::StaticClass());
	BI->BP_Initialize(nullptr);

	for (int i = 0; i < GameOverPlayers.Num(); i++)
	{
		BI->AddGameOverPlayer(GameOverPlayers[i]);
	}

	GameOverInfo.GameOverCondtions.Add(BI);

	GameOverInfo.URL = URL;

	FTriggerDelegate::GameOverNativeDelegate.Broadcast(nullptr, GameOverInfo);
}

#pragma endregion GameOver