#include "ItemRuntimeData.h"
#include "ItemComponentBase.h"
#include "ItemInventroyComponent.h"
#include "ItemDefinition.h"
#include "ApplyDataToAbilityComponent.h"

#include "AbilitySystemComponent.h"

UItemRuntimeData::UItemRuntimeData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemRuntimeData::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UItemRuntimeData::Initialize(UItemDataBase* ItemData)
{
	Super::Initialize(ItemData);
}



void UItemRuntimeData::ActivateItem()
{
	Super::ActivateItem();
}

void UItemRuntimeData::DeactivateItem()
{
	Super::DeactivateItem();
}

void UItemRuntimeData::StartUse()
{
	Super::StartUse();
}

void UItemRuntimeData::StopUse()
{
	Super::StopUse();
}

void UItemRuntimeData::Abandoned(const FItemScopeChangeInfo& AbandonInfo)
{
	Super::Abandoned(AbandonInfo);
}

void UItemRuntimeData::Gained(const FItemScopeChangeInfo& GainedInfo)
{
	Super::Gained(GainedInfo);
}