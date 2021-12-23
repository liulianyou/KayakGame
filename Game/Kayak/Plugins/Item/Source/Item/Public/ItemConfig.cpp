#include "ItemConfig.h"
#include "ItemManager.h"

UItemConfig::UItemConfig(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	ItemManagerClass = UItemManager::StaticClass();
}