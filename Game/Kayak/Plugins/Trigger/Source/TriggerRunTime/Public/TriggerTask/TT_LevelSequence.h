// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "TriggerTask/TriggerTaskBase.h"
#include "TT_LevelSequence.generated.h"

class ALevelSequenceActor;
class ULevelSequencePlayer;
class UGameplayEffect;

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

    void ResetSequence();

    UFUNCTION()
    void OnRep_IsSequencePlaying();

    ULevelSequencePlayer* GetSequencePlayer();
    virtual void OnSequecePlay();
    virtual void OnSequenceFinish();
    void SimulatePause(ULevelSequencePlayer& InSequencePlayer);
    void RecoverFromSimulatePause(ULevelSequencePlayer& InSequencePlayer);

    virtual void AddFreezeEffectToAI();
    virtual void RemoveFreezeEffectFromAI();
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelSequence")
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelSequence")
    bool bFreezeAI;

    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelSequence", meta = (EditCondition = "bFreezeAI"))
    TSubclassOf<UGameplayEffect> FreezeAIGameplayEffect;
    
    //SimulatePause will cause crash, so do not use bSimulatePause.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelSequence")
    bool bSimulatePause;

    //use LevelSequencePlayRate to simulate World Pause state but LevelSequence.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "LevelSequence", meta = (EditCondition = "bSimulatePause"))
    float LevelSequencePlayRate;
private:
    UPROPERTY(Replicated, ReplicatedUsing = OnRep_IsSequencePlaying)
    ETTLevelSequenceState SequenceState;

};
