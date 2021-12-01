#include "SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/BufferArchive.h"
#include "TriggerBlueprintLib.h"
#include "SaveGame/TriggerSaveGameManager.h"
#include "SaveGame/SaveGameConfig/SaveGameLocalFileData.h"
#include "SaveGame/TriggerSaveGameInterface.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"

FSaveGameObjectInfo FSaveGameObjectInfo::InvalidData;

USGS_SaveGameFlag::USGS_SaveGameFlag(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	SaveGameData.SetOwner(this);
}


void USGS_SaveGameFlag::SaveGameSerialize(USaveGameConfigBase* SaveConfigData)
{
	if (!IsConfigDataVaild(SaveConfigData))
		return;

	Super::SaveGameDeSerialize(SaveConfigData);

	USaveGameTArrayData* ConfigData = Cast<USaveGameTArrayData>(SaveConfigData);

	FMemoryWriter MemoryWriter = FMemoryWriter(ConfigData->Data, true);

	FTriggerSaveGameArchive AR(MemoryWriter);

	if (!SaveGameData.SerializeHeadInfo(AR, ConfigData))
		return;

	SaveGameData.SerializeStruct(AR, SaveConfigData);
}

void USGS_SaveGameFlag::PreSaveGameDeSerialize(USaveGameConfigBase* SaveConfigData)
{
	Super::PreSaveGameDeSerialize(SaveConfigData);
}

void USGS_SaveGameFlag::SaveGameDeSerialize(USaveGameConfigBase* SaveConfigData)
{
	if (!IsConfigDataVaild(SaveConfigData))
		return;

	Super::SaveGameDeSerialize(SaveConfigData);

	USaveGameTArrayData* ConfigData = Cast<USaveGameTArrayData>(SaveConfigData);

	FMemoryReader MemoryReader = FMemoryReader(ConfigData->Data, true);

	FTriggerSaveGameArchive AR(MemoryReader);

	if (!SaveGameData.SerializeHeadInfo(AR, ConfigData))
		return;

	SaveGameData.SerializeStruct(AR, SaveConfigData);
}

void USGS_SaveGameFlag::PostSaveGameDeSerialalize(USaveGameConfigBase* SaveConfigData)
{
	Super::PostSaveGameDeSerialalize(SaveConfigData);

	//Read the data secondly so that all the pointer which is refer to other object will not be none
	//SaveGameDeSerialize(SaveConfigData);
}

void USGS_SaveGameFlag::RegisterObject(UObject* Object)
{
	int Index = SaveGameData.FindOrAddObject(Object, false);
}

void USGS_SaveGameFlag::UnRegisterObject(UObject* Object)
{
	SaveGameData.RemoveObject(Object, false);
}

bool USGS_SaveGameFlag::IsConfigDataVaild(USaveGameConfigBase* SaveConfigData)
{
	if (SaveConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("SaveConfigData is none"));
		return false;
	}

	if (!SaveConfigData->IsVaildConfigData())
	{
		UE_LOG(LogTrigger, Warning, TEXT("SaveConfigData is not vaild %d, with name: %s, with Class:%s"), SaveConfigData, *SaveConfigData->GetName(), *SaveConfigData->GetClass()->GetName());
		return false;
	}

	USaveGameTArrayData* ConfigData = Cast<USaveGameTArrayData>(SaveConfigData);

	if (ConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("SGS_SaveGameFlag only support config data which inherieted from USaveGameTArrayData"));
		return false;
	}

	return true;
}

TSubclassOf<USaveGameStrategyBase> USGS_SaveGameFlag::PreporcessData(USaveGameConfigBase* SaveConfigData)
{
	if (SaveConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("SaveConfigData is none"));
		return nullptr;
	}

	if (!SaveConfigData->IsVaildConfigData())
	{
		UE_LOG(LogTrigger, Warning, TEXT("SaveConfigData is not vaild %d, with name: %s, with Class:%s"), SaveConfigData, *SaveConfigData->GetName(), *SaveConfigData->GetClass()->GetName());
		return nullptr;
	}

	USaveGameTArrayData* ConfigData = Cast<USaveGameTArrayData>(SaveConfigData);

	if (ConfigData == nullptr)
	{
		UE_LOG(LogTrigger, Warning, TEXT("SGS_SaveGameFlag only support config data which inherieted from USaveGameTArrayData"));
		return nullptr;
	}

	if (SaveGameData.PreprocessData(ConfigData->Data))
	{
		ConfigData->Data.Empty();

		FMemoryReader MemoryReader = FMemoryReader(ConfigData->Data, true);

		FTriggerSaveGameArchive AR(MemoryReader);

		if(!SaveGameData.SerializeHeadInfo(AR, ConfigData))
			return nullptr;

		return ConfigData->StrategyClass;
	}

	return nullptr;
}

