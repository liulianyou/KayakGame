// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/CheckTaskRepeatWithNum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckTaskRepeatWithNum() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRepeatTaskStateData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTask();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTaskRepeatWithNum_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTaskRepeatWithNum();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRepeatCondtionBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
class UScriptStruct* FRepeatTaskStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRepeatTaskStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRepeatTaskStateData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RepeatTaskStateData"), sizeof(FRepeatTaskStateData), Get_Z_Construct_UScriptStruct_FRepeatTaskStateData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRepeatTaskStateData>()
{
	return FRepeatTaskStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRepeatTaskStateData(FRepeatTaskStateData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RepeatTaskStateData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRepeatTaskStateData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRepeatTaskStateData()
	{
		UScriptStruct::DeferCppStructOps<FRepeatTaskStateData>(FName(TEXT("RepeatTaskStateData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRepeatTaskStateData;
	struct Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerTask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRepeatTaskStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_TriggerTask_MetaData[] = {
		{ "Category", "RepeatTaskStateData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_TriggerTask = { "TriggerTask", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepeatTaskStateData, TriggerTask), Z_Construct_UScriptStruct_FTriggerTask, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_TriggerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_TriggerTask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "RepeatTaskStateData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepeatTaskStateData, State), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_MaxCount_MetaData[] = {
		{ "Category", "RepeatTaskStateData" },
		{ "Comment", "//The max repeat count, -1 means infinite\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
		{ "ToolTip", "The max repeat count, -1 means infinite" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_MaxCount = { "MaxCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRepeatTaskStateData, MaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_MaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_MaxCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_TriggerTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::NewProp_MaxCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RepeatTaskStateData",
		sizeof(FRepeatTaskStateData),
		alignof(FRepeatTaskStateData),
		Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRepeatTaskStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRepeatTaskStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RepeatTaskStateData"), sizeof(FRepeatTaskStateData), Get_Z_Construct_UScriptStruct_FRepeatTaskStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRepeatTaskStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRepeatTaskStateData_Hash() { return 2535190235U; }
	DEFINE_FUNCTION(UCheckTaskRepeatWithNum::execRegisterToTaskEvent)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterToTaskEvent(Z_Param_Task);
		P_NATIVE_END;
	}
	void UCheckTaskRepeatWithNum::StaticRegisterNativesUCheckTaskRepeatWithNum()
	{
		UClass* Class = UCheckTaskRepeatWithNum::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RegisterToTaskEvent", &UCheckTaskRepeatWithNum::execRegisterToTaskEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics
	{
		struct CheckTaskRepeatWithNum_eventRegisterToTaskEvent_Parms
		{
			UTriggerTaskBase* Task;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskRepeatWithNum_eventRegisterToTaskEvent_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckTaskRepeatWithNum, nullptr, "RegisterToTaskEvent", nullptr, nullptr, sizeof(CheckTaskRepeatWithNum_eventRegisterToTaskEvent_Parms), Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckTaskRepeatWithNum_NoRegister()
	{
		return UCheckTaskRepeatWithNum::StaticClass();
	}
	struct Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatTaskData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RepeatTaskData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskRepeatCondtionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckTaskRepeatWithNum_RegisterToTaskEvent, "RegisterToTaskEvent" }, // 2636791616
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/CheckTaskRepeatWithNum.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::NewProp_RepeatTaskData_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskRepeatWithNum.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::NewProp_RepeatTaskData = { "RepeatTaskData", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckTaskRepeatWithNum, RepeatTaskData), Z_Construct_UScriptStruct_FRepeatTaskStateData, METADATA_PARAMS(Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::NewProp_RepeatTaskData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::NewProp_RepeatTaskData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::NewProp_RepeatTaskData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckTaskRepeatWithNum>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::ClassParams = {
		&UCheckTaskRepeatWithNum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckTaskRepeatWithNum()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckTaskRepeatWithNum_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckTaskRepeatWithNum, 1579279996);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckTaskRepeatWithNum>()
	{
		return UCheckTaskRepeatWithNum::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckTaskRepeatWithNum(Z_Construct_UClass_UCheckTaskRepeatWithNum, &UCheckTaskRepeatWithNum::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckTaskRepeatWithNum"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckTaskRepeatWithNum);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
