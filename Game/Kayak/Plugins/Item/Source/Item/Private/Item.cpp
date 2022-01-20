// Copyright Epic Games, Inc. All Rights Reserved.

#include "Item.h"
#include "ItemGlobal.h"
#include "ItemConfig.h"

#define LOCTEXT_NAMESPACE "FItemModule"

class FItemModule : public IItemModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	UItemGlobal* GetItemGlobal() const;

private:

	mutable UItemGlobal* ItemGlobal = nullptr;

	//The delegate will broadcast when the item system is ready for the outer use
	FSimpleMulticastDelegate ItemModuleReadyCallback;
};


void FItemModule::StartupModule()
{
	UClass* ItemGlobalClass = UItemGlobal::StaticClass();

	TSoftClassPtr<UItemGlobal> Class = UItemConfig::StaticClass()->GetDefaultObject<UItemConfig>()->ItemGlobalClass;

	if (Class.IsValid())
	{
		ItemGlobalClass = Class.Get();
	}

	ItemGlobal = NewObject<UItemGlobal>(GetTransientPackage(), ItemGlobalClass, TEXT("ItemGlobal"));

	ItemGlobal->AddToRoot();

	ItemGlobal->InitializeGlobal();

	//Now the outer module can access all Item system functions safely
	ItemModuleReadyCallback.Broadcast();
}

void FItemModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	if (ItemGlobal && ItemGlobal->IsValidLowLevel())
	{
		ItemGlobal->RemoveFromRoot();

		ItemGlobal = nullptr;
	}
}

UItemGlobal* FItemModule::GetItemGlobal() const
{
	if (ItemGlobal != nullptr)
	{
		return ItemGlobal;
	}

	return nullptr;
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FItemModule, Item)