// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionRuleData_Number() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleData_Number_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleData_Number();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionRuleData_Number::execGetCurrentValue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentValue();
		P_NATIVE_END;
	}
	void UInteractionRuleData_Number::StaticRegisterNativesUInteractionRuleData_Number()
	{
		UClass* Class = UInteractionRuleData_Number::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentValue", &UInteractionRuleData_Number::execGetCurrentValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics
	{
		struct InteractionRuleData_Number_eventGetCurrentValue_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleData_Number_eventGetCurrentValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleData_Number, nullptr, "GetCurrentValue", nullptr, nullptr, sizeof(InteractionRuleData_Number_eventGetCurrentValue_Parms), Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionRuleData_Number_NoRegister()
	{
		return UInteractionRuleData_Number::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionRuleData_Number_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionRuleData_Number_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionRuleDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionRuleData_Number_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionRuleData_Number_GetCurrentValue, "GetCurrentValue" }, // 1403250369
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleData_Number_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "InteractionRuleData_Number" },
		{ "Comment", "/*\n\x09* The max value this data support \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h" },
		{ "ToolTip", "* The max value this data support" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleData_Number, MaxValue), METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "InteractionRuleData_Number" },
		{ "Comment", "/*\n\x09* we config in the details panel  and this value stands for the start value \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h" },
		{ "ToolTip", "* we config in the details panel  and this value stands for the start value" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleData_Number, Value), METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_CurrentValue_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "InteractionRuleData_Number" },
		{ "Comment", "//The current value for this data\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleData/InteractionRuleData_Number.h" },
		{ "ToolTip", "The current value for this data" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_CurrentValue = { "CurrentValue", nullptr, (EPropertyFlags)0x0040000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleData_Number, CurrentValue), METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_CurrentValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_CurrentValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionRuleData_Number_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleData_Number_Statics::NewProp_CurrentValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionRuleData_Number_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionRuleData_Number>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionRuleData_Number_Statics::ClassParams = {
		&UInteractionRuleData_Number::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionRuleData_Number_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleData_Number_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleData_Number_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleData_Number_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionRuleData_Number()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionRuleData_Number_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionRuleData_Number, 577501897);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionRuleData_Number>()
	{
		return UInteractionRuleData_Number::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionRuleData_Number(Z_Construct_UClass_UInteractionRuleData_Number, &UInteractionRuleData_Number::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionRuleData_Number"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionRuleData_Number);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
