#include "ItemRuntimeData.h"

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
