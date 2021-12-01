#include "TriggerManager.h"
#include "TriggerTaskManager.h"
#include "SceneTrigger.h"
#include "TriggerTaskComponentBase.h"
#include "TriggerTaskRunHelp.h"
#include "TriggerBlueprintLib.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "TriggerSaveGameManager.h"
#include "OperationInformationManager.h"
#include "GameFramework/GameModeBase.h"
#include "TriggerEventSystemInfoBase.h"
#include "TriggerConfig.h"
#include "Engine/Engine.h"
#if WITH_EDITORONLY_DATA
#include "Editor.h"
#endif

//UTriggerManager::UTriggerManager(const FObjectInitializer& ObjectInitializer) :
//	Super(ObjectInitializer)
//{
//	TrigerTaskManager = CreateDefaultSubobject<UTriggerTaskManager>(TriggerTaskManagerName);
//	Triggers.Empty();
//}

UTriggerManager::UTriggerManager() :
	UEngineSubsystem()
{
	TriggerOctreeControllerClass = UTriggerOctreeControllerBase::StaticClass();
	RuntimeContentClass = UTriggerRuntimeContent::StaticClass();
}

void UTriggerManager::Initialize(FSubsystemCollectionBase& Collection)
{
#if WITH_EDITORONLY_DATA
	if (GEditor != nullptr)
	{
		GEditor->OnObjectsReplaced().AddUObject(this, &UTriggerManager::OnObjectReplaced);
	}
#endif
	
	if (TrigerTaskManager == nullptr)
	{
		TrigerTaskManager = NewObject<UTriggerTaskManager>(this, UTriggerTaskManager::StaticClass());

		if (TrigerTaskManager)
		{
			TrigerTaskManager->Initialize(this);
		}
	}

	FGameModeEvents::OnGameModeInitializedEvent().AddUObject(this, &UTriggerManager::OnGameModeInitialize);

	if (TriggerOctreeControllerClass != nullptr)
	{
		TriggerOctreeController = NewObject<UTriggerOctreeControllerBase>(this, TriggerOctreeControllerClass);

		TriggerOctreeController->ConstructOctreeData();
	}

	if (RuntimeContentClass != nullptr)
	{
		RuntimeContent = Cast<UTriggerRuntimeContent>(NewObject<UTriggerRuntimeContent>(this, RuntimeContentClass));
		RuntimeContent->InitializeRuntimeContent();
	}

	OperationManager = NewObject<UOperationInformationManager>(this);
	OperationManager->Initialzie(this);

	TriggerSaveGameManager = NewObject<UTriggerSaveGameManager>(this);
	TriggerSaveGameManager->Initialize();
}

void UTriggerManager::BeginDestroy()
{
	Super::BeginDestroy();
}

UTriggerTaskManager* UTriggerManager::GetTriggerTaskManager() const
{
	return TrigerTaskManager;
}

UTriggerSaveGameManager* UTriggerManager::GetTriggerSaveGameManager() const
{
	return TriggerSaveGameManager;
}

UTriggerRuntimeContent* UTriggerManager::GetRuntimeContent() const
{
	return RuntimeContent;
}

UOperationInformationManager* UTriggerManager::GetOperationInformationManager() const
{
	return OperationManager;
}

void UTriggerManager::RegisterTrigger(TScriptInterface<ITriggerInterface> TriggerData)
{
	if (!IsVaildTriggerData(TriggerData))
		return;

	if (TriggerOctreeController == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The Trigger octree controller is null, please set the vaild Octree Controller class!!"));
		return;
	}

	TriggerOctreeController->GetTriggerOctreeData()->AddNode(TriggerData);
}

void UTriggerManager::UnRegisterTrigger(TScriptInterface<ITriggerInterface> TriggerData)
{
	if (!IsVaildTriggerData(TriggerData))
		return;

	if (TriggerOctreeController == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("The Trigger octree controller is null, please set the vaild Octree Controller class!!"));
		return;
	}

	TriggerOctreeController->GetTriggerOctreeData()->RemoveNode(TriggerData);

	//Remove all pending task running info when the original component have been UnRegisted
	if (GetTriggerTaskManager() != nullptr && 
		GetTriggerTaskManager()->GetTriggerTaskRunHelp() != nullptr)
	{
		TArray<UTriggerTaskComponentBase*> Components;

		for (auto Component : Components)
		{
			if(Component == nullptr)
				continue;

			GetTriggerTaskManager()->GetTriggerTaskRunHelp()->TryToRemovePendingRuntimeInfo(Component->GetComponentID());
		}
	}
}

