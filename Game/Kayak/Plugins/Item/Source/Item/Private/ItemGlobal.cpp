#include "ItemGlobal.h"
#include "ItemConfig.h"
#include "ItemManager.h"

UItemGlobal::UItemGlobal(const FObjectInitializer& ObjectInitialzier)
	:Super(ObjectInitialzier)
{

}

void UItemGlobal::InitializeGlobal()
{
	CreateItemManager();
}

void UItemGlobal::CreateItemManager()
{
	UClass* Class = UItemManager::StaticClass();

	UItemConfig* ItemConfig = UItemConfig::StaticClass()->GetDefaultObject<UItemConfig>();

	if (ItemConfig->ItemManagerClass.IsValid())
	{
		Class = ItemConfig->ItemManagerClass.Get();
	}

	ItemManager = NewObject<UItemManager>(this, Class, TEXT("ItemManager"));

	ItemManager->Initialize();
}