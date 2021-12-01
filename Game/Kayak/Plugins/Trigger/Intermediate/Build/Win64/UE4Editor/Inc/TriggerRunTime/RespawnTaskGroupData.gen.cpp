// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnTaskGroupData() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRespawnTemplateData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGroupRespawnPointInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSingleRespawnPointInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcessBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnTaskGroupData_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnTaskGroupData();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorDataBase_NoRegister();
// End Cross Module References
class UScriptStruct* FRespawnTemplateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRespawnTemplateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRespawnTemplateData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RespawnTemplateData"), sizeof(FRespawnTemplateData), Get_Z_Construct_UScriptStruct_FRespawnTemplateData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRespawnTemplateData>()
{
	return FRespawnTemplateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRespawnTemplateData(FRespawnTemplateData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RespawnTemplateData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnTemplateData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnTemplateData()
	{
		UScriptStruct::DeferCppStructOps<FRespawnTemplateData>(FName(TEXT("RespawnTemplateData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnTemplateData;
	struct Z_Construct_UScriptStruct_FRespawnTemplateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GruopInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GruopInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GruopInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* There is some group respawn point for this respawn task,\n* I will pick up one of them to respawn new player. the order is random.\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "* There is some group respawn point for this respawn task,\n* I will pick up one of them to respawn new player. the order is random." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRespawnTemplateData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos_Inner = { "GruopInfos", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGroupRespawnPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos = { "GruopInfos", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnTemplateData, GruopInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::NewProp_GruopInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RespawnTemplateData",
		sizeof(FRespawnTemplateData),
		alignof(FRespawnTemplateData),
		Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRespawnTemplateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRespawnTemplateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RespawnTemplateData"), sizeof(FRespawnTemplateData), Get_Z_Construct_UScriptStruct_FRespawnTemplateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRespawnTemplateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRespawnTemplateData_Hash() { return 1161523526U; }
class UScriptStruct* FGroupRespawnPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupRespawnPointInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("GroupRespawnPointInfo"), sizeof(FGroupRespawnPointInfo), Get_Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FGroupRespawnPointInfo>()
{
	return FGroupRespawnPointInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupRespawnPointInfo(FGroupRespawnPointInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("GroupRespawnPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFGroupRespawnPointInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFGroupRespawnPointInfo()
	{
		UScriptStruct::DeferCppStructOps<FGroupRespawnPointInfo>(FName(TEXT("GroupRespawnPointInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFGroupRespawnPointInfo;
	struct Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupPoints;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* One spawn point should contain several points in it,\n* If one player need to respawn in these points, I will pick up one appropriate point to spawn new pawn\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "* One spawn point should contain several points in it,\n* If one player need to respawn in these points, I will pick up one appropriate point to spawn new pawn" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupRespawnPointInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints_Inner = { "GroupPoints", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSingleRespawnPointInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints_MetaData[] = {
		{ "Category", "Respawn" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints = { "GroupPoints", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupRespawnPointInfo, GroupPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::NewProp_GroupPoints,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"GroupRespawnPointInfo",
		sizeof(FGroupRespawnPointInfo),
		alignof(FGroupRespawnPointInfo),
		Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupRespawnPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupRespawnPointInfo"), sizeof(FGroupRespawnPointInfo), Get_Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupRespawnPointInfo_Hash() { return 2980648450U; }
class UScriptStruct* FSingleRespawnPointInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleRespawnPointInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SingleRespawnPointInfo"), sizeof(FSingleRespawnPointInfo), Get_Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSingleRespawnPointInfo>()
{
	return FSingleRespawnPointInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleRespawnPointInfo(FSingleRespawnPointInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SingleRespawnPointInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleRespawnPointInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleRespawnPointInfo()
	{
		UScriptStruct::DeferCppStructOps<FSingleRespawnPointInfo>(FName(TEXT("SingleRespawnPointInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleRespawnPointInfo;
	struct Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreFilterCondition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreFilterCondition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcess_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcess_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcess_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PostProcess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* the single respawn information for one respawn point\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "* the single respawn information for one respawn point" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleRespawnPointInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PreFilterCondition_MetaData[] = {
		{ "Category", "Respawn" },
		{ "Comment", "//The condition to filter weather this point can be used to spawn the player\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "The condition to filter weather this point can be used to spawn the player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PreFilterCondition = { "PreFilterCondition", nullptr, (EPropertyFlags)0x001200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleRespawnPointInfo, PreFilterCondition), Z_Construct_UClass_UEvaluatorOperation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PreFilterCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PreFilterCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_Inner_MetaData[] = {
		{ "Category", "Respawn" },
		{ "Comment", "//These post process will be used to apply additional effect to the new pawn, Such as add new animation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "These post process will be used to apply additional effect to the new pawn, Such as add new animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_Inner = { "PostProcess", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URespawnPostProcessBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_MetaData[] = {
		{ "Category", "Respawn" },
		{ "Comment", "//These post process will be used to apply additional effect to the new pawn, Such as add new animation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "These post process will be used to apply additional effect to the new pawn, Such as add new animation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess = { "PostProcess", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleRespawnPointInfo, PostProcess), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Respawn" },
		{ "Comment", "/*\n\x09* The transformation for this point, It will define weather the new pawn should be spawned\n\x09* This transform maybe override by the postprocess actions\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "* The transformation for this point, It will define weather the new pawn should be spawned\n* This transform maybe override by the postprocess actions" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleRespawnPointInfo, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PreFilterCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_PostProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::NewProp_Transform,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SingleRespawnPointInfo",
		sizeof(FSingleRespawnPointInfo),
		alignof(FSingleRespawnPointInfo),
		Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleRespawnPointInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleRespawnPointInfo"), sizeof(FSingleRespawnPointInfo), Get_Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleRespawnPointInfo_Hash() { return 1530636877U; }
	void URespawnTaskGroupData::StaticRegisterNativesURespawnTaskGroupData()
	{
	}
	UClass* Z_Construct_UClass_URespawnTaskGroupData_NoRegister()
	{
		return URespawnTaskGroupData::StaticClass();
	}
	struct Z_Construct_UClass_URespawnTaskGroupData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorRespawnDataClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EditorRespawnDataClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorRespawnDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorRespawnDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EditorRespawnDatas;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawnTaskGroupData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URespawnDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnTaskGroupData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Respawn" },
		{ "Comment", "//The group data which will be used to respawn new pawn\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
		{ "ToolTip", "The group data which will be used to respawn new pawn" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010008000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawnTaskGroupData, Data), Z_Construct_UScriptStruct_FRespawnTemplateData, METADATA_PARAMS(Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_Data_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDataClass_MetaData[] = {
		{ "Category", "TriggerEditor|Respawn" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDataClass = { "EditorRespawnDataClass", nullptr, (EPropertyFlags)0x0014000800010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawnTaskGroupData, EditorRespawnDataClass), Z_Construct_UClass_ARespawnEditorDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDataClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDataClass_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas_Inner = { "EditorRespawnDatas", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ARespawnEditorDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnTaskGroupData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas = { "EditorRespawnDatas", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawnTaskGroupData, EditorRespawnDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URespawnTaskGroupData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_Data,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnTaskGroupData_Statics::NewProp_EditorRespawnDatas,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawnTaskGroupData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnTaskGroupData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawnTaskGroupData_Statics::ClassParams = {
		&URespawnTaskGroupData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URespawnTaskGroupData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URespawnTaskGroupData_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URespawnTaskGroupData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnTaskGroupData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawnTaskGroupData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawnTaskGroupData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawnTaskGroupData, 1212756107);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URespawnTaskGroupData>()
	{
		return URespawnTaskGroupData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawnTaskGroupData(Z_Construct_UClass_URespawnTaskGroupData, &URespawnTaskGroupData::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URespawnTaskGroupData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnTaskGroupData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
