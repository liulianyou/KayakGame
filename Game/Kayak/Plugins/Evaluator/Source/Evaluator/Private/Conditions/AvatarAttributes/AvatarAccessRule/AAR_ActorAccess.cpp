#include "AvatarAccessRule/AAR_ActorAccess.h"
#include "Engine/World.h"
#include "FilterBase.h"
#include "GameFramework/PlayerController.h"
#include "EngineUtils.h"

UAAR_AvatarAccessWithFilter::UAAR_AvatarAccessWithFilter(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

bool UAAR_AvatarAccessWithFilter::IsFilterPassed(UObject* Object) const
{
	if(AvatarFilter == nullptr)
		return true;


	if (AvatarFilter != nullptr)
	{
		AvatarFilter->SetFilterData(Object);
	}

	if (AvatarFilter == nullptr || AvatarFilter->BP_Pass())
	{
		return true;
	}

	return false;
}


UAAR_AllSpawnedActors::UAAR_AllSpawnedActors(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UAAR_AllSpawnedActors::Initialize(UObject* Owner)
{
	Super::Initialize(Owner);

	if (DelegateHandle.IsValid())
	{
		GetWorld()->RemoveOnActorSpawnedHandler(DelegateHandle);
	}

	 DelegateHandle = GetWorld()->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateUObject(this, &UAAR_AllSpawnedActors::OnActorCreated));
}

void UAAR_AllSpawnedActors::GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const
{
	Avatars.Empty();

	for (int i = 0; i < Actors.Num(); i++)
	{
		Avatars.Add(Actors[i]);
	}
}

void UAAR_AllSpawnedActors::OnActorCreated(AActor* Actor)
{
	if(Actor == nullptr)
		return;

	if (IsFilterPassed(Actor))
	{
		NotifyOwnerNewAvatarAdded(Actor);

		Actors.AddUnique(Actor);

		if (!Actor->OnDestroyed.IsAlreadyBound(this, &UAAR_AllSpawnedActors::OnActorDestroyed))
		{
			Actor->OnDestroyed.AddDynamic(this, &UAAR_AllSpawnedActors::OnActorDestroyed);
		}
	}
}

void UAAR_AllSpawnedActors::OnActorDestroyed(AActor* Actor)
{
	int Index = Actors.Find(Actor);

	if (Index != INDEX_NONE)
	{
		Actors.RemoveAt(Index);

		NotifyOwnerNewAvatarRemoved(Actor);
	}
}


UAAR_AllActors::UAAR_AllActors(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UAAR_AllActors::GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const
{
	Avatars.Empty();

	if (GetWorld() == nullptr)
		return;

	for (TActorIterator<AActor> It(GetWorld(), AActor::StaticClass()); It; ++It)
	{
		AActor* Actor = *It;

		if (IsFilterPassed(Actor))
		{
			Avatars.Add(Actor);
		}
	}
}

UAAR_AllPlayerControllers::UAAR_AllPlayerControllers(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UAAR_AllPlayerControllers::GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const
{
	Avatars.Empty();

	if (GetWorld() == nullptr)
		return;

	for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = Cast<APlayerController>(It->Get());

		if(PC == nullptr)
			continue;

		if (IsFilterPassed(PC))
		{
			Avatars.Add(PC);
		}

		if (IncludeControlledPawns && PC->GetPawn() != nullptr)
		{
			if (IsFilterPassed(PC->GetPawn()))
			{
				Avatars.Add(PC->GetPawn());
			}
		}
	}
}

UAAR_ActorsInMap::UAAR_ActorsInMap(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UAAR_ActorsInMap::GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const
{
	Avatars.Empty();

	for (int i = 0; i < Actors.Num(); i++)
	{
		if (IsFilterPassed(Actors[i].Get()))
		{
			Avatars.AddUnique(Actors[i].Get());
		}
	}
}

#if WITH_EDITOR
void UAAR_ActorsInMap::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
}
#endif