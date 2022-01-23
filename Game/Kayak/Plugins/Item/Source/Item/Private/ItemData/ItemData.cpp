#include "ItemData.h"
#include "ItemRuntimeData.h"


UItemData::UItemData(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	RuntimdDataClass = UItemRuntimeData::StaticClass();
}