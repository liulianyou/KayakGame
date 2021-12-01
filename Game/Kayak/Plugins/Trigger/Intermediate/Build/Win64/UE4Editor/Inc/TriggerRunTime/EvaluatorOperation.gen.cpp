// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/EvaluatorOperation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluatorOperation() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEvaluatEventInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
// End Cross Module References
class UScriptStruct* FEvaluatEventInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEvaluatEventInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEvaluatEventInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EvaluatEventInfo"), sizeof(FEvaluatEventInfo), Get_Z_Construct_UScriptStruct_FEvaluatEventInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEvaluatEventInfo>()
{
	return FEvaluatEventInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEvaluatEventInfo(FEvaluatEventInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EvaluatEventInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEvaluatEventInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEvaluatEventInfo()
	{
		UScriptStruct::DeferCppStructOps<FEvaluatEventInfo>(FName(TEXT("EvaluatEventInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEvaluatEventInfo;
	struct Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Internal data to hold the information for evaluation\n*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "* Internal data to hold the information for evaluation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEvaluatEventInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "EvaluatEventInfo" },
		{ "Comment", "//The last immediate result of evaluation\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "The last immediate result of evaluation" },
	};
#endif
	void Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((FEvaluatEventInfo*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEvaluatEventInfo), &Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::NewProp_Result,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EvaluatEventInfo",
		sizeof(FEvaluatEventInfo),
		alignof(FEvaluatEventInfo),
		Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEvaluatEventInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEvaluatEventInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EvaluatEventInfo"), sizeof(FEvaluatEventInfo), Get_Z_Construct_UScriptStruct_FEvaluatEventInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEvaluatEventInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEvaluatEventInfo_Hash() { return 1141257944U; }
	DEFINE_FUNCTION(UEvaluatorOperation::execOnEvaluatorCallback)
	{
		P_GET_OBJECT(UEvaluatorBase,Z_Param_Evaluator);
		P_GET_UBOOL(Z_Param_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEvaluatorCallback(Z_Param_Evaluator,Z_Param_Result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorOperation::execGetCashedResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<UEvaluatorBase*,FEvaluatEventInfo>*)Z_Param__Result=P_THIS->GetCashedResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorOperation::execGetAllPassedEvaluators)
	{
		P_GET_TARRAY_REF(UEvaluatorBase*,Z_Param_Out_Conditions);
		P_GET_UBOOL(Z_Param_IncludeOperators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllPassedEvaluators(Z_Param_Out_Conditions,Z_Param_IncludeOperators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorOperation::execGetAllConditions)
	{
		P_GET_TARRAY_REF(UEvaluatorCondition*,Z_Param_Out_Conditions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllConditions(Z_Param_Out_Conditions);
		P_NATIVE_END;
	}
	void UEvaluatorOperation::StaticRegisterNativesUEvaluatorOperation()
	{
		UClass* Class = UEvaluatorOperation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllConditions", &UEvaluatorOperation::execGetAllConditions },
			{ "GetAllPassedEvaluators", &UEvaluatorOperation::execGetAllPassedEvaluators },
			{ "GetCashedResult", &UEvaluatorOperation::execGetCashedResult },
			{ "OnEvaluatorCallback", &UEvaluatorOperation::execOnEvaluatorCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics
	{
		struct EvaluatorOperation_eventGetAllConditions_Parms
		{
			TArray<UEvaluatorCondition*> Conditions;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorOperation_eventGetAllConditions_Parms, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::NewProp_Conditions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "/*\n\x09* Get all conditions in this evaluator\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "* Get all conditions in this evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorOperation, nullptr, "GetAllConditions", nullptr, nullptr, sizeof(EvaluatorOperation_eventGetAllConditions_Parms), Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics
	{
		struct EvaluatorOperation_eventGetAllPassedEvaluators_Parms
		{
			TArray<UEvaluatorBase*> Conditions;
			bool IncludeOperators;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static void NewProp_IncludeOperators_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeOperators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorOperation_eventGetAllPassedEvaluators_Parms, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions_MetaData)) };
	void Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_IncludeOperators_SetBit(void* Obj)
	{
		((EvaluatorOperation_eventGetAllPassedEvaluators_Parms*)Obj)->IncludeOperators = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_IncludeOperators = { "IncludeOperators", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EvaluatorOperation_eventGetAllPassedEvaluators_Parms), &Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_IncludeOperators_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::NewProp_IncludeOperators,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::Function_MetaDataParams[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "/*\n\x09* Get all evaluators which is passed the evaluator\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "* Get all evaluators which is passed the evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorOperation, nullptr, "GetAllPassedEvaluators", nullptr, nullptr, sizeof(EvaluatorOperation_eventGetAllPassedEvaluators_Parms), Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics
	{
		struct EvaluatorOperation_eventGetCashedResult_Parms
		{
			TMap<UEvaluatorBase*,FEvaluatEventInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_ValueProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FEvaluatEventInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorOperation_eventGetCashedResult_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "/*\n\x09* Get cashed result of each evaluator\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "* Get cashed result of each evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorOperation, nullptr, "GetCashedResult", nullptr, nullptr, sizeof(EvaluatorOperation_eventGetCashedResult_Parms), Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics
	{
		struct EvaluatorOperation_eventOnEvaluatorCallback_Parms
		{
			UEvaluatorBase* Evaluator;
			bool Result;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Evaluator;
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Evaluator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorOperation_eventOnEvaluatorCallback_Parms, Evaluator), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Evaluator_MetaData)) };
	void Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((EvaluatorOperation_eventOnEvaluatorCallback_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EvaluatorOperation_eventOnEvaluatorCallback_Parms), &Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Evaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorOperation, nullptr, "OnEvaluatorCallback", nullptr, nullptr, sizeof(EvaluatorOperation_eventOnEvaluatorCallback_Parms), Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEvaluatorOperation_NoRegister()
	{
		return UEvaluatorOperation::StaticClass();
	}
	struct Z_Construct_UClass_UEvaluatorOperation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operators_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Operators;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condtions_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Condtions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condtions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Condtions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvaluatorOperation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEvaluatorOperation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEvaluatorOperation_GetAllConditions, "GetAllConditions" }, // 3852118173
		{ &Z_Construct_UFunction_UEvaluatorOperation_GetAllPassedEvaluators, "GetAllPassedEvaluators" }, // 128667720
		{ &Z_Construct_UFunction_UEvaluatorOperation_GetCashedResult, "GetCashedResult" }, // 2693109369
		{ &Z_Construct_UFunction_UEvaluatorOperation_OnEvaluatorCallback, "OnEvaluatorCallback" }, // 2017771137
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorOperation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/EvaluatorOperation.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_Inner_MetaData[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "//The evaluator which should be run before this evaluator,\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "The evaluator which should be run before this evaluator," },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_Inner = { "Operators", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorOperation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_MetaData[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "//The evaluator which should be run before this evaluator,\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
		{ "ToolTip", "The evaluator which should be run before this evaluator," },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators = { "Operators", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEvaluatorOperation, Operators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_Inner_MetaData[] = {
		{ "Category", "Evaluator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_Inner = { "Condtions", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorCondition_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_MetaData[] = {
		{ "Category", "Evaluator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorOperation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions = { "Condtions", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEvaluatorOperation, Condtions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvaluatorOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Operators,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorOperation_Statics::NewProp_Condtions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvaluatorOperation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluatorOperation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEvaluatorOperation_Statics::ClassParams = {
		&UEvaluatorOperation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEvaluatorOperation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorOperation_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEvaluatorOperation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorOperation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvaluatorOperation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEvaluatorOperation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEvaluatorOperation, 2551336537);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UEvaluatorOperation>()
	{
		return UEvaluatorOperation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEvaluatorOperation(Z_Construct_UClass_UEvaluatorOperation, &UEvaluatorOperation::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UEvaluatorOperation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvaluatorOperation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
