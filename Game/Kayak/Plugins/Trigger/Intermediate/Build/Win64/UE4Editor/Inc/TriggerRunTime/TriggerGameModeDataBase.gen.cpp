// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameState/CheckGameModeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerGameModeDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerGameModeDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerGameModeDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameStateBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameModeState_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execNotifyOwnerToEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyOwnerToEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execGetGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameStateBase**)Z_Param__Result=P_THIS->GetGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execGetGameMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AGameModeBase**)Z_Param__Result=P_THIS->GetGameMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCheckGameModeState**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execInitialize)
	{
		P_GET_OBJECT(UCheckGameModeState,Z_Param_OwnerObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_OwnerObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerGameModeDataBase::execIsPassed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPassed();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerGameModeDataBase_OnInitialize = FName(TEXT("OnInitialize"));
	void UTriggerGameModeDataBase::OnInitialize(UCheckGameModeState* OwnerObject)
	{
		TriggerGameModeDataBase_eventOnInitialize_Parms Parms;
		Parms.OwnerObject=OwnerObject;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerGameModeDataBase_OnInitialize),&Parms);
	}
	static FName NAME_UTriggerGameModeDataBase_OnIsPassed = FName(TEXT("OnIsPassed"));
	bool UTriggerGameModeDataBase::OnIsPassed()
	{
		TriggerGameModeDataBase_eventOnIsPassed_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerGameModeDataBase_OnIsPassed),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerGameModeDataBase_OnReset = FName(TEXT("OnReset"));
	void UTriggerGameModeDataBase::OnReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerGameModeDataBase_OnReset),NULL);
	}
	void UTriggerGameModeDataBase::StaticRegisterNativesUTriggerGameModeDataBase()
	{
		UClass* Class = UTriggerGameModeDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGameMode", &UTriggerGameModeDataBase::execGetGameMode },
			{ "GetGameState", &UTriggerGameModeDataBase::execGetGameState },
			{ "GetOwner", &UTriggerGameModeDataBase::execGetOwner },
			{ "Initialize", &UTriggerGameModeDataBase::execInitialize },
			{ "IsPassed", &UTriggerGameModeDataBase::execIsPassed },
			{ "NotifyOwnerToEvaluate", &UTriggerGameModeDataBase::execNotifyOwnerToEvaluate },
			{ "Reset", &UTriggerGameModeDataBase::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics
	{
		struct TriggerGameModeDataBase_eventGetGameMode_Parms
		{
			AGameModeBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerGameModeDataBase_eventGetGameMode_Parms, ReturnValue), Z_Construct_UClass_AGameModeBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get current game mode\n\x09* \n\x09* #return This maybe return null as the game mode is not exist at client in Server/Client mode\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "ToolTip", "* Get current game mode\n*\n* #return This maybe return null as the game mode is not exist at client in Server/Client mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "GetGameMode", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventGetGameMode_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics
	{
		struct TriggerGameModeDataBase_eventGetGameState_Parms
		{
			AGameStateBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerGameModeDataBase_eventGetGameState_Parms, ReturnValue), Z_Construct_UClass_AGameStateBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get the game state for current game mode\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "ToolTip", "* Get the game state for current game mode" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "GetGameState", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventGetGameState_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics
	{
		struct TriggerGameModeDataBase_eventGetOwner_Parms
		{
			UCheckGameModeState* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerGameModeDataBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UCheckGameModeState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the owner of this data\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "ToolTip", "Get the owner of this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventGetOwner_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics
	{
		struct TriggerGameModeDataBase_eventInitialize_Parms
		{
			UCheckGameModeState* OwnerObject;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::NewProp_OwnerObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerGameModeDataBase_eventInitialize_Parms, OwnerObject), Z_Construct_UClass_UCheckGameModeState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::NewProp_OwnerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::NewProp_OwnerObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::NewProp_OwnerObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "Initialize", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventInitialize_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics
	{
		struct TriggerGameModeDataBase_eventIsPassed_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerGameModeDataBase_eventIsPassed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerGameModeDataBase_eventIsPassed_Parms), &Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "IsPassed", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventIsPassed_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When the inspect content have changed this data should notify the owner to evaluate\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "ToolTip", "* When the inspect content have changed this data should notify the owner to evaluate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "NotifyOwnerToEvaluate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::NewProp_OwnerObject_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerGameModeDataBase_eventOnInitialize_Parms, OwnerObject), Z_Construct_UClass_UCheckGameModeState_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::NewProp_OwnerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::NewProp_OwnerObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::NewProp_OwnerObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "OnInitialize", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventOnInitialize_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerGameModeDataBase_eventOnIsPassed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerGameModeDataBase_eventOnIsPassed_Parms), &Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to check weather this data can be passed as all the value this data focused has reach to target state\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "ToolTip", "* Try to check weather this data can be passed as all the value this data focused has reach to target state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "OnIsPassed", nullptr, nullptr, sizeof(TriggerGameModeDataBase_eventOnIsPassed_Parms), Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "OnReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerGameModeDataBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerGameModeDataBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerGameModeDataBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerGameModeDataBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerGameModeDataBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerGameModeDataBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerGameModeDataBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerGameModeDataBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerGameModeDataBase_NoRegister()
	{
		return UTriggerGameModeDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerGameModeDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerGameModeDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerGameModeDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameMode, "GetGameMode" }, // 3372299648
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_GetGameState, "GetGameState" }, // 550485857
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_GetOwner, "GetOwner" }, // 815761307
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_Initialize, "Initialize" }, // 3157862478
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_IsPassed, "IsPassed" }, // 405971848
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_NotifyOwnerToEvaluate, "NotifyOwnerToEvaluate" }, // 1204901528
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_OnInitialize, "OnInitialize" }, // 4262270942
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_OnIsPassed, "OnIsPassed" }, // 3696758760
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_OnReset, "OnReset" }, // 3754229078
		{ &Z_Construct_UFunction_UTriggerGameModeDataBase_Reset, "Reset" }, // 4045504005
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerGameModeDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The base data which is used to be confined by the LD to inspect weather the target game mode have reach the target state\n*/" },
		{ "IncludePath", "TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeDataBase.h" },
		{ "ToolTip", "* The base data which is used to be confined by the LD to inspect weather the target game mode have reach the target state" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerGameModeDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerGameModeDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerGameModeDataBase_Statics::ClassParams = {
		&UTriggerGameModeDataBase::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerGameModeDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerGameModeDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerGameModeDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerGameModeDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerGameModeDataBase, 4267734799);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerGameModeDataBase>()
	{
		return UTriggerGameModeDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerGameModeDataBase(Z_Construct_UClass_UTriggerGameModeDataBase, &UTriggerGameModeDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerGameModeDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerGameModeDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
