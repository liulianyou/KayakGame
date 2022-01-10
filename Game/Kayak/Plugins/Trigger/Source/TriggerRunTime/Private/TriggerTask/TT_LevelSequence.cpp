// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "TriggerTask/TT_LevelSequence.h"
#include "TriggerDefinition.h"
#include "TriggerBlueprintLib.h"
#include "TriggerTaskComponent/TriggerNetPlayerSupportComponent.h"
#include "TriggerTaskComponent/TriggerTaskComponentBase.h"

#include "LevelSequenceActor.h"
#include "Net/UnrealNetwork.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

UTT_LevelSequence::UTT_LevelSequence(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer), bFreezeAI(false), bSimulatePause(false), LevelSequencePlayRate(10000.0f), SequenceState(ETTLevelSequenceState::ETTLSS_NotPlay)
{

}

bool UTT_LevelSequence::Prepare()
{
    if (Super::Prepare())
    {
        Active();

        return true;
    }
    return false;
}

void UTT_LevelSequence::Active(bool ForceActive /*= true*/)
{
    Super::Active(ForceActive);
    if (LevelSequenceActor == nullptr)
    {//no specific Level Sequence.
        Finished();
        UE_LOG(LogTrigger, Error, TEXT("UTT_LevelSequence: specify LevelSequenceActor!"));
        return;
    }
    ULevelSequencePlayer* SequencePlayer = LevelSequenceActor->GetSequencePlayer();
    if (SequencePlayer == nullptr)
    {
        Finished();
        UE_LOG(LogTrigger, Error, TEXT("UTT_LevelSequence: SequencePlayer Error!"));
        return;
    }

    SequenceState = ETTLevelSequenceState::ETTLSS_Playing;

    AActor* OwnerActor = TryToGetOwnerActor();
    if (OwnerActor)
    {
        OwnerActor->ForceNetUpdate();
    }

    PlaySequence(*SequencePlayer);
}

void UTT_LevelSequence::TryToStop(UOperationInformationBase* StopOperationInfo/*= nullptr*/)
{
    Super::TryToStop(StopOperationInfo);

    if (ETTLevelSequenceState::ETTLSS_Finished == SequenceState)
    {
        return;
    }
    ULevelSequencePlayer* SequencePlayer = GetSequencePlayer();
    if (SequencePlayer)
    {//stop, no matter the player is playing or paused.
        SequencePlayer->GoToEndAndStop();
        ResetSequence();
    }
    SequenceState = ETTLevelSequenceState::ETTLSS_Finished;
    OnSequenceFinish();
}

void UTT_LevelSequence::TryToSleep(UOperationInformationBase* SleepOperationInfo /*= nullptr*/)
{
    //do not sleep, for now.
}

bool UTT_LevelSequence::ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
{
    if (Super::ReceiveNotifyFromOthersComponent(OtherComponent, SenderTask, StartOperationInfo))
    {
        return Prepare();
    }
    return false;
}

void UTT_LevelSequence::Reset(UOperationInformationBase* Operation /*= nullptr*/)
{
    Super::Reset(Operation);;
    if (ETTLevelSequenceState::ETTLSS_NotPlay == SequenceState)
    {
        return;
    }
    ULevelSequencePlayer* SequencePlayer = GetSequencePlayer();
    if (SequencePlayer)
    {
        if (SequencePlayer->IsPlaying())
        {
            SequencePlayer->StopAtCurrentTime();
        }
        SequencePlayer->ScrubToFrame(SequencePlayer->GetStartTime().Time);//stop and reset to start time.
    }
    ResetSequence();
    SequenceState = ETTLevelSequenceState::ETTLSS_NotPlay;
    OnSequenceFinish();
}

void UTT_LevelSequence::Skip(UOperationInformationBase* SkipStyle /*= nullptr*/)
{
    Super::Skip(SkipStyle);

    if (ETTLevelSequenceState::ETTLSS_Finished == SequenceState)
    {
        return;
    }
    ULevelSequencePlayer* SequencePlayer = GetSequencePlayer();
    if (SequencePlayer && SequencePlayer->IsPlaying())
    {
        SequencePlayer->GoToEndAndStop();
    }
    ResetSequence();
    SequenceState = ETTLevelSequenceState::ETTLSS_Finished;
    OnSequenceFinish();
}

void UTT_LevelSequence::Pause(UOperationInformationBase* OperationInfo /* = nullptr */)
{
	Super::Pause(OperationInfo);
}

void UTT_LevelSequence::Resume(UOperationInformationBase* OperationInfo /* = nullptr */)
{
	Super::Resume(OperationInfo);
}

void UTT_LevelSequence::InitializeTask(UTriggerTaskComponentBase* Owner, bool AsTemplate, bool IsDynamicTask)
{
    Super::InitializeTask(Owner, AsTemplate, IsDynamicTask);
}

void UTT_LevelSequence::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void UTT_LevelSequence::Finished(UOperationInformationBase* FinishOperationInfo /* = nullptr */)
{
    Super::Finished(FinishOperationInfo);
}

void UTT_LevelSequence::PostFinished()
{
    Super::PostFinished();
}

bool UTT_LevelSequence::CanTick(void)
{
    return Super::CanTick();
}

bool UTT_LevelSequence::CanBeToggled(void)
{
	return Super::CanBeToggled();
}

