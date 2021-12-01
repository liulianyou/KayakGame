// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckKilledNumberOfAIInTargetTask() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FKilledAIData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTask();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
// End Cross Module References
class UScriptStruct* FKilledAIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FKilledAIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKilledAIData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("KilledAIData"), sizeof(FKilledAIData), Get_Z_Construct_UScriptStruct_FKilledAIData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FKilledAIData>()
{
	return FKilledAIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKilledAIData(FKilledAIData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("KilledAIData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFKilledAIData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFKilledAIData()
	{
		UScriptStruct::DeferCppStructOps<FKilledAIData>(FName(TEXT("KilledAIData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFKilledAIData;
	struct Z_Construct_UScriptStruct_FKilledAIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_KilledNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKilledAIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKilledAIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKilledAIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_TriggerTask_MetaData[] = {
		{ "Category", "KilledAIData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_TriggerTask = { "TriggerTask", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKilledAIData, TriggerTask), Z_Construct_UScriptStruct_FTriggerTask, METADATA_PARAMS(Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_TriggerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_TriggerTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_KilledNumber_MetaData[] = {
		{ "Category", "KilledAIData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_KilledNumber = { "KilledNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKilledAIData, KilledNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_KilledNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_KilledNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKilledAIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_TriggerTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKilledAIData_Statics::NewProp_KilledNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKilledAIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"KilledAIData",
		sizeof(FKilledAIData),
		alignof(FKilledAIData),
		Z_Construct_UScriptStruct_FKilledAIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKilledAIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKilledAIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKilledAIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKilledAIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKilledAIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KilledAIData"), sizeof(FKilledAIData), Get_Z_Construct_UScriptStruct_FKilledAIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKilledAIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKilledAIData_Hash() { return 2617754247U; }
	void UCheckKilledNumberOfAIInTargetTask::StaticRegisterNativesUCheckKilledNumberOfAIInTargetTask()
	{
	}
	UClass* Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_NoRegister()
	{
		return UCheckKilledNumberOfAIInTargetTask::StaticClass();
	}
	struct Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaskDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas_Inner = { "TaskDatas", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKilledAIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas_MetaData[] = {
		{ "Category", "CheckKilledNumberOfAIInTargetTask" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckKilledNumberOfAIInTargetTask.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas = { "TaskDatas", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckKilledNumberOfAIInTargetTask, TaskDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::NewProp_TaskDatas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckKilledNumberOfAIInTargetTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::ClassParams = {
		&UCheckKilledNumberOfAIInTargetTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckKilledNumberOfAIInTargetTask, 2593322153);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckKilledNumberOfAIInTargetTask>()
	{
		return UCheckKilledNumberOfAIInTargetTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckKilledNumberOfAIInTargetTask(Z_Construct_UClass_UCheckKilledNumberOfAIInTargetTask, &UCheckKilledNumberOfAIInTargetTask::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckKilledNumberOfAIInTargetTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckKilledNumberOfAIInTargetTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
