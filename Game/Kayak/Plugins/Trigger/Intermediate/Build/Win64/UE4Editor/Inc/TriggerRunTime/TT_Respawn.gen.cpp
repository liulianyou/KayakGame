// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/RespawnTask/TT_Respawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_Respawn() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FToggledPawnInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRespawnInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FControllerData();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Respawn_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Respawn();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ERespawnType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnDataBase_NoRegister();
// End Cross Module References
class UScriptStruct* FToggledPawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FToggledPawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FToggledPawnInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ToggledPawnInfo"), sizeof(FToggledPawnInfo), Get_Z_Construct_UScriptStruct_FToggledPawnInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FToggledPawnInfo>()
{
	return FToggledPawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FToggledPawnInfo(FToggledPawnInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ToggledPawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFToggledPawnInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFToggledPawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FToggledPawnInfo>(FName(TEXT("ToggledPawnInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFToggledPawnInfo;
	struct Z_Construct_UScriptStruct_FToggledPawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FToggledPawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FToggledPawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FToggledPawnInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FToggledPawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ToggledPawnInfo",
		sizeof(FToggledPawnInfo),
		alignof(FToggledPawnInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FToggledPawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FToggledPawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FToggledPawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FToggledPawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ToggledPawnInfo"), sizeof(FToggledPawnInfo), Get_Z_Construct_UScriptStruct_FToggledPawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FToggledPawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FToggledPawnInfo_Hash() { return 1017662177U; }
class UScriptStruct* FRespawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRespawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRespawnInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RespawnInfo"), sizeof(FRespawnInfo), Get_Z_Construct_UScriptStruct_FRespawnInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRespawnInfo>()
{
	return FRespawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRespawnInfo(FRespawnInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RespawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FRespawnInfo>(FName(TEXT("RespawnInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnInfo;
	struct Z_Construct_UScriptStruct_FRespawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControllerData_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ControllerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRespawnInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_ValueProp = { "ControllerData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FControllerData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_Key_KeyProp = { "ControllerData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData = { "ControllerData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnInfo, ControllerData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRespawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnInfo_Statics::NewProp_ControllerData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRespawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RespawnInfo",
		sizeof(FRespawnInfo),
		alignof(FRespawnInfo),
		Z_Construct_UScriptStruct_FRespawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRespawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRespawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RespawnInfo"), sizeof(FRespawnInfo), Get_Z_Construct_UScriptStruct_FRespawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRespawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRespawnInfo_Hash() { return 1825214530U; }
class UScriptStruct* FControllerData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FControllerData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FControllerData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ControllerData"), sizeof(FControllerData), Get_Z_Construct_UScriptStruct_FControllerData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FControllerData>()
{
	return FControllerData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FControllerData(FControllerData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ControllerData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFControllerData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFControllerData()
	{
		UScriptStruct::DeferCppStructOps<FControllerData>(FName(TEXT("ControllerData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFControllerData;
	struct Z_Construct_UScriptStruct_FControllerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControllerData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControllerData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData_Inner = { "CharacterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FControllerData, CharacterData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FControllerData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FControllerData_Statics::NewProp_CharacterData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControllerData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ControllerData",
		sizeof(FControllerData),
		alignof(FControllerData),
		Z_Construct_UScriptStruct_FControllerData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControllerData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControllerData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControllerData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FControllerData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ControllerData"), sizeof(FControllerData), Get_Z_Construct_UScriptStruct_FControllerData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FControllerData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FControllerData_Hash() { return 4012960786U; }
class UScriptStruct* FCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("CharacterData"), sizeof(FCharacterData), Get_Z_Construct_UScriptStruct_FCharacterData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FCharacterData>()
{
	return FCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterData(FCharacterData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("CharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFCharacterData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFCharacterData()
	{
		UScriptStruct::DeferCppStructOps<FCharacterData>(FName(TEXT("CharacterData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFCharacterData;
	struct Z_Construct_UScriptStruct_FCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnedCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The pawn class that the player controller processed\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "The pawn class that the player controller processed" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterData, PawnClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_PawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_SpawnedCount_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Total spawned time\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "Total spawned time" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_SpawnedCount = { "SpawnedCount", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterData, SpawnedCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_SpawnedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_SpawnedCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_PawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterData_Statics::NewProp_SpawnedCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"CharacterData",
		sizeof(FCharacterData),
		alignof(FCharacterData),
		Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterData"), sizeof(FCharacterData), Get_Z_Construct_UScriptStruct_FCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterData_Hash() { return 2788098199U; }
	DEFINE_FUNCTION(UTT_Respawn::execDeferredPawnDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeferredPawnDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Respawn::execActorDestroyedEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorDestroyedEvent(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Respawn::execPawnDeadEvent)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PawnDeadEvent(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Respawn::execSetCharacterTransform)
	{
		P_GET_OBJECT(ACharacter,Z_Param_Character);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterTransform_Implementation(Z_Param_Character,Z_Param_Transform);
		P_NATIVE_END;
	}
	static FName NAME_UTT_Respawn_SetCharacterTransform = FName(TEXT("SetCharacterTransform"));
	void UTT_Respawn::SetCharacterTransform(ACharacter* Character, FTransform Transform)
	{
		TT_Respawn_eventSetCharacterTransform_Parms Parms;
		Parms.Character=Character;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_UTT_Respawn_SetCharacterTransform),&Parms);
	}
	void UTT_Respawn::StaticRegisterNativesUTT_Respawn()
	{
		UClass* Class = UTT_Respawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorDestroyedEvent", &UTT_Respawn::execActorDestroyedEvent },
			{ "DeferredPawnDestroyed", &UTT_Respawn::execDeferredPawnDestroyed },
			{ "PawnDeadEvent", &UTT_Respawn::execPawnDeadEvent },
			{ "SetCharacterTransform", &UTT_Respawn::execSetCharacterTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics
	{
		struct TT_Respawn_eventActorDestroyedEvent_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Respawn_eventActorDestroyedEvent_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//If the target actor is destroyed and don't want to respawn it then should invoke this function\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "If the target actor is destroyed and don't want to respawn it then should invoke this function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Respawn, nullptr, "ActorDestroyedEvent", nullptr, nullptr, sizeof(TT_Respawn_eventActorDestroyedEvent_Parms), Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics
	{
		struct TT_Respawn_eventDeferredPawnDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Respawn_eventDeferredPawnDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when deferred pawn is destroyed\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "Called when deferred pawn is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Respawn, nullptr, "DeferredPawnDestroyed", nullptr, nullptr, sizeof(TT_Respawn_eventDeferredPawnDestroyed_Parms), Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics
	{
		struct TT_Respawn_eventPawnDeadEvent_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Respawn_eventPawnDeadEvent_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* The different between the PawnDeadEvent && ActorDestroyedEvent is PawnDeadEvent will try to respawn the target actor, but ActorDestroyedEvent not\n\x09*///Called when on pawn is dead and try to respawn it.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "* The different between the PawnDeadEvent && ActorDestroyedEvent is PawnDeadEvent will try to respawn the target actor, but ActorDestroyedEvent not\n//Called when on pawn is dead and try to respawn it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Respawn, nullptr, "PawnDeadEvent", nullptr, nullptr, sizeof(TT_Respawn_eventPawnDeadEvent_Parms), Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Respawn_eventSetCharacterTransform_Parms, Character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Respawn_eventSetCharacterTransform_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::NewProp_Character,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Set the target character's transform form RPC to avoid the net delay \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "* Set the target character's transform form RPC to avoid the net delay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Respawn, nullptr, "SetCharacterTransform", nullptr, nullptr, sizeof(TT_Respawn_eventSetCharacterTransform_Parms), Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00884CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_Respawn_NoRegister()
	{
		return UTT_Respawn::StaticClass();
	}
	struct Z_Construct_UClass_UTT_Respawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RespawnInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ToggledPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToggledPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToggledPawns;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RespawnType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RespawnType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnTemplateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnTemplateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_Respawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_Respawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_Respawn_ActorDestroyedEvent, "ActorDestroyedEvent" }, // 528324385
		{ &Z_Construct_UFunction_UTT_Respawn_DeferredPawnDestroyed, "DeferredPawnDestroyed" }, // 2857853737
		{ &Z_Construct_UFunction_UTT_Respawn_PawnDeadEvent, "PawnDeadEvent" }, // 1371357888
		{ &Z_Construct_UFunction_UTT_Respawn_SetCharacterTransform, "SetCharacterTransform" }, // 2137168315
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Respawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnInfo_MetaData[] = {
		{ "Comment", "//Current respawn information\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "Current respawn information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnInfo = { "RespawnInfo", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Respawn, RespawnInfo), Z_Construct_UScriptStruct_FRespawnInfo, METADATA_PARAMS(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns_Inner = { "ToggledPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FToggledPawnInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns_MetaData[] = {
		{ "Comment", "//The pawns who toggle this trigger which will \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "The pawns who toggle this trigger which will" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns = { "ToggledPawns", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Respawn, ToggledPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType_MetaData[] = {
		{ "Category", "TT_Respawn" },
		{ "Comment", "//The type to spawn new pawn\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "The type to spawn new pawn" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType = { "RespawnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Respawn, RespawnType), Z_Construct_UEnum_TriggerRunTime_ERespawnType, METADATA_PARAMS(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnTemplateData_MetaData[] = {
		{ "Category", "TT_Respawn" },
		{ "Comment", "//All spawn point informations\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/TT_Respawn.h" },
		{ "ToolTip", "All spawn point informations" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnTemplateData = { "RespawnTemplateData", nullptr, (EPropertyFlags)0x001200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Respawn, RespawnTemplateData), Z_Construct_UClass_URespawnDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnTemplateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnTemplateData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_Respawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Respawn_Statics::NewProp_ToggledPawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Respawn_Statics::NewProp_RespawnTemplateData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_Respawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_Respawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_Respawn_Statics::ClassParams = {
		&UTT_Respawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_Respawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Respawn_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_Respawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Respawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_Respawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_Respawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_Respawn, 1825834550);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_Respawn>()
	{
		return UTT_Respawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_Respawn(Z_Construct_UClass_UTT_Respawn, &UTT_Respawn::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_Respawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_Respawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
