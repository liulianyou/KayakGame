#include "ItemEditorGlobal.h"
#include "Modules/ModuleManager.h"
#include "DataSnippetAttributeCustomize.h"
#include "ItemDataSnippetBase.h"

void FItemEditorGlobal::Initialize()
{
	RegisterCustomizeDetailsPanel();
}

void FItemEditorGlobal::Finialize()
{
	UnRegisterCustomizeDetailsPanel();
}

void FItemEditorGlobal::RegisterCustomizeDetailsPanel()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.RegisterCustomPropertyTypeLayout( *FItemDataSnippetProperty::StaticStruct()->GetName() , FOnGetPropertyTypeCustomizationInstance::CreateStatic(&FItemDataSnippetAttributeCustomize::MakeInstance));

}

void FItemEditorGlobal::UnRegisterCustomizeDetailsPanel()
{
	FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");

	PropertyModule.UnregisterCustomPropertyTypeLayout(*FItemDataSnippetProperty::StaticStruct()->GetName());

}