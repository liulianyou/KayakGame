// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/CheckTaskState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckTaskState() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTaskStateData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTask();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTaskState_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckTaskState();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRelationshipInterface_NoRegister();
// End Cross Module References
class UScriptStruct* FTaskStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTaskStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskStateData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TaskStateData"), sizeof(FTaskStateData), Get_Z_Construct_UScriptStruct_FTaskStateData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTaskStateData>()
{
	return FTaskStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskStateData(FTaskStateData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TaskStateData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskStateData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskStateData()
	{
		UScriptStruct::DeferCppStructOps<FTaskStateData>(FName(TEXT("TaskStateData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskStateData;
	struct Z_Construct_UScriptStruct_FTaskStateData_Statics
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_TriggerTask_MetaData[] = {
		{ "Category", "TaskStateData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_TriggerTask = { "TriggerTask", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskStateData, TriggerTask), Z_Construct_UScriptStruct_FTriggerTask, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_TriggerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_TriggerTask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State_MetaData[] = {
		{ "Category", "TaskStateData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskStateData, State), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_TriggerTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskStateData_Statics::NewProp_State,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"TaskStateData",
		sizeof(FTaskStateData),
		alignof(FTaskStateData),
		Z_Construct_UScriptStruct_FTaskStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskStateData"), sizeof(FTaskStateData), Get_Z_Construct_UScriptStruct_FTaskStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskStateData_Hash() { return 684995207U; }
	DEFINE_FUNCTION(UCheckTaskState::execRegisterToTaskEvent)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterToTaskEvent(Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckTaskState::execGetTriggerTask)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->GetTriggerTask(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckTaskState::execRemoveTaskData)
	{
		P_GET_STRUCT_REF(FTaskStateData,Z_Param_Out_TaskData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTaskData(Z_Param_Out_TaskData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckTaskState::execAddTaskData)
	{
		P_GET_STRUCT_REF(FTaskStateData,Z_Param_Out_TaskData);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddTaskData(Z_Param_Out_TaskData);
		P_NATIVE_END;
	}
	void UCheckTaskState::StaticRegisterNativesUCheckTaskState()
	{
		UClass* Class = UCheckTaskState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTaskData", &UCheckTaskState::execAddTaskData },
			{ "GetTriggerTask", &UCheckTaskState::execGetTriggerTask },
			{ "RegisterToTaskEvent", &UCheckTaskState::execRegisterToTaskEvent },
			{ "RemoveTaskData", &UCheckTaskState::execRemoveTaskData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics
	{
		struct CheckTaskState_eventAddTaskData_Parms
		{
			FTaskStateData TaskData;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskData;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::NewProp_TaskData = { "TaskData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskState_eventAddTaskData_Parms, TaskData), Z_Construct_UScriptStruct_FTaskStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskState_eventAddTaskData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::NewProp_TaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "/*\n\x09* Add new task data to the pool\n\x09* \n\x09* #return the index for new added task data in the pool\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
		{ "ToolTip", "* Add new task data to the pool\n*\n* #return the index for new added task data in the pool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckTaskState, nullptr, "AddTaskData", nullptr, nullptr, sizeof(CheckTaskState_eventAddTaskData_Parms), Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckTaskState_AddTaskData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckTaskState_AddTaskData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics
	{
		struct CheckTaskState_eventGetTriggerTask_Parms
		{
			int32 Index;
			UTriggerTaskBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskState_eventGetTriggerTask_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskState_eventGetTriggerTask_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "/*\n\x09* Get the target trigger task which this condition inspect.\n\x09* \n\x09* @param Index the index in the task state data.\n\x09* \n\x09* #return  if the target task data do not contain trigger task then I will try to get the immediate trigger task which own this object\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
		{ "ToolTip", "* Get the target trigger task which this condition inspect.\n*\n* @param Index the index in the task state data.\n*\n* #return  if the target task data do not contain trigger task then I will try to get the immediate trigger task which own this object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckTaskState, nullptr, "GetTriggerTask", nullptr, nullptr, sizeof(CheckTaskState_eventGetTriggerTask_Parms), Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckTaskState_GetTriggerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckTaskState_GetTriggerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics
	{
		struct CheckTaskState_eventRegisterToTaskEvent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskState_eventRegisterToTaskEvent_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Override UObject\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
		{ "ToolTip", "Override UObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckTaskState, nullptr, "RegisterToTaskEvent", nullptr, nullptr, sizeof(CheckTaskState_eventRegisterToTaskEvent_Parms), Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics
	{
		struct CheckTaskState_eventRemoveTaskData_Parms
		{
			FTaskStateData TaskData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::NewProp_TaskData = { "TaskData", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckTaskState_eventRemoveTaskData_Parms, TaskData), Z_Construct_UScriptStruct_FTaskStateData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::NewProp_TaskData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckTaskState, nullptr, "RemoveTaskData", nullptr, nullptr, sizeof(CheckTaskState_eventRemoveTaskData_Parms), Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckTaskState_RemoveTaskData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckTaskState_RemoveTaskData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckTaskState_NoRegister()
	{
		return UCheckTaskState::StaticClass();
	}
	struct Z_Construct_UClass_UCheckTaskState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaskDatas;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckTaskState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckTaskState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckTaskState_AddTaskData, "AddTaskData" }, // 1066547472
		{ &Z_Construct_UFunction_UCheckTaskState_GetTriggerTask, "GetTriggerTask" }, // 901550762
		{ &Z_Construct_UFunction_UCheckTaskState_RegisterToTaskEvent, "RegisterToTaskEvent" }, // 3850587727
		{ &Z_Construct_UFunction_UCheckTaskState_RemoveTaskData, "RemoveTaskData" }, // 540706278
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTaskState_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/CheckTaskState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas_Inner = { "TaskDatas", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaskStateData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas_MetaData[] = {
		{ "Category", "CheckTaskState" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckTaskState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas = { "TaskDatas", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckTaskState, TaskDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckTaskState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckTaskState_Statics::NewProp_TaskDatas,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCheckTaskState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTriggerTaskRelationshipInterface_NoRegister, (int32)VTABLE_OFFSET(UCheckTaskState, ITriggerTaskRelationshipInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckTaskState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckTaskState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckTaskState_Statics::ClassParams = {
		&UCheckTaskState::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckTaskState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTaskState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckTaskState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckTaskState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckTaskState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckTaskState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckTaskState, 2074192480);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckTaskState>()
	{
		return UCheckTaskState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckTaskState(Z_Construct_UClass_UCheckTaskState, &UCheckTaskState::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckTaskState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckTaskState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
