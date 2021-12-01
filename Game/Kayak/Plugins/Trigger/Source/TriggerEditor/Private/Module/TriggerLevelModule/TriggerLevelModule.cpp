#include "TriggerLevelModule.h"

#include "TriggerEditorDefinition.h"
#include "TriggerInterface.h"
#include "TriggerBlueprintLib.h"
#include "TriggerTaskComponent/TriggerTaskComponent.h"
#include "TriggerTaskComponent/Category/TriggerCategory.h"
#include "TriggerTaskComponent/EventChain/TriggerEventActorChain.h"

#include "AssetData.h"
#include "LevelUtils.h"
#include "ObjectTools.h"
#include "FileHelpers.h"
#include "Engine/World.h"
#include "Engine/Level.h"
#include "HAL/FileManager.h"
#include "AssetToolsModule.h"
#include "EditorLevelUtils.h"
#include "Misc/MessageDialog.h"
#include "Editor/EditorEngine.h"
#include "AssetRegistryModule.h"
#include "ISourceControlModule.h"
#include "Engine/LevelStreaming.h"
#include "ISourceControlProvider.h"
#include "Factories/WorldFactory.h"
#include "SourceControlOperations.h"
#include "Engine/LevelStreamingDynamic.h"

#define LOCTEXT_NAMESPACE "TriggerLevelModule"

FTriggerObjectMapInfo::FTriggerObjectMapInfo()
{
	Clear();
}

FTriggerObjectMapInfo::~FTriggerObjectMapInfo()
{
	Clear();
}

void FTriggerObjectMapInfo::Clear()
{
	ObjectMaps.Empty();
}

void FTriggerObjectMapInfo::GetMappedImmediateTriggerObject(UTriggerTaskComponentBase* PersistentTaskComponet, TArray<TScriptInterface<ITriggerInterface>>& OutTriggers)
{
	OutTriggers.Empty();

	TScriptInterface<ITriggerInterface> Outer = PersistentTaskComponet->GetTriggerObjectOwner();

	if (Outer == nullptr)
		return;

	TArray<TScriptInterface<ITriggerInterface>>* MappedOuterPtr = ObjectMaps.Find(Outer);

	TScriptInterface<ITriggerInterface> Result = nullptr;

	if (MappedOuterPtr != nullptr)
	{
		OutTriggers.Append(*MappedOuterPtr);
	}
}

void FTriggerObjectMapInfo::AddNewMap(const TScriptInterface<ITriggerInterface>& PersistentTriggerObject, const TScriptInterface<ITriggerInterface>& SubLevelTriggerObject)
{
	if (PersistentTriggerObject == nullptr)
	{
		UE_LOG(LogTriggerEditor, Warning, TEXT( "Please don't add persistent level with null value to the map as its key. Current pending value is %p."), SubLevelTriggerObject.GetObject());

		return;
	}

	TArray<TScriptInterface<ITriggerInterface>>* MappedObjectPtr = ObjectMaps.Find(PersistentTriggerObject);

	if (MappedObjectPtr == nullptr)
	{
		TArray<TScriptInterface<ITriggerInterface>> SubLevelTriggerPool;

		SubLevelTriggerPool.Add(SubLevelTriggerObject);

		ObjectMaps.Add(PersistentTriggerObject, SubLevelTriggerPool);
	}
	else
	{
		//When the sublevel object is new to the object maps then just add it
		if (MappedObjectPtr->Num() == 0 || 
			ObjectMaps[PersistentTriggerObject].Find(SubLevelTriggerObject) == INDEX_NONE)
		{
			ObjectMaps[PersistentTriggerObject].Add(SubLevelTriggerObject);
		}
	}
}

void FTriggerObjectMapInfo::RemoveObject(TScriptInterface<ITriggerInterface> TriggerObject)
{
	TArray<TScriptInterface<ITriggerInterface>>* MappedObjectPtr = ObjectMaps.Find(TriggerObject);

	/*
	* First try to check weather the trigger object is one key value in the ObjectMaps
	*/
	if (MappedObjectPtr == nullptr)
	{
		//If the Trigger Object is not key value, then make all values to be null
		for (auto It : ObjectMaps)
		{
			if (It.Value.Find(TriggerObject) != INDEX_NONE)
			{
				It.Value.Remove(TriggerObject);
			}
		}
	}
	else
	{
		//Just remove the key
		ObjectMaps.Remove(TriggerObject);
	}
}