void UTT_LevelSequence::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME(UTT_LevelSequence, SequenceState);
}

void UTT_LevelSequence::GetCurFrameTime(FFrameTime& CurFrameTIme) const
{
    if (LevelSequenceActor == nullptr)
    {//no specific Level Sequence.
        return;
    }
    ULevelSequencePlayer* SequencePlayer = LevelSequenceActor->GetSequencePlayer();
    if (SequencePlayer == nullptr)
    {
        return;
    }
    FQualifiedFrameTime CurrentSequenceTime = SequencePlayer->GetCurrentTime();
    CurFrameTIme = CurrentSequenceTime.Time;
}

void UTT_LevelSequence::PlaySequenceFromFrameTime(const FFrameTime& CurFrameTIme)
{
    if (LevelSequenceActor == nullptr)
    {//no specific Level Sequence.
        return;
    }
    ULevelSequencePlayer* SequencePlayer = LevelSequenceActor->GetSequencePlayer();
    if (SequencePlayer)
    {
        SequencePlayer->PlayToFrame(CurFrameTIme);
        PlaySequence(*SequencePlayer);
    }
}

void UTT_LevelSequence::PlaySequence(ULevelSequencePlayer& InSequencePlayer)
{
    SimulatePause(InSequencePlayer);
    OnSequecePlay();
    InSequencePlayer.Play();
    InSequencePlayer.OnFinished.AddDynamic(this, &UTT_LevelSequence::OnSequenceFinished);
}

void UTT_LevelSequence::OnSequenceFinished()
{
    Finished();

    SequenceState = ETTLevelSequenceState::ETTLSS_Finished;
    OnSequenceFinish();
    ResetSequence();
}

void UTT_LevelSequence::ResetSequence()
{
    if (LevelSequenceActor && LevelSequenceActor->IsValidLowLevel())
    {
        ULevelSequencePlayer* SequencePlayer = LevelSequenceActor->GetSequencePlayer();
        if (SequencePlayer)
        {
            SequencePlayer->OnFinished.RemoveDynamic(this, &UTT_LevelSequence::OnSequenceFinished);
            RecoverFromSimulatePause(*SequencePlayer);
        }
    }
}

void UTT_LevelSequence::OnRep_IsSequencePlaying()
{
    switch (SequenceState)
    {
    case ETTLevelSequenceState::ETTLSS_Playing:
    {
        //get sequence progress from server to client, and play sequence in return-call function(PlaySequenceFromFrameTime)
        UTriggerNetPlayerSupportComponent* TNPSC = UTriggerBlueprintLib::GetTriggerNetPlayerSupportFromActor(GetWorld()->GetFirstPlayerController());
        if (TNPSC == nullptr)
        {
            return;
        }
        TNPSC->Server_SyncSequenceProgress(this);
    }
        break;
    case ETTLevelSequenceState::ETTLSS_Finished:
    {
        ULevelSequencePlayer* SequencePlayer = GetSequencePlayer();
        if (SequencePlayer)
        {//go to the end frame, maybe modify.
            SequencePlayer->GoToEndAndStop();
            ResetSequence();
            OnSequenceFinish();
        }
    }
        break;
    case ETTLevelSequenceState::ETTLSS_NotPlay:
    {
        ULevelSequencePlayer* SequencePlayer = GetSequencePlayer();
        if (SequencePlayer)
        {
            if (SequencePlayer->IsPlaying())
            {
                SequencePlayer->StopAtCurrentTime();
            }
            SequencePlayer->ScrubToFrame(SequencePlayer->GetStartTime().Time);//stop and reset to start time.
        }
    }
        break;
    }
}

ULevelSequencePlayer* UTT_LevelSequence::GetSequencePlayer()
{
    if (LevelSequenceActor == nullptr)
    {//no specific Level Sequence.
        return nullptr;
    }
    return LevelSequenceActor->GetSequencePlayer();
}

void UTT_LevelSequence::OnSequecePlay()
{
    if (bFreezeAI)
    {
        AddFreezeEffectToAI();
    }
}

void UTT_LevelSequence::OnSequenceFinish()
{
    if (bFreezeAI)
    {
        RemoveFreezeEffectFromAI();
    }
}

void UTT_LevelSequence::SimulatePause(ULevelSequencePlayer& InSequencePlayer)
{
    if (false == bSimulatePause)
    {
        return;
    }
    UE_LOG(LogTemp, Warning, TEXT("UTT_LevelSequence::SimulatePause bSimulatePause maybe crash!"));
    check(LevelSequencePlayRate > 0.0f);

    UGameplayStatics::SetGlobalTimeDilation(this, 1.0f / LevelSequencePlayRate);
    InSequencePlayer.SetPlayRate(LevelSequencePlayRate);
}

void UTT_LevelSequence::RecoverFromSimulatePause(ULevelSequencePlayer& InSequencePlayer)
{
    if (false == bSimulatePause)
    {
        return;
    }
    UGameplayStatics::SetGlobalTimeDilation(this, 1.0f);
    InSequencePlayer.SetPlayRate(1.0f);
}

void UTT_LevelSequence::AddFreezeEffectToAI()
{
}

void UTT_LevelSequence::RemoveFreezeEffectFromAI()
{
}
