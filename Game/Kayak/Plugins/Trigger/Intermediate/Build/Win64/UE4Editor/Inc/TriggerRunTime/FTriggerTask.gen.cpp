// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/CustomizeDetailPanel/FTriggerTask.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFTriggerTask() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTask();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
class UScriptStruct* FTriggerTask::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTriggerTask_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerTask, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TriggerTask"), sizeof(FTriggerTask), Get_Z_Construct_UScriptStruct_FTriggerTask_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTriggerTask>()
{
	return FTriggerTask::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriggerTask(FTriggerTask::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TriggerTask"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTask
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTask()
	{
		UScriptStruct::DeferCppStructOps<FTriggerTask>(FName(TEXT("TriggerTask")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTask;
	struct Z_Construct_UScriptStruct_FTriggerTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoftTaskObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SoftTaskObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CashedTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CashedTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTask_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* All Trigger task that need to search form the task pool instead of creating new one should use it to replace UTriggerTaskBase*.\n* As I will customize this details in the panel\n*/" },
		{ "ModuleRelativePath", "Public/CustomizeDetailPanel/FTriggerTask.h" },
		{ "ToolTip", "* All Trigger task that need to search form the task pool instead of creating new one should use it to replace UTriggerTaskBase*.\n* As I will customize this details in the panel" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriggerTask_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerTask>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_SoftTaskObject_MetaData[] = {
		{ "Category", "TriggerTask" },
		{ "Comment", "/*\n\x09* The soft point to the trigger task \n\x09*/" },
		{ "ModuleRelativePath", "Public/CustomizeDetailPanel/FTriggerTask.h" },
		{ "ToolTip", "* The soft point to the trigger task" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_SoftTaskObject = { "SoftTaskObject", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerTask, SoftTaskObject), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_SoftTaskObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_SoftTaskObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_CashedTask_MetaData[] = {
		{ "Comment", "/*\n\x09* When you use TSoftObjectPtr in BeginDestroy it will cause crash, as GC forbid this usage.\n\x09* So I restore the hard point to the trigger task, so that we can use it in BeginDestroy function\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CustomizeDetailPanel/FTriggerTask.h" },
		{ "ToolTip", "* When you use TSoftObjectPtr in BeginDestroy it will cause crash, as GC forbid this usage.\n* So I restore the hard point to the trigger task, so that we can use it in BeginDestroy function" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_CashedTask = { "CashedTask", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerTask, CashedTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_CashedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_CashedTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_SoftTaskObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerTask_Statics::NewProp_CashedTask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerTask_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"TriggerTask",
		sizeof(FTriggerTask),
		alignof(FTriggerTask),
		Z_Construct_UScriptStruct_FTriggerTask_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTask_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTask_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTask_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriggerTask()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriggerTask_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriggerTask"), sizeof(FTriggerTask), Get_Z_Construct_UScriptStruct_FTriggerTask_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriggerTask_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriggerTask_Hash() { return 2514498258U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
