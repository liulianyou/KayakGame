#include "AvatarData/AvatarInspectedDataBase.h"
#include "CheckAvatarAttribute.h"

UAvatarInspectedDataBase::UAvatarInspectedDataBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UAvatarInspectedDataBase::Initialize(UCheckAvatarAttribute* Owner)
{
	ConditionOwner = Owner;

	GetConditionOwner()->AvatarsChangedEvent.AddUniqueDynamic(this, &UAvatarInspectedDataBase::OnAvatarChanged);

	OnInitialize(Owner);
}

bool UAvatarInspectedDataBase::IsDataExceedExpectation_Implementation()
{
	return false;
}

void UAvatarInspectedDataBase::Reset()
{
	OnReset();
}

UCheckAvatarAttribute* UAvatarInspectedDataBase::GetConditionOwner() const
{
	if(ConditionOwner)
		return ConditionOwner;

	return GetTypedOuter<UCheckAvatarAttribute>();
}

void UAvatarInspectedDataBase::GetAllAvatars(TArray<UObject*>& Avators) const
{
	Avators.Empty();

	OnGetAllAvatars(Avators);

	if (GetConditionOwner() == nullptr)
	{
		return;
	}
		
	GetConditionOwner()->GetAvatars(Avators);
}

void UAvatarInspectedDataBase::NotifyEvalutorContentChanged()
{
	if(GetConditionOwner())
	{
		GetConditionOwner()->NotifiedByDataWhenContentChanged();
	}
}

void UAvatarInspectedDataBase::RegisterEvents(const TArray<UObject*>& Avatars)
{
	OnRegisterEvents(Avatars);
}

void UAvatarInspectedDataBase::UnRegisterEvents(const TArray<UObject*>& Avatars)
{
	OnUnRegisterEvents(Avatars);
}

void UAvatarInspectedDataBase::OnAvatarChanged(const TArray<UObject*>& Avatars, bool IsAdded)
{
	if (IsAdded)
	{
		RegisterEvents(Avatars);
	}
	else
	{
		UnRegisterEvents(Avatars);
	}
}

void UAvatarInspectedDataBase::BeginDestroy()
{
	if (GetConditionOwner())
	{
		GetConditionOwner()->AvatarsChangedEvent.RemoveDynamic(this, &UAvatarInspectedDataBase::OnAvatarChanged);
	}

	Super::BeginDestroy();
}