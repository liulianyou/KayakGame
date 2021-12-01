// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSGS_SaveGameFlag() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameFlagDataInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSaveGameObjectInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USGS_SaveGameFlag_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USGS_SaveGameFlag();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameStrategyBase();
// End Cross Module References
class UScriptStruct* FSaveGameData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SaveGameData"), sizeof(FSaveGameData), Get_Z_Construct_UScriptStruct_FSaveGameData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSaveGameData>()
{
	return FSaveGameData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameData(FSaveGameData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SaveGameData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameData()
	{
		UScriptStruct::DeferCppStructOps<FSaveGameData>(FName(TEXT("SaveGameData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameData;
	struct Z_Construct_UScriptStruct_FSaveGameData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SaveGameData",
		sizeof(FSaveGameData),
		alignof(FSaveGameData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameData"), sizeof(FSaveGameData), Get_Z_Construct_UScriptStruct_FSaveGameData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameData_Hash() { return 1627964700U; }
class UScriptStruct* FSaveGameFlagDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SaveGameFlagDataInfo"), sizeof(FSaveGameFlagDataInfo), Get_Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSaveGameFlagDataInfo>()
{
	return FSaveGameFlagDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameFlagDataInfo(FSaveGameFlagDataInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SaveGameFlagDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameFlagDataInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameFlagDataInfo()
	{
		UScriptStruct::DeferCppStructOps<FSaveGameFlagDataInfo>(FName(TEXT("SaveGameFlagDataInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameFlagDataInfo;
	struct Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjectsInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsInfos;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AllObjectClasses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllObjectClasses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllObjectClasses;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RootPaths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RootPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RootPaths;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The information for the data that this strategy used\n*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "ToolTip", "* The information for the data that this strategy used" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameFlagDataInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos_Inner = { "ObjectsInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSaveGameObjectInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "//Store all information for all objects\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "ToolTip", "Store all information for all objects" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos = { "ObjectsInfos", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameFlagDataInfo, ObjectsInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses_Inner = { "AllObjectClasses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "//All classes the used for the object in the ObjectsInfo\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "ToolTip", "All classes the used for the object in the ObjectsInfo" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses = { "AllObjectClasses", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameFlagDataInfo, AllObjectClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths_Inner = { "RootPaths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Root path should never be changed at each runtime environment.\n\x09* Mostly it is stop to the ULevel type.\n\x09* The default root path should looks like: /Game/Maps/NewWorld.NewWorld:PersistentLevel\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "ToolTip", "* Root path should never be changed at each runtime environment.\n* Mostly it is stop to the ULevel type.\n* The default root path should looks like: /Game/Maps/NewWorld.NewWorld:PersistentLevel" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths = { "RootPaths", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameFlagDataInfo, RootPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_ObjectsInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_AllObjectClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::NewProp_RootPaths,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SaveGameFlagDataInfo",
		sizeof(FSaveGameFlagDataInfo),
		alignof(FSaveGameFlagDataInfo),
		Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameFlagDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameFlagDataInfo"), sizeof(FSaveGameFlagDataInfo), Get_Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameFlagDataInfo_Hash() { return 1843265424U; }
class UScriptStruct* FSaveGameObjectInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSaveGameObjectInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveGameObjectInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SaveGameObjectInfo"), sizeof(FSaveGameObjectInfo), Get_Z_Construct_UScriptStruct_FSaveGameObjectInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSaveGameObjectInfo>()
{
	return FSaveGameObjectInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveGameObjectInfo(FSaveGameObjectInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SaveGameObjectInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameObjectInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameObjectInfo()
	{
		UScriptStruct::DeferCppStructOps<FSaveGameObjectInfo>(FName(TEXT("SaveGameObjectInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSaveGameObjectInfo;
	struct Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SavedObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SavedObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveGameObjectInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::NewProp_SavedObject_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::NewProp_SavedObject = { "SavedObject", nullptr, (EPropertyFlags)0x0010000000002005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveGameObjectInfo, SavedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::NewProp_SavedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::NewProp_SavedObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::NewProp_SavedObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SaveGameObjectInfo",
		sizeof(FSaveGameObjectInfo),
		alignof(FSaveGameObjectInfo),
		Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveGameObjectInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveGameObjectInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveGameObjectInfo"), sizeof(FSaveGameObjectInfo), Get_Z_Construct_UScriptStruct_FSaveGameObjectInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveGameObjectInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveGameObjectInfo_Hash() { return 3411515698U; }
	void USGS_SaveGameFlag::StaticRegisterNativesUSGS_SaveGameFlag()
	{
	}
	UClass* Z_Construct_UClass_USGS_SaveGameFlag_NoRegister()
	{
		return USGS_SaveGameFlag::StaticClass();
	}
	struct Z_Construct_UClass_USGS_SaveGameFlag_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SaveGameData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SaveGameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USGS_SaveGameFlag_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameStrategyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGS_SaveGameFlag_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n* This class only used to save the property which have SaveGame meta flat in its UPROERPTY definition.\n* such as UPROERTY(SaveGame), or variable in BP which is toggled the SaveGame in the property details panel\n*/" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "ToolTip", "* This class only used to save the property which have SaveGame meta flat in its UPROERPTY definition.\n* such as UPROERTY(SaveGame), or variable in BP which is toggled the SaveGame in the property details panel" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USGS_SaveGameFlag_Statics::NewProp_SaveGameData_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* The data this strategy will hold.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SGS_SaveGameFlag.h" },
		{ "ToolTip", "* The data this strategy will hold." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USGS_SaveGameFlag_Statics::NewProp_SaveGameData = { "SaveGameData", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USGS_SaveGameFlag, SaveGameData), Z_Construct_UScriptStruct_FSaveGameData, METADATA_PARAMS(Z_Construct_UClass_USGS_SaveGameFlag_Statics::NewProp_SaveGameData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USGS_SaveGameFlag_Statics::NewProp_SaveGameData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGS_SaveGameFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGS_SaveGameFlag_Statics::NewProp_SaveGameData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USGS_SaveGameFlag_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGS_SaveGameFlag>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USGS_SaveGameFlag_Statics::ClassParams = {
		&USGS_SaveGameFlag::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USGS_SaveGameFlag_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USGS_SaveGameFlag_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USGS_SaveGameFlag_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USGS_SaveGameFlag_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USGS_SaveGameFlag()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USGS_SaveGameFlag_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USGS_SaveGameFlag, 3414396755);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USGS_SaveGameFlag>()
	{
		return USGS_SaveGameFlag::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USGS_SaveGameFlag(Z_Construct_UClass_USGS_SaveGameFlag, &USGS_SaveGameFlag::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USGS_SaveGameFlag"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USGS_SaveGameFlag);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
