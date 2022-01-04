#include "TriggerEditorConfig.h"
#include "Misc/ConfigCacheIni.h"


UTriggerEditorConfig::UTriggerEditorConfig(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	
	SetDefaultValueFromTriggerEditorConfigFile();

}

void UTriggerEditorConfig::SetDefaultValueFromTriggerEditorConfigFile()
{
	const TCHAR* TriggerEditorConfigName = TEXT("TriggerEditorConfig");

	const FString TriggerEditorIni = FString::Printf(TEXT("%s/Trigger/Config/%s.ini"), *FPaths::ProjectPluginsDir(), TEXT("TriggerEditor"));

	auto ChangeValue = [&]( FString PropertyName ){
		FString ReturnValue;
		GConfig->GetString(TriggerEditorConfigName, *PropertyName, ReturnValue, TriggerEditorIni);

		UProperty* Property = GetClass()->FindPropertyByName(*PropertyName);

		if (Property != nullptr)
		{
			void* ValueAddress = Property->ContainerPtrToValuePtr<void>(this);
			Property->ImportText(*ReturnValue, ValueAddress, 0, this);
		}
	};

	if (GConfig->DoesSectionExist(TriggerEditorConfigName, TriggerEditorIni))
	{
		ChangeValue(TEXT("TriggerTaskDetailsPanelWidget"));
		ChangeValue(TEXT("TriggerDataRefreshWidget"));
	}
}