// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Record/TR_TriggerTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTR_TriggerTask() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRecordTaskInformation();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRecordInstigatorInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EEndRecordType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTR_TriggerTask_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTR_TriggerTask();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRecordBase();
// End Cross Module References
class UScriptStruct* FRecordTaskInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRecordTaskInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordTaskInformation, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RecordTaskInformation"), sizeof(FRecordTaskInformation), Get_Z_Construct_UScriptStruct_FRecordTaskInformation_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRecordTaskInformation>()
{
	return FRecordTaskInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordTaskInformation(FRecordTaskInformation::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RecordTaskInformation"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRecordTaskInformation
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRecordTaskInformation()
	{
		UScriptStruct::DeferCppStructOps<FRecordTaskInformation>(FName(TEXT("RecordTaskInformation")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRecordTaskInformation;
	struct Z_Construct_UScriptStruct_FRecordTaskInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerTasks;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Hold the information for current record\n*/" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTask.h" },
		{ "ToolTip", "* Hold the information for current record" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordTaskInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_InstigatorInfo_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_InstigatorInfo = { "InstigatorInfo", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordTaskInformation, InstigatorInfo), Z_Construct_UScriptStruct_FRecordInstigatorInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_InstigatorInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_InstigatorInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks_Inner = { "TriggerTasks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks = { "TriggerTasks", nullptr, (EPropertyFlags)0x001000800000001c, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordTaskInformation, TriggerTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordTaskInformation, EndType), Z_Construct_UEnum_TriggerRunTime_EEndRecordType, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_InstigatorInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_TriggerTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::NewProp_EndType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RecordTaskInformation",
		sizeof(FRecordTaskInformation),
		alignof(FRecordTaskInformation),
		Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordTaskInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordTaskInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordTaskInformation"), sizeof(FRecordTaskInformation), Get_Z_Construct_UScriptStruct_FRecordTaskInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordTaskInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordTaskInformation_Hash() { return 3598158130U; }
	void UTR_TriggerTask::StaticRegisterNativesUTR_TriggerTask()
	{
	}
	UClass* Z_Construct_UClass_UTR_TriggerTask_NoRegister()
	{
		return UTR_TriggerTask::StaticClass();
	}
	struct Z_Construct_UClass_UTR_TriggerTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Informations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Informations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Informations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTR_TriggerTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerRecordBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTR_TriggerTask_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/Record/TR_TriggerTask.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations_Inner = { "Informations", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRecordTaskInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations_MetaData[] = {
		{ "Category", "Record" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTask.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations = { "Informations", nullptr, (EPropertyFlags)0x0010008000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTR_TriggerTask, Informations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTR_TriggerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTR_TriggerTask_Statics::NewProp_Informations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTR_TriggerTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTR_TriggerTask>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTR_TriggerTask_Statics::ClassParams = {
		&UTR_TriggerTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTR_TriggerTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTR_TriggerTask_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTR_TriggerTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTR_TriggerTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTR_TriggerTask()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTR_TriggerTask_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTR_TriggerTask, 1416598501);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTR_TriggerTask>()
	{
		return UTR_TriggerTask::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTR_TriggerTask(Z_Construct_UClass_UTR_TriggerTask, &UTR_TriggerTask::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTR_TriggerTask"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTR_TriggerTask);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
