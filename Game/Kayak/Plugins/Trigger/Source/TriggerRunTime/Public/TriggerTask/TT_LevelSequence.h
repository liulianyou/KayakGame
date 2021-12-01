// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "TT_LevelSequence.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;

UENUM()
enum class ETTLevelSequenceState : uint8
{
    ETTLSS_NotPlay,
    ETTLSS_Playing,
    ETTLSS_Finished,
};

/**
 * Task to play level sequence.
 */
UCLASS(Abstract)
class TRIGGERRUNTIME_API UTT_LevelSequence : public UTriggerTaskBase
{
    GENERATED_UCLASS_BODY()

    TriggerTaskCommonFrameWorkDeclaration()

public:

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const override;

    void GetCurFrameTime(FFrameTime& CurFrameTIme) const;
    void PlaySequenceFromFrameTime(const FFrameTime& CurFrameTIme);
protected:
    void PlaySequence(ULevelSequencePlayer& InSequencePlayer);

    UFUNCTION()
    void OnSequenceFinished();

    void RemoveSequenceBind();

    UFUNCTION()
    void OnRep_IsSequencePlaying();

    ULevelSequencePlayer* GetSequencePlayer();
    virtual void DisablePlayerInput();
    virtual void EnablePlayerInput();
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelSequence")
    ALevelSequenceActor* LevelSequenceActor;

private:
    UPROPERTY(Replicated, ReplicatedUsing = OnRep_IsSequencePlaying)
    ETTLevelSequenceState SequenceState;

};
