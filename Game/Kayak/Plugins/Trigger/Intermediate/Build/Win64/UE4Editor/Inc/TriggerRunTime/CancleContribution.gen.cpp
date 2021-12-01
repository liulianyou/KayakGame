// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/ContributeRule/CancleContribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCancleContribution() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCancleContribution_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCancleContribution();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UCancleContribution::execSetActualRemoveCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActualRemoveCount(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCancleContribution::execGetActualRemoveCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActualRemoveCount();
		P_NATIVE_END;
	}
	void UCancleContribution::StaticRegisterNativesUCancleContribution()
	{
		UClass* Class = UCancleContribution::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActualRemoveCount", &UCancleContribution::execGetActualRemoveCount },
			{ "SetActualRemoveCount", &UCancleContribution::execSetActualRemoveCount },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics
	{
		struct CancleContribution_eventGetActualRemoveCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CancleContribution_eventGetActualRemoveCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionContributor" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/CancleContribution.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCancleContribution, nullptr, "GetActualRemoveCount", nullptr, nullptr, sizeof(CancleContribution_eventGetActualRemoveCount_Parms), Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics
	{
		struct CancleContribution_eventSetActualRemoveCount_Parms
		{
			int32 Value;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CancleContribution_eventSetActualRemoveCount_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionContributor" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/CancleContribution.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCancleContribution, nullptr, "SetActualRemoveCount", nullptr, nullptr, sizeof(CancleContribution_eventSetActualRemoveCount_Parms), Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCancleContribution_NoRegister()
	{
		return UCancleContribution::StaticClass();
	}
	struct Z_Construct_UClass_UCancleContribution_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoveLastContributionCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RemoveLastContributionCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCancleContribution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContributeRuleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCancleContribution_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCancleContribution_GetActualRemoveCount, "GetActualRemoveCount" }, // 1213806071
		{ &Z_Construct_UFunction_UCancleContribution_SetActualRemoveCount, "SetActualRemoveCount" }, // 1670678609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCancleContribution_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/InteractionTask/ContributeRule/CancleContribution.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/CancleContribution.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCancleContribution_Statics::NewProp_RemoveLastContributionCount_MetaData[] = {
		{ "Category", "CancleContribution" },
		{ "Comment", "/*\n\x09* the number that this contribution will remove the contributions in the InteractionRule.\n\x09* -1 means remove all contributions of the Actor in the InteractionRule\n\x09* 0 means this cancel contribution will no affect the interaction rule\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/CancleContribution.h" },
		{ "ToolTip", "* the number that this contribution will remove the contributions in the InteractionRule.\n* -1 means remove all contributions of the Actor in the InteractionRule\n* 0 means this cancel contribution will no affect the interaction rule" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCancleContribution_Statics::NewProp_RemoveLastContributionCount = { "RemoveLastContributionCount", nullptr, (EPropertyFlags)0x001000000000000d, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCancleContribution, RemoveLastContributionCount), METADATA_PARAMS(Z_Construct_UClass_UCancleContribution_Statics::NewProp_RemoveLastContributionCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCancleContribution_Statics::NewProp_RemoveLastContributionCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCancleContribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCancleContribution_Statics::NewProp_RemoveLastContributionCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCancleContribution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCancleContribution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCancleContribution_Statics::ClassParams = {
		&UCancleContribution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCancleContribution_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCancleContribution_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCancleContribution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCancleContribution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCancleContribution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCancleContribution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCancleContribution, 4172206610);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCancleContribution>()
	{
		return UCancleContribution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCancleContribution(Z_Construct_UClass_UCancleContribution, &UCancleContribution::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCancleContribution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCancleContribution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
