// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeData.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameState/CheckGameModeState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerGameModeData() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UIsGameInProgress_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UIsGameInProgress();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerGameModeDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UIsGameInProgress::execOnGameModeMatchStateCallback)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameModeMatchStateCallback(Z_Param_NewState);
		P_NATIVE_END;
	}
	void UIsGameInProgress::StaticRegisterNativesUIsGameInProgress()
	{
		UClass* Class = UIsGameInProgress::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnGameModeMatchStateCallback", &UIsGameInProgress::execOnGameModeMatchStateCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics
	{
		struct IsGameInProgress_eventOnGameModeMatchStateCallback_Parms
		{
			FName NewState;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewState;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(IsGameInProgress_eventOnGameModeMatchStateCallback_Parms, NewState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::NewProp_NewState,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeData.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIsGameInProgress, nullptr, "OnGameModeMatchStateCallback", nullptr, nullptr, sizeof(IsGameInProgress_eventOnGameModeMatchStateCallback_Parms), Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UIsGameInProgress_NoRegister()
	{
		return UIsGameInProgress::StaticClass();
	}
	struct Z_Construct_UClass_UIsGameInProgress_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsGameInProgress_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerGameModeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIsGameInProgress_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIsGameInProgress_OnGameModeMatchStateCallback, "OnGameModeMatchStateCallback" }, // 2355741803
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsGameInProgress_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/GameState/GameModeData/TriggerGameModeData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameState/GameModeData/TriggerGameModeData.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsGameInProgress_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsGameInProgress>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsGameInProgress_Statics::ClassParams = {
		&UIsGameInProgress::StaticClass,
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
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsGameInProgress_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsGameInProgress_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsGameInProgress()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsGameInProgress_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsGameInProgress, 562743834);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UIsGameInProgress>()
	{
		return UIsGameInProgress::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsGameInProgress(Z_Construct_UClass_UIsGameInProgress, &UIsGameInProgress::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UIsGameInProgress"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsGameInProgress);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