FTriggerLevelModule::FTriggerLevelModule()
{
	Clear();
}

FTriggerLevelModule::~FTriggerLevelModule()
{
	Clear();
}


void FTriggerLevelModule::Initialize()
{
	Clear();
}

void FTriggerLevelModule::Destroyed()
{

}

void FTriggerLevelModule::Clear()
{
	ComponentOuterMaps.Empty();
}

void FTriggerLevelModule::GetTriggerLevels(TArray<ULevel*>& PersistentLevels, TArray<ULevel*>& SubLeveles)
{
	PersistentLevels.Empty();
	SubLeveles.Empty();

	if (GWorld == nullptr)
		return;

	for (auto LevelIt = GWorld->GetLevelIterator(); LevelIt; LevelIt++)
	{
		ULevel* Level = *LevelIt;

		if (Level == nullptr)
			continue;

		for (AActor* Actor : Level->Actors)
		{
			if (Actor == nullptr)
				continue;

			bool IsTriggerLevel = dynamic_cast<ITriggerInterface*>(Actor) != nullptr;

			if (!IsTriggerLevel)
				continue;

			bool IsPersistentLevel = GWorld->PersistentLevel == Level;

			ULevelStreaming* StramingLevel = FLevelUtils::FindStreamingLevel(GWorld, *Level->GetOutermost()->GetName());

			bool IsStreamLevel = StramingLevel != nullptr;

			if (IsPersistentLevel || !IsStreamLevel)
			{
				PersistentLevels.Add(Level);
			}
			else
			{
				SubLeveles.Add(Level);
			}

			break;
		}
	}

	return;
}

bool FTriggerLevelModule::RemoveTriggerLevels(TArray<ULevel*>& Levels, bool DeleteResourceAsset)
{
	bool Result = true;

	for (auto Level : Levels)
	{
		if(Level == nullptr)
			continue;

		ULevelStreaming* StramingLevel = FLevelUtils::FindStreamingLevel(Level->OwningWorld, *Level->GetOutermost()->GetName());

		// Unselect all actors before removing the level
		// This avoids crashing in areas that rely on getting a selected actors level. The level will be invalid after its removed.
		for (auto ActorIt = Level->Actors.CreateIterator(); ActorIt; ++ActorIt)
		{
			GEditor->SelectActor((*ActorIt), false, false);
		}

		//Remove the streaming level from the world before delete its asset
		Level->OwningWorld->RemoveStreamingLevel(StramingLevel);

		StramingLevel->MarkPendingKill();

		FString LevelPackagePath = Level->GetOutermost()->GetName();

		if (DeleteResourceAsset)
		{
			DeleteTriggerLevelAsset(LevelPackagePath);
		}

		//Remove this level and notify other module to update
		if (!EditorLevelUtils::RemoveLevelFromWorld(Level))
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT("FaildToDeleteOrRemoveFile" ,"Delete and remove Trigger StreamingLevel Faild, maybe you should login your source controller."));
			Result = false;
		}

	}

	// Collect garbage to clear out the destroyed level
	CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);

	return Result;
}


void FTriggerLevelModule::DeleteTriggerLevelAsset(const FString& LevelPackageName)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	FARFilter Filter;
	Filter.PackageNames.Add(*LevelPackageName);

	TArray<FAssetData> Items;

	//Find all assets on the target package path
	AssetRegistryModule.Get().GetAssets(Filter, Items);

	TArray<UObject*> ObjectsToDelect;

	for (int i = 0; i < Items.Num(); i++)
	{
		ObjectsToDelect.Add(Items[i].GetAsset());
	}

	/*
	* Remove all the assets include the source file.
	* This function will update all relevant items on the editor
	*/
	ObjectTools::DeleteObjectsUnchecked(ObjectsToDelect);
}

