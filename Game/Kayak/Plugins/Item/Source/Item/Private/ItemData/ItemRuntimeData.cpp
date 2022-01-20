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

	DOREPLIFETIME(UItemRuntimeData, AbilityMap);
	DOREPLIFETIME(UItemRuntimeData, AttributeSetMap);
	DOREPLIFETIME(UItemRuntimeData, EffectMap);
}

void UItemRuntimeData::Initialize(UItemDataBase* ItemData)
{
	CopyValue<TArray<FItemAbilityDefiniation>>(ItemData, GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AbilityMap).ToString(), GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AbilityMap).ToString());
	CopyValue<TArray<FItemEffectDefiniation>>(ItemData, GET_MEMBER_NAME_CHECKED(UItemRuntimeData, EffectMap).ToString(), GET_MEMBER_NAME_CHECKED(UItemRuntimeData, EffectMap).ToString());
	CopyValue<TArray<FItemAttributeSetDefinition>>(ItemData, GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AttributeSetMap).ToString(), GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AttributeSetMap).ToString());

	Super::Initialize(ItemData);
}

void UItemRuntimeData::OnRep_AbilityMap(const TArray<FItemAbilityDefiniation>& OldValue)
{
	ITEMPROPERYREPNOTIFY(UItemRuntimeData, TArray<FItemAbilityDefiniation>, AbilityMap, OldValue);
}

void UItemRuntimeData::OnRep_AttributeSetMap(const TArray<FItemAttributeSetDefinition>& OldValue )
{
	ITEMPROPERYREPNOTIFY(UItemRuntimeData, TArray<FItemAttributeSetDefinition>, AttributeSetMap, OldValue);
}

void UItemRuntimeData::OnRep_EffectMap(const TArray<FItemEffectDefiniation>& OldValue )
{
	ITEMPROPERYREPNOTIFY(UItemRuntimeData, TArray<FItemEffectDefiniation>, EffectMap, OldValue);
}

void UItemRuntimeData::ActivateItem()
{
	Super::ActivateItem();

	for (int i = 0; i < EffectMap.Num(); i++)
	{
		if(EffectMap[i].ItemState != GetItemState())
			continue;

		if (EffectMap[i].DataAppliedRule == nullptr)
		{
			UE_LOG(LogItem, Warning, TEXT("Try to get ability components by customize style wile there are no confined DataAppliedRule in runtime data: %s"), *GetPathName());
			continue;
		}

		UDAR_AbilityComponents* DataAppliedRule = NewObject<UDAR_AbilityComponents>(GetTransientPackage(), EffectMap[i].DataAppliedRule.Get());

		if (DataAppliedRule == nullptr)
		{
			UE_LOG(LogItem, Warning, TEXT("There is no enough memory to create new TargetGenerateRule in runtime data: %s"), *GetPathName());
			continue;
		}

		DataAppliedRule->SetItemRuntimeData(this);
		DataAppliedRule->SetEffects(EffectMap[i].Effects);
		DataAppliedRule->ApplyData();
	}
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