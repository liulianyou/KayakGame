// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIInfoAccessor() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FEnemyIDInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel();
// End Cross Module References
class UScriptStruct* FEnemyIDInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FEnemyIDInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEnemyIDInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EnemyIDInfo"), sizeof(FEnemyIDInfo), Get_Z_Construct_UScriptStruct_FEnemyIDInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FEnemyIDInfo>()
{
	return FEnemyIDInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEnemyIDInfo(FEnemyIDInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("EnemyIDInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFEnemyIDInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFEnemyIDInfo()
	{
		UScriptStruct::DeferCppStructOps<FEnemyIDInfo>(FName(TEXT("EnemyIDInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFEnemyIDInfo;
	struct Z_Construct_UScriptStruct_FEnemyIDInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NPCID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NPCID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEnemyIDInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::NewProp_NPCID_MetaData[] = {
		{ "Category", "EnemyIDInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::NewProp_NPCID = { "NPCID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEnemyIDInfo, NPCID), METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::NewProp_NPCID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::NewProp_NPCID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::NewProp_NPCID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"EnemyIDInfo",
		sizeof(FEnemyIDInfo),
		alignof(FEnemyIDInfo),
		Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEnemyIDInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEnemyIDInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EnemyIDInfo"), sizeof(FEnemyIDInfo), Get_Z_Construct_UScriptStruct_FEnemyIDInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEnemyIDInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEnemyIDInfo_Hash() { return 3583510969U; }
	DEFINE_FUNCTION(UAIInfoAccessorBase::execGetVaildNPCInfos)
	{
		P_GET_TARRAY_REF(FEnemyIDInfo,Z_Param_Out_NPCInfos);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetVaildNPCInfos_Implementation(Z_Param_Out_NPCInfos);
		P_NATIVE_END;
	}
	static FName NAME_UAIInfoAccessorBase_GetVaildNPCInfos = FName(TEXT("GetVaildNPCInfos"));
	void UAIInfoAccessorBase::GetVaildNPCInfos(TArray<FEnemyIDInfo>& NPCInfos)
	{
		AIInfoAccessorBase_eventGetVaildNPCInfos_Parms Parms;
		Parms.NPCInfos=NPCInfos;
		ProcessEvent(FindFunctionChecked(NAME_UAIInfoAccessorBase_GetVaildNPCInfos),&Parms);
		NPCInfos=Parms.NPCInfos;
	}
	void UAIInfoAccessorBase::StaticRegisterNativesUAIInfoAccessorBase()
	{
		UClass* Class = UAIInfoAccessorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVaildNPCInfos", &UAIInfoAccessorBase::execGetVaildNPCInfos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NPCInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NPCInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::NewProp_NPCInfos_Inner = { "NPCInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEnemyIDInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::NewProp_NPCInfos = { "NPCInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AIInfoAccessorBase_eventGetVaildNPCInfos_Parms, NPCInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::NewProp_NPCInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::NewProp_NPCInfos,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAIInfoAccessorBase, nullptr, "GetVaildNPCInfos", nullptr, nullptr, sizeof(AIInfoAccessorBase_eventGetVaildNPCInfos_Parms), Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAIInfoAccessorBase_NoRegister()
	{
		return UAIInfoAccessorBase::StaticClass();
	}
	struct Z_Construct_UClass_UAIInfoAccessorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIInfoAccessorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAIInfoAccessorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAIInfoAccessorBase_GetVaildNPCInfos, "GetVaildNPCInfos" }, // 3847793960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoAccessorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "NPCInfo Accessor" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIInfoAccessorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIInfoAccessorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIInfoAccessorBase_Statics::ClassParams = {
		&UAIInfoAccessorBase::StaticClass,
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
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIInfoAccessorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoAccessorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIInfoAccessorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIInfoAccessorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIInfoAccessorBase, 1882679289);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAIInfoAccessorBase>()
	{
		return UAIInfoAccessorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIInfoAccessorBase(Z_Construct_UClass_UAIInfoAccessorBase, &UAIInfoAccessorBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAIInfoAccessorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIInfoAccessorBase);
	void UAIInfoAccessorInAISpawnDataGroup::StaticRegisterNativesUAIInfoAccessorInAISpawnDataGroup()
	{
	}
	UClass* Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_NoRegister()
	{
		return UAIInfoAccessorInAISpawnDataGroup::StaticClass();
	}
	struct Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIInfoAccessorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This class and all its sub class should only be used in AISpawnDataGroup\n*/" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "ToolTip", "* This class and all its sub class should only be used in AISpawnDataGroup" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIInfoAccessorInAISpawnDataGroup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::ClassParams = {
		&UAIInfoAccessorInAISpawnDataGroup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIInfoAccessorInAISpawnDataGroup, 2120920573);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAIInfoAccessorInAISpawnDataGroup>()
	{
		return UAIInfoAccessorInAISpawnDataGroup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIInfoAccessorInAISpawnDataGroup(Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup, &UAIInfoAccessorInAISpawnDataGroup::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAIInfoAccessorInAISpawnDataGroup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIInfoAccessorInAISpawnDataGroup);
	void UAIInfoAccessFromGroupIDExcel::StaticRegisterNativesUAIInfoAccessFromGroupIDExcel()
	{
	}
	UClass* Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_NoRegister()
	{
		return UAIInfoAccessFromGroupIDExcel::StaticClass();
	}
	struct Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Read the NPC information from the excel data which is stored all Infos directly\n*/" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "ToolTip", "* Read the NPC information from the excel data which is stored all Infos directly" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIInfoAccessFromGroupIDExcel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::ClassParams = {
		&UAIInfoAccessFromGroupIDExcel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIInfoAccessFromGroupIDExcel, 4232319365);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAIInfoAccessFromGroupIDExcel>()
	{
		return UAIInfoAccessFromGroupIDExcel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIInfoAccessFromGroupIDExcel(Z_Construct_UClass_UAIInfoAccessFromGroupIDExcel, &UAIInfoAccessFromGroupIDExcel::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAIInfoAccessFromGroupIDExcel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIInfoAccessFromGroupIDExcel);
	void UAIInfoAccessFromEnemyIDExcel::StaticRegisterNativesUAIInfoAccessFromEnemyIDExcel()
	{
	}
	UClass* Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_NoRegister()
	{
		return UAIInfoAccessFromEnemyIDExcel::StaticClass();
	}
	struct Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIInfoAccessorInAISpawnDataGroup,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Read the NPC information from the excel data which data is just group some data in other data table which store the actual NPC infos\n*/" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AIInfoAccessor/AIInfoAccessor.h" },
		{ "ToolTip", "* Read the NPC information from the excel data which data is just group some data in other data table which store the actual NPC infos" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAIInfoAccessFromEnemyIDExcel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::ClassParams = {
		&UAIInfoAccessFromEnemyIDExcel::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIInfoAccessFromEnemyIDExcel, 2412518563);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAIInfoAccessFromEnemyIDExcel>()
	{
		return UAIInfoAccessFromEnemyIDExcel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIInfoAccessFromEnemyIDExcel(Z_Construct_UClass_UAIInfoAccessFromEnemyIDExcel, &UAIInfoAccessFromEnemyIDExcel::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAIInfoAccessFromEnemyIDExcel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIInfoAccessFromEnemyIDExcel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
