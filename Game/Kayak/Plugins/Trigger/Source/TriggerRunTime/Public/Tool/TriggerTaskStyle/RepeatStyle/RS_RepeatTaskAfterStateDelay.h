// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetStateBase.h"
#include "Engine/EngineTypes.h"
#include "TaskActiveInformation.h"
#include "RS_RepeatTaskAfterStateDelay.generated.h"

/**
 * Repeat style, used to repeat task in a while after specified state.
 */
UCLASS(Blueprintable, BlueprintType, meta = (DisplayName = "RepeatTaskAfterSpecifiedStateDelay"))
class TRIGGERRUNTIME_API URS_RepeatTaskAfterStateDelay : public URS_RepeatTaskWhenReachTargetStateBase
{
    GENERATED_UCLASS_BODY()

    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDelayTimerEvent, float, LeftTime);
public:
    virtual void ReachTargetTriggerState(UTriggerTaskBase* Task) override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLeftTime();
public:
    ///after the delay time, will repeat task.
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerTaskRepeatCondition")
    float DelayTimeToRepeat;
    
    /** Called when delay timer tick. */
    UPROPERTY(BlueprintAssignable, Category=Events)
    FOnDelayTimerEvent OnDelayTimerUpdate;
private:
    UFUNCTION()
    void HandleDelayTime();

    void CustomRepeatTask();
protected:
    //The handle to delay time;
    FTimerHandle DelayTimeHandle;

    float LeftTime;
    TWeakObjectPtr<UTriggerTaskBase> TaskToRepeat;
    
    FTaskActivationInfo CachedActivationInfo;
};
