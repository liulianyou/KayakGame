// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "ItemEditor.h"
#include "ItemEditorGlobal.h"
#include "Templates/SharedPointer.h"

#define LOCTEXT_NAMESPACE "FItemEditorModule"


class FItemEditorModule : public IItemEditorModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;


	virtual TSharedPtr<FItemEditorGlobal> GetItemGlobal() const { return ItemEditorGlobal;}

private:
	
	//The global access to all implementations in item editor system
	TSharedPtr<FItemEditorGlobal> ItemEditorGlobal;
};

void FItemEditorModule::StartupModule()
{
	ItemEditorGlobal = MakeShareable( new FItemEditorGlobal() );

	ItemEditorGlobal->Initialize();
}

void FItemEditorModule::ShutdownModule()
{
	ItemEditorGlobal->Finialize();
}


#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FItemEditorModule, ItemEditor)