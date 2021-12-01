#pragma once

/*
* Author:	Liulianyou
* Time:		2020/6/30
* Purpose:	This file is the main entry to access the operations to manipulate the information for the trigger level
*/

#include "CoreMinimal.h"
#include "Triggerinterface.h"
#include "UObject/ScriptInterface.h"

#include "Templates/SharedPointer.h"

class ULevel;
class ULevelStreaming;
class UTriggerTaskComponentBase;

template<class ValueType>
struct TTriggerInterfaceKeyFuncs : public TDefaultMapKeyFuncs<TScriptInterface<ITriggerInterface>, ValueType, false>
{
	//Create new hash for TScriptInterface<ITriggerInterface>
	static FORCEINLINE_DEBUGGABLE uint32 GetKeyHash(KeyInitType Key)
	{
		return GetTypeHash(Key.GetObject());
	}
};

struct FTriggerObjectMapInfo : public TSharedFromThis<FTriggerObjectMapInfo>
{

public:

	FTriggerObjectMapInfo();
	~FTriggerObjectMapInfo();

	typedef TMap<TScriptInterface<ITriggerInterface>, TArray<TScriptInterface<ITriggerInterface>>, FDefaultSetAllocator, TTriggerInterfaceKeyFuncs<TArray<TScriptInterface<ITriggerInterface>>>> ObjectMapType;

	//Clear the map info
	void Clear();

	/*
	* Get the object of the outer of the target component
	*
	* @param PersistentTaskComponet	The object which is need to check weather it have one copy at the destination level.						
	* @param OutTriggers the sublevel triggers correspond to the target persistent task component
	*/
	void GetMappedImmediateTriggerObject(UTriggerTaskComponentBase* PersistentTaskComponet, TArray<TScriptInterface<ITriggerInterface>>& OutTriggers);

	/*
	* Add new map
	* 
	* @param PersistentObject should never be null as it is the key of the map
	* @param SubLevelObject can be null, but take care when you want to use null ptr to replace the valid value
	*/
	void AddNewMap(const TScriptInterface<ITriggerInterface>& PersistentObject, const TScriptInterface<ITriggerInterface>& SubLevelObject );

	/*
	* It will remove all object in the maps which is equal to the parameter
	*/
	void RemoveObject(TScriptInterface<ITriggerInterface> TriggerObject );

	ObjectMapType GetObjectMaps()  {return ObjectMaps;}

private:


	/*
	* The key is the object which is at the Persistent Trigger Level
	* The value is the object which is at the Sub Trigger Level
	* Both of the key and value should be the immediate outer of the trigger task component
	*/
	ObjectMapType ObjectMaps;

};


class FTriggerLevelModule : public TSharedFromThis<FTriggerLevelModule>
{
public:
	FTriggerLevelModule();
	~FTriggerLevelModule();
public:

	void Initialize();
	void Destroyed();

public:

	/*
	* Clear local immediate values
	*/
	void Clear();

	/*
	* Get current persistent trigger level in current editor world
	*/
	void GetTriggerLevels(TArray<ULevel*>& PsersistentLevels, TArray<ULevel*>& SubLeveles);

	/*
	* Remove the trigger levels from current world
	* 
	* @param DeleteResourceAsset true means the resource asset for the level will be deleted
	*/
	bool RemoveTriggerLevels( TArray<ULevel*>& Levels, bool DeleteResourceAsset = true );

	/*
	* Delete the sub level asset at disk
	*/
	void DeleteTriggerLevelAsset( const FString& LevelPackageName);

	/*
	* Generate new SubLevels for the persistent level.
	* When the new level generated there are new level assets are created
	* 
	* #return The new levels that generated
	*/
	void GenerateNewTriggerSubLevel( const TArray<ULevel*>& PersistenTriggerLevels, TArray<ULevel*>& OuterSubLevels);

	/*
	* Process all trigger levels.
	* This function will fix up the reference of all triggers, and will update some attributes of them
	*/
	void ProcessTriggerLevels( const TArray<ULevel*>& PersistenTriggerLevels, const TArray<ULevel*>& SubLevels );

protected:

	/*
	* Make sure the source controller have been connect successfully if it exist
	*/
	bool CheckSourceControlLogin();

	/*
	* If the target file is not exist on the deport then add it, if it have already at the depot then just check out it
	*/
	void AddOrCheckOutFile();

	/*
	* Update load all changed files to the deport
	*/
	void CheckInAllChangedFiles();

	/*
	* Get new trigger map path, this path is a long package path
	*/
	FString GetNewTriggerMapPackagePath(const FString& PersistentLevelPath);

	/*
	* Check weather the target map asset is exist
	*/
	bool IsTriggerMapAssetExist( const FString& SubLevelPackagePath, const FString& SubLevelName );

	/*
	* Find the asset with the asset name in the root path, if it not exist, then create new one
	*/
	UObject* CreateNewTriggerLevelAsset( const FString& LongPackagePath, const FString& NewMpaName);

	/*
	* This function will make sure there is one directory at disk for the package directory
	*/
	void EnsurePackagePathDirectoryExist(const FString& LongPackagePath);

	/*
	* Find the sublevel in the presistentLevel's world if not find then try to create new level to it
	*/
	ULevelStreaming* FindOrCreateNewLevelStreaming( ULevel* PersistentLevel, const FString& SubLevelName );

	/*
	* Copy the triggers in the persistent trigger level to the target sub level.
	* 
	* @param TaskComponent the task component which should move to the sublevel
	* @param SubLevel	The new level for the task component
	* 
	* #return the new component at new level
	*/
	UTriggerTaskComponentBase* CopyTriggerComponentToSublevels(UTriggerTaskComponentBase* TaskComponent, ULevelStreaming* SubLevel, TScriptInterface<ITriggerInterface>& OuterNewTrigger );

	/*
	* Try to save the trigger sub levels
	*/
	void TryToSaveSubLevels( const TArray<ULevelStreaming*>& Levels );

	void TryToSaveLevel( ULevel* Level );

	/*
	* Get the mapped trigger which have the correspond component of PersistentComponent in the target trigger level
	*/
	TScriptInterface<ITriggerInterface> FindMappedNewTriggerObject(ULevel* NewSubLevel, UTriggerTaskComponentBase* PersistentComponent, bool AddNewLevelMap = true);

private:
	
	/*
	* Create new trigger to the sub level.
	* 
	* @param PersistenTaskComponent the task component which is at the persistent level
	* @param OwnerSubLevel the sub level which will own the new trigger
	*/
	UObject* CreateNewTrigger( UTriggerTaskComponentBase* PersistenTaskComponent, ULevel* OwnerSubLevel);

	/*
	* Find weather there is the same component ID in the new trigger with the PersistentTaskComponent
	* 
	* @param PersistenTaskComponent			The task component at the persistent level
	* @param NewTriggerTaskComponentOuter	The  outer of new trigger task component which is the search range for the new task component which have the same ComponentID with the PersistentTaskComponent
	*/
	UTriggerTaskComponentBase* FindOrCreateNewTriggerTaskComponent(UTriggerTaskComponentBase* PersistenTaskComponent, const TScriptInterface<ITriggerInterface>& NewTriggerObject);

	/*
	* Update the attributes in the target component, so that unused data can be removed.
	* As I will copy the trigger in the persistent trigger level to create new one in the new sub trigger level
	* This will copy all values in the persistent trigger level include no used value.
	*/
	void UpdateTriggerAttributes();

	/*
	* Remove used category tag in the new triggers.
	* As the new trigger will be created which will copy all values in original trigger, This will cause the new trigger to hold a lot of unmatched information
	*/
	void RemoveUnUsedCategoryTag(UTriggerTaskComponentBase* Component);

	/*
	* When new trigger created at the sub levels the child information (also parent information) will also be coyed so I need to fix them up the new value if needed
	*/
	void FixupChildInformation(UTriggerTaskComponentBase* SubLevelTriggerComponent);

	/*
	* check weather the checked trigger is the child node for the base component
	* 
	* @param IncludeSubLevelTriggers check weather I can expand the serach range to the triggers in the sub level
	*/
	bool IsChildTriggerForComponent(const TScriptInterface<ITriggerInterface>& CheckedTrigger, UTriggerTaskComponentBase* BaseComponent, bool IncludeSubLevelTriggers = false);

	/*
	* Try to check weather the checked component is the child component of Base Component
	* 
	* @param IgnoreDifferentLevel true means when the two components at different level it will always return false
	*/
	bool IsChildComponent(UTriggerTaskComponentBase* BaseComponent, UTriggerTaskComponentBase* CheckedComponent, bool IgnoreDifferentLevel);

private:

	/*
	* The immediate outer of components between the persistent trigger level and the sub level
	* The key is the sub level
	* The value is actual map info about the outers
	*/
	TMap< ULevel*, TSharedPtr<FTriggerObjectMapInfo>> ComponentOuterMaps;
};