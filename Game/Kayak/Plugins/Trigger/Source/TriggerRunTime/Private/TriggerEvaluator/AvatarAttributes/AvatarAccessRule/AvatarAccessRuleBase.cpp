#include "AvatarAccessRule/AvatarAccessRuleBase.h"

UAvatarAccessRuleBase::UAvatarAccessRuleBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
}

void UAvatarAccessRuleBase::Initialize(UObject* Owner)
{
	OwnerObject = Owner;
}

void UAvatarAccessRuleBase::DeInitialize()
{
	OnDeInitialize();
}

void UAvatarAccessRuleBase::Reset_Implementation()
{
	
}

void UAvatarAccessRuleBase::GetTargetAvatars_Implementation(TArray<UObject*>& Avatars) const
{
	Avatars.Empty();
}

UObject* UAvatarAccessRuleBase::GetOwner()
{
	return OwnerObject;
}

void UAvatarAccessRuleBase::NotifyOwnerNewAvatarAdded(UObject* NewAvatar)
{
	TArray<UObject*> Avatars;
	Avatars.Add(NewAvatar);

	AvatarsChangedEvent.Broadcast(Avatars, true);
}

void UAvatarAccessRuleBase::NotifyOwnerNewAvatarRemoved(UObject* OldAvatar)
{
	TArray<UObject*> Avatars;
	Avatars.Add(OldAvatar);

	AvatarsChangedEvent.Broadcast(Avatars, false);
}
