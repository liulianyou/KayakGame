// Copyright 1998-2099 Epic Games, Inc. All Rights Reserved.


#include "AvatarGameplayTagAction.h"
#include "CheckAvatarAttribute.h"

#include "GameFramework/Actor.h"
#include "AbilitySystemComponent.h"


UAvatarGameplayTagAction::UAvatarGameplayTagAction(const FObjectInitializer& ObjectInitializer)
    :Super(ObjectInitializer), bHasTagsMatched(false)
{
    DelegateHandles.Empty();
}

bool UAvatarGameplayTagAction::IsDataExceedExpectation_Implementation()
{
    UCheckAvatarAttribute* CheckOwner = GetConditionOwner();
    if (CheckOwner == nullptr)
    {
        return false;
    }
    if (bHasTagsMatched || Tags.Num() == 0)
    {//the cached result is true, or no tag filter.
        return true;
    }

    TArray<UObject*> Avatars;
    CheckOwner->GetAvatars(Avatars);

    for (auto Avatar : Avatars)
    {
        AActor* Actor = Cast<AActor>(Avatar);

        if (Actor == nullptr)
        {
            continue;
        }

        TArray<UAbilitySystemComponent*> Components;

        Actor->GetComponents<UAbilitySystemComponent>(Components);

        for (auto ASC : Components)
        {
            FGameplayTagContainer TagContainer;
            ASC->GetOwnedGameplayTags(TagContainer);
            bHasTagsMatched = true;
            const TMap<FGameplayTag, int32>& CurTagMap = ASC->GetMinimalReplicationTags().TagMap;
            for (TArray<FGameplayTag>::TConstIterator TagIter = Tags.CreateConstIterator(); TagIter; ++TagIter)
            {
                if (TagContainer.HasTag(*TagIter))
                {
                    continue;
                }
                if (CurTagMap.Find(*TagIter) != nullptr)
                {
                    continue;
                }
                //not find in TagContainer and TagMap.
                bHasTagsMatched = false;
                break;
            }
            if (bHasTagsMatched)
            {
                return true;
            }
        }
    }

    return false;
}

void UAvatarGameplayTagAction::Reset()
{
    bHasTagsMatched = false;
    Super::Reset();
}

void UAvatarGameplayTagAction::Initialize(UCheckAvatarAttribute* Owner)
{
    Super::Initialize(Owner);

    TArray<UObject*> Avatars;
    GetConditionOwner()->GetAvatars(Avatars);

    RegisterEvents(Avatars);
}

void UAvatarGameplayTagAction::OnTagsChanged(FGameplayTag TagChange, int32 NewCount)
{
    if (NewCount > 0 && Tags.HasAnyExact(TagChange.GetSingleTagContainer()))
    {
        NotifyEvalutorContentChanged();
    }
}

void UAvatarGameplayTagAction::RegisterEvents(const TArray<UObject*>& Avatars)
{
    Super::RegisterEvents(Avatars);

	for (int i = 0; i < Avatars.Num(); i++)
	{
		AActor* Actor = Cast<AActor>(Avatars[i]);

		if (Actor == nullptr)
			continue;

		TArray<UAbilitySystemComponent*> Components;

		Actor->GetComponents<UAbilitySystemComponent>(Components);

		for (auto ASC : Components)
		{
			FDelegateHandle DelegateHandle = ASC->RegisterGenericGameplayTagEvent().AddUObject(this, &UAvatarGameplayTagAction::OnTagsChanged);

			DelegateHandles.Add(ASC, DelegateHandle);
		}
	}
}

void UAvatarGameplayTagAction::UnRegisterEvents(const TArray<UObject*>& Avatars)
{
    Super::UnRegisterEvents(Avatars);

	for (int i = 0; i < Avatars.Num(); i++)
	{
		AActor* Actor = Cast<AActor>(Avatars[i]);

		if (Actor == nullptr)
			continue;

		TArray<UAbilitySystemComponent*> Components;

		Actor->GetComponents<UAbilitySystemComponent>(Components);

		for (auto ASC : Components)
		{
           FDelegateHandle* HandlePtr = DelegateHandles.Find(ASC);

           if (HandlePtr)
           {
               ASC->RegisterGenericGameplayTagEvent().Remove(*HandlePtr);
               DelegateHandles.Remove(ASC);
           }
		}
	}
}

void UAvatarGameplayTagAction::BeginDestroy()
{
    Super::BeginDestroy();

	for (auto DelegateHandleIT = DelegateHandles.CreateConstIterator(); DelegateHandleIT; ++DelegateHandleIT)
	{
		if (DelegateHandleIT.Key() == nullptr || !DelegateHandleIT.Key()->IsValidLowLevel())
		{
			continue;
		}

		DelegateHandleIT.Key()->RegisterGenericGameplayTagEvent().Remove(DelegateHandleIT.Value());
	}

	DelegateHandles.Empty();
}