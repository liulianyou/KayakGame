// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
// End Cross Module References
class UScriptStruct* FNeedSpawnedPawnInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("NeedSpawnedPawnInfo"), sizeof(FNeedSpawnedPawnInfo), Get_Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FNeedSpawnedPawnInfo>()
{
	return FNeedSpawnedPawnInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNeedSpawnedPawnInfo(FNeedSpawnedPawnInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("NeedSpawnedPawnInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFNeedSpawnedPawnInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFNeedSpawnedPawnInfo()
	{
		UScriptStruct::DeferCppStructOps<FNeedSpawnedPawnInfo>(FName(TEXT("NeedSpawnedPawnInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFNeedSpawnedPawnInfo;
	struct Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsOutValueValid_MetaData[];
#endif
		static void NewProp_IsOutValueValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsOutValueValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The information which will be referenced by respawn task to determine weather to respawn new pawn\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h" },
		{ "ToolTip", "The information which will be referenced by respawn task to determine weather to respawn new pawn" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNeedSpawnedPawnInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid_MetaData[] = {
		{ "Category", "Respawn" },
		{ "Comment", "//Flag to check weather this data have been processed and all the OutValues is valid\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h" },
		{ "ToolTip", "Flag to check weather this data have been processed and all the OutValues is valid" },
	};
#endif
	void Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid_SetBit(void* Obj)
	{
		((FNeedSpawnedPawnInfo*)Obj)->IsOutValueValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid = { "IsOutValueValid", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FNeedSpawnedPawnInfo), &Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::NewProp_IsOutValueValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"NeedSpawnedPawnInfo",
		sizeof(FNeedSpawnedPawnInfo),
		alignof(FNeedSpawnedPawnInfo),
		Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NeedSpawnedPawnInfo"), sizeof(FNeedSpawnedPawnInfo), Get_Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo_Hash() { return 632914724U; }
	DEFINE_FUNCTION(URespawnDataBase::execReset)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Operation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_Operation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URespawnDataBase::execGetRespawnInfo)
	{
		P_GET_TARRAY_REF(FNeedSpawnedPawnInfo,Z_Param_Out_RespawnInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRespawnInfo(Z_Param_Out_RespawnInfo);
		P_NATIVE_END;
	}
	void URespawnDataBase::StaticRegisterNativesURespawnDataBase()
	{
		UClass* Class = URespawnDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRespawnInfo", &URespawnDataBase::execGetRespawnInfo },
			{ "Reset", &URespawnDataBase::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics
	{
		struct RespawnDataBase_eventGetRespawnInfo_Parms
		{
			TArray<FNeedSpawnedPawnInfo> RespawnInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RespawnInfo_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RespawnInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::NewProp_RespawnInfo_Inner = { "RespawnInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FNeedSpawnedPawnInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::NewProp_RespawnInfo = { "RespawnInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RespawnDataBase_eventGetRespawnInfo_Parms, RespawnInfo), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::NewProp_RespawnInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::NewProp_RespawnInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get the final data which the respawn task need to respawn new pawn\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h" },
		{ "ToolTip", "* Get the final data which the respawn task need to respawn new pawn" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URespawnDataBase, nullptr, "GetRespawnInfo", nullptr, nullptr, sizeof(RespawnDataBase_eventGetRespawnInfo_Parms), Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URespawnDataBase_Reset_Statics
	{
		struct RespawnDataBase_eventReset_Parms
		{
			UOperationInformationBase* Operation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URespawnDataBase_Reset_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URespawnDataBase_Reset_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RespawnDataBase_eventReset_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URespawnDataBase_Reset_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnDataBase_Reset_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URespawnDataBase_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawnDataBase_Reset_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URespawnDataBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URespawnDataBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URespawnDataBase, nullptr, "Reset", nullptr, nullptr, sizeof(RespawnDataBase_eventReset_Parms), Z_Construct_UFunction_URespawnDataBase_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnDataBase_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URespawnDataBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnDataBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URespawnDataBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URespawnDataBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URespawnDataBase_NoRegister()
	{
		return URespawnDataBase::StaticClass();
	}
	struct Z_Construct_UClass_URespawnDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawnDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URespawnDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URespawnDataBase_GetRespawnInfo, "GetRespawnInfo" }, // 3936609508
		{ &Z_Construct_UFunction_URespawnDataBase_Reset, "Reset" }, // 944155141
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnData/RespawnDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawnDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawnDataBase_Statics::ClassParams = {
		&URespawnDataBase::StaticClass,
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
		0x000010A1u,
		METADATA_PARAMS(Z_Construct_UClass_URespawnDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawnDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawnDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawnDataBase, 779738473);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URespawnDataBase>()
	{
		return URespawnDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawnDataBase(Z_Construct_UClass_URespawnDataBase, &URespawnDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URespawnDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