int FSaveGameData::FindObject(UObject* Object, bool IsLoading)
{
	int Result = INDEX_NONE;

	auto FindObjectLambada = [&](TArray<FSaveGameObjectInfo>& ObjectInfos)->int {
		int LocalResult = INDEX_NONE;

		for (int i = 0; i < ObjectInfos.Num(); i++)
		{
			if (ObjectInfos[i].SavedObject == Object)
			{
				LocalResult = i;
				break;
			}
		}

		return LocalResult;
	};

	if (IsLoading)
	{
		Result = FindObjectLambada(LoadingData.ObjectsInfos);
	}
	else
	{
		Result = FindObjectLambada(SavingData.ObjectsInfos);
	}

	return Result;
}

int FSaveGameData::FindOrAddObject(UObject* Object, bool IsLoading)
{
	int Result = FindObject(Object, IsLoading);

	auto FindOrAddObjectLambada = [&](TArray<FSaveGameObjectInfo>& ObjectInfos) -> int {
		//First make sure all its outer is has been in ObjectsPendingToSave and their order should corresponding to object path
		{
			FindOrAddNewRootPath(Object, IsLoading);

			TArray<UObject*> Outers;
			Outers.Empty();

			UObject* Outer = Object->GetOuter();

			while (Outer != nullptr && Outer != Object->GetTypedOuter<ULevel>())
			{
				Outers.Add(Outer);

				Outer = Outer->GetOuter();
			}

			for (int i = Outers.Num() - 1; i >= 0; i--)
			{
				int LocalIndex = FindObject(Outers[i], IsLoading);

				if (LocalIndex == INDEX_NONE)
				{
					ObjectInfos.Add(FSaveGameObjectInfo(this, Outers[i]));
				}
			}
		}

		Result = ObjectInfos.Add(FSaveGameObjectInfo(this, Object));

		return Result;
	};

	if (Result == INDEX_NONE)
	{
		if (IsLoading)
		{
			Result = FindOrAddObjectLambada(LoadingData.ObjectsInfos);
		}
		else
		{
			Result = FindOrAddObjectLambada(SavingData.ObjectsInfos);
		}
	}

	return Result;
}

void FSaveGameData::RemoveObject(UObject* Object, bool IsLoading)
{
	int Result = FindObject(Object, IsLoading);

	auto RemoveObjectLambada = [&](TArray<FSaveGameObjectInfo>& ObjectInfos) {
		ObjectInfos.RemoveAt(Result);
	};

	if (Result != INDEX_NONE)
	{
		if (IsLoading)
		{
			RemoveObjectLambada(LoadingData.ObjectsInfos);
		}
		else
		{
			RemoveObjectLambada(SavingData.ObjectsInfos);
		}
	}
}

void FSaveGameData::SetOwner(USaveGameStrategyBase* InOwner)
{
	Owner = InOwner;
}

int FSaveGameData::FindOrAddNewRootPath(UObject* Object, bool IsLoading)
{
	int Result = INDEX_NONE;

	if (Object == nullptr)
		return Result;

	auto FindOrAddNewRootPathLambda = [&](TArray<FString>& RootPaths)->int {

		int LocalResult = INDEX_NONE;

		UObject* Outer = Object->GetTypedOuter<ULevel>();

		if (Outer != nullptr)
		{
			LocalResult = RootPaths.Find(Outer->GetPathName());

			if (Result == INDEX_NONE)
			{
				LocalResult = RootPaths.Add(Outer->GetPathName());
			}
		}

		return LocalResult;
	};

	if (IsLoading)
	{
		Result = FindOrAddNewRootPathLambda(LoadingData.RootPaths);
	}
	else
	{
		Result = FindOrAddNewRootPathLambda(SavingData.RootPaths);
	}

	return Result;
}

