// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AvatarData/AvatarInspectedDataBase.h"
#include "GameplayTagContainer.h"
#include "AvatarGameplayTagAction.generated.h"

class UAbilitySystemComponent;

/**
 * used to inspect the avatars do any game-play-tag action or not.
 */
UCLASS()
class EVALUATOR_API UAvatarGameplayTagAction : public UAvatarInspectedDataBase
{
    GENERATED_UCLASS_BODY()

public:
    //Override UAvatarInspectedDataBase
    virtual bool IsDataExceedExpectation_Implementation() override;
    virtual void Reset() override;
    virtual void Initialize(UCheckAvatarAttribute* Owner) override;
    virtual void BeginDestroy() override;
    virtual void RegisterEvents(const TArray<UObject*>& Avatars) override;
    virtual void UnRegisterEvents(const TArray<UObject*>& Avatars) override;
    //Override UAvatarInspectedDataBase

    UFUNCTION(BlueprintCallable)
    bool GetHasTagsMatched() { return bHasTagsMatched; }

public:
    UFUNCTION()
    void OnTagsChanged(FGameplayTag TagChange, int32 NewCount);

public:
    //The tags this data inspect
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTagContainer Tags;

private:
    bool bHasTagsMatched;

    /*
    * The specific delegate for changes when tag have been changed
    */
    TMap<UAbilitySystemComponent*, FDelegateHandle> DelegateHandles;

    //Cashed avatars
    TArray<UObject*> NewAvatars;
};