void FTriggerLevelModule::GenerateNewTriggerSubLevel( const TArray<ULevel*>& PersistenTriggerLevels, TArray<ULevel*>& OuterSubLevels)
{
	OuterSubLevels.Empty();

	for (auto PersistentLevel : PersistenTriggerLevels)
	{
		if(PersistentLevel == nullptr)
			continue;

		for (int ActorIndex = 0; ActorIndex < PersistentLevel->Actors.Num(); ActorIndex++)
		{
			AActor* Actor = PersistentLevel->Actors[ActorIndex];

			if(Actor == nullptr || !Actor->IsValidLowLevel())
				continue;

			ITriggerInterface* Trigger = static_cast<ITriggerInterface*>(Actor->GetInterfaceAddress(UTriggerInterface::StaticClass()));

			if(Trigger == nullptr)
				continue;

			TArray<UTriggerTaskComponentBase*> TaskComponents;

			Trigger->GetTriggerTaskComponents(TaskComponents);

			TMap<TScriptInterface<ITriggerInterface>, TArray<UTriggerTaskComponentBase*>, FDefaultSetAllocator, TTriggerInterfaceKeyFuncs<TArray<UTriggerTaskComponentBase*>>> NewTriggerComponentMaps;

			for (UTriggerTaskComponentBase* TaskComponent : TaskComponents)
			{
				if(TaskComponent == nullptr)
					continue;

				for (UTriggerCategoryBase* Category : TaskComponent->GetCategories())
				{
					if(Category == nullptr)
						continue;

					TArray<FString> MapNames;
					Category->GetExportedMapName(MapNames);

					for (auto MapName : MapNames)
					{
						FString LevelPackagePath = UTriggerBlueprintLib::GetSubTriggerLevelDirectoryPath(PersistentLevel);

						//Should ensure the file path is exist at disk
						EnsurePackagePathDirectoryExist(LevelPackagePath);

						ULevelStreaming* LevelStreaming = FindOrCreateNewLevelStreaming(PersistentLevel, MapName);

						if (LevelStreaming == nullptr)
						{
							UE_LOG(LogTriggerEditor, Warning, TEXT("Miss level streaming!!"));
						}

						OuterSubLevels.AddUnique(LevelStreaming->GetLoadedLevel());

						TScriptInterface<ITriggerInterface> NewTrigger;
						//Move the target component to the new level
						UTriggerTaskComponentBase* NewComponent = CopyTriggerComponentToSublevels(TaskComponent, LevelStreaming, NewTrigger);

						TArray<UTriggerTaskComponentBase*>* ComponentPtr = NewTriggerComponentMaps.Find(NewTrigger);

						if (ComponentPtr == nullptr)
						{
							TArray<UTriggerTaskComponentBase*> Components;
							Components.Add(NewComponent);
							NewTriggerComponentMaps.Add(NewTrigger, Components);
						}
						else
						{
							NewTriggerComponentMaps[NewTrigger].Add(NewComponent);
						}
					}
				}
			}

			//Remove unused component
			for (auto NewTriggerMap : NewTriggerComponentMaps)
			{
				if(!NewTriggerMap.Key)
					continue;

				TArray<UTriggerTaskComponentBase*> OwnedComponents;
				NewTriggerMap.Key->GetTriggerTaskComponents(OwnedComponents);

				for (auto OwnedComponent : OwnedComponents)
				{
					if (NewTriggerMap.Value.Find(OwnedComponent) == INDEX_NONE)
					{
						NewTriggerMap.Key->RemoveTriggerTaskComponent(OwnedComponent->GetComponentID());
					}
				}
			}
		}
	}

}

void FTriggerLevelModule::ProcessTriggerLevels(const TArray<ULevel*>& PersistenTriggerLevels, const TArray<ULevel*>& SubLevels)
{
	UpdateTriggerAttributes();

	TArray<ULevel*> TriggerLevels;
	TriggerLevels.Append(PersistenTriggerLevels);
	TriggerLevels.Append(SubLevels);

	// Final Save all trigger levels
	for (int LevelIndex = 0; LevelIndex < TriggerLevels.Num(); LevelIndex++)
	{
		TryToSaveLevel(TriggerLevels[LevelIndex]);
	}
}