void FSaveGameData::GetRootOuter(TArray<UObject*>& Outers, UObject* Object)
{
	Outers.Empty();

	UObject* Outer = Object->GetOuter();

	TArray<int> Chain;

	TArray<UObject*> LocalOuters;
	LocalOuters.Empty();

	UObject* RootObject = Object->GetTypedOuter<ULevel>();

	while (Outer != RootObject && Outer != nullptr)
	{
		LocalOuters.Add(Outer);

		Outer = Outer->GetOuter();
	}

	for (int i = LocalOuters.Num() -1; i >= 0; i--)
	{
		Outers.Add(LocalOuters[i]);
	}
}

int FSaveGameData::FindOrAddNewClass(UClass* Class, bool IsLoading)
{
	auto FindOrAddNewClassLambda = [&](TArray<UClass*>& AllObjectClasses)->int {
		int Index = AllObjectClasses.Find(Class);

		if (Index == INDEX_NONE)
		{
			Index = AllObjectClasses.Add(Class);
		}

		return Index;
	};

	int Index = INDEX_NONE;

	if (IsLoading)
	{
		Index = FindOrAddNewClassLambda(LoadingData.AllObjectClasses);
	}
	else
	{
		Index = FindOrAddNewClassLambda(SavingData.AllObjectClasses);
	}

	return Index;
}

void FSaveGameData::SerializeStruct(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData)
{
	SeiralizeRootPaths(AR, SaveConfigData);
	SerializeClasses(AR, SaveConfigData);
	SerializeObject(AR, SaveConfigData);
}

bool FSaveGameData::SerializeHeadInfo(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData)
{
	UTriggerSaveGameManager* TriggerSaveGameManager = UTriggerBlueprintLib::GetTriggerSaveGameManager();

	if (TriggerSaveGameManager == nullptr || SaveConfigData == nullptr)
		return false;

	USaveGameSystemInfoBase* SystemInfo = TriggerSaveGameManager->SaveSystemInfo;

	if (SaveConfigData->SystemInfo != nullptr)
	{
		SystemInfo = SaveConfigData->SystemInfo;
	}

	if (SystemInfo == nullptr)
		return false;

	if (SaveConfigData->IsLoading)
	{
		SystemInfo->ReadHeadInfo(AR);
	}
	else
	{
		SystemInfo->WriteHeadInfo(AR);
	}

	AR << SaveConfigData->StrategyClass;

	return true;
}

bool FSaveGameData::PreprocessData(const TArray<uint8>& Data)
{
	return true;
}

void FSaveGameData::SeiralizeRootPaths(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData)
{
	if (AR.IsLoading())
	{
		AR << LoadingData.RootPaths;
	}
	else
	{
		AR << SavingData.RootPaths;
	}
}

void FSaveGameData::SerializeClasses(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData)
{
	if (AR.IsLoading())
	{
		AR << LoadingData.AllObjectClasses;
	}
	else
	{
		AR << SavingData.AllObjectClasses;
	}
}

void FSaveGameData::SerializeObject(FTriggerSaveGameArchive& AR, USaveGameConfigBase* SaveConfigData)
{
	//First I need to serialize the member of FSaveGameFlagDataInfo.And spawn new Object if it not exist at current runtime environment
	if (AR.IsLoading())
	{
		int LoadObjectCount = 0;

		AR << LoadObjectCount;

		LoadingData.ObjectsInfos.Empty();

		for (int i = 0; i < LoadObjectCount; i++)
		{
			LoadingData.ObjectsInfos.Add(FSaveGameObjectInfo(this));
			LoadingData.ObjectsInfos[i].SerializeStruct(AR);
		}
	}
	else
	{
		int SaveObjectCount = GetVaildObjectInfoNumber(false);

		AR << SaveObjectCount;

		for (int i = 0; i < SavingData.ObjectsInfos.Num(); i++)
		{
			SavingData.ObjectsInfos[i].SerializeStruct(AR);
		}
	}

	//Second serialize all object, include the relationship between these objects
	FSaveGameFlagDataInfo& Data = GetData(AR.IsLoading());

	for (int i = 0; i < Data.ObjectsInfos.Num(); i++)
	{
		if (Data.ObjectsInfos[i].isVaildData())
		{
			//Before serialize this object, notify the object the class that the save game system will fill ite member which have SaveGame flag
			if (Data.ObjectsInfos[i].SavedObject->GetClass()->ImplementsInterface(UTriggerSaveGameInterface::StaticClass()))
			{
				ITriggerSaveGameInterface* Interface = Cast<ITriggerSaveGameInterface>(Data.ObjectsInfos[i].SavedObject);

				if (Interface == nullptr)
				{
					ITriggerSaveGameInterface::Execute_OnStartToLoadGameData(Data.ObjectsInfos[i].SavedObject, SaveConfigData);
				}
				else
				{
					Interface->StartToLoadGameData(SaveConfigData);
				}
			}

			Data.ObjectsInfos[i].SavedObject->Serialize(AR);

			//After serialization I need to notify the target object that all its value has been serialized.
			if (Data.ObjectsInfos[i].SavedObject->GetClass()->ImplementsInterface(UTriggerSaveGameInterface::StaticClass()))
			{
				ITriggerSaveGameInterface* Interface = Cast<ITriggerSaveGameInterface>(Data.ObjectsInfos[i].SavedObject);

				if (Interface == nullptr)
				{
					ITriggerSaveGameInterface::Execute_OnStartToLoadGameData(Data.ObjectsInfos[i].SavedObject, SaveConfigData);
				}
				else
				{
					Interface->StartToLoadGameData(SaveConfigData);
				}
			}
		}
	}
}

