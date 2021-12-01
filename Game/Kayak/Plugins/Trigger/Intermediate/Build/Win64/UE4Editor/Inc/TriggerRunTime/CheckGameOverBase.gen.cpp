// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOverBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCheckGameOverBase::execGetAllPlayerControllersInWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APlayerController*>*)Z_Param__Result=P_THIS->GetAllPlayerControllersInWorld();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverBase::execOnControllerDestroyedCallback)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnControllerDestroyedCallback(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverBase::execRemoveGameOverPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveGameOverPlayer(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverBase::execAddGameOverPlayer)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddGameOverPlayer(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCheckGameOverBase::execGetGameOverPlayers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<APlayerController*>*)Z_Param__Result=P_THIS->GetGameOverPlayers();
		P_NATIVE_END;
	}
	void UCheckGameOverBase::StaticRegisterNativesUCheckGameOverBase()
	{
		UClass* Class = UCheckGameOverBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddGameOverPlayer", &UCheckGameOverBase::execAddGameOverPlayer },
			{ "GetAllPlayerControllersInWorld", &UCheckGameOverBase::execGetAllPlayerControllersInWorld },
			{ "GetGameOverPlayers", &UCheckGameOverBase::execGetGameOverPlayers },
			{ "OnControllerDestroyedCallback", &UCheckGameOverBase::execOnControllerDestroyedCallback },
			{ "RemoveGameOverPlayer", &UCheckGameOverBase::execRemoveGameOverPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics
	{
		struct CheckGameOverBase_eventAddGameOverPlayer_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverBase_eventAddGameOverPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverBase, nullptr, "AddGameOverPlayer", nullptr, nullptr, sizeof(CheckGameOverBase_eventAddGameOverPlayer_Parms), Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics
	{
		struct CheckGameOverBase_eventGetAllPlayerControllersInWorld_Parms
		{
			TArray<APlayerController*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverBase_eventGetAllPlayerControllersInWorld_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get all player controllers in the target world\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
		{ "ToolTip", "Get all player controllers in the target world" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverBase, nullptr, "GetAllPlayerControllersInWorld", nullptr, nullptr, sizeof(CheckGameOverBase_eventGetAllPlayerControllersInWorld_Parms), Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics
	{
		struct CheckGameOverBase_eventGetGameOverPlayers_Parms
		{
			TArray<APlayerController*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverBase_eventGetGameOverPlayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Get the players who should get the game over informations\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
		{ "ToolTip", "Get the players who should get the game over informations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverBase, nullptr, "GetGameOverPlayers", nullptr, nullptr, sizeof(CheckGameOverBase_eventGetGameOverPlayers_Parms), Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics
	{
		struct CheckGameOverBase_eventOnControllerDestroyedCallback_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverBase_eventOnControllerDestroyedCallback_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverBase, nullptr, "OnControllerDestroyedCallback", nullptr, nullptr, sizeof(CheckGameOverBase_eventOnControllerDestroyedCallback_Parms), Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics
	{
		struct CheckGameOverBase_eventRemoveGameOverPlayer_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckGameOverBase_eventRemoveGameOverPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckGameOverBase, nullptr, "RemoveGameOverPlayer", nullptr, nullptr, sizeof(CheckGameOverBase_eventRemoveGameOverPlayer_Parms), Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckGameOverBase_NoRegister()
	{
		return UCheckGameOverBase::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOverBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Players_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Players_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Players;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOverBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckGameOverBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckGameOverBase_AddGameOverPlayer, "AddGameOverPlayer" }, // 1372205047
		{ &Z_Construct_UFunction_UCheckGameOverBase_GetAllPlayerControllersInWorld, "GetAllPlayerControllersInWorld" }, // 3043963968
		{ &Z_Construct_UFunction_UCheckGameOverBase_GetGameOverPlayers, "GetGameOverPlayers" }, // 3209107770
		{ &Z_Construct_UFunction_UCheckGameOverBase_OnControllerDestroyedCallback, "OnControllerDestroyedCallback" }, // 391934039
		{ &Z_Construct_UFunction_UCheckGameOverBase_RemoveGameOverPlayer, "RemoveGameOverPlayer" }, // 1135248928
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOverBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players_Inner = { "Players", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players_MetaData[] = {
		{ "Comment", "//The players who should execute game over\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverBase.h" },
		{ "ToolTip", "The players who should execute game over" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players = { "Players", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckGameOverBase, Players), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckGameOverBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckGameOverBase_Statics::NewProp_Players,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOverBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOverBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOverBase_Statics::ClassParams = {
		&UCheckGameOverBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckGameOverBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverBase_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOverBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOverBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOverBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOverBase, 1493733644);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOverBase>()
	{
		return UCheckGameOverBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOverBase(Z_Construct_UClass_UCheckGameOverBase, &UCheckGameOverBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOverBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOverBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