bool UTriggerManager::IsVaildTriggerData(const TScriptInterface<ITriggerInterface>& TriggerData)
{
	bool Result = true;
	if (!TriggerData)
	{
		if (TriggerData.GetObject() == nullptr)
		{
			UE_LOG(LogTrigger, Warning, TEXT("The TriggerData is not vaild while you want to register it to the TriggerManager, Please make it inherited from ITriggerInterface!! And the input data is null!!"));

		}
		else
		{
			UE_LOG(LogTrigger, Warning, TEXT("The TriggerData is not vaild while you want to register it to the TriggerManager, Please make it inherited from ITriggerInterface!! %s"), *TriggerData.GetObject()->GetName());
		}
		Result = false;
	}

	return true;
}

FString UTriggerManager::GetMapName(const FString& RootPath, const FString& NewMapName, UWorld* InWorld)
{
	UWorld* World = InWorld;

	if (World == nullptr)
	{
		World = GetWorld();

		if (World == nullptr)
		{
			World = GWorld;

			if(World == nullptr)
				return TEXT("");
		}
	}
	
	FString PackageName = FPackageName::GetShortName(NewMapName);

	// Special case for PIE, the PackageName gets mangled.
	if (!World->StreamingLevelsPrefix.IsEmpty())
	{
		if (!PackageName.StartsWith(World->StreamingLevelsPrefix))
		{
			PackageName = World->StreamingLevelsPrefix + PackageName;
		}

		if (!FPackageName::IsShortPackageName(NewMapName))
		{
			PackageName = FPackageName::GetLongPackagePath(NewMapName) + TEXT("/") + PackageName;
		}
	}

	return UTriggerBlueprintLib::GetSubTriggerLevelAssetPath(nullptr, PackageName, RootPath);;
}

ANewTriggerBase* UTriggerManager::CreateNewSceneTrigger(UWorld* World, TSubclassOf<ASceneTrigger> Templete, const FTransform& Transform, FActorSpawnParameters& SpawnParamaters)
{
	if(Templete == nullptr || World == nullptr)
		return nullptr;

	ANewTriggerBase* NewInstance = World->SpawnActor<ANewTriggerBase>(Templete, Transform, SpawnParamaters);

	if (NewInstance == nullptr || NewInstance->TriggerTaskComponent == nullptr)
	{
		return nullptr;
	}

	RegisterTrigger(NewInstance);

	return NewInstance;
}

void UTriggerManager::GetTriggerTaskComponentsByComponentInfo(TArray<UTriggerTaskComponentBase*>& OutComponents, const TArray<FTriggerTaskComponentInformation>& ComponentInfos, UObject* WorldContent)
{
	OutComponents.Empty();

	UTriggerOctreeControllerBase* TriggerController =  GetTriggerController();

	if(TriggerController == nullptr)
		return;

	UWorld* World = GEngine->GetWorldFromContextObject(WorldContent, EGetWorldErrorMode::LogAndReturnNull);

	for (auto ComponentInfo : ComponentInfos)
	{
		for (auto ID : ComponentInfo.ComponentIDs)
		{
			if (!ID.IsValid())
				continue;

			TArray<UTriggerTaskComponentBase*> Components;

			TriggerController->GetAllTriggerComponentsByID(Components, ID);

			if (Components.Num() == 0)
			{
				UE_LOG(LogTrigger, Warning, TEXT("Can not find trigger task component with the ID:%s"), *ID.ToString());
				continue;
			}

			for (auto Component : Components)
			{
				if (Component->GetWorld() == World || World == nullptr)
				{
					OutComponents.AddUnique(Component);
				}
			}
		}
	}
}

void UTriggerManager::TryToLoadNewTriggerMap(const FString& MapAssetPath, const FTriggerTaskComponentInformation& ComponetInfo, const FTriggerMapLoaded& TriggerMapLoadedCallback, const UObject* WorldContextObject)
{
	if(!ComponetInfo.IsValid())
		return;

	ULevelStreaming* LevelStream = UGameplayStatics::GetStreamingLevel(WorldContextObject, *ComponetInfo.MapName);

	if (LevelStream == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("There is no valid trigger level: %s at current world %s"), *ComponetInfo.MapName, *WorldContextObject->GetWorld()->GetName());
		return;
	}

	//If the target map which contain the target component have been loaded
	if (LevelStream->HasLoadedLevel() == false)
	{
		FLoadNewTriggerMapInfo* Info = LoadTriggerMapInfos.FindByPredicate([&](const FLoadNewTriggerMapInfo& Data) {
			if (Data.MapName == ComponetInfo.MapName)
			{
				return true;
			}
			else
			{
				return false;
			}
		});

		//The target map have never loaded
		if (Info == nullptr)
		{
			FLoadNewTriggerMapInfo NewInfo;
			NewInfo.MapName = ComponetInfo.MapName;
			NewInfo.DelegateHand = FWorldDelegates::LevelAddedToWorld.AddUObject(this, &UTriggerManager::NewMapLoadedCallback);
			NewInfo.UserCallbacks.Add(&TriggerMapLoadedCallback);

			FLatentActionInfo LatentActionInfo;
			LatentActionInfo.CallbackTarget = this;
			LatentActionInfo.ExecutionFunction = TEXT("LoadLevelStream");
			LatentActionInfo.Linkage = 0;
			LatentActionInfo.UUID = GetTypeHash(FGuid::NewGuid());
			NewInfo.LatentActionInfo = LatentActionInfo;

			LoadTriggerMapInfos.Add(NewInfo);

			UGameplayStatics::LoadStreamLevel(WorldContextObject, *ComponetInfo.MapName, true, false, LatentActionInfo);
		}
		//The target map is loading
		else
		{
			Info->UserCallbacks.Add(&TriggerMapLoadedCallback);
		}
	}
	else
	{
		//As the target map have been loaded then invoke the callback directly

		TriggerMapLoadedCallback.Execute(ComponetInfo.MapName);
	}
}

void UTriggerManager::LoadLevelStream( int LinkId )
{
	
}

void UTriggerManager::NewMapLoadedCallback(ULevel* Level, UWorld* World)
{
	FString MapName = Level->GetOuter()->GetName();

	for (int i = 0; i < LoadTriggerMapInfos.Num(); i++)
	{
		if(LoadTriggerMapInfos[i].MapName == MapName)
		{
			for (auto UserCallback : LoadTriggerMapInfos[i].UserCallbacks)
			{
				if(UserCallback == nullptr)
					continue;

				UserCallback->ExecuteIfBound(MapName);
			}

			FWorldDelegates::LevelAddedToWorld.Remove(LoadTriggerMapInfos[i].DelegateHand);

			LoadTriggerMapInfos.RemoveAt(i--);
		}
	}
}

#if WITH_EDITORONLY_DATA

void UTriggerManager::OnObjectReplaced(const TMap<UObject*, UObject*>& OldToNewInstanceMap)
{
	
}

#endif

void UTriggerManager::Tick(float DeltaTime)
{

}

TStatId UTriggerManager::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UTriggerManager, STATGROUP_Trigger);
}

void UTriggerManager::OnGameModeInitialize(AGameModeBase* Gamemode)
{
	CreateNewTriggerEventSystemInfo(Gamemode);
}

ATriggerEventSystemInfoBase* UTriggerManager::CreateNewTriggerEventSystemInfo(AGameModeBase* Gamemode)
{
	if (Gamemode == nullptr)
		return nullptr;

	UTriggerConfig* TriggerConfig = Cast<UTriggerConfig>(UTriggerConfig::StaticClass()->GetDefaultObject());

	if (TriggerConfig == nullptr)
		return nullptr;

	TSubclassOf<ATriggerEventSystemInfoBase> SystemInfoClass = TriggerConfig->DefaultTriggerSystemInfoClass;

	TSubclassOf<ATriggerEventSystemInfoBase>* Class = TriggerConfig->TriggerSystemInfoClassMap.Find(Gamemode->GetClass());

	if (Class != nullptr)
	{
		SystemInfoClass = *Class;
	}

	if (SystemInfoClass == nullptr)
	{
		SystemInfoClass = ATriggerEventSystemInfoBase::StaticClass();
	}

	FActorSpawnParameters SpawnInfo;
	SpawnInfo.Instigator = Gamemode->GetInstigator();
	SpawnInfo.ObjectFlags |= RF_Transient;	// We never want to save game sessions into a map

	ATriggerEventSystemInfoBase* NewEventSystemInfo = Gamemode->GetWorld()->SpawnActor<ATriggerEventSystemInfoBase>(SystemInfoClass, SpawnInfo);

	EventSystemInfos.AddUnique(NewEventSystemInfo);

	return NewEventSystemInfo;
}

void UTriggerManager::SetTriggerEventSystemInfo(ATriggerEventSystemInfoBase* Info, ATriggerEventSystemInfoBase* OldInfo)
{
	//Before any operation I need to remove all invalid event info
	for (int i = 0; i < EventSystemInfos.Num(); i++)
	{
		if (EventSystemInfos[i] == nullptr)
			EventSystemInfos.RemoveAt(i--);
	}

	int Index = EventSystemInfos.Find(OldInfo);

	if (Info == nullptr && Index != INDEX_NONE)
	{
		EventSystemInfos.RemoveAt(Index);
	}
	else
	{
		if (OldInfo == nullptr)
		{
			if (Index == INDEX_NONE)
			{
				EventSystemInfos.Add(Info);
			}
		}
		else
		{
			if (Index != INDEX_NONE)
			{
				EventSystemInfos[Index] = Info;
			}
		}
	}

	
	FOperationInfoContainer* NewContainer = nullptr;
	FOperationInfoContainer* OldContainer = nullptr;

	if (Info != nullptr)
	{
		NewContainer = &Info->GetOperationContainer();
	}

	if (OldInfo != nullptr)
	{
		OldContainer = &OldInfo->GetOperationContainer();
	}

	//Update the replicate container in the trigger manager
	if (GetOperationInformationManager() != nullptr)
	{
		GetOperationInformationManager()->SetReplicatedContaner(NewContainer, OldContainer);
	}

}