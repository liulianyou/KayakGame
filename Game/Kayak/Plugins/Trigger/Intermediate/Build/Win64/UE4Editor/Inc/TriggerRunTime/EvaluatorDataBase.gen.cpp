// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/EvaluatorData/EvaluatorDataBase.h"
#include "TriggerRunTime/Public/TriggerEvaluator/EvaluatorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluatorDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EExternalDataResult();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
// End Cross Module References
	static UEnum* EExternalDataResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EExternalDataResult, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EExternalDataResult"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EExternalDataResult>()
	{
		return EExternalDataResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EExternalDataResult(EExternalDataResult_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EExternalDataResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EExternalDataResult_Hash() { return 955830779U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EExternalDataResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EExternalDataResult"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EExternalDataResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EExternalDataResult::EExternalDataResult_Faild", (int64)EExternalDataResult::EExternalDataResult_Faild },
				{ "EExternalDataResult::EExternalDataResult_Success", (int64)EExternalDataResult::EExternalDataResult_Success },
				{ "EExternalDataResult::EExternalDataResult_Ignore", (int64)EExternalDataResult::EExternalDataResult_Ignore },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EExternalDataResult_Faild.DisplayName", "Faild" },
				{ "EExternalDataResult_Faild.Name", "EExternalDataResult::EExternalDataResult_Faild" },
				{ "EExternalDataResult_Ignore.DisplayName", "Ignore" },
				{ "EExternalDataResult_Ignore.Name", "EExternalDataResult::EExternalDataResult_Ignore" },
				{ "EExternalDataResult_Success.DisplayName", "Success" },
				{ "EExternalDataResult_Success.Name", "EExternalDataResult::EExternalDataResult_Success" },
				{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorData/EvaluatorDataBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EExternalDataResult",
				"EExternalDataResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	DEFINE_FUNCTION(UEvaluatorDataBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorDataBase::execCheckEvaluator)
	{
		P_GET_OBJECT(UEvaluatorBase,Z_Param_Evaluator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EExternalDataResult*)Z_Param__Result=P_THIS->CheckEvaluator_Implementation(Z_Param_Evaluator);
		P_NATIVE_END;
	}
	static FName NAME_UEvaluatorDataBase_CheckEvaluator = FName(TEXT("CheckEvaluator"));
	EExternalDataResult UEvaluatorDataBase::CheckEvaluator(UEvaluatorBase* Evaluator)
	{
		EvaluatorDataBase_eventCheckEvaluator_Parms Parms;
		Parms.Evaluator=Evaluator;
		ProcessEvent(FindFunctionChecked(NAME_UEvaluatorDataBase_CheckEvaluator),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UEvaluatorDataBase_Reset = FName(TEXT("Reset"));
	void UEvaluatorDataBase::Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEvaluatorDataBase_Reset),NULL);
	}
	void UEvaluatorDataBase::StaticRegisterNativesUEvaluatorDataBase()
	{
		UClass* Class = UEvaluatorDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CheckEvaluator", &UEvaluatorDataBase::execCheckEvaluator },
			{ "Reset", &UEvaluatorDataBase::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Evaluator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_Evaluator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorDataBase_eventCheckEvaluator_Parms, Evaluator), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_Evaluator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorDataBase_eventCheckEvaluator_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_EExternalDataResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_Evaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::Function_MetaDataParams[] = {
		{ "Category", "EvaluatorData" },
		{ "Comment", "//Determine weather the target evaluator success or failed\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorData/EvaluatorDataBase.h" },
		{ "ToolTip", "Determine weather the target evaluator success or failed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorDataBase, nullptr, "CheckEvaluator", nullptr, nullptr, sizeof(EvaluatorDataBase_eventCheckEvaluator_Parms), Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorDataBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorDataBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "EvaluatorData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorData/EvaluatorDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorDataBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorDataBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorDataBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorDataBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorDataBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorDataBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEvaluatorDataBase_NoRegister()
	{
		return UEvaluatorDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UEvaluatorDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvaluatorDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEvaluatorDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEvaluatorDataBase_CheckEvaluator, "CheckEvaluator" }, // 1938610876
		{ &Z_Construct_UFunction_UEvaluatorDataBase_Reset, "Reset" }, // 2818008740
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/EvaluatorData/EvaluatorDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorData/EvaluatorDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvaluatorDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluatorDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEvaluatorDataBase_Statics::ClassParams = {
		&UEvaluatorDataBase::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEvaluatorDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvaluatorDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEvaluatorDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEvaluatorDataBase, 1751595155);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UEvaluatorDataBase>()
	{
		return UEvaluatorDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEvaluatorDataBase(Z_Construct_UClass_UEvaluatorDataBase, &UEvaluatorDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UEvaluatorDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvaluatorDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
