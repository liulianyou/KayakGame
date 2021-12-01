// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnDataGroup() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAIInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSingleGroupDataInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAISpawnGroupDataTemplate_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSinglePawnData();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FGroupAITimeRange();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnBehaviorCommand();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroup_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroup();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FEnemyInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EnemyInfo"), sizeof(FEnemyInfo), Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEnemyInfo>()
{
	return FEnemyInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyInfo(FEnemyInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EnemyInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEnemyInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEnemyInfo()
	{
		UScriptStruct::DeferCppStructOps<FEnemyInfo>(FName(TEXT("EnemyInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEnemyInfo;
	struct Z_Construct_UScriptStruct_FEnemyInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n* The final Information of AI include the data form this and some external information\n* Maybe I will change it to one object not a struct in the feature\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "* The final Information of AI include the data form this and some external information\n* Maybe I will change it to one object not a struct in the feature" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AIInfo_MetaData[] = {
		{ "Comment", "//The Information which will used to spawn the new AI\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "The Information which will used to spawn the new AI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AIInfo = { "AIInfo", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyInfo, AIInfo), Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AIInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AIInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyInfo_Statics::NewProp_AIInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EnemyInfo",
		sizeof(FEnemyInfo),
		alignof(FEnemyInfo),
		Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyInfo"), sizeof(FEnemyInfo), Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyInfo_Hash() { return 1395631177U; }
class UScriptStruct* FSingleGroupSpawnRoundInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SingleGroupSpawnRoundInfo"), sizeof(FSingleGroupSpawnRoundInfo), Get_Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSingleGroupSpawnRoundInfo>()
{
	return FSingleGroupSpawnRoundInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleGroupSpawnRoundInfo(FSingleGroupSpawnRoundInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SingleGroupSpawnRoundInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleGroupSpawnRoundInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleGroupSpawnRoundInfo()
	{
		UScriptStruct::DeferCppStructOps<FSingleGroupSpawnRoundInfo>(FName(TEXT("SingleGroupSpawnRoundInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleGroupSpawnRoundInfo;
	struct Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GroupSpawnDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroupSpawnDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GroupSpawnDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleGroupSpawnRoundInfo>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas_Inner = { "GroupSpawnDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSingleGroupDataInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas = { "GroupSpawnDatas", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupSpawnRoundInfo, GroupSpawnDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When to start to spawn this group AI we will use this \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "When to start to spawn this group AI we will use this" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupSpawnRoundInfo, WaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupSpawnRoundInfo, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_DelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_GroupSpawnDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::NewProp_DelayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SingleGroupSpawnRoundInfo",
		sizeof(FSingleGroupSpawnRoundInfo),
		alignof(FSingleGroupSpawnRoundInfo),
		Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleGroupSpawnRoundInfo"), sizeof(FSingleGroupSpawnRoundInfo), Get_Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo_Hash() { return 451209696U; }
class UScriptStruct* FSingleGroupDataInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSingleGroupDataInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleGroupDataInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SingleGroupDataInfo"), sizeof(FSingleGroupDataInfo), Get_Z_Construct_UScriptStruct_FSingleGroupDataInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSingleGroupDataInfo>()
{
	return FSingleGroupDataInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSingleGroupDataInfo(FSingleGroupDataInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SingleGroupDataInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleGroupDataInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleGroupDataInfo()
	{
		UScriptStruct::DeferCppStructOps<FSingleGroupDataInfo>(FName(TEXT("SingleGroupDataInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSingleGroupDataInfo;
	struct Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnGroupDataTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AISpawnGroupDataTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnGroupDataTemplateClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AISpawnGroupDataTemplateClass;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviewCharacterNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCharacterNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PreviewCharacterNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnGroudDataTempleteTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AISpawnGroudDataTempleteTransform;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyGroupID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EnemyGroupID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberRemaining_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberRemaining;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SingleAISpawnWaitTimeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SingleAISpawnWaitTimeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleGroupDataInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplate_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Template actor that can be put in the level for the designer to manipulate\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "Template actor that can be put in the level for the designer to manipulate" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplate = { "AISpawnGroupDataTemplate", nullptr, (EPropertyFlags)0x0014000000020015, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, AISpawnGroupDataTemplate), Z_Construct_UClass_AAISpawnGroupDataTemplate_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplateClass_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The template class that this data will used\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "The template class that this data will used" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplateClass = { "AISpawnGroupDataTemplateClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, AISpawnGroupDataTemplateClass), Z_Construct_UClass_AAISpawnGroupDataTemplate_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplateClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplateClass_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames_Inner = { "PreviewCharacterNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames_MetaData[] = {
		{ "Comment", "//The names for the preview character\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "The names for the preview character" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames = { "PreviewCharacterNames", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, PreviewCharacterNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroudDataTempleteTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroudDataTempleteTransform = { "AISpawnGroudDataTempleteTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, AISpawnGroudDataTempleteTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroudDataTempleteTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroudDataTempleteTransform_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas_Inner = { "AIDatas", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSinglePawnData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas = { "AIDatas", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, AIDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_EnemyGroupID_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//EnemyGroupID which stand for the enemy ID which will contain the actual NPC IDs\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "EnemyGroupID which stand for the enemy ID which will contain the actual NPC IDs" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_EnemyGroupID = { "EnemyGroupID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, EnemyGroupID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_EnemyGroupID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_EnemyGroupID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_NumberRemaining_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When the number of remaining spawned AI in this group is less then this value then next group will been processed\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "When the number of remaining spawned AI in this group is less then this value then next group will been processed" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_NumberRemaining = { "NumberRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, NumberRemaining), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_NumberRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_NumberRemaining_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_SingleAISpawnWaitTimeRange_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//If the wait time in the AIData is not specified I will use this to give target AI data a random time\n" },
		{ "DisplayName", "TimeInterval" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "If the wait time in the AIData is not specified I will use this to give target AI data a random time" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_SingleAISpawnWaitTimeRange = { "SingleAISpawnWaitTimeRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, SingleAISpawnWaitTimeRange), Z_Construct_UScriptStruct_FGroupAITimeRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_SingleAISpawnWaitTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_SingleAISpawnWaitTimeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When to start to spawn this group AI we will use this \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "When to start to spawn this group AI we will use this" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, WaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSingleGroupDataInfo, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_DelayTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroupDataTemplateClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_PreviewCharacterNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AISpawnGroudDataTempleteTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_AIDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_EnemyGroupID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_NumberRemaining,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_SingleAISpawnWaitTimeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::NewProp_DelayTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SingleGroupDataInfo",
		sizeof(FSingleGroupDataInfo),
		alignof(FSingleGroupDataInfo),
		Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSingleGroupDataInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSingleGroupDataInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SingleGroupDataInfo"), sizeof(FSingleGroupDataInfo), Get_Z_Construct_UScriptStruct_FSingleGroupDataInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSingleGroupDataInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSingleGroupDataInfo_Hash() { return 497353805U; }
class UScriptStruct* FGroupAITimeRange::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FGroupAITimeRange_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupAITimeRange, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("GroupAITimeRange"), sizeof(FGroupAITimeRange), Get_Z_Construct_UScriptStruct_FGroupAITimeRange_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FGroupAITimeRange>()
{
	return FGroupAITimeRange::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGroupAITimeRange(FGroupAITimeRange::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("GroupAITimeRange"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFGroupAITimeRange
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFGroupAITimeRange()
	{
		UScriptStruct::DeferCppStructOps<FGroupAITimeRange>(FName(TEXT("GroupAITimeRange")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFGroupAITimeRange;
	struct Z_Construct_UScriptStruct_FGroupAITimeRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Min_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Min;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Max_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Max;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupAITimeRange>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Min_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The default time for each AI in the group to be spawned, it only work when the time in each spawn point is not specified.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "The default time for each AI in the group to be spawned, it only work when the time in each spawn point is not specified." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Min = { "Min", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupAITimeRange, Min), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Min_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Min_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Max_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Max = { "Max", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGroupAITimeRange, Max), METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Max_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Max_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Min,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::NewProp_Max,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"GroupAITimeRange",
		sizeof(FGroupAITimeRange),
		alignof(FGroupAITimeRange),
		Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGroupAITimeRange()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGroupAITimeRange_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GroupAITimeRange"), sizeof(FGroupAITimeRange), Get_Z_Construct_UScriptStruct_FGroupAITimeRange_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGroupAITimeRange_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGroupAITimeRange_Hash() { return 1021848958U; }
class UScriptStruct* FSinglePawnData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSinglePawnData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSinglePawnData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SinglePawnData"), sizeof(FSinglePawnData), Get_Z_Construct_UScriptStruct_FSinglePawnData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSinglePawnData>()
{
	return FSinglePawnData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSinglePawnData(FSinglePawnData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SinglePawnData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSinglePawnData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSinglePawnData()
	{
		UScriptStruct::DeferCppStructOps<FSinglePawnData>(FName(TEXT("SinglePawnData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSinglePawnData;
	struct Z_Construct_UScriptStruct_FSinglePawnData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AITransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AITransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnBehaviorCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AISpawnBehaviorCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSinglePawnData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSinglePawnData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AITransform_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AITransform = { "AITransform", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSinglePawnData, AITransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AITransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AITransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSinglePawnData, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSinglePawnData, WaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_WaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AISpawnBehaviorCommand_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = \"TriggerRuntime\")\n//FSoftObjectPath AIClassType;\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = \"TriggerRuntime\")\nFSoftObjectPath AIClassType;" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AISpawnBehaviorCommand = { "AISpawnBehaviorCommand", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSinglePawnData, AISpawnBehaviorCommand), Z_Construct_UScriptStruct_FAISpawnBehaviorCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AISpawnBehaviorCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AISpawnBehaviorCommand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSinglePawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AITransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_WaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSinglePawnData_Statics::NewProp_AISpawnBehaviorCommand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSinglePawnData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SinglePawnData",
		sizeof(FSinglePawnData),
		alignof(FSinglePawnData),
		Z_Construct_UScriptStruct_FSinglePawnData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSinglePawnData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSinglePawnData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSinglePawnData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSinglePawnData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSinglePawnData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SinglePawnData"), sizeof(FSinglePawnData), Get_Z_Construct_UScriptStruct_FSinglePawnData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSinglePawnData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSinglePawnData_Hash() { return 3085530594U; }
	DEFINE_FUNCTION(UAISpawnDataGroup::execOnAISpawnGroupDataTemplateDestoryed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISpawnGroupDataTemplateDestoryed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataGroup::execSetStartRoundIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RoundIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartRoundIndex(Z_Param_RoundIndex);
		P_NATIVE_END;
	}
	void UAISpawnDataGroup::StaticRegisterNativesUAISpawnDataGroup()
	{
		UClass* Class = UAISpawnDataGroup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAISpawnGroupDataTemplateDestoryed", &UAISpawnDataGroup::execOnAISpawnGroupDataTemplateDestoryed },
			{ "SetStartRoundIndex", &UAISpawnDataGroup::execSetStartRoundIndex },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics
	{
		struct AISpawnDataGroup_eventOnAISpawnGroupDataTemplateDestoryed_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataGroup_eventOnAISpawnGroupDataTemplateDestoryed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataGroup, nullptr, "OnAISpawnGroupDataTemplateDestoryed", nullptr, nullptr, sizeof(AISpawnDataGroup_eventOnAISpawnGroupDataTemplateDestoryed_Parms), Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics
	{
		struct AISpawnDataGroup_eventSetStartRoundIndex_Parms
		{
			int32 RoundIndex;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoundIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataGroup_eventSetStartRoundIndex_Parms, RoundIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::NewProp_RoundIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get data from target round index\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "Get data from target round index" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataGroup, nullptr, "SetStartRoundIndex", nullptr, nullptr, sizeof(AISpawnDataGroup_eventSetStartRoundIndex_Parms), Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISpawnDataGroup_NoRegister()
	{
		return UAISpawnDataGroup::StaticClass();
	}
	struct Z_Construct_UClass_UAISpawnDataGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoundInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfosAtCurrentRound_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInfosAtCurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIInfosAtCurrentRound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISpawnDataGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISpawnDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISpawnDataGroup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISpawnDataGroup_OnAISpawnGroupDataTemplateDestoryed, "OnAISpawnGroupDataTemplateDestoryed" }, // 929681544
		{ &Z_Construct_UFunction_UAISpawnDataGroup_SetStartRoundIndex, "SetStartRoundIndex" }, // 1293079188
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos_Inner = { "RoundInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSingleGroupSpawnRoundInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos = { "RoundInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataGroup, RoundInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound_Inner = { "AIInfosAtCurrentRound", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound_MetaData[] = {
		{ "Comment", "//The number of AI need to spawned at current round.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h" },
		{ "ToolTip", "The number of AI need to spawned at current round." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound = { "AIInfosAtCurrentRound", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataGroup, AIInfosAtCurrentRound), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISpawnDataGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_RoundInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroup_Statics::NewProp_AIInfosAtCurrentRound,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISpawnDataGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISpawnDataGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISpawnDataGroup_Statics::ClassParams = {
		&UAISpawnDataGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISpawnDataGroup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroup_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISpawnDataGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISpawnDataGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISpawnDataGroup, 2646451180);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAISpawnDataGroup>()
	{
		return UAISpawnDataGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISpawnDataGroup(Z_Construct_UClass_UAISpawnDataGroup, &UAISpawnDataGroup::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAISpawnDataGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISpawnDataGroup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
