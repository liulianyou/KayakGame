// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h"
#include "TriggerRunTime/Public/TriggerTask/TriggerTaskBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTTSS_AnyConditionMeet() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskStyleMap();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTTSS_AnyConditionMeet_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTTSS_AnyConditionMeet();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStateSwitchBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
// End Cross Module References
class UScriptStruct* FTriggerTaskStyleMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerTaskStyleMap, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TriggerTaskStyleMap"), sizeof(FTriggerTaskStyleMap), Get_Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTriggerTaskStyleMap>()
{
	return FTriggerTaskStyleMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriggerTaskStyleMap(FTriggerTaskStyleMap::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TriggerTaskStyleMap"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTaskStyleMap
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTaskStyleMap()
	{
		UScriptStruct::DeferCppStructOps<FTriggerTaskStyleMap>(FName(TEXT("TriggerTaskStyleMap")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTaskStyleMap;
	struct Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Styles_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Used to describe when and how to change into target state automatically\n*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
		{ "ToolTip", "* Used to describe when and how to change into target state automatically" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerTaskStyleMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Condition_MetaData[] = {
		{ "Category", "RuntimeCondition" },
		{ "Comment", "//Describe when to change state of trigger task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
		{ "ToolTip", "Describe when to change state of trigger task" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerTaskStyleMap, Condition), Z_Construct_UClass_UEvaluatorOperation_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_Inner_MetaData[] = {
		{ "Category", "RuntimeCondition" },
		{ "Comment", "//Describe how to change state of trigger task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
		{ "ToolTip", "Describe how to change state of trigger task" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_MetaData[] = {
		{ "Category", "RuntimeCondition" },
		{ "Comment", "//Describe how to change state of trigger task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
		{ "ToolTip", "Describe how to change state of trigger task" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x001000800000000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerTaskStyleMap, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::NewProp_Styles,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"TriggerTaskStyleMap",
		sizeof(FTriggerTaskStyleMap),
		alignof(FTriggerTaskStyleMap),
		Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskStyleMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriggerTaskStyleMap"), sizeof(FTriggerTaskStyleMap), Get_Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriggerTaskStyleMap_Hash() { return 1721575919U; }
	DEFINE_FUNCTION(UTTSS_AnyConditionMeet::execGetCopySwitches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTriggerTaskStyleMap>*)Z_Param__Result=P_THIS->GetCopySwitches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTSS_AnyConditionMeet::execGetSwitches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTriggerTaskStyleMap>*)Z_Param__Result=P_THIS->GetSwitches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTSS_AnyConditionMeet::execGetConstSwitches)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FTriggerTaskStyleMap>*)Z_Param__Result=P_THIS->GetConstSwitches();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTTSS_AnyConditionMeet::execOnCondtionContentChanged)
	{
		P_GET_OBJECT(UEvaluatorBase,Z_Param_Eval);
		P_GET_UBOOL(Z_Param_EvaluatorResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCondtionContentChanged(Z_Param_Eval,Z_Param_EvaluatorResult);
		P_NATIVE_END;
	}
	void UTTSS_AnyConditionMeet::StaticRegisterNativesUTTSS_AnyConditionMeet()
	{
		UClass* Class = UTTSS_AnyConditionMeet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetConstSwitches", &UTTSS_AnyConditionMeet::execGetConstSwitches },
			{ "GetCopySwitches", &UTTSS_AnyConditionMeet::execGetCopySwitches },
			{ "GetSwitches", &UTTSS_AnyConditionMeet::execGetSwitches },
			{ "OnCondtionContentChanged", &UTTSS_AnyConditionMeet::execOnCondtionContentChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics
	{
		struct TTSS_AnyConditionMeet_eventGetConstSwitches_Parms
		{
			TArray<FTriggerTaskStyleMap> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskStyleMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTSS_AnyConditionMeet_eventGetConstSwitches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTSS_AnyConditionMeet, nullptr, "GetConstSwitches", nullptr, nullptr, sizeof(TTSS_AnyConditionMeet_eventGetConstSwitches_Parms), Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics
	{
		struct TTSS_AnyConditionMeet_eventGetCopySwitches_Parms
		{
			TArray<FTriggerTaskStyleMap> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskStyleMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTSS_AnyConditionMeet_eventGetCopySwitches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTSS_AnyConditionMeet, nullptr, "GetCopySwitches", nullptr, nullptr, sizeof(TTSS_AnyConditionMeet_eventGetCopySwitches_Parms), Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics
	{
		struct TTSS_AnyConditionMeet_eventGetSwitches_Parms
		{
			TArray<FTriggerTaskStyleMap> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskStyleMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTSS_AnyConditionMeet_eventGetSwitches_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTSS_AnyConditionMeet, nullptr, "GetSwitches", nullptr, nullptr, sizeof(TTSS_AnyConditionMeet_eventGetSwitches_Parms), Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics
	{
		struct TTSS_AnyConditionMeet_eventOnCondtionContentChanged_Parms
		{
			UEvaluatorBase* Eval;
			bool EvaluatorResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Eval_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Eval;
		static void NewProp_EvaluatorResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EvaluatorResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_Eval_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_Eval = { "Eval", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TTSS_AnyConditionMeet_eventOnCondtionContentChanged_Parms, Eval), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_Eval_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_Eval_MetaData)) };
	void Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_EvaluatorResult_SetBit(void* Obj)
	{
		((TTSS_AnyConditionMeet_eventOnCondtionContentChanged_Parms*)Obj)->EvaluatorResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_EvaluatorResult = { "EvaluatorResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TTSS_AnyConditionMeet_eventOnCondtionContentChanged_Parms), &Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_EvaluatorResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_Eval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::NewProp_EvaluatorResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTTSS_AnyConditionMeet, nullptr, "OnCondtionContentChanged", nullptr, nullptr, sizeof(TTSS_AnyConditionMeet_eventOnCondtionContentChanged_Parms), Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTTSS_AnyConditionMeet_NoRegister()
	{
		return UTTSS_AnyConditionMeet::StaticClass();
	}
	struct Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Switches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Switches;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetConstSwitches, "GetConstSwitches" }, // 3461808222
		{ &Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetCopySwitches, "GetCopySwitches" }, // 3233987929
		{ &Z_Construct_UFunction_UTTSS_AnyConditionMeet_GetSwitches, "GetSwitches" }, // 903265157
		{ &Z_Construct_UFunction_UTTSS_AnyConditionMeet_OnCondtionContentChanged, "OnCondtionContentChanged" }, // 1025286595
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Any Condition Meet" },
		{ "IncludePath", "Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches_Inner = { "Switches", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTriggerTaskStyleMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches_MetaData[] = {
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*, meta = (AllowPrivateAccess = \"true\")*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TTSS_AnyConditionMeet.h" },
		{ "ToolTip", ", meta = (AllowPrivateAccess = \"true\")" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches = { "Switches", nullptr, (EPropertyFlags)0x0010008000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTTSS_AnyConditionMeet, Switches), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::NewProp_Switches,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTTSS_AnyConditionMeet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::ClassParams = {
		&UTTSS_AnyConditionMeet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTTSS_AnyConditionMeet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTTSS_AnyConditionMeet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTTSS_AnyConditionMeet, 1135475365);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTTSS_AnyConditionMeet>()
	{
		return UTTSS_AnyConditionMeet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTTSS_AnyConditionMeet(Z_Construct_UClass_UTTSS_AnyConditionMeet, &UTTSS_AnyConditionMeet::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTTSS_AnyConditionMeet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTTSS_AnyConditionMeet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
