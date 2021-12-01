#include "AvatarAccessRule/AvatarAccessRuleBase.h"
#include "CheckAvatarAttribute.h"

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
	if (UCheckAvatarAttribute* AvatarAttributeCondition = Cast<UCheckAvatarAttribute>(GetOwner()))
	{
		TArray<UObject*> Avatars;
		Avatars.Add(NewAvatar);

		AvatarAttributeCondition->AvatarsChangedEvent.Broadcast(Avatars, true);
	}
}

void UAvatarAccessRuleBase::NotifyOwnerNewAvatarRemoved(UObject* OldAvatar)
{
	if (UCheckAvatarAttribute* AvatarAttributeCondition = Cast<UCheckAvatarAttribute>(GetOwner()))
	{
		TArray<UObject*> Avatars;
		Avatars.Add(OldAvatar);

		AvatarAttributeCondition->AvatarsChangedEvent.Broadcast(Avatars, false);
	}
}
