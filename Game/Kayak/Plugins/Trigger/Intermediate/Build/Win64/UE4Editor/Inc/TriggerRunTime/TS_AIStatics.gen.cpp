// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTS_AIStatics() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAISpawnInformation();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTS_AIStatics_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTS_AIStatics();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStaticsBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataBase_NoRegister();
// End Cross Module References
class UScriptStruct* FAISpawnInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAISpawnInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISpawnInformation, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("AISpawnInformation"), sizeof(FAISpawnInformation), Get_Z_Construct_UScriptStruct_FAISpawnInformation_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FAISpawnInformation>()
{
	return FAISpawnInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISpawnInformation(FAISpawnInformation::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("AISpawnInformation"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFAISpawnInformation
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFAISpawnInformation()
	{
		UScriptStruct::DeferCppStructOps<FAISpawnInformation>(FName(TEXT("AISpawnInformation")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFAISpawnInformation;
	struct Z_Construct_UScriptStruct_FAISpawnInformation_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipWaitTime_MetaData[];
#endif
		static void NewProp_SkipWaitTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipWaitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipDelayTime_MetaData[];
#endif
		static void NewProp_SkipDelayTime_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipDelayTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipTask_MetaData[];
#endif
		static void NewProp_SkipTask_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The information that used to describe the runtime AISpawnTask\n*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
		{ "ToolTip", "* The information that used to describe the runtime AISpawnTask" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISpawnInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_RoundIndex_MetaData[] = {
		{ "Category", "AISpawnInformation" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_RoundIndex = { "RoundIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISpawnInformation, RoundIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_RoundIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_RoundIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime_MetaData[] = {
		{ "Category", "AISpawnInformation" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime_SetBit(void* Obj)
	{
		((FAISpawnInformation*)Obj)->SkipWaitTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime = { "SkipWaitTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawnInformation), &Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime_MetaData[] = {
		{ "Category", "AISpawnInformation" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime_SetBit(void* Obj)
	{
		((FAISpawnInformation*)Obj)->SkipDelayTime = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime = { "SkipDelayTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawnInformation), &Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask_MetaData[] = {
		{ "Category", "AISpawnInformation" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask_SetBit(void* Obj)
	{
		((FAISpawnInformation*)Obj)->SkipTask = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask = { "SkipTask", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAISpawnInformation), &Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISpawnInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_RoundIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipWaitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipDelayTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISpawnInformation_Statics::NewProp_SkipTask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISpawnInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"AISpawnInformation",
		sizeof(FAISpawnInformation),
		alignof(FAISpawnInformation),
		Z_Construct_UScriptStruct_FAISpawnInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISpawnInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISpawnInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISpawnInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISpawnInformation"), sizeof(FAISpawnInformation), Get_Z_Construct_UScriptStruct_FAISpawnInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISpawnInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISpawnInformation_Hash() { return 2517903301U; }
	DEFINE_FUNCTION(UTS_AIStatics::execSetAISpawnRoundSkipWaitAndDelayTime)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAISpawnRoundSkipWaitAndDelayTime(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTS_AIStatics::execOnNewAISpawnedFinished)
	{
		P_GET_OBJECT(UAISpawnDataBase,Z_Param_SpawnData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnNewAISpawnedFinished(Z_Param_SpawnData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTS_AIStatics::execOnAISpawnStateEvent)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_InstanceTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAISpawnStateEvent(Z_Param_InstanceTask);
		P_NATIVE_END;
	}
	void UTS_AIStatics::StaticRegisterNativesUTS_AIStatics()
	{
		UClass* Class = UTS_AIStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAISpawnStateEvent", &UTS_AIStatics::execOnAISpawnStateEvent },
			{ "OnNewAISpawnedFinished", &UTS_AIStatics::execOnNewAISpawnedFinished },
			{ "SetAISpawnRoundSkipWaitAndDelayTime", &UTS_AIStatics::execSetAISpawnRoundSkipWaitAndDelayTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics
	{
		struct TS_AIStatics_eventOnAISpawnStateEvent_Parms
		{
			UTriggerTaskBase* InstanceTask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstanceTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::NewProp_InstanceTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::NewProp_InstanceTask = { "InstanceTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TS_AIStatics_eventOnAISpawnStateEvent_Parms, InstanceTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::NewProp_InstanceTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::NewProp_InstanceTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::NewProp_InstanceTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTS_AIStatics, nullptr, "OnAISpawnStateEvent", nullptr, nullptr, sizeof(TS_AIStatics_eventOnAISpawnStateEvent_Parms), Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics
	{
		struct TS_AIStatics_eventOnNewAISpawnedFinished_Parms
		{
			UAISpawnDataBase* SpawnData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::NewProp_SpawnData = { "SpawnData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TS_AIStatics_eventOnNewAISpawnedFinished_Parms, SpawnData), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::NewProp_SpawnData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTS_AIStatics, nullptr, "OnNewAISpawnedFinished", nullptr, nullptr, sizeof(TS_AIStatics_eventOnNewAISpawnedFinished_Parms), Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics
	{
		struct TS_AIStatics_eventSetAISpawnRoundSkipWaitAndDelayTime_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((TS_AIStatics_eventSetAISpawnRoundSkipWaitAndDelayTime_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TS_AIStatics_eventSetAISpawnRoundSkipWaitAndDelayTime_Parms), &Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "AIStatics" },
		{ "Comment", "//Help function to skip wait and delay time\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
		{ "ToolTip", "Help function to skip wait and delay time" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTS_AIStatics, nullptr, "SetAISpawnRoundSkipWaitAndDelayTime", nullptr, nullptr, sizeof(TS_AIStatics_eventSetAISpawnRoundSkipWaitAndDelayTime_Parms), Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTS_AIStatics_NoRegister()
	{
		return UTS_AIStatics::StaticClass();
	}
	struct Z_Construct_UClass_UTS_AIStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTS_AIStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerStaticsBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTS_AIStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTS_AIStatics_OnAISpawnStateEvent, "OnAISpawnStateEvent" }, // 3925320621
		{ &Z_Construct_UFunction_UTS_AIStatics_OnNewAISpawnedFinished, "OnNewAISpawnedFinished" }, // 232638891
		{ &Z_Construct_UFunction_UTS_AIStatics_SetAISpawnRoundSkipWaitAndDelayTime, "SetAISpawnRoundSkipWaitAndDelayTime" }, // 4067136691
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTS_AIStatics_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This statics will skip some AI spawn tasks in the map\n*/" },
		{ "IncludePath", "Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/TriggerStatics/TS_AIStatics.h" },
		{ "ToolTip", "* This statics will skip some AI spawn tasks in the map" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTS_AIStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTS_AIStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTS_AIStatics_Statics::ClassParams = {
		&UTS_AIStatics::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTS_AIStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTS_AIStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTS_AIStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTS_AIStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTS_AIStatics, 2320813658);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTS_AIStatics>()
	{
		return UTS_AIStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTS_AIStatics(Z_Construct_UClass_UTS_AIStatics, &UTS_AIStatics::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTS_AIStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTS_AIStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
