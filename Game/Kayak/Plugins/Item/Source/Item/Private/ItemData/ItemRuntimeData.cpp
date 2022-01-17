#include "ItemRuntimeData.h"

UItemRuntimeData::UItemRuntimeData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{

}

void UItemRuntimeData::Initialize(UItemDataBase* ItemData)
{
	CopyValue<TMap<EItemState, FItemAbilityDefiniation>>(ItemData, GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AbilityMap).ToString(), GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AbilityMap).ToString());
	CopyValue<TMap<EItemState, FItemEffectDefiniation>>(ItemData, GET_MEMBER_NAME_CHECKED(UItemRuntimeData, EffectMap).ToString(), GET_MEMBER_NAME_CHECKED(UItemRuntimeData, EffectMap).ToString());
	CopyValue<TMap<EItemState, FItemAttributeSetDefinition>>(ItemData, GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AttributeSetMap).ToString(), GET_MEMBER_NAME_CHECKED(UItemRuntimeData, AttributeSetMap).ToString());

	Super::Initialize(ItemData);
}