UClass* FSaveGameData::GetObjectClass(int Index, bool IsLoading)
{
	auto GetObjectClassLambda = [&](const TArray<UClass*>& AllObjectClasses)->UClass* {
		if (AllObjectClasses.IsValidIndex(Index))
		{
			return AllObjectClasses[Index];
		}
		else
		{
			return nullptr;
		}
	};

	FSaveGameFlagDataInfo& Data = GetData(IsLoading);

	return GetObjectClassLambda(Data.AllObjectClasses);
}

const FSaveGameObjectInfo& FSaveGameData::GetObjectInfoByIndex(int Index, bool IsLoading)
{
	auto GetObjectInfoLambda = [&](const TArray<FSaveGameObjectInfo>& ObjectInfos)->const FSaveGameObjectInfo& {
		if (ObjectInfos.IsValidIndex(Index))
		{
			return ObjectInfos[Index];
		}
		else
		{
			return FSaveGameObjectInfo::InvalidData;
		}
	};

	FSaveGameFlagDataInfo& Data = GetData(IsLoading);

	return GetObjectInfoLambda(Data.ObjectsInfos);
}

int FSaveGameData::GetVaildObjectInfoNumber(bool IsLoading)
{
	FSaveGameFlagDataInfo& Data = GetData(IsLoading);

	int Count = 0;

	for (auto ObjectInfo : Data.ObjectsInfos)
	{
		if (ObjectInfo.isVaildData())
		{
			Count++;
		}
	}

	return Count;
}

FString FSaveGameData::GetRootPathByIndex(int Index, bool IsLoading)
{
	auto GetObjectInfoLambda = [&](const TArray<FString>& RootPaths)->FString {

		FString Result = TEXT("");
		if (RootPaths.IsValidIndex(Index))
		{
			Result = RootPaths[Index];
		}
		return Result;
	};

	FSaveGameFlagDataInfo& Data = GetData(IsLoading);

	return GetObjectInfoLambda(Data.RootPaths);
}

FSaveGameFlagDataInfo& FSaveGameData::GetData(bool IsLoading)
{
	if (IsLoading)
		return LoadingData;
	else
		return SavingData;
}

void FSaveGameObjectInfo::SerializeStruct(FTriggerSaveGameArchive& AR)
{
	/*
	* If this object has been destroyed then all its children should be invalid so just skip this object
	*/
	if (!isVaildData() 
		//When loading data this data is always invalid
		&& !AR.IsLoading())
		return;

	AR << ClassIndex;
	AR << RootPathIndex;
	AR << Name;
	AR << OuterChain;

	UClass* Class = OuterStruct->GetObjectClass(ClassIndex, AR.IsLoading());

	bool IsActor = Class != nullptr && Class->IsChildOf(AActor::StaticClass());

	//Only when the target is actor I need to save the transform as the Object has no transform
	if (IsActor == true)
	{
		AR << ActorTransfrom;
	}

	UObject* Object = FindObject<UObject>(nullptr, *GetObjectPath(AR.IsLoading()));

	//When current object is not exist then try to crate new one
	if (Object == nullptr)
	{
		/*
		* As all the outer has been sorted at the save state. Please see the SetObject function.
		* Here I assume all the data in the stored binary data is valid, and don't need to check weather the outer is exist.
		* If I processed to this object then all its outer should be exist.
		*/
		if (AR.IsLoading())
		{
			UClass* ObjectClass = OuterStruct->GetObjectClass(ClassIndex, AR.IsLoading());

			UObject* SpawnOuter = nullptr;

			//First try to find immediate outer of this object
			if (OuterChain.Num() == 0)
			{
				SpawnOuter = FindObject<UObject>(nullptr, *OuterStruct->GetRootPathByIndex(RootPathIndex, AR.IsLoading()));
			}
			else
			{
				const FSaveGameObjectInfo& ImmeditateOuterObjectInfo = OuterStruct->GetObjectInfoByIndex(OuterChain.Last(), true);

				SpawnOuter = ImmeditateOuterObjectInfo.SavedObject;
			}

			//When this is a actor then I need to spawn this actor to target world
			if (IsActor)
			{
				UWorld* World = GWorld;

				if (SpawnOuter != nullptr)
				{
					World = SpawnOuter->GetWorld();
				}

				Object = World->SpawnActor<AActor>(ObjectClass, ActorTransfrom);
			}
			else
			{
				if (SpawnOuter == nullptr)
				{
					SpawnOuter = GetTransientPackage();
				}

				Object = NewObject<UObject>(SpawnOuter, ObjectClass, *Name);
			}

			SavedObject = Object;
		}
		else
		{
			//UE_LOG(LogTrigger, Warning, TEXT("Can't find the object form ObjectPath:%s, Try to use SaveObject instead."), *ObjectPath);

			/*
			* If go into this pass, you should check your ObjectPath variable as the engine can not find the object according this variable.
			*/
			Object = SavedObject;
		}
	}
	else
	{
		SavedObject = Object;
	}

	HaveBeenSerialized = true;
}

void FSaveGameObjectInfo::SetObject(UObject* Object)
{
	if (OuterStruct == nullptr)
	{
		return;
	}

	SavedObject = Object;

	if (SavedObject != nullptr)
	{
		ClassIndex = OuterStruct->FindOrAddNewClass(SavedObject->GetClass(), false);

		RootPathIndex = OuterStruct->FindOrAddNewRootPath(SavedObject, false);

		/*
		* At this step I will add all its outer to the FSaveGameData::SavingData before this object.
		* So that when I deserialize the data I don't need to check weather the outer has been serialized.
		*/
		GenerateOuterChain(); 

		Name = *SavedObject->GetName();

		AActor* Actor = Cast<AActor>(SavedObject);

		ActorTransfrom = Actor != nullptr ? Actor->GetActorTransform() : FTransform::Identity;
	}
}

void FSaveGameObjectInfo::GenerateOuterChain()
{
	if (OuterStruct == nullptr && SavedObject == nullptr)
	{
		return;
	}

	OuterChain.Empty();

	UObject* Outer = SavedObject->GetOuter();

	TArray<int> Chain;

	TArray<UObject*> Outers;
	OuterStruct->GetRootOuter(Outers, SavedObject);

	for (int i = 0; i < Outers.Num(); i++)
	{
		Chain.Add(OuterStruct->FindOrAddObject(Outers[i], false));
	}

	for (int i = Chain.Num() - 1; i >= 0; i--)
	{
		OuterChain.Add(Chain[i]);
	}
}

FString FSaveGameObjectInfo::GetObjectPath(bool IsLoading)
{
	auto GetObjectPathLambda = [&](const TArray<FString>& RootPaths, const TArray<FSaveGameObjectInfo>& ObjectInfos) ->FString {
		FString Result = RootPaths[RootPathIndex] + TEXT(".");

		for (int i = 0; i < OuterChain.Num(); i++)
		{
			Result += ObjectInfos[OuterChain[i]].Name + TEXT(".");
		}

		Result += Name;

		return Result;
	};

	FString Result = TEXT("");

	FSaveGameFlagDataInfo& Data = OuterStruct->GetData(IsLoading);

	Result = GetObjectPathLambda(Data.RootPaths, Data.ObjectsInfos);
	 
	return Result;
}

bool FSaveGameObjectInfo::isVaildData() const
{
	return SavedObject != nullptr && SavedObject->IsValidLowLevel();
}