// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/EffectTask/TT_EffectBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_EffectBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEffectDataOperator();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOpenEffectData();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_EffectBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_EffectBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEffectDataBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FEffectDataOperator::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEffectDataOperator_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEffectDataOperator, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EffectDataOperator"), sizeof(FEffectDataOperator), Get_Z_Construct_UScriptStruct_FEffectDataOperator_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEffectDataOperator>()
{
	return FEffectDataOperator::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEffectDataOperator(FEffectDataOperator::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EffectDataOperator"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEffectDataOperator
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEffectDataOperator()
	{
		UScriptStruct::DeferCppStructOps<FEffectDataOperator>(FName(TEXT("EffectDataOperator")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEffectDataOperator;
	struct Z_Construct_UScriptStruct_FEffectDataOperator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOpenedData_MetaData[];
#endif
		static void NewProp_IsOpenedData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOpenedData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDataIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectDataOperator_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The struct data to store the information to close the effect data\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "The struct data to store the information to close the effect data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEffectDataOperator>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers_MetaData[] = {
		{ "Category", "EffectDataOperator" },
		{ "Comment", "//Who rise up this action\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "Who rise up this action" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectDataOperator, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData_MetaData[] = {
		{ "Category", "EffectDataOperator" },
		{ "Comment", "//Whether this operation is used to open the effect data\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "Whether this operation is used to open the effect data" },
	};
#endif
	void Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData_SetBit(void* Obj)
	{
		((FEffectDataOperator*)Obj)->IsOpenedData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData = { "IsOpenedData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FEffectDataOperator), &Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_EffectDataIndex_MetaData[] = {
		{ "Category", "EffectDataOperator" },
		{ "Comment", "//The index of the effect data this operation operator\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "The index of the effect data this operation operator" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEffectDataOperator, EffectDataIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_EffectDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_EffectDataIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEffectDataOperator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_IsOpenedData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEffectDataOperator_Statics::NewProp_EffectDataIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEffectDataOperator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EffectDataOperator",
		sizeof(FEffectDataOperator),
		alignof(FEffectDataOperator),
		Z_Construct_UScriptStruct_FEffectDataOperator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEffectDataOperator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEffectDataOperator()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEffectDataOperator_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EffectDataOperator"), sizeof(FEffectDataOperator), Get_Z_Construct_UScriptStruct_FEffectDataOperator_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEffectDataOperator_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEffectDataOperator_Hash() { return 3558280708U; }
class UScriptStruct* FOpenEffectData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOpenEffectData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenEffectData, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OpenEffectData"), sizeof(FOpenEffectData), Get_Z_Construct_UScriptStruct_FOpenEffectData_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOpenEffectData>()
{
	return FOpenEffectData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenEffectData(FOpenEffectData::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OpenEffectData"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenEffectData
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenEffectData()
	{
		UScriptStruct::DeferCppStructOps<FOpenEffectData>(FName(TEXT("OpenEffectData")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenEffectData;
	struct Z_Construct_UScriptStruct_FOpenEffectData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenEffectData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The struct data to store the information to open the effect data\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "The struct data to store the information to open the effect data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenEffectData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers_MetaData[] = {
		{ "Category", "OpenEffectData" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenEffectData, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenEffectData_Statics::NewProp_Causers,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenEffectData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"OpenEffectData",
		sizeof(FOpenEffectData),
		alignof(FOpenEffectData),
		Z_Construct_UScriptStruct_FOpenEffectData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenEffectData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenEffectData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenEffectData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenEffectData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenEffectData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenEffectData"), sizeof(FOpenEffectData), Get_Z_Construct_UScriptStruct_FOpenEffectData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenEffectData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenEffectData_Hash() { return 3724877955U; }
	DEFINE_FUNCTION(UTT_EffectBase::execRep_OnEffectOperators)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_OnEffectOperators();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execNetMuti_OpenEffect)
	{
		P_GET_TARRAY(UObject*,Z_Param_Causers);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMuti_OpenEffect_Implementation(Z_Param_Causers,Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execNetMuti_CloseEffect)
	{
		P_GET_TARRAY(UObject*,Z_Param_Causers);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NetMuti_CloseEffect_Implementation(Z_Param_Causers,Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execDataChanged)
	{
		P_GET_OBJECT(UTriggerEffectDataBase,Z_Param_EffectData);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_DataName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DataChanged(Z_Param_EffectData,Z_Param_Out_DataName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execOpenEffect)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Causers);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenEffect(Z_Param_Out_Causers,Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execCloseEffect)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Causers);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseEffect(Z_Param_Out_Causers,Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execCanOpenTargetEffectData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanOpenTargetEffectData(Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execIsEffectDataClosed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEffectDataClosed(Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execGetEffectDataIndex)
	{
		P_GET_OBJECT(UTriggerEffectDataBase,Z_Param_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEffectDataIndex(Z_Param_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execGetEffectData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerEffectDataBase**)Z_Param__Result=P_THIS->GetEffectData(Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_EffectBase::execGetEffectDatas)
	{
		P_GET_TARRAY_REF(UTriggerEffectDataBase*,Z_Param_Out_OutDatas);
		P_GET_UBOOL(Z_Param_MatchSupportDataTypes);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEffectDatas(Z_Param_Out_OutDatas,Z_Param_MatchSupportDataTypes);
		P_NATIVE_END;
	}
	static FName NAME_UTT_EffectBase_NetMuti_CloseEffect = FName(TEXT("NetMuti_CloseEffect"));
	void UTT_EffectBase::NetMuti_CloseEffect(TArray<UObject*> const& Causers, int32 EffectDataIndex)
	{
		TT_EffectBase_eventNetMuti_CloseEffect_Parms Parms;
		Parms.Causers=Causers;
		Parms.EffectDataIndex=EffectDataIndex;
		ProcessEvent(FindFunctionChecked(NAME_UTT_EffectBase_NetMuti_CloseEffect),&Parms);
	}
	static FName NAME_UTT_EffectBase_NetMuti_OpenEffect = FName(TEXT("NetMuti_OpenEffect"));
	void UTT_EffectBase::NetMuti_OpenEffect(TArray<UObject*> const& Causers, int32 EffectDataIndex)
	{
		TT_EffectBase_eventNetMuti_OpenEffect_Parms Parms;
		Parms.Causers=Causers;
		Parms.EffectDataIndex=EffectDataIndex;
		ProcessEvent(FindFunctionChecked(NAME_UTT_EffectBase_NetMuti_OpenEffect),&Parms);
	}
	static FName NAME_UTT_EffectBase_OnDataChanged = FName(TEXT("OnDataChanged"));
	void UTT_EffectBase::OnDataChanged(const UTriggerEffectDataBase* EffectData, FName const& DataName)
	{
		TT_EffectBase_eventOnDataChanged_Parms Parms;
		Parms.EffectData=EffectData;
		Parms.DataName=DataName;
		ProcessEvent(FindFunctionChecked(NAME_UTT_EffectBase_OnDataChanged),&Parms);
	}
	void UTT_EffectBase::StaticRegisterNativesUTT_EffectBase()
	{
		UClass* Class = UTT_EffectBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanOpenTargetEffectData", &UTT_EffectBase::execCanOpenTargetEffectData },
			{ "CloseEffect", &UTT_EffectBase::execCloseEffect },
			{ "DataChanged", &UTT_EffectBase::execDataChanged },
			{ "GetEffectData", &UTT_EffectBase::execGetEffectData },
			{ "GetEffectDataIndex", &UTT_EffectBase::execGetEffectDataIndex },
			{ "GetEffectDatas", &UTT_EffectBase::execGetEffectDatas },
			{ "IsEffectDataClosed", &UTT_EffectBase::execIsEffectDataClosed },
			{ "NetMuti_CloseEffect", &UTT_EffectBase::execNetMuti_CloseEffect },
			{ "NetMuti_OpenEffect", &UTT_EffectBase::execNetMuti_OpenEffect },
			{ "OpenEffect", &UTT_EffectBase::execOpenEffect },
			{ "Rep_OnEffectOperators", &UTT_EffectBase::execRep_OnEffectOperators },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics
	{
		struct TT_EffectBase_eventCanOpenTargetEffectData_Parms
		{
			int32 EffectDataIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventCanOpenTargetEffectData_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TT_EffectBase_eventCanOpenTargetEffectData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_EffectBase_eventCanOpenTargetEffectData_Parms), &Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::NewProp_EffectDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "//Try to check weather this task can open the target effect data\n" },
		{ "CPP_Default_EffectDataIndex", "-1" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "Try to check weather this task can open the target effect data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "CanOpenTargetEffectData", nullptr, nullptr, sizeof(TT_EffectBase_eventCanOpenTargetEffectData_Parms), Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics
	{
		struct TT_EffectBase_eventCloseEffect_Parms
		{
			TArray<UObject*> Causers;
			int32 EffectDataIndex;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventCloseEffect_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventCloseEffect_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::NewProp_EffectDataIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "/*\n\x09* close the target effect data\n\x09* \n\x09* @param EffectDataIndex\x09INDEX_NONE means all data will be closed, and this task should be considered as finished\n\x09*/" },
		{ "CPP_Default_EffectDataIndex", "-1" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* close the target effect data\n*\n* @param EffectDataIndex        INDEX_NONE means all data will be closed, and this task should be considered as finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "CloseEffect", nullptr, nullptr, sizeof(TT_EffectBase_eventCloseEffect_Parms), Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_CloseEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_CloseEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics
	{
		struct TT_EffectBase_eventDataChanged_Parms
		{
			const UTriggerEffectDataBase* EffectData;
			FName DataName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_EffectData_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_EffectData = { "EffectData", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventDataChanged_Parms, EffectData), Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_EffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_EffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_DataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventDataChanged_Parms, DataName), METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_DataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_DataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_EffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "DataChanged", nullptr, nullptr, sizeof(TT_EffectBase_eventDataChanged_Parms), Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_DataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_DataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics
	{
		struct TT_EffectBase_eventGetEffectData_Parms
		{
			int32 EffectDataIndex;
			UTriggerEffectDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventGetEffectData_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventGetEffectData_Parms, ReturnValue), Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_EffectDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "/*\n\x09* Get the specific effect data according to the effect data index\n\x09*\n\x09* @param EffectDataIndex the specific index of effect data\n\x09*/" },
		{ "CPP_Default_EffectDataIndex", "-1" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* Get the specific effect data according to the effect data index\n*\n* @param EffectDataIndex the specific index of effect data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "GetEffectData", nullptr, nullptr, sizeof(TT_EffectBase_eventGetEffectData_Parms), Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_GetEffectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_GetEffectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics
	{
		struct TT_EffectBase_eventGetEffectDataIndex_Parms
		{
			UTriggerEffectDataBase* Data;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_Data_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventGetEffectDataIndex_Parms, Data), Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventGetEffectDataIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_Data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "GetEffectDataIndex", nullptr, nullptr, sizeof(TT_EffectBase_eventGetEffectDataIndex_Parms), Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics
	{
		struct TT_EffectBase_eventGetEffectDatas_Parms
		{
			TArray<UTriggerEffectDataBase*> OutDatas;
			bool MatchSupportDataTypes;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutDatas;
		static void NewProp_MatchSupportDataTypes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MatchSupportDataTypes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas_Inner = { "OutDatas", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas = { "OutDatas", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventGetEffectDatas_Parms, OutDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas_MetaData)) };
	void Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_MatchSupportDataTypes_SetBit(void* Obj)
	{
		((TT_EffectBase_eventGetEffectDatas_Parms*)Obj)->MatchSupportDataTypes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_MatchSupportDataTypes = { "MatchSupportDataTypes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_EffectBase_eventGetEffectDatas_Parms), &Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_MatchSupportDataTypes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_OutDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::NewProp_MatchSupportDataTypes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "/*\n\x09* Get all data this task stores\n\x09*\n\x09* @param MatchSupportDataTypes False means it will output all data not matter weather it is matched for this task\n\x09*/" },
		{ "CPP_Default_MatchSupportDataTypes", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* Get all data this task stores\n*\n* @param MatchSupportDataTypes False means it will output all data not matter weather it is matched for this task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "GetEffectDatas", nullptr, nullptr, sizeof(TT_EffectBase_eventGetEffectDatas_Parms), Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics
	{
		struct TT_EffectBase_eventIsEffectDataClosed_Parms
		{
			int32 EffectDataIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventIsEffectDataClosed_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TT_EffectBase_eventIsEffectDataClosed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_EffectBase_eventIsEffectDataClosed_Parms), &Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::NewProp_EffectDataIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "/*\n\x09* Function used to check weather all data have been closed\n\x09* \n\x09* @param EffectDataIndex INDEX_NONE means will check all data\n\x09*/" },
		{ "CPP_Default_EffectDataIndex", "-1" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* Function used to check weather all data have been closed\n*\n* @param EffectDataIndex INDEX_NONE means will check all data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "IsEffectDataClosed", nullptr, nullptr, sizeof(TT_EffectBase_eventIsEffectDataClosed_Parms), Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventNetMuti_CloseEffect_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventNetMuti_CloseEffect_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::NewProp_EffectDataIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to close effect, by default it will broadcast all machines. All Clients and Server\n\x09* \n\x09* @param Causers\x09The causer who want to close the effect\n\x09* @param EffectDataIndex\x09The index of effect data that this task will try to closed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* Try to close effect, by default it will broadcast all machines. All Clients and Server\n*\n* @param Causers        The causer who want to close the effect\n* @param EffectDataIndex        The index of effect data that this task will try to closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "NetMuti_CloseEffect", nullptr, nullptr, sizeof(TT_EffectBase_eventNetMuti_CloseEffect_Parms), Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventNetMuti_OpenEffect_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventNetMuti_OpenEffect_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::NewProp_EffectDataIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to open effect, by default it will broadcast all machines All Clients and Server\n\x09* \n\x09* @param Causers\x09The causer who want to open the effect\n\x09* @param EffectDataIndex\x09The index of effect data that this task will try to open\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* Try to open effect, by default it will broadcast all machines All Clients and Server\n*\n* @param Causers        The causer who want to open the effect\n* @param EffectDataIndex        The index of effect data that this task will try to open" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "NetMuti_OpenEffect", nullptr, nullptr, sizeof(TT_EffectBase_eventNetMuti_OpenEffect_Parms), Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DataName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_EffectData_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_EffectData = { "EffectData", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventOnDataChanged_Parms, EffectData), Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_EffectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_EffectData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_DataName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_DataName = { "DataName", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventOnDataChanged_Parms, DataName), METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_DataName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_DataName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_EffectData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::NewProp_DataName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "/*\n\x09* When some data is changed in the effect data the task need to do something according it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* When some data is changed in the effect data the task need to do something according it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "OnDataChanged", nullptr, nullptr, sizeof(TT_EffectBase_eventOnDataChanged_Parms), Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_OnDataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_OnDataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics
	{
		struct TT_EffectBase_eventOpenEffect_Parms
		{
			TArray<UObject*> Causers;
			int32 EffectDataIndex;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventOpenEffect_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_EffectBase_eventOpenEffect_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::NewProp_EffectDataIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Net" },
		{ "Comment", "/*\n\x09* Try to open the target effect data in the effect task\n\x09* \n\x09* @param EffectDataIndex the index for effect data in this trigger effect\n\x09*/" },
		{ "CPP_Default_EffectDataIndex", "-1" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "* Try to open the target effect data in the effect task\n*\n* @param EffectDataIndex the index for effect data in this trigger effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "OpenEffect", nullptr, nullptr, sizeof(TT_EffectBase_eventOpenEffect_Parms), Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_OpenEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_OpenEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_EffectBase, nullptr, "Rep_OnEffectOperators", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_EffectBase_NoRegister()
	{
		return UTT_EffectBase::StaticClass();
	}
	struct Z_Construct_UClass_UTT_EffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatas_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EffectDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectDatas;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SupportedDataTypes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SupportedDataTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SupportedDataTypes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EffectOperators_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectOperators_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EffectOperators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_EffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_EffectBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_EffectBase_CanOpenTargetEffectData, "CanOpenTargetEffectData" }, // 3555530233
		{ &Z_Construct_UFunction_UTT_EffectBase_CloseEffect, "CloseEffect" }, // 2579105551
		{ &Z_Construct_UFunction_UTT_EffectBase_DataChanged, "DataChanged" }, // 497313889
		{ &Z_Construct_UFunction_UTT_EffectBase_GetEffectData, "GetEffectData" }, // 3368003639
		{ &Z_Construct_UFunction_UTT_EffectBase_GetEffectDataIndex, "GetEffectDataIndex" }, // 2874543431
		{ &Z_Construct_UFunction_UTT_EffectBase_GetEffectDatas, "GetEffectDatas" }, // 4294572964
		{ &Z_Construct_UFunction_UTT_EffectBase_IsEffectDataClosed, "IsEffectDataClosed" }, // 195079544
		{ &Z_Construct_UFunction_UTT_EffectBase_NetMuti_CloseEffect, "NetMuti_CloseEffect" }, // 518503774
		{ &Z_Construct_UFunction_UTT_EffectBase_NetMuti_OpenEffect, "NetMuti_OpenEffect" }, // 2230440564
		{ &Z_Construct_UFunction_UTT_EffectBase_OnDataChanged, "OnDataChanged" }, // 2541871735
		{ &Z_Construct_UFunction_UTT_EffectBase_OpenEffect, "OpenEffect" }, // 3986646122
		{ &Z_Construct_UFunction_UTT_EffectBase_Rep_OnEffectOperators, "Rep_OnEffectOperators" }, // 3478038267
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_EffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EffectData" },
		{ "Comment", "//All data that this effect task will process\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "All data that this effect task will process" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_Inner = { "EffectDatas", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EffectData" },
		{ "Comment", "//All data that this effect task will process\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "All data that this effect task will process" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas = { "EffectDatas", nullptr, (EPropertyFlags)0x004000800000002d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_EffectBase, EffectDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes_Inner = { "SupportedDataTypes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerEffectDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes_MetaData[] = {
		{ "Category", "EffectData" },
		{ "Comment", "/*, meta = (AllowPrivateAccess = \"true\")*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", ", meta = (AllowPrivateAccess = \"true\")" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes = { "SupportedDataTypes", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_EffectBase, SupportedDataTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators_Inner = { "EffectOperators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEffectDataOperator, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators_MetaData[] = {
		{ "Comment", "//the operators for the data in this trigger task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/TT_EffectBase.h" },
		{ "ToolTip", "the operators for the data in this trigger task" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators = { "EffectOperators", "Rep_OnEffectOperators", (EPropertyFlags)0x0040000100000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_EffectBase, EffectOperators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_EffectBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_SupportedDataTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_EffectBase_Statics::NewProp_EffectOperators,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_EffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_EffectBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_EffectBase_Statics::ClassParams = {
		&UTT_EffectBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_EffectBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_EffectBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_EffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_EffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_EffectBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_EffectBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_EffectBase, 87021858);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_EffectBase>()
	{
		return UTT_EffectBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_EffectBase(Z_Construct_UClass_UTT_EffectBase, &UTT_EffectBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_EffectBase"), false, nullptr, nullptr, nullptr);

	void UTT_EffectBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_EffectDatas(TEXT("EffectDatas"));
		static const FName Name_EffectOperators(TEXT("EffectOperators"));

		const bool bIsValid = true
			&& Name_EffectDatas == ClassReps[(int32)ENetFields_Private::EffectDatas].Property->GetFName()
			&& Name_EffectOperators == ClassReps[(int32)ENetFields_Private::EffectOperators].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTT_EffectBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_EffectBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
