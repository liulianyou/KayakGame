#include "ItemBlueprintLib.h"
#include "ItemManager.h"
#include "ItemGlobal.h"
#include "Item.h"

UItemBlueprintLib::UItemBlueprintLib(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{

}

UItemManager* UItemBlueprintLib::GetItemManager()
{
	return GetItemGlobal()->GetItemManage();
}

UItemGlobal* UItemBlueprintLib::GetItemGlobal()
{
	return IItemModuleInterface::Get().GetItemGlobal();
}