// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnEditorPoint() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRespawnPointGroupInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRespawnPointSingleInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorGroupData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorPoint_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorPoint();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARespawnEditorPointBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcessBase_NoRegister();
// End Cross Module References
class UScriptStruct* FRespawnPointGroupInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRespawnPointGroupInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RespawnPointGroupInfo"), sizeof(FRespawnPointGroupInfo), Get_Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRespawnPointGroupInfo>()
{
	return FRespawnPointGroupInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRespawnPointGroupInfo(FRespawnPointGroupInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RespawnPointGroupInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnPointGroupInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnPointGroupInfo()
	{
		UScriptStruct::DeferCppStructOps<FRespawnPointGroupInfo>(FName(TEXT("RespawnPointGroupInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnPointGroupInfo;
	struct Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Hold all the data which will be used by all other respawn task\n*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "* Hold all the data which will be used by all other respawn task" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRespawnPointGroupInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos_Inner = { "GroupInfos", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRespawnPointSingleInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos_MetaData[] = {
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos = { "GroupInfos", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointGroupInfo, GroupInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::NewProp_GroupInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RespawnPointGroupInfo",
		sizeof(FRespawnPointGroupInfo),
		alignof(FRespawnPointGroupInfo),
		Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRespawnPointGroupInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RespawnPointGroupInfo"), sizeof(FRespawnPointGroupInfo), Get_Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRespawnPointGroupInfo_Hash() { return 4086096360U; }
class UScriptStruct* FRespawnPointSingleInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRespawnPointSingleInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RespawnPointSingleInfo"), sizeof(FRespawnPointSingleInfo), Get_Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRespawnPointSingleInfo>()
{
	return FRespawnPointSingleInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRespawnPointSingleInfo(FRespawnPointSingleInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RespawnPointSingleInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnPointSingleInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnPointSingleInfo()
	{
		UScriptStruct::DeferCppStructOps<FRespawnPointSingleInfo>(FName(TEXT("RespawnPointSingleInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRespawnPointSingleInfo;
	struct Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GroupIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PointIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RespawnData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EditorDataActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EditorDataActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RelationShipLine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RelationShipLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The information for each respawn task\n*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "* The information for each respawn task" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRespawnPointSingleInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_GroupIndex_MetaData[] = {
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "Comment", "//The index of group which this point should belong to\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "The index of group which this point should belong to" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_GroupIndex = { "GroupIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointSingleInfo, GroupIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_GroupIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_GroupIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_PointIndex_MetaData[] = {
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "Comment", "//The index of point which this info stands for\n" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "The index of point which this info stands for" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_PointIndex = { "PointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointSingleInfo, PointIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_PointIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_PointIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RespawnData_MetaData[] = {
		{ "Comment", "/*BlueprintReadOnly, EditAnywhere, Category = \"TriggerEditor|ARespawnEditorPoint\"*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "BlueprintReadOnly, EditAnywhere, Category = \"TriggerEditor|ARespawnEditorPoint\"" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RespawnData = { "RespawnData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointSingleInfo, RespawnData), Z_Construct_UClass_URespawnDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RespawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RespawnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_EditorDataActor_MetaData[] = {
		{ "Comment", "/*BlueprintReadOnly, EditAnywhere, Category = \"TriggerEditor|ARespawnEditorPoint\"*/" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "BlueprintReadOnly, EditAnywhere, Category = \"TriggerEditor|ARespawnEditorPoint\"" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_EditorDataActor = { "EditorDataActor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointSingleInfo, EditorDataActor), Z_Construct_UClass_ARespawnEditorGroupData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_EditorDataActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_EditorDataActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RelationShipLine_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RespawnPointSingleInfo" },
		{ "Comment", "//I will use this component to show the relation ship between the the respawn data with this point\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "I will use this component to show the relation ship between the the respawn data with this point" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RelationShipLine = { "RelationShipLine", nullptr, (EPropertyFlags)0x00100000000a201d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointSingleInfo, RelationShipLine), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RelationShipLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RelationShipLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRespawnPointSingleInfo, Owner), Z_Construct_UClass_ARespawnEditorPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_GroupIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_PointIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RespawnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_EditorDataActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_RelationShipLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RespawnPointSingleInfo",
		sizeof(FRespawnPointSingleInfo),
		alignof(FRespawnPointSingleInfo),
		Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRespawnPointSingleInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RespawnPointSingleInfo"), sizeof(FRespawnPointSingleInfo), Get_Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRespawnPointSingleInfo_Hash() { return 3469128451U; }
	void ARespawnEditorPoint::StaticRegisterNativesARespawnEditorPoint()
	{
	}
	UClass* Z_Construct_UClass_ARespawnEditorPoint_NoRegister()
	{
		return ARespawnEditorPoint::StaticClass();
	}
	struct Z_Construct_UClass_ARespawnEditorPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RespawnInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RespawnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARespawnEditorPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ARespawnEditorPointBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorPoint_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerEditor" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PreFilterCondition_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "Comment", "//The condition to filter weather this point can be used to spawn the player\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "The condition to filter weather this point can be used to spawn the player" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PreFilterCondition = { "PreFilterCondition", nullptr, (EPropertyFlags)0x004200000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnEditorPoint, PreFilterCondition), Z_Construct_UClass_UEvaluatorOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PreFilterCondition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PreFilterCondition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "Comment", "//These post process will be used to apply additional effect to the new pawn, Such as add new animation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "These post process will be used to apply additional effect to the new pawn, Such as add new animation." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_Inner = { "PostProcess", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_URespawnPostProcessBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "Comment", "//These post process will be used to apply additional effect to the new pawn, Such as add new animation.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
		{ "ToolTip", "These post process will be used to apply additional effect to the new pawn, Such as add new animation." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess = { "PostProcess", nullptr, (EPropertyFlags)0x004000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnEditorPoint, PostProcess), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_RespawnInfo_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerEditor|ARespawnEditorPoint" },
		{ "ModuleRelativePath", "Public/Tool/Editor/ResespawnData/RespawnEditorPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_RespawnInfo = { "RespawnInfo", nullptr, (EPropertyFlags)0x0040008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARespawnEditorPoint, RespawnInfo), Z_Construct_UScriptStruct_FRespawnPointGroupInfo, METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_RespawnInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_RespawnInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARespawnEditorPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PreFilterCondition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_PostProcess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARespawnEditorPoint_Statics::NewProp_RespawnInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARespawnEditorPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARespawnEditorPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARespawnEditorPoint_Statics::ClassParams = {
		&ARespawnEditorPoint::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARespawnEditorPoint_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorPoint_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARespawnEditorPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARespawnEditorPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARespawnEditorPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARespawnEditorPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARespawnEditorPoint, 1914419006);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ARespawnEditorPoint>()
	{
		return ARespawnEditorPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARespawnEditorPoint(Z_Construct_UClass_ARespawnEditorPoint, &ARespawnEditorPoint::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ARespawnEditorPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARespawnEditorPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
