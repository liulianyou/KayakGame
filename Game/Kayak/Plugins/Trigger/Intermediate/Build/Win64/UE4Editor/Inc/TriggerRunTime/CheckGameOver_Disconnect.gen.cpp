// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOver_Disconnect() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOver_Disconnect_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOver_Disconnect();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayerGameOverDisconnectInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PlayerGameOverDisconnectInfo"), sizeof(FPlayerGameOverDisconnectInfo), Get_Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPlayerGameOverDisconnectInfo>()
{
	return FPlayerGameOverDisconnectInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerGameOverDisconnectInfo(FPlayerGameOverDisconnectInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PlayerGameOverDisconnectInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPlayerGameOverDisconnectInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPlayerGameOverDisconnectInfo()
	{
		UScriptStruct::DeferCppStructOps<FPlayerGameOverDisconnectInfo>(FName(TEXT("PlayerGameOverDisconnectInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPlayerGameOverDisconnectInfo;
	struct Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CheckCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerGameOverDisconnectInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerGameOverDisconnectInfo" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerGameOverDisconnectInfo, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_CheckCount_MetaData[] = {
		{ "Category", "PlayerGameOverDisconnectInfo" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_CheckCount = { "CheckCount", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerGameOverDisconnectInfo, CheckCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_CheckCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_CheckCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::NewProp_CheckCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PlayerGameOverDisconnectInfo",
		sizeof(FPlayerGameOverDisconnectInfo),
		alignof(FPlayerGameOverDisconnectInfo),
		Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerGameOverDisconnectInfo"), sizeof(FPlayerGameOverDisconnectInfo), Get_Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerGameOverDisconnectInfo_Hash() { return 3393666708U; }
	DEFINE_FUNCTION(UCheckGameOver_Disconnect::execOnPlayerControllerDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerControllerDestroyed(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOver_Disconnect::execDisconnectEventCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DisconnectEventCallback(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UCheckGameOver_Disconnect::StaticRegisterNativesUCheckGameOver_Disconnect()
	{
		UClass* Class = UCheckGameOver_Disconnect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DisconnectEventCallback", &UCheckGameOver_Disconnect::execDisconnectEventCallback },
			{ "OnPlayerControllerDestroyed", &UCheckGameOver_Disconnect::execOnPlayerControllerDestroyed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics
	{
		struct CheckGameOver_Disconnect_eventDisconnectEventCallback_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOver_Disconnect_eventDisconnectEventCallback_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOver_Disconnect, nullptr, "DisconnectEventCallback", nullptr, nullptr, sizeof(CheckGameOver_Disconnect_eventDisconnectEventCallback_Parms), Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics
	{
		struct CheckGameOver_Disconnect_eventOnPlayerControllerDestroyed_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOver_Disconnect_eventOnPlayerControllerDestroyed_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOver_Disconnect, nullptr, "OnPlayerControllerDestroyed", nullptr, nullptr, sizeof(CheckGameOver_Disconnect_eventOnPlayerControllerDestroyed_Parms), Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckGameOver_Disconnect_NoRegister()
	{
		return UCheckGameOver_Disconnect::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOver_Disconnect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckGameOverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckGameOver_Disconnect_DisconnectEventCallback, "DisconnectEventCallback" }, // 845040003
		{ &Z_Construct_UFunction_UCheckGameOver_Disconnect_OnPlayerControllerDestroyed, "OnPlayerControllerDestroyed" }, // 3412989125
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOver_Disconnect.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOver_Disconnect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::ClassParams = {
		&UCheckGameOver_Disconnect::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOver_Disconnect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOver_Disconnect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOver_Disconnect, 1118895137);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOver_Disconnect>()
	{
		return UCheckGameOver_Disconnect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOver_Disconnect(Z_Construct_UClass_UCheckGameOver_Disconnect, &UCheckGameOver_Disconnect::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOver_Disconnect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOver_Disconnect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