UObject* FTriggerLevelModule::CreateNewTriggerLevelAsset(const FString& LongPackagePath, const FString& NewMpaName)
{
	UObject* Asset = nullptr;

	UWorldFactory* Factory = NewObject<UWorldFactory>(GetTransientPackage(), UWorldFactory::StaticClass());

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");

	Asset = AssetToolsModule.Get().CreateAsset(NewMpaName, LongPackagePath, UWorld::StaticClass(), Factory, FName("TriggerCreateNewSubLevel"));

	return Asset;
}

FString FTriggerLevelModule::GetNewTriggerMapPackagePath(const FString& PersistentLevelPath)
{
	FString Result = PersistentLevelPath + TEXT("TriggerSubLevel");

	return Result;
}

bool  FTriggerLevelModule::IsTriggerMapAssetExist(const FString& MapPackageName, const FString& SubLevelName)
{
	bool Result = false;

	FString SubLevelPackageName = MapPackageName + TEXT("/") + SubLevelName;

	FString PackageFilename;
	return FPackageName::DoesPackageExist(SubLevelPackageName, NULL, &PackageFilename);

	//FString FilePath;

	//FPackageName::TryConvertLongPackageNameToFilename(SubLevelPackageName, FilePath, FPackageName::GetMapPackageExtension());

	//return Result = IFileManager::Get().FileExists(*FilePath);
}

void FTriggerLevelModule::EnsurePackagePathDirectoryExist(const FString& LongPackagePath)
{
	FString FilePath;

	FPackageName::TryConvertLongPackageNameToFilename(LongPackagePath, FilePath);

	if (!FPaths::DirectoryExists(FilePath))
	{
		IFileManager::Get().MakeDirectory(*FilePath);
	}
}

ULevelStreaming* FTriggerLevelModule::FindOrCreateNewLevelStreaming(ULevel* PersistentLevel, const FString& SubLevelName)
{
	ULevelStreaming* Result;

	FString LevelPackageName = UTriggerBlueprintLib::GetSubTriggerLevelAssetPath(PersistentLevel, SubLevelName);

	ULevelStreaming* LevelStreaming = FLevelUtils::FindStreamingLevel(PersistentLevel->OwningWorld, *LevelPackageName);

	//If this level is at the world then remove it
	if (LevelStreaming != nullptr)
	{
		return LevelStreaming;
	}

	if (IsTriggerMapAssetExist(UTriggerBlueprintLib::GetSubTriggerLevelDirectoryPath(PersistentLevel), SubLevelName))
	{
		//Delete the source asset directly
		DeleteTriggerLevelAsset(LevelPackageName);
	}

	CreateNewTriggerLevelAsset(UTriggerBlueprintLib::GetSubTriggerLevelDirectoryPath(PersistentLevel), SubLevelName);

	Result = UEditorLevelUtils::AddLevelToWorld(PersistentLevel->OwningWorld, *LevelPackageName, ULevelStreamingDynamic::StaticClass());

	return Result;
}

void FTriggerLevelModule::TryToSaveSubLevels(const TArray<ULevelStreaming*>& Levels)
{
	for (auto Level : Levels)
	{
		if(Level == nullptr || !Level->IsValidLowLevel())
			continue;

		TryToSaveLevel(Level->GetLoadedLevel());
	}
}

void FTriggerLevelModule::TryToSaveLevel(ULevel* Level)
{
	if(Level == nullptr)
		return;

	FEditorFileUtils::SaveLevel(Level);
}

UTriggerTaskComponentBase* FTriggerLevelModule::CopyTriggerComponentToSublevels(UTriggerTaskComponentBase* TaskComponent, ULevelStreaming* SubLevel, TScriptInterface<ITriggerInterface>& OuterNewTrigger)
{
	if(TaskComponent == nullptr || SubLevel == nullptr)
		return nullptr;

	ULevel* NewLevel = SubLevel->GetLoadedLevel();

	if(NewLevel == nullptr)
		return nullptr;

	TScriptInterface<ITriggerInterface> SubLevelTrigger = FindMappedNewTriggerObject(NewLevel, TaskComponent);

	//When the outer is new to the new trigger sub level, add its copy to sub level
	if (SubLevelTrigger == nullptr)
	{
		SubLevelTrigger = CreateNewTrigger(TaskComponent, NewLevel);

		if (SubLevelTrigger == nullptr)
		{
			UE_LOG(LogTriggerEditor, Warning, TEXT("Can not create new trigger in the sublevel!!"));

			return nullptr;
		}
	}

	OuterNewTrigger = SubLevelTrigger;

	UTriggerTaskComponentBase* NewMappedTriggerTaskComponent = FindOrCreateNewTriggerTaskComponent(TaskComponent, SubLevelTrigger);

	return NewMappedTriggerTaskComponent;
}

UObject* FTriggerLevelModule::CreateNewTrigger(UTriggerTaskComponentBase* PersistenTaskComponent, ULevel* OwnerSubLevel)
{
	if(PersistenTaskComponent == nullptr)
		return nullptr;

	TScriptInterface<ITriggerInterface> OriginalComponentOuter = PersistenTaskComponent->GetTriggerObjectOwner();

	if (OriginalComponentOuter == nullptr)
		return nullptr;

	ITriggerInterface* OriginalTrigger = static_cast<ITriggerInterface*>(OriginalComponentOuter.GetInterface());

	if (OriginalTrigger == nullptr)
	{
		return nullptr;
	}

	TScriptInterface<ITriggerInterface> NewTrigger = OriginalTrigger->DuplicateTrigger(OwnerSubLevel);

	if (NewTrigger == nullptr)
	{
		UE_LOG(LogTriggerEditor, Warning, TEXT("The new created outer in the sublevel is not a trigger. I will make it pending to kill!"));

		return nullptr;
	}

	TSharedPtr<FTriggerObjectMapInfo>* MapPtr = ComponentOuterMaps.Find(OwnerSubLevel);

	if (MapPtr == nullptr)
	{
		TSharedPtr<FTriggerObjectMapInfo> MapInfo = MakeShared<FTriggerObjectMapInfo>();

		ComponentOuterMaps.Add(OwnerSubLevel, MapInfo);
	}

	ComponentOuterMaps[OwnerSubLevel]->AddNewMap(OriginalComponentOuter, NewTrigger);


	return NewTrigger.GetObject();
}

UTriggerTaskComponentBase* FTriggerLevelModule::FindOrCreateNewTriggerTaskComponent(UTriggerTaskComponentBase* PersistenTaskComponent, const TScriptInterface<ITriggerInterface>& NewTrigger)
{
	if (NewTrigger == nullptr)
		return nullptr;

	TArray<UTriggerTaskComponentBase*> Components;
	NewTrigger->GetTriggerTaskComponents(Components);

	UTriggerTaskComponentBase** ComponentPtr = Components.FindByPredicate([&](const UTriggerTaskComponentBase* Data){
		if(Data == nullptr)
			return false;

		if (Data->GetComponentID() == PersistenTaskComponent->GetComponentID() || Data == PersistenTaskComponent)
		{
			return true;
		}
		else
		{
			return false;
		}
	});

	if (ComponentPtr == nullptr)
	{
		UTriggerTaskComponentBase* TaskComponent = NewObject<UTriggerTaskComponentBase>(NewTrigger.GetObject(), PersistenTaskComponent->GetClass(), *PersistenTaskComponent->GetName(), RF_NoFlags, PersistenTaskComponent);

		if (TaskComponent != nullptr)
		{
			NewTrigger->AddTriggerTaskComponent(TaskComponent);
		}

		return TaskComponent;
	}
	else
	{
		return *ComponentPtr;
	}
}

TScriptInterface<ITriggerInterface> FTriggerLevelModule::FindMappedNewTriggerObject(ULevel* NewSubLevel, UTriggerTaskComponentBase* PersistentComponent, bool AddNewLevelMap)
{
	TSharedPtr<FTriggerObjectMapInfo>* MapInfoPtr = ComponentOuterMaps.Find(NewSubLevel);

	TSharedPtr<FTriggerObjectMapInfo> MapInfo;

	if (MapInfoPtr == nullptr)
	{
		if (AddNewLevelMap)
		{
			MapInfo = MakeShared<FTriggerObjectMapInfo>();

			ComponentOuterMaps.Add(NewSubLevel, MapInfo);
		}
		else
		{
			return nullptr;
		}
	}
	else
	{
		MapInfo = *MapInfoPtr;
	}

	TArray<TScriptInterface<ITriggerInterface>> OuterTriggers;

	MapInfo->GetMappedImmediateTriggerObject(PersistentComponent, OuterTriggers);

	for (auto SubLevelTrigger : OuterTriggers)
	{
		if(SubLevelTrigger == nullptr)
			continue;

		if (SubLevelTrigger.GetObject()->GetTypedOuter<ULevel>() == NewSubLevel)
		{
			return SubLevelTrigger;
		}
	}

	return nullptr;
}

void FTriggerLevelModule::RemoveUnUsedCategoryTag(UTriggerTaskComponentBase* Component)
{
	if(Component == nullptr)
		return;

	for (auto Category : Component->GetCategories())
	{
		Category->UpdateCategoryToCurrentMap();
	}
}

void FTriggerLevelModule::FixupChildInformation(UTriggerTaskComponentBase* SubLevelTriggerComponent)
{
	if(SubLevelTriggerComponent == nullptr)
		return;

	TScriptInterface<ITriggerInterface> SubLevelTrigger = SubLevelTriggerComponent->GetTriggerObjectOwner();

	if (SubLevelTrigger == nullptr)
		return;

	ULevel* SubLevel = SubLevelTriggerComponent->GetTypedOuter<ULevel>();

	TArray<TScriptInterface<ITriggerInterface>> ChildPersistentTriggers;

	//Get child triggers and remove these values in the SubLevelTriggerComponent
	{
		TArray<UTriggerEventChainBase*> EventInfos = SubLevelTriggerComponent->GetConstEventChains();

		for (auto EventInfo : EventInfos)
		{
			TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;

			EventInfo->GetChildTriggers(ChildTriggers);
				
			for (auto TriggerNode : ChildTriggers)
			{
				if(TriggerNode == nullptr || !TriggerNode.GetObject()->IsValidLowLevel())
					continue;

				if (!IsChildTriggerForComponent(TriggerNode, SubLevelTriggerComponent))
				{
					ChildPersistentTriggers.AddUnique(TriggerNode);
				}
			}
		}
	}

	for (auto ChildPersistentTrigger : ChildPersistentTriggers)
	{
		if(ChildPersistentTrigger == nullptr)
			continue;

		ULevel* ChildTriggerLevel = ChildPersistentTrigger.GetObject()->GetTypedOuter<ULevel>();

		//If the level which the child trigger is the same as the sub level then skip to process it
		if(ChildTriggerLevel == SubLevel)
			continue;

		for (auto ComponentMap : ComponentOuterMaps)
		{
			for (auto IT : ComponentMap.Value->GetObjectMaps())
			{
				if (IT.Key == ChildPersistentTrigger)
				{
					for (auto SubLevelChildTrigger : IT.Value)
					{
						if (IsChildTriggerForComponent(SubLevelChildTrigger, SubLevelTriggerComponent, true))
						{
							//Remove the child node from the original value as it should be replaced with new trigger
							SubLevelTriggerComponent->RemoveChildNode(ChildPersistentTrigger);

							SubLevelTriggerComponent->AddChildNode(SubLevelChildTrigger, UTriggerEventActorChain::StaticClass(), FGameplayTagContainer::EmptyContainer, true);
						}
					}
				}
			}
		}
	}
}

void FTriggerLevelModule::UpdateTriggerAttributes()
{
	for (auto MapIt : ComponentOuterMaps)
	{
		if(MapIt.Key == nullptr)
			continue;

		TSharedPtr<FTriggerObjectMapInfo>* SubLevelTriggersMap = ComponentOuterMaps.Find(MapIt.Key);

		if (SubLevelTriggersMap == nullptr)
		{
			UE_LOG(LogTriggerEditor, Warning, TEXT("The sub level: %s is not valid!"), *MapIt.Key->GetOuter()->GetName());
		}

		for (auto It : SubLevelTriggersMap->Get()->GetObjectMaps())
		{
			if(It.Value.Num() == 0)
				continue;

			for (auto SubTrigger : It.Value)
			{
				TArray<UTriggerTaskComponentBase*> TriggerComponents;

				SubTrigger->GetTriggerTaskComponents(TriggerComponents);

				for (auto Component : TriggerComponents)
				{
					//First remove the unused category
					RemoveUnUsedCategoryTag(Component);

					//Second make sure all new trigger have the correct child/parent info
					FixupChildInformation(Component);
				}
			}
		}
	}
}

bool FTriggerLevelModule::IsChildTriggerForComponent(const TScriptInterface<ITriggerInterface>& CheckedTrigger, UTriggerTaskComponentBase* BaseComponent, bool IncludeSubLevelTriggers)
{
	if(BaseComponent == nullptr || CheckedTrigger == nullptr)
		return false;

	const TArray<UTriggerEventChainBase*>& EventInfos = BaseComponent->GetConstEventChains();

	for (auto EventInfo : EventInfos)
	{
		if(EventInfo == nullptr)
			continue;

		TArray<TScriptInterface<ITriggerInterface>> ChildTriggers;
		EventInfo->GetChildTriggers(ChildTriggers);

		TScriptInterface<ITriggerInterface>* TriggerPtr = ChildTriggers.FindByPredicate([&](const TScriptInterface<ITriggerInterface>& OtherData)
		{
			if (CheckedTrigger == OtherData)
			{
				return true;
			}
			else if(IncludeSubLevelTriggers)
			{
				for (auto ComponentMap : ComponentOuterMaps)
				{
					for (auto IT : ComponentMap.Value->GetObjectMaps())
					{
						if (IT.Key == OtherData)
						{
							for (auto SubLevelTrigger : IT.Value)
							{
								if (SubLevelTrigger == CheckedTrigger)
									return true;
							}
						}
					}
				}

				return false;
			}
			else
			{
				return false;
			}
		});

		if (TriggerPtr != nullptr)
		{
			TArray<UTriggerTaskComponentBase*> LocalChildComponents;

			CheckedTrigger->GetTriggerTaskComponents(LocalChildComponents);

			for (auto LocalChildComponent : LocalChildComponents)
			{
				for (auto CategoryStyle : LocalChildComponent->GetCategories())
				{
					if(CategoryStyle == nullptr)
						continue;

					//The child component should have the weight category which is described at the event info
					if (!UTriggerCategoryBase::IsValidCategory(EventInfo->GetCategory()) || CategoryStyle->IsChildCategoryOfGameplayTagContainer(EventInfo->GetCategory()))
					{
						if (IsChildComponent(BaseComponent, LocalChildComponent, !IncludeSubLevelTriggers))
							return true;
					}
				}
			}
		}
	}

	return false;
}

bool FTriggerLevelModule::IsChildComponent(UTriggerTaskComponentBase* BaseComponent, UTriggerTaskComponentBase* CheckedComponent, bool IgnoreDifferentLevel)
{
	if(BaseComponent == nullptr || CheckedComponent == nullptr)
		return false;

	ULevel* BaseLevel = BaseComponent->GetTypedOuter<ULevel>();
	ULevel* CheckedLevel = CheckedComponent->GetTypedOuter<ULevel>();

	if (IgnoreDifferentLevel && BaseLevel != CheckedLevel)
	{
		return false;
	}

	for (auto ChildCategory : CheckedComponent->GetCategories())
	{
		for (auto Category : BaseComponent->GetCategories())
		{
			if (ChildCategory->IsChildCategoryOfTriggerCategory(Category))
			{
				return true;
			}
		}
	}
		
	return false;
}

bool FTriggerLevelModule::CheckSourceControlLogin()
{
	ISourceControlModule& SourceControlModule = ISourceControlModule::Get();

	ISourceControlProvider& SourceControlProvider = SourceControlModule.GetProvider();

	if (SourceControlModule.IsEnabled() && SourceControlProvider.IsAvailable())
	{
		if (SourceControlProvider.Login() == ECommandResult::Type::Failed)
		{
			FMessageDialog::Open(EAppMsgType::Ok, LOCTEXT( "Trigger_LoginFaild", "Please login in your source controll first"));

			return false;
		}
	}

	return true;
}


void FTriggerLevelModule::AddOrCheckOutFile() 
{
	
}


void FTriggerLevelModule::CheckInAllChangedFiles()
{

}

#undef LOCTEXT_NAMESPACE