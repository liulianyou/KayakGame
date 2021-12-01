#include "TriggerEditorEngine.h"
#include "TriggerEditorDefinition.h"
#include "TriggerLevelModule.h"
#include "Engine/Level.h"

FTriggerEditorEngine::FTriggerEditorEngine()
{

}


FTriggerEditorEngine::~FTriggerEditorEngine()
{

}


void FTriggerEditorEngine::Initialize()
{
	if (!TriggerLevelModule.IsValid())
	{
		TriggerLevelModule = MakeShared<FTriggerLevelModule>();
	}

	TriggerLevelModule->Initialize();
}

void FTriggerEditorEngine::Destroyed()
{
	
	if (TriggerLevelModule.IsValid())
	{
		TriggerLevelModule->Destroyed();
		TriggerLevelModule.Reset();
	}

}

void FTriggerEditorEngine::SyncTriggerLevels()
{
	TArray<ULevel*> PersistentLevels, SubLevels;

	TriggerLevelModule->Initialize();

	TriggerLevelModule->GetTriggerLevels(PersistentLevels, SubLevels);

	if (PersistentLevels.Num() == 0)
	{
		UE_LOG(LogTriggerEditor, Error, TEXT("There is no persietent trigger level to hold the trigger stystem!, maybe you need to make one the trigger level to be allways load"));
		return;
	}

	//First unload the sublevel
	if (TriggerLevelModule->RemoveTriggerLevels(SubLevels))
	{
		//Second generate new sub level and add them to the world
		TriggerLevelModule->GenerateNewTriggerSubLevel(PersistentLevels, SubLevels);

		//Process trigger levels so that all values are matched
		TriggerLevelModule->ProcessTriggerLevels(PersistentLevels, SubLevels);
	}
}