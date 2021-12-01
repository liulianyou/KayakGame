// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/ResetStyle/TriggerResetStyleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerResetStyleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerResetStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerResetStyleBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerResetStyleBase::execReset)
	{
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_Target);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerResetStyleBase_BP_Reset = FName(TEXT("BP_Reset"));
	void UTriggerResetStyleBase::BP_Reset(UObject* Target)
	{
		TriggerResetStyleBase_eventBP_Reset_Parms Parms;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerResetStyleBase_BP_Reset),&Parms);
	}
	void UTriggerResetStyleBase::StaticRegisterNativesUTriggerResetStyleBase()
	{
		UClass* Class = UTriggerResetStyleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Reset", &UTriggerResetStyleBase::execReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerResetStyleBase_eventBP_Reset_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerCustomizeResetStyle" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/ResetStyle/TriggerResetStyleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerResetStyleBase, nullptr, "BP_Reset", nullptr, nullptr, sizeof(TriggerResetStyleBase_eventBP_Reset_Parms), Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics
	{
		struct TriggerResetStyleBase_eventReset_Parms
		{
			UObject* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerResetStyleBase_eventReset_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerCustomizeResetStyle" },
		{ "Comment", "//Reset target object\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/ResetStyle/TriggerResetStyleBase.h" },
		{ "ToolTip", "Reset target object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerResetStyleBase, nullptr, "Reset", nullptr, nullptr, sizeof(TriggerResetStyleBase_eventReset_Parms), Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerResetStyleBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerResetStyleBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerResetStyleBase_NoRegister()
	{
		return UTriggerResetStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerResetStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerResetStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerResetStyleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerResetStyleBase_BP_Reset, "BP_Reset" }, // 4257382319
		{ &Z_Construct_UFunction_UTriggerResetStyleBase_Reset, "Reset" }, // 2202113841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerResetStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/TriggerTaskStyle/ResetStyle/TriggerResetStyleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/ResetStyle/TriggerResetStyleBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerResetStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerResetStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerResetStyleBase_Statics::ClassParams = {
		&UTriggerResetStyleBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerResetStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerResetStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerResetStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerResetStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerResetStyleBase, 2459740847);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerResetStyleBase>()
	{
		return UTriggerResetStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerResetStyleBase(Z_Construct_UClass_UTriggerResetStyleBase, &UTriggerResetStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerResetStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerResetStyleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
