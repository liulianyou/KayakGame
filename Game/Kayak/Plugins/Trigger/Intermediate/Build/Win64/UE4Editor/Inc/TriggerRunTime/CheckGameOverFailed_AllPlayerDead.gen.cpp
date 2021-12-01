// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOverFailed_AllPlayerDead() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverFailedBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FPlayerGameOverFalidInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PlayerGameOverFalidInfo"), sizeof(FPlayerGameOverFalidInfo), Get_Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPlayerGameOverFalidInfo>()
{
	return FPlayerGameOverFalidInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerGameOverFalidInfo(FPlayerGameOverFalidInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PlayerGameOverFalidInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPlayerGameOverFalidInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPlayerGameOverFalidInfo()
	{
		UScriptStruct::DeferCppStructOps<FPlayerGameOverFalidInfo>(FName(TEXT("PlayerGameOverFalidInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPlayerGameOverFalidInfo;
	struct Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDead_MetaData[];
#endif
		static void NewProp_IsDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerGameOverFalidInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_Player_MetaData[] = {
		{ "Category", "PlayerGameOverFalidInfo" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerGameOverFalidInfo, Player), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_Player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead_MetaData[] = {
		{ "Category", "PlayerGameOverFalidInfo" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead_SetBit(void* Obj)
	{
		((FPlayerGameOverFalidInfo*)Obj)->IsDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead = { "IsDead", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerGameOverFalidInfo), &Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::NewProp_IsDead,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PlayerGameOverFalidInfo",
		sizeof(FPlayerGameOverFalidInfo),
		alignof(FPlayerGameOverFalidInfo),
		Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerGameOverFalidInfo"), sizeof(FPlayerGameOverFalidInfo), Get_Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerGameOverFalidInfo_Hash() { return 2968089366U; }
	DEFINE_FUNCTION(UCheckGameOverFailed_AllPlayerDead::execActorDestroyCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorDestroyCallback(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverFailed_AllPlayerDead::execOnCharacterDead)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterDead(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverFailed_AllPlayerDead::execOnGameOverFaildEvent)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameOverFaildEvent(Z_Param_Out_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverFailed_AllPlayerDead::execOnCharacterExit)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterExit(Z_Param_Causer,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverFailed_AllPlayerDead::execOnActorSpawned)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnActorSpawned(Z_Param_Actor);
		P_NATIVE_END;
	}
	void UCheckGameOverFailed_AllPlayerDead::StaticRegisterNativesUCheckGameOverFailed_AllPlayerDead()
	{
		UClass* Class = UCheckGameOverFailed_AllPlayerDead::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorDestroyCallback", &UCheckGameOverFailed_AllPlayerDead::execActorDestroyCallback },
			{ "OnActorSpawned", &UCheckGameOverFailed_AllPlayerDead::execOnActorSpawned },
			{ "OnCharacterDead", &UCheckGameOverFailed_AllPlayerDead::execOnCharacterDead },
			{ "OnCharacterExit", &UCheckGameOverFailed_AllPlayerDead::execOnCharacterExit },
			{ "OnGameOverFaildEvent", &UCheckGameOverFailed_AllPlayerDead::execOnGameOverFaildEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics
	{
		struct CheckGameOverFailed_AllPlayerDead_eventActorDestroyCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverFailed_AllPlayerDead_eventActorDestroyCallback_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback function for the target actor destroyed;\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
		{ "ToolTip", "Callback function for the target actor destroyed;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead, nullptr, "ActorDestroyCallback", nullptr, nullptr, sizeof(CheckGameOverFailed_AllPlayerDead_eventActorDestroyCallback_Parms), Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics
	{
		struct CheckGameOverFailed_AllPlayerDead_eventOnActorSpawned_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverFailed_AllPlayerDead_eventOnActorSpawned_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead, nullptr, "OnActorSpawned", nullptr, nullptr, sizeof(CheckGameOverFailed_AllPlayerDead_eventOnActorSpawned_Parms), Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics
	{
		struct CheckGameOverFailed_AllPlayerDead_eventOnCharacterDead_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverFailed_AllPlayerDead_eventOnCharacterDead_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead, nullptr, "OnCharacterDead", nullptr, nullptr, sizeof(CheckGameOverFailed_AllPlayerDead_eventOnCharacterDead_Parms), Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics
	{
		struct CheckGameOverFailed_AllPlayerDead_eventOnCharacterExit_Parms
		{
			AActor* Causer;
			FString URL;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverFailed_AllPlayerDead_eventOnCharacterExit_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverFailed_AllPlayerDead_eventOnCharacterExit_Parms, URL), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead, nullptr, "OnCharacterExit", nullptr, nullptr, sizeof(CheckGameOverFailed_AllPlayerDead_eventOnCharacterExit_Parms), Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics
	{
		struct CheckGameOverFailed_AllPlayerDead_eventOnGameOverFaildEvent_Parms
		{
			TArray<AActor*> Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::NewProp_Actor_Inner = { "Actor", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverFailed_AllPlayerDead_eventOnGameOverFaildEvent_Parms, Actor), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::NewProp_Actor_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Register event to global failed event\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
		{ "ToolTip", "* Register event to global failed event" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead, nullptr, "OnGameOverFaildEvent", nullptr, nullptr, sizeof(CheckGameOverFailed_AllPlayerDead_eventOnGameOverFaildEvent_Parms), Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_NoRegister()
	{
		return UCheckGameOverFailed_AllPlayerDead::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckGameOverFailedBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_ActorDestroyCallback, "ActorDestroyCallback" }, // 3709632726
		{ &Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnActorSpawned, "OnActorSpawned" }, // 2373648366
		{ &Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterDead, "OnCharacterDead" }, // 1356578113
		{ &Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnCharacterExit, "OnCharacterExit" }, // 1562663586
		{ &Z_Construct_UFunction_UCheckGameOverFailed_AllPlayerDead_OnGameOverFaildEvent, "OnGameOverFaildEvent" }, // 1919441264
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* This failed condition only check weather all players have dead\n* This condition only valid when the player character inherited from IDeadSupportInterface\n*/" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailed_AllPlayerDead.h" },
		{ "ToolTip", "* This failed condition only check weather all players have dead\n* This condition only valid when the player character inherited from IDeadSupportInterface" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOverFailed_AllPlayerDead>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::ClassParams = {
		&UCheckGameOverFailed_AllPlayerDead::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOverFailed_AllPlayerDead, 3567736482);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOverFailed_AllPlayerDead>()
	{
		return UCheckGameOverFailed_AllPlayerDead::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOverFailed_AllPlayerDead(Z_Construct_UClass_UCheckGameOverFailed_AllPlayerDead, &UCheckGameOverFailed_AllPlayerDead::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOverFailed_AllPlayerDead"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOverFailed_AllPlayerDead);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
