#include "DAR_CheckAvatarBase.h"
#include "AvatarAccessRuleBase.h"

UDAR_CheckAvatarBase::UDAR_CheckAvatarBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UDAR_CheckAvatarBase::BeginDestroy()
{
	if (AvatarAccessRule != nullptr)
	{
		if (AvatarAccessRule->AvatarsChangedEvent.IsAlreadyBound(this, &UDAR_CheckAvatarBase::AvatarChangedEventCallback))
		{
			AvatarAccessRule->AvatarsChangedEvent.RemoveDynamic(this, &UDAR_CheckAvatarBase::AvatarChangedEventCallback);
		}
	}

	Super::BeginDestroy();
}

void UDAR_CheckAvatarBase::Initialize(UTriggerEffectDataBase* Owner)
{
	Super::Initialize(Owner);

	if (AvatarAccessRule != nullptr)
	{
		AvatarAccessRule->GetTargetAvatars(Avatars);

		if (!AvatarAccessRule->AvatarsChangedEvent.IsAlreadyBound(this, &UDAR_CheckAvatarBase::AvatarChangedEventCallback))
		{
			AvatarAccessRule->AvatarsChangedEvent.AddDynamic(this, &UDAR_CheckAvatarBase::AvatarChangedEventCallback);
		}
	}
}

bool UDAR_CheckAvatarBase::CanActive() const
{
	bool Reuslt = Super::CanActive();

	if(!Reuslt)
		return false;

	if(AvatarAccessRule == nullptr)
		return true;

	return true;
}

void UDAR_CheckAvatarBase::AvatarChangedEventCallback(const TArray<UObject*>& ChangedAvatars, bool bIsAdded)
{
	if (bIsAdded)
	{
		Avatars.Append(ChangedAvatars);
	}
	else
	{
		for (int i = 0; i < ChangedAvatars.Num(); i++)
		{
			Avatars.Remove(ChangedAvatars[i]);
		}
	}
}