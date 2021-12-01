// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataWithID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEventRewardDataWithID() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardDataWithID_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardDataWithID();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventRewardDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerEventRewardDataWithID::execGeneratedRewardID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GeneratedRewardID_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerEventRewardDataWithID_GeneratedRewardID = FName(TEXT("GeneratedRewardID"));
	FString UTriggerEventRewardDataWithID::GeneratedRewardID()
	{
		TriggerEventRewardDataWithID_eventGeneratedRewardID_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerEventRewardDataWithID_GeneratedRewardID),&Parms);
		return Parms.ReturnValue;
	}
	void UTriggerEventRewardDataWithID::StaticRegisterNativesUTriggerEventRewardDataWithID()
	{
		UClass* Class = UTriggerEventRewardDataWithID::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GeneratedRewardID", &UTriggerEventRewardDataWithID::execGeneratedRewardID },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventRewardDataWithID_eventGeneratedRewardID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataWithID.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEventRewardDataWithID, nullptr, "GeneratedRewardID", nullptr, nullptr, sizeof(TriggerEventRewardDataWithID_eventGeneratedRewardID_Parms), Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerEventRewardDataWithID_NoRegister()
	{
		return UTriggerEventRewardDataWithID::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RewardID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerEventRewardDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerEventRewardDataWithID_GeneratedRewardID, "GeneratedRewardID" }, // 48666038
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataWithID.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataWithID.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_RewardID_MetaData[] = {
		{ "Category", "ExternalData" },
		{ "Comment", "/*\n\x09* The identification for the reward.\n\x09* This ID will be generated automatically\n\x09* This ID's format is MapName_ID\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataWithID.h" },
		{ "ToolTip", "* The identification for the reward.\n* This ID will be generated automatically\n* This ID's format is MapName_ID" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_RewardID = { "RewardID", nullptr, (EPropertyFlags)0x0010000000022815, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventRewardDataWithID, RewardID), METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_RewardID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_RewardID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_ID_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerEventReward/TriggerEventRewardDataWithID.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventRewardDataWithID, ID), METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_RewardID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::NewProp_ID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEventRewardDataWithID>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::ClassParams = {
		&UTriggerEventRewardDataWithID::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEventRewardDataWithID()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEventRewardDataWithID_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEventRewardDataWithID, 4067460435);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEventRewardDataWithID>()
	{
		return UTriggerEventRewardDataWithID::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEventRewardDataWithID(Z_Construct_UClass_UTriggerEventRewardDataWithID, &UTriggerEventRewardDataWithID::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEventRewardDataWithID"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEventRewardDataWithID);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
