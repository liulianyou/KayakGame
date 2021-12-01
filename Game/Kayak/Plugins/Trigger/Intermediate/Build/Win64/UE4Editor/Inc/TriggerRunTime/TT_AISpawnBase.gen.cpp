// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_AISpawnBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnCashInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_AISpawnBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_AISpawnBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FSpawnCashInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSpawnCashInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnCashInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SpawnCashInfo"), sizeof(FSpawnCashInfo), Get_Z_Construct_UScriptStruct_FSpawnCashInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSpawnCashInfo>()
{
	return FSpawnCashInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnCashInfo(FSpawnCashInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SpawnCashInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnCashInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnCashInfo()
	{
		UScriptStruct::DeferCppStructOps<FSpawnCashInfo>(FName(TEXT("SpawnCashInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSpawnCashInfo;
	struct Z_Construct_UScriptStruct_FSpawnCashInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalKilledAI_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalKilledAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIRemainedToSpawnInCurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AIRemainedToSpawnInCurrentRound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KilledAIInCurrentRound_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_KilledAIInCurrentRound;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAliveAIController_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAliveAIController_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentAliveAIController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnCashInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentRound_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentRound = { "CurrentRound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnCashInfo, CurrentRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_MaxRound_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The max round for this task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
		{ "ToolTip", "The max round for this task" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_MaxRound = { "MaxRound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnCashInfo, MaxRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_MaxRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_MaxRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_TotalKilledAI_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The total killed AI after this task active\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
		{ "ToolTip", "The total killed AI after this task active" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_TotalKilledAI = { "TotalKilledAI", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnCashInfo, TotalKilledAI), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_TotalKilledAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_TotalKilledAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_AIRemainedToSpawnInCurrentRound_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_AIRemainedToSpawnInCurrentRound = { "AIRemainedToSpawnInCurrentRound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnCashInfo, AIRemainedToSpawnInCurrentRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_AIRemainedToSpawnInCurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_AIRemainedToSpawnInCurrentRound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_KilledAIInCurrentRound_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The dead AI for current round\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
		{ "ToolTip", "The dead AI for current round" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_KilledAIInCurrentRound = { "KilledAIInCurrentRound", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnCashInfo, KilledAIInCurrentRound), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_KilledAIInCurrentRound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_KilledAIInCurrentRound_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController_Inner = { "CurrentAliveAIController", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The AI spawned by this task is still alive.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
		{ "ToolTip", "The AI spawned by this task is still alive." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController = { "CurrentAliveAIController", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnCashInfo, CurrentAliveAIController), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_MaxRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_TotalKilledAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_AIRemainedToSpawnInCurrentRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_KilledAIInCurrentRound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::NewProp_CurrentAliveAIController,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SpawnCashInfo",
		sizeof(FSpawnCashInfo),
		alignof(FSpawnCashInfo),
		Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnCashInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnCashInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnCashInfo"), sizeof(FSpawnCashInfo), Get_Z_Construct_UScriptStruct_FSpawnCashInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnCashInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnCashInfo_Hash() { return 2782093928U; }
	DEFINE_FUNCTION(UTT_AISpawnBase::execOnActorDestoryCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorDestoryCallback(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawnBase::execGetSpawnCashedData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSpawnCashInfo*)Z_Param__Result=P_THIS->GetSpawnCashedData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawnBase::execStartToCreateNewAI)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartToCreateNewAI(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_AISpawnBase::execGetSpawnData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAISpawnDataBase**)Z_Param__Result=P_THIS->GetSpawnData();
		P_NATIVE_END;
	}
	void UTT_AISpawnBase::StaticRegisterNativesUTT_AISpawnBase()
	{
		UClass* Class = UTT_AISpawnBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSpawnCashedData", &UTT_AISpawnBase::execGetSpawnCashedData },
			{ "GetSpawnData", &UTT_AISpawnBase::execGetSpawnData },
			{ "OnActorDestoryCallback", &UTT_AISpawnBase::execOnActorDestoryCallback },
			{ "StartToCreateNewAI", &UTT_AISpawnBase::execStartToCreateNewAI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics
	{
		struct TT_AISpawnBase_eventGetSpawnCashedData_Parms
		{
			FSpawnCashInfo ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawnBase_eventGetSpawnCashedData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSpawnCashInfo, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawnBase, nullptr, "GetSpawnCashedData", nullptr, nullptr, sizeof(TT_AISpawnBase_eventGetSpawnCashedData_Parms), Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics
	{
		struct TT_AISpawnBase_eventGetSpawnData_Parms
		{
			UAISpawnDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawnBase_eventGetSpawnData_Parms, ReturnValue), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawnBase, nullptr, "GetSpawnData", nullptr, nullptr, sizeof(TT_AISpawnBase_eventGetSpawnData_Parms), Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics
	{
		struct TT_AISpawnBase_eventOnActorDestoryCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawnBase_eventOnActorDestoryCallback_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawnBase, nullptr, "OnActorDestoryCallback", nullptr, nullptr, sizeof(TT_AISpawnBase_eventOnActorDestoryCallback_Parms), Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics
	{
		struct TT_AISpawnBase_eventStartToCreateNewAI_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_AISpawnBase_eventStartToCreateNewAI_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_AISpawnBase, nullptr, "StartToCreateNewAI", nullptr, nullptr, sizeof(TT_AISpawnBase_eventStartToCreateNewAI_Parms), Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_AISpawnBase_NoRegister()
	{
		return UTT_AISpawnBase::StaticClass();
	}
	struct Z_Construct_UClass_UTT_AISpawnBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AISpawnData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_AISpawnBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_AISpawnBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnCashedData, "GetSpawnCashedData" }, // 2893314359
		{ &Z_Construct_UFunction_UTT_AISpawnBase_GetSpawnData, "GetSpawnData" }, // 1161182019
		{ &Z_Construct_UFunction_UTT_AISpawnBase_OnActorDestoryCallback, "OnActorDestoryCallback" }, // 3208340556
		{ &Z_Construct_UFunction_UTT_AISpawnBase_StartToCreateNewAI, "StartToCreateNewAI" }, // 1781622483
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawnBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_AISpawnBase_Statics::NewProp_AISpawnData_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_AISpawnBase_Statics::NewProp_AISpawnData = { "AISpawnData", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_AISpawnBase, AISpawnData), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawnBase_Statics::NewProp_AISpawnData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawnBase_Statics::NewProp_AISpawnData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_AISpawnBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_AISpawnBase_Statics::NewProp_AISpawnData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_AISpawnBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_AISpawnBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_AISpawnBase_Statics::ClassParams = {
		&UTT_AISpawnBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_AISpawnBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawnBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_AISpawnBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_AISpawnBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_AISpawnBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_AISpawnBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_AISpawnBase, 1565893162);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_AISpawnBase>()
	{
		return UTT_AISpawnBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_AISpawnBase(Z_Construct_UClass_UTT_AISpawnBase, &UTT_AISpawnBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_AISpawnBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_AISpawnBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
