#include "AvatarData/AvatarInTargetArea.h"
#include "GameFramework/Actor.h"
#include "EvaluatorDefinition.h"
#include "GameFramework/Controller.h"

UAvatarInTargetArea::UAvatarInTargetArea(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	CheckedAvatars.Empty();
}

bool UAvatarInTargetArea::IsDataExceedExpectation_Implementation()
{
	FitCheckAvatarsDataToActualActors();

	//When there is no valid avatars then means no avatar in the target area
	if(CheckedAvatars.Num() == 0)
		return false;

	for (int i = 0; i < CheckedAvatars.Num(); i++)
	{
		if(!CheckedAvatars[i].IsInTargetArea)
			return false;
	}

	return true;
}

void UAvatarInTargetArea::Reset()
{
	Super::Reset();

	CheckedAvatars.Empty();
}

void UAvatarInTargetArea::Initialize(UCheckAvatarAttribute* Owner)
{
	Super::Initialize(Owner);

	if (!TargetArea.IsValid())
	{
		TargetArea = GetTypedOuter<AActor>();

		if (TargetArea.IsValid())
		{
			UE_LOG(LogEvaluator, Error, TEXT("Please Set the TargetArea valid value or this data %s will not work"), *GetPathName());
		}
	}

	if(!TargetArea.IsValid())
		return;

	TargetArea->OnActorBeginOverlap.AddDynamic(this, &UAvatarInTargetArea::OnActorBeginOverlap);
	TargetArea->OnActorEndOverlap.AddDynamic(this, &UAvatarInTargetArea::OnActorEndOverlap);
}

void UAvatarInTargetArea::OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	/*
	* Add new overlapped to the checked Avatars,
	* the new element will be remove when the new actor move away from the target area or this data is been used by the condition which the new element is not a valid avatar
	*/

	FCheckedAvatar* AvatarPtr = CheckedAvatars.FindByPredicate([&](const FCheckedAvatar& Data) {
		if (Data.Avatar == OtherActor)
			return true;
		else
			return false;
	});

	if (AvatarPtr == nullptr)
	{
		FCheckedAvatar NewData;
		NewData.Avatar = OtherActor;
		NewData.IsInTargetArea = true;
		CheckedAvatars.Add(NewData);
	}
	else
	{
		AvatarPtr->IsInTargetArea = true;
	}

	NotifyEvalutorContentChanged();
}

void UAvatarInTargetArea::OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	for (int i = 0; i < CheckedAvatars.Num(); i++)
	{
		if (CheckedAvatars[i].Avatar == nullptr || CheckedAvatars[i].Avatar == OtherActor)
		{
			CheckedAvatars.RemoveAt(i--);
		}
	}
}

void UAvatarInTargetArea::FCheckedAvatar::Reset()
{
	
}

void UAvatarInTargetArea::FitCheckAvatarsDataToActualActors()
{
	TArray<UObject*> Avatars;
	GetAllAvatars(Avatars);

	//Add new Avatar to the target checked avatars
	for (auto Avatar : Avatars)
	{
		if(Avatar == nullptr || !Avatar->IsValidLowLevel() || Avatar->GetClass()->IsChildOf(AController::StaticClass()))
			continue;

		FCheckedAvatar* AvatarPtr = CheckedAvatars.FindByPredicate([&](const FCheckedAvatar& Data){
			if(Data.Avatar == Avatar)
				return true;
			else
				return false;
		});

		if (AvatarPtr == nullptr)
		{
			FCheckedAvatar NewData;
			NewData.Avatar = Avatar;

			CheckedAvatars.Add(NewData);
		}
	}

	//Remove unused avatars
	for (int i = 0; i < CheckedAvatars.Num(); i++)
	{
		if (CheckedAvatars[i].Avatar == nullptr || Avatars.Find(CheckedAvatars[i].Avatar) == INDEX_NONE)
		{
			CheckedAvatars.RemoveAt(i--);
		}
	}
}