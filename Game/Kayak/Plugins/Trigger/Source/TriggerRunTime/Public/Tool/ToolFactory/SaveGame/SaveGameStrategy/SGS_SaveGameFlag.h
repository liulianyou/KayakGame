#pragma once

/*
* Author:	Liulianyou
* Time:		2021/4/14
* Purpose:	This class use the property which has SaveGame flag
*			This class will interact all the hierarchy of object's path up to the root, and saved all the object in the path
* 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "Serialization/ObjectAndNameAsStringProxyArchive.h"

#include "SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"

#include "SGS_SaveGameFlag.generated.h"

class AActor;

struct FTriggerSaveGameArchive : public FObjectAndNameAsStringProxyArchive
{
	FTriggerSaveGameArchive(FArchive& InInnerArchive)
		: FObjectAndNameAsStringProxyArchive(InInnerArchive, true)
	{
		//Make this archive only concern on the property which have SaveGame meta flag
		ArIsSaveGame = true;
		/*
		* useful when saving / loading variables without resetting the level.
		* Serialize variables even if weren't modified and maintain their default values.
		*/
		ArNoDelta = true;
	}
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSaveGameObjectInfo
{
	GENERATED_BODY()

public:

	FSaveGameObjectInfo() {}

	FSaveGameObjectInfo(FSaveGameData* Outer, UObject* Object) :
		OuterStruct(Outer)
	{
		SetObject(Object);
	}

	FSaveGameObjectInfo(FSaveGameData* Outer) :
		SavedObject(nullptr),
		OuterStruct(Outer)
	{

	}

	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	UObject* SavedObject = nullptr;

	//The index of the classes in the FSaveGameData::AllObjectClasses
	int ClassIndex = INDEX_NONE;

	//The root path of this object
	int RootPathIndex = INDEX_NONE;

	//The name of this object
	FString Name;

	//the order of outers in the FSaveGameData::ObjectsPendingToSave
	TArray<int> OuterChain;

	//The transform of this object only work when this object is a actor
	FTransform ActorTransfrom;

	/*
	* The function in this scope will only be used at saving state
	*/
#pragma region SaveFunction
	/*
	* This function should only be used at save state
	*/
	void SetObject(UObject* Object);

	/*
	* Generate the outer chain order of the target saved object.
	* In this function I will add the outer to the FSaveGameData::SavingData::ObjectsInfos if it has not been registed.
	* This function should only work at saving state.
	*/
	void GenerateOuterChain();
#pragma endregion SaveFunction

	bool isVaildData() const;

	//Get the path of this Object
	FString GetObjectPath( bool IsLoading );

	void SetOutStruct(FSaveGameData* Owner) { OuterStruct = Owner; }

public:
	void SerializeStruct(FTriggerSaveGameArchive& AR);

protected:
	UObject* GetImmediateVaildObject(const FString& ObjectPath);

public:
	static FSaveGameObjectInfo InvalidData;

private:
	//The outer struct which hold this struct
	FSaveGameData* OuterStruct = nullptr;

	//Flag to check weather this object have been serialized.
	bool HaveBeenSerialized = false;
};

/*
* The information for the data that this strategy used
*/
USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSaveGameFlagDataInfo
{
	GENERATED_BODY()

public:

	//Store all information for all objects
	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	TArray<FSaveGameObjectInfo> ObjectsInfos;

	//All classes the used for the object in the ObjectsInfo
	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	TArray<UClass*> AllObjectClasses;

	/*
	* Root path should never be changed at each runtime environment.
	* Mostly it is stop to the ULevel type.
	* The default root path should looks like: /Game/Maps/NewWorld.NewWorld:PersistentLevel
	*/
	UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	TArray<FString> RootPaths;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FSaveGameData
{
	GENERATED_BODY()

public:

	//The data that used for saving
	//UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	FSaveGameFlagDataInfo SavingData;

	//The data that used for loading
	//UPROPERTY(BlueprintReadWrite, Transient, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	FSaveGameFlagDataInfo LoadingData;

public:

	void SetOwner(USaveGameStrategyBase* Owner);

	void SerializeStruct(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData);

	int FindObject(UObject* Object, bool IsLoading);
	int FindOrAddObject(UObject* Object, bool IsLoading);
	void RemoveObject(UObject* Object, bool IsLoading);

	int FindOrAddNewRootPath(UObject* Object, bool IsLoading);

	//Try to find the target class in the AllObjectClasses pool
	int FindOrAddNewClass(UClass*, bool IsLoading);

	static void GetRootOuter( TArray<UObject*>& Outers, UObject* Object );

	/*
	* Get the number of valid object information.
	*/
	int GetVaildObjectInfoNumber(bool IsLoading);

	UClass* GetObjectClass(int Index, bool IsLoading);
	const FSaveGameObjectInfo& GetObjectInfoByIndex( int Index, bool IsLoading );
	FString GetRootPathByIndex( int Index, bool IsLoading );

	//Get the data according the flag IsLoading
	FSaveGameFlagDataInfo& GetData( bool IsLoading );

	/*
	* Check weather the target data can be processed by this data struct
	*/
	bool PreprocessData(const TArray<uint8>& Data);

	bool SerializeHeadInfo(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData);

protected:
	void SeiralizeRootPaths(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData);
	void SerializeClasses(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData);
	void SerializeObject(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData);

private:
	USaveGameStrategyBase* Owner;
};


/*
* This class only used to save the property which have SaveGame meta flat in its UPROERPTY definition.
* such as UPROERTY(SaveGame), or variable in BP which is toggled the SaveGame in the property details panel
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|SaveGame")
class TRIGGERRUNTIME_API USGS_SaveGameFlag : public USaveGameStrategyBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override SaveGameStrategyBase
	virtual void RegisterObject(UObject* Object) override;
	virtual void UnRegisterObject(UObject* Object) override;
	virtual TSubclassOf<USaveGameStrategyBase> PreporcessData(USaveGameConfigBase* SaveConfigData) override;
	virtual void SaveGameSerialize(USaveGameConfigBase* SaveConfigData) override;
	virtual void PreSaveGameDeSerialize(USaveGameConfigBase* SaveConfigData) override;
	virtual void SaveGameDeSerialize(USaveGameConfigBase* SaveConfigData) override;
	virtual void PostSaveGameDeSerialalize(USaveGameConfigBase* SaveConfigData) override;
	//Override SaveGameStrategyBase

protected:

	bool IsConfigDataVaild(USaveGameConfigBase* SaveConfigData);

public:

	/*
	* The data this strategy will hold.
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "TriggerRuntime|SaveGame")
	FSaveGameData SaveGameData;

};