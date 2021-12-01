// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnDataGroupPool() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAIInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInfinityRound();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroupPool_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroupPool();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataGroup();
// End Cross Module References
class UScriptStruct* FPendingSpawnNewAIInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PendingSpawnNewAIInfo"), sizeof(FPendingSpawnNewAIInfo), Get_Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPendingSpawnNewAIInfo>()
{
	return FPendingSpawnNewAIInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingSpawnNewAIInfo(FPendingSpawnNewAIInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PendingSpawnNewAIInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPendingSpawnNewAIInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPendingSpawnNewAIInfo()
	{
		UScriptStruct::DeferCppStructOps<FPendingSpawnNewAIInfo>(FName(TEXT("PendingSpawnNewAIInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPendingSpawnNewAIInfo;
	struct Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoundIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The struct to hold the map of the AIInfo which the pending spawned AI\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "The struct to hold the map of the AIInfo which the pending spawned AI" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingSpawnNewAIInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_RoundIndex_MetaData[] = {
		{ "Category", "PendingSpawnNewAIInfo" },
		{ "Comment", "//Which round the target AIController belong to\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "Which round the target AIController belong to" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingSpawnNewAIInfo, RoundIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_RoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_RoundIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIController_MetaData[] = {
		{ "Category", "PendingSpawnNewAIInfo" },
		{ "Comment", "//Which AI need to be spawned again\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "Which AI need to be spawned again" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIController = { "AIController", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingSpawnNewAIInfo, AIController), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIInfo_MetaData[] = {
		{ "Category", "PendingSpawnNewAIInfo" },
		{ "Comment", "//Which information is used to spawn the AIController\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "Which information is used to spawn the AIController" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIInfo = { "AIInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingSpawnNewAIInfo, AIInfo), Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_RoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::NewProp_AIInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PendingSpawnNewAIInfo",
		sizeof(FPendingSpawnNewAIInfo),
		alignof(FPendingSpawnNewAIInfo),
		Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingSpawnNewAIInfo"), sizeof(FPendingSpawnNewAIInfo), Get_Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo_Hash() { return 1878646611U; }
class UScriptStruct* FInfinityRound::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FInfinityRound_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInfinityRound, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("InfinityRound"), sizeof(FInfinityRound), Get_Z_Construct_UScriptStruct_FInfinityRound_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FInfinityRound>()
{
	return FInfinityRound::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInfinityRound(FInfinityRound::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("InfinityRound"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFInfinityRound
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFInfinityRound()
	{
		UScriptStruct::DeferCppStructOps<FInfinityRound>(FName(TEXT("InfinityRound")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFInfinityRound;
	struct Z_Construct_UScriptStruct_FInfinityRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInfinityPool_MetaData[];
#endif
		static void NewProp_IsInfinityPool_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInfinityPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopulateThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PopulateThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RoundIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDurationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfinityRound_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInfinityRound_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInfinityRound>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Flag to check weather this round is a pool which will spawn infinity AI.\n\x09*/" },
		{ "DisplayName", "IsEnemyPool" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "* Flag to check weather this round is a pool which will spawn infinity AI." },
	};
#endif
	void Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool_SetBit(void* Obj)
	{
		((FInfinityRound*)Obj)->IsInfinityPool = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool = { "IsInfinityPool", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInfinityRound), &Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_PopulateThreshold_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The threshold value to populate the AI to the pool.\n\x09*/" },
		{ "DisplayName", "AdditionCount" },
		{ "EditCondition", "IsInfinityPool" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "* The threshold value to populate the AI to the pool." },
		{ "UIMin", "1" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_PopulateThreshold = { "PopulateThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInfinityRound, PopulateThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_PopulateThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_PopulateThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_RoundIndex_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The target round that will be used to spawn infinite AI\n\x09*/" },
		{ "EditCondition", "IsInfinityPool" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "* The target round that will be used to spawn infinite AI" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInfinityRound, RoundIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_RoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_RoundIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_MaxDurationTime_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* How much time the new AI will be spawned, if this value is AISPawnDataGroupPool::NODURATIONTIME then this data will never stop\n\x09*/" },
		{ "EditCondition", "IsInfinityPool" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "* How much time the new AI will be spawned, if this value is AISPawnDataGroupPool::NODURATIONTIME then this data will never stop" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_MaxDurationTime = { "MaxDurationTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInfinityRound, MaxDurationTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_MaxDurationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_MaxDurationTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInfinityRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_IsInfinityPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_PopulateThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_RoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInfinityRound_Statics::NewProp_MaxDurationTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInfinityRound_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"InfinityRound",
		sizeof(FInfinityRound),
		alignof(FInfinityRound),
		Z_Construct_UScriptStruct_FInfinityRound_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfinityRound_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInfinityRound_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInfinityRound_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInfinityRound()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInfinityRound_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InfinityRound"), sizeof(FInfinityRound), Get_Z_Construct_UScriptStruct_FInfinityRound_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInfinityRound_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInfinityRound_Hash() { return 3746067734U; }
	void UAISpawnDataGroupPool::StaticRegisterNativesUAISpawnDataGroupPool()
	{
	}
	UClass* Z_Construct_UClass_UAISpawnDataGroupPool_NoRegister()
	{
		return UAISpawnDataGroupPool::StaticClass();
	}
	struct Z_Construct_UClass_UAISpawnDataGroupPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InfinityInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfinityInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InfinityInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingSpawnAIInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingSpawnAIInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PendingSpawnAIInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISpawnDataGroupPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISpawnDataGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataGroupPool_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos_Inner = { "InfinityInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInfinityRound, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The information about the AI Pool\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "The information about the AI Pool" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos = { "InfinityInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataGroupPool, InfinityInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos_Inner = { "PendingSpawnAIInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPendingSpawnNewAIInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos_MetaData[] = {
		{ "Category", "AISpawnDataGroupPool" },
		{ "Comment", "//I treat this array as FIFO list\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroupPool.h" },
		{ "ToolTip", "I treat this array as FIFO list" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos = { "PendingSpawnAIInfos", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataGroupPool, PendingSpawnAIInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISpawnDataGroupPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_InfinityInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataGroupPool_Statics::NewProp_PendingSpawnAIInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISpawnDataGroupPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISpawnDataGroupPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISpawnDataGroupPool_Statics::ClassParams = {
		&UAISpawnDataGroupPool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISpawnDataGroupPool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataGroupPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISpawnDataGroupPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISpawnDataGroupPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISpawnDataGroupPool, 2552396403);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAISpawnDataGroupPool>()
	{
		return UAISpawnDataGroupPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISpawnDataGroupPool(Z_Construct_UClass_UAISpawnDataGroupPool, &UAISpawnDataGroupPool::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAISpawnDataGroupPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISpawnDataGroupPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
