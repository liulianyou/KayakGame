// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_AISpawn() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnRuleData();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAICategory();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPawnInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnBehaviorCommand();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_AISpawn_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_AISpawn();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FCurrentRoundSpawnInfor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("CurrentRoundSpawnInfor"), sizeof(FCurrentRoundSpawnInfor), Get_Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FCurrentRoundSpawnInfor>()
{
	return FCurrentRoundSpawnInfor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCurrentRoundSpawnInfor(FCurrentRoundSpawnInfor::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("CurrentRoundSpawnInfor"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFCurrentRoundSpawnInfor
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFCurrentRoundSpawnInfor()
	{
		UScriptStruct::DeferCppStructOps<FCurrentRoundSpawnInfor>(FName(TEXT("CurrentRoundSpawnInfor")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFCurrentRoundSpawnInfor;
	struct Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedAIControll_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedAIControll_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnedAIControll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIDeadIncurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AIDeadIncurrentRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasSpawned_MetaData[];
#endif
		static void NewProp_HasSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasSpawned;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurrentRoundSpawnInfor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_RunningTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentRoundSpawnInfor, RunningTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_RunningTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_RunningTime_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll_Inner = { "SpawnedAIControll", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll_MetaData[] = {
		{ "Comment", "//Total spawned AI in one round\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Total spawned AI in one round" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll = { "SpawnedAIControll", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentRoundSpawnInfor, SpawnedAIControll), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_AIDeadIncurrentRound_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_AIDeadIncurrentRound = { "AIDeadIncurrentRound", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCurrentRoundSpawnInfor, AIDeadIncurrentRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_AIDeadIncurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_AIDeadIncurrentRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned_SetBit(void* Obj)
	{
		((FCurrentRoundSpawnInfor*)Obj)->HasSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned = { "HasSpawned", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCurrentRoundSpawnInfor), &Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_RunningTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_SpawnedAIControll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_AIDeadIncurrentRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::NewProp_HasSpawned,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"CurrentRoundSpawnInfor",
		sizeof(FCurrentRoundSpawnInfor),
		alignof(FCurrentRoundSpawnInfor),
		Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CurrentRoundSpawnInfor"), sizeof(FCurrentRoundSpawnInfor), Get_Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor_Hash() { return 3726464378U; }
class UScriptStruct* FSpawnRuleData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSpawnRuleData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnRuleData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SpawnRuleData"), sizeof(FSpawnRuleData), Get_Z_Construct_UScriptStruct_FSpawnRuleData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSpawnRuleData>()
{
	return FSpawnRuleData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnRuleData(FSpawnRuleData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SpawnRuleData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnRuleData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnRuleData()
	{
		UScriptStruct::DeferCppStructOps<FSpawnRuleData>(FName(TEXT("SpawnRuleData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnRuleData;
	struct Z_Construct_UScriptStruct_FSpawnRuleData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TotalPawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalPawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TotalPawns;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnRuleData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnRuleData>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns_Inner = { "TotalPawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAICategory, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns_MetaData[] = {
		{ "Category", "SpawnRuleData" },
		{ "DisplayName", "Enemy Spawn List" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns = { "TotalPawns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnRuleData, TotalPawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnRuleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnRuleData_Statics::NewProp_TotalPawns,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnRuleData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SpawnRuleData",
		sizeof(FSpawnRuleData),
		alignof(FSpawnRuleData),
		Z_Construct_UScriptStruct_FSpawnRuleData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnRuleData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnRuleData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnRuleData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnRuleData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnRuleData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnRuleData"), sizeof(FSpawnRuleData), Get_Z_Construct_UScriptStruct_FSpawnRuleData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnRuleData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnRuleData_Hash() { return 80384172U; }
class UScriptStruct* FAICategory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAICategory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAICategory, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("AICategory"), sizeof(FAICategory), Get_Z_Construct_UScriptStruct_FAICategory_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FAICategory>()
{
	return FAICategory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAICategory(FAICategory::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("AICategory"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFAICategory
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFAICategory()
	{
		UScriptStruct::DeferCppStructOps<FAICategory>(FName(TEXT("AICategory")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFAICategory;
	struct Z_Construct_UScriptStruct_FAICategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Pawns_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Pawns_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Pawns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WaitTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//Single category of AI to be spawned at the same time\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Single category of AI to be spawned at the same time" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAICategory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAICategory>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns_Inner = { "Pawns", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPawnInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns_MetaData[] = {
		{ "Category", "AICategory" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns = { "Pawns", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICategory, Pawns), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultPosition = { "DefaultPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICategory, DefaultPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultRotation = { "DefaultRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICategory, DefaultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultSize = { "DefaultSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICategory, DefaultSize), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "AICategory" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//Time delayed to run the next rule. Magintue:/s\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Time delayed to run the next rule. Magintue:/s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICategory, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_WaitTime_MetaData[] = {
		{ "Category", "AICategory" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//Time delayed to run this rule. Magintue:/s\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Time delayed to run this rule. Magintue:/s" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_WaitTime = { "WaitTime", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAICategory, WaitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_WaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_WaitTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAICategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_Pawns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DefaultSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAICategory_Statics::NewProp_WaitTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAICategory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"AICategory",
		sizeof(FAICategory),
		alignof(FAICategory),
		Z_Construct_UScriptStruct_FAICategory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAICategory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAICategory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAICategory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAICategory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AICategory"), sizeof(FAICategory), Get_Z_Construct_UScriptStruct_FAICategory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAICategory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAICategory_Hash() { return 702470216U; }
class UScriptStruct* FPawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PawnInfo"), sizeof(FPawnInfo), Get_Z_Construct_UScriptStruct_FPawnInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPawnInfo>()
{
	return FPawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPawnInfo(FPawnInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPawnInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FPawnInfo>(FName(TEXT("PawnInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPawnInfo;
	struct Z_Construct_UScriptStruct_FPawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NPCID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Number_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Number;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomizePosition_MetaData[];
#endif
		static void NewProp_UseCustomizePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomizePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomizeRotation_MetaData[];
#endif
		static void NewProp_UseCustomizeRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomizeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseCustomizeSize_MetaData[];
#endif
		static void NewProp_UseCustomizeSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseCustomizeSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorCommand_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BehaviorCommand;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_NPCID_MetaData[] = {
		{ "Category", "PawnInfo" },
		{ "Comment", "//The identification for the NPC which will used to read resource form the excel file\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "The identification for the NPC which will used to read resource form the excel file" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, NPCID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_NPCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_NPCID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Number_MetaData[] = {
		{ "Category", "PawnInfo" },
		{ "ClampMin", "1" },
		{ "Comment", "//The number of the target NPC need to spawn\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "The number of the target NPC need to spawn" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Number = { "Number", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, Number), METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Number_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Number_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "PawnInfo" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "//The time to spawn the next AI\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "The time to spawn the next AI" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_SpawnPoint_MetaData[] = {
		{ "Category", "PawnInfo" },
		{ "Comment", "//As the designer don't want to use any tool to fill the transform data I add this member only for Editor usage\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "As the designer don't want to use any tool to fill the transform data I add this member only for Editor usage" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x001000000000201d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, SpawnPoint), Z_Construct_UClass_AAIPreviewCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_SpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_SpawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere)\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition_SetBit(void* Obj)
	{
		((FPawnInfo*)Obj)->UseCustomizePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition = { "UseCustomizePosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPawnInfo), &Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Position_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizePosition, EditCondition = UseCustomizePosition))\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizePosition, EditCondition = UseCustomizePosition))" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere)\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation_SetBit(void* Obj)
	{
		((FPawnInfo*)Obj)->UseCustomizeRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation = { "UseCustomizeRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPawnInfo), &Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizeRotation, EditCondition = UseCustomizeRotation))\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizeRotation, EditCondition = UseCustomizeRotation))" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere)\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere)" },
	};
#endif
	void Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize_SetBit(void* Obj)
	{
		((FPawnInfo*)Obj)->UseCustomizeSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize = { "UseCustomizeSize", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPawnInfo), &Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Size_MetaData[] = {
		{ "Comment", "//UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizeRotation, EditCondition = UseCustomizeRotation))\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (DisplayAfter = UseCustomizeRotation, EditCondition = UseCustomizeRotation))" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, Size), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_BehaviorCommand_MetaData[] = {
		{ "Category", "PawnInfo" },
		{ "Comment", "//The behavior command that when we spawn new AI, we should aks it to do\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "The behavior command that when we spawn new AI, we should aks it to do" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_BehaviorCommand = { "BehaviorCommand", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPawnInfo, BehaviorCommand), Z_Construct_UScriptStruct_FAISpawnBehaviorCommand, METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_BehaviorCommand_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_BehaviorCommand_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_NPCID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Number,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_DelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_SpawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_UseCustomizeSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnInfo_Statics::NewProp_BehaviorCommand,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PawnInfo",
		sizeof(FPawnInfo),
		alignof(FPawnInfo),
		Z_Construct_UScriptStruct_FPawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PawnInfo"), sizeof(FPawnInfo), Get_Z_Construct_UScriptStruct_FPawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPawnInfo_Hash() { return 1376907579U; }
	DEFINE_FUNCTION(UTT_AISpawn::execOnActorDestoryCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestoryCallback(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetCurrentRoundDeadAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentRoundDeadAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetCurrentRoundInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCurrentRoundSpawnInfor>*)Z_Param__Result=P_THIS->GetCurrentRoundInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetAICreator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAICreatorBase**)Z_Param__Result=P_THIS->GetAICreator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execStartNewAISpawnRound)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_TargetRound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartNewAISpawnRound(Z_Param_TargetRound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetNumberOfPendingSpawnedAI)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Round);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfPendingSpawnedAI(Z_Param_Round);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execAIKilledInOneRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AIKilledInOneRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetTotalNPCID)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_NPCID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTotalNPCID(Z_Param_Out_NPCID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetConstSpawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpawnRuleData*)Z_Param__Result=P_THIS->GetConstSpawnData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetTotalDeadAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalDeadAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetCurrentRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawn::execGetTotalRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetTotalRound();
		P_NATIVE_END;
	}
	void UTT_AISpawn::StaticRegisterNativesUTT_AISpawn()
	{
		UClass* Class = UTT_AISpawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AIKilledInOneRound", &UTT_AISpawn::execAIKilledInOneRound },
			{ "GetAICreator", &UTT_AISpawn::execGetAICreator },
			{ "GetConstSpawnData", &UTT_AISpawn::execGetConstSpawnData },
			{ "GetCurrentRound", &UTT_AISpawn::execGetCurrentRound },
			{ "GetCurrentRoundDeadAI", &UTT_AISpawn::execGetCurrentRoundDeadAI },
			{ "GetCurrentRoundInfo", &UTT_AISpawn::execGetCurrentRoundInfo },
			{ "GetNumberOfPendingSpawnedAI", &UTT_AISpawn::execGetNumberOfPendingSpawnedAI },
			{ "GetTotalDeadAI", &UTT_AISpawn::execGetTotalDeadAI },
			{ "GetTotalNPCID", &UTT_AISpawn::execGetTotalNPCID },
			{ "GetTotalRound", &UTT_AISpawn::execGetTotalRound },
			{ "OnActorDestoryCallback", &UTT_AISpawn::execOnActorDestoryCallback },
			{ "StartNewAISpawnRound", &UTT_AISpawn::execStartNewAISpawnRound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "Comment", "//When one round finished this function will be invoked\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "When one round finished this function will be invoked" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "AIKilledInOneRound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics
	{
		struct TT_AISpawn_eventGetAICreator_Parms
		{
			UAICreatorBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetAICreator_Parms, ReturnValue), Z_Construct_UClass_UAICreatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetAICreator", nullptr, nullptr, sizeof(TT_AISpawn_eventGetAICreator_Parms), Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetAICreator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetAICreator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics
	{
		struct TT_AISpawn_eventGetConstSpawnData_Parms
		{
			FSpawnRuleData ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetConstSpawnData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpawnRuleData, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetConstSpawnData", nullptr, nullptr, sizeof(TT_AISpawn_eventGetConstSpawnData_Parms), Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics
	{
		struct TT_AISpawn_eventGetCurrentRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetCurrentRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetCurrentRound", nullptr, nullptr, sizeof(TT_AISpawn_eventGetCurrentRound_Parms), Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics
	{
		struct TT_AISpawn_eventGetCurrentRoundDeadAI_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetCurrentRoundDeadAI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the number of dead AI in current round \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Get the number of dead AI in current round" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetCurrentRoundDeadAI", nullptr, nullptr, sizeof(TT_AISpawn_eventGetCurrentRoundDeadAI_Parms), Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics
	{
		struct TT_AISpawn_eventGetCurrentRoundInfo_Parms
		{
			TArray<FCurrentRoundSpawnInfor> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetCurrentRoundInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetCurrentRoundInfo", nullptr, nullptr, sizeof(TT_AISpawn_eventGetCurrentRoundInfo_Parms), Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics
	{
		struct TT_AISpawn_eventGetNumberOfPendingSpawnedAI_Parms
		{
			int32 Round;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Round;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::NewProp_Round = { "Round", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetNumberOfPendingSpawnedAI_Parms, Round), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetNumberOfPendingSpawnedAI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::NewProp_Round,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "Comment", "/*\n\x09* Get the total number of AI that need to be spawned at the target round\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "* Get the total number of AI that need to be spawned at the target round" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetNumberOfPendingSpawnedAI", nullptr, nullptr, sizeof(TT_AISpawn_eventGetNumberOfPendingSpawnedAI_Parms), Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics
	{
		struct TT_AISpawn_eventGetTotalDeadAI_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetTotalDeadAI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetTotalDeadAI", nullptr, nullptr, sizeof(TT_AISpawn_eventGetTotalDeadAI_Parms), Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics
	{
		struct TT_AISpawn_eventGetTotalNPCID_Parms
		{
			TArray<int32> NPCID;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NPCID_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NPCID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::NewProp_NPCID_Inner = { "NPCID", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetTotalNPCID_Parms, NPCID), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::NewProp_NPCID_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::NewProp_NPCID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "Comment", "/*\n\x09* Get all NPCIDs which are confined at this task by the LD\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "* Get all NPCIDs which are confined at this task by the LD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetTotalNPCID", nullptr, nullptr, sizeof(TT_AISpawn_eventGetTotalNPCID_Parms), Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics
	{
		struct TT_AISpawn_eventGetTotalRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventGetTotalRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "GetTotalRound", nullptr, nullptr, sizeof(TT_AISpawn_eventGetTotalRound_Parms), Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_GetTotalRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_GetTotalRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics
	{
		struct TT_AISpawn_eventOnActorDestoryCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventOnActorDestoryCallback_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback for the Actor destroy\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Callback for the Actor destroy" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "OnActorDestoryCallback", nullptr, nullptr, sizeof(TT_AISpawn_eventOnActorDestoryCallback_Parms), Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics
	{
		struct TT_AISpawn_eventStartNewAISpawnRound_Parms
		{
			int32 TargetRound;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetRound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::NewProp_TargetRound = { "TargetRound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawn_eventStartNewAISpawnRound_Parms, TargetRound), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::NewProp_TargetRound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawn, nullptr, "StartNewAISpawnRound", nullptr, nullptr, sizeof(TT_AISpawn_eventStartNewAISpawnRound_Parms), Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_AISpawn_NoRegister()
	{
		return UTT_AISpawn::StaticClass();
	}
	struct Z_Construct_UClass_UTT_AISpawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICreator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICreator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalDeadAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalDeadAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentRound;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RoundInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoundInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RoundInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_AISpawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_AISpawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_AISpawn_AIKilledInOneRound, "AIKilledInOneRound" }, // 291842642
		{ &Z_Construct_UFunction_UTT_AISpawn_GetAICreator, "GetAICreator" }, // 1677317769
		{ &Z_Construct_UFunction_UTT_AISpawn_GetConstSpawnData, "GetConstSpawnData" }, // 3730363015
		{ &Z_Construct_UFunction_UTT_AISpawn_GetCurrentRound, "GetCurrentRound" }, // 1211601943
		{ &Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundDeadAI, "GetCurrentRoundDeadAI" }, // 4116258929
		{ &Z_Construct_UFunction_UTT_AISpawn_GetCurrentRoundInfo, "GetCurrentRoundInfo" }, // 1506751130
		{ &Z_Construct_UFunction_UTT_AISpawn_GetNumberOfPendingSpawnedAI, "GetNumberOfPendingSpawnedAI" }, // 1323265809
		{ &Z_Construct_UFunction_UTT_AISpawn_GetTotalDeadAI, "GetTotalDeadAI" }, // 1191144131
		{ &Z_Construct_UFunction_UTT_AISpawn_GetTotalNPCID, "GetTotalNPCID" }, // 3781081908
		{ &Z_Construct_UFunction_UTT_AISpawn_GetTotalRound, "GetTotalRound" }, // 940107982
		{ &Z_Construct_UFunction_UTT_AISpawn_OnActorDestoryCallback, "OnActorDestoryCallback" }, // 867328213
		{ &Z_Construct_UFunction_UTT_AISpawn_StartNewAISpawnRound, "StartNewAISpawnRound" }, // 3718088889
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRunTime|Task" },
		{ "IncludePath", "TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_SpawnData_MetaData[] = {
		{ "Category", "AISpawn|SpawnData" },
		{ "Comment", "//The data of rule to spawn the AI \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "The data of rule to spawn the AI" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_SpawnData = { "SpawnData", nullptr, (EPropertyFlags)0x001000000000401d, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_AISpawn, SpawnData), Z_Construct_UScriptStruct_FSpawnRuleData, METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_SpawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_SpawnData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_AICreator_MetaData[] = {
		{ "Category", "AISpawn|Creator" },
		{ "Comment", "//Defined how to use the data from this \n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Defined how to use the data from this" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_AICreator = { "AICreator", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_AISpawn, AICreator), Z_Construct_UClass_UAICreatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_AICreator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_AICreator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_TotalDeadAI_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_TotalDeadAI = { "TotalDeadAI", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_AISpawn, TotalDeadAI), METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_TotalDeadAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_TotalDeadAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_CurrentRound_MetaData[] = {
		{ "Comment", "//Current round of Spawn AI\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
		{ "ToolTip", "Current round of Spawn AI" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_AISpawn, CurrentRound), METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_CurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_CurrentRound_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo_Inner = { "RoundInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCurrentRoundSpawnInfor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawn.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo = { "RoundInfo", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_AISpawn, RoundInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_AISpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_SpawnData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_AICreator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_TotalDeadAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_CurrentRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawn_Statics::NewProp_RoundInfo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_AISpawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_AISpawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_AISpawn_Statics::ClassParams = {
		&UTT_AISpawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_AISpawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_AISpawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_AISpawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_AISpawn, 3984451778);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_AISpawn>()
	{
		return UTT_AISpawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_AISpawn(Z_Construct_UClass_UTT_AISpawn, &UTT_AISpawn::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_AISpawn"), false, nullptr, nullptr, nullptr);

	void UTT_AISpawn::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TotalDeadAI(TEXT("TotalDeadAI"));
		static const FName Name_CurrentRound(TEXT("CurrentRound"));

		const bool bIsValid = true
			&& Name_TotalDeadAI == ClassReps[(int32)ENetFields_Private::TotalDeadAI].Property->GetFName()
			&& Name_CurrentRound == ClassReps[(int32)ENetFields_Private::CurrentRound].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTT_AISpawn"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_AISpawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
