// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerDispatchType/DispatchBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDispatchBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDispatchBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDispatchBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UDispatchStrategyBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UDispatchBase::execDispatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Dispatch_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UDispatchBase_Dispatch = FName(TEXT("Dispatch"));
	bool UDispatchBase::Dispatch()
	{
		DispatchBase_eventDispatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UDispatchBase_Dispatch),&Parms);
		return !!Parms.ReturnValue;
	}
	void UDispatchBase::StaticRegisterNativesUDispatchBase()
	{
		UClass* Class = UDispatchBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dispatch", &UDispatchBase::execDispatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDispatchBase_Dispatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DispatchBase_eventDispatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DispatchBase_eventDispatch_Parms), &Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "GaiaTrigger|Dispatch" },
		{ "Comment", "/*\n\x09* Start to run triggers or tasks\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerDispatchType/DispatchBase.h" },
		{ "ToolTip", "* Start to run triggers or tasks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDispatchBase, nullptr, "Dispatch", nullptr, nullptr, sizeof(DispatchBase_eventDispatch_Parms), Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDispatchBase_Dispatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDispatchBase_Dispatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDispatchBase_NoRegister()
	{
		return UDispatchBase::StaticClass();
	}
	struct Z_Construct_UClass_UDispatchBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DispatchStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DispatchStrategy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDispatchBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDispatchBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDispatchBase_Dispatch, "Dispatch" }, // 271234283
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDispatchBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Dispatch \n*/" },
		{ "DisplayName", "Trigger Dispatch Style" },
		{ "HideCategories", "Object, Active, Mobility" },
		{ "IncludePath", "TriggerDispatchType/DispatchBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerDispatchType/DispatchBase.h" },
		{ "ToolTip", "* Dispatch" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDispatchBase_Statics::NewProp_DispatchStrategy_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerDispatchType/DispatchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDispatchBase_Statics::NewProp_DispatchStrategy = { "DispatchStrategy", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDispatchBase, DispatchStrategy), Z_Construct_UClass_UDispatchStrategyBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDispatchBase_Statics::NewProp_DispatchStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDispatchBase_Statics::NewProp_DispatchStrategy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDispatchBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDispatchBase_Statics::NewProp_DispatchStrategy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDispatchBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDispatchBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDispatchBase_Statics::ClassParams = {
		&UDispatchBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDispatchBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDispatchBase_Statics::PropPointers),
		0,
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDispatchBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDispatchBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDispatchBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDispatchBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDispatchBase, 556683431);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UDispatchBase>()
	{
		return UDispatchBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDispatchBase(Z_Construct_UClass_UDispatchBase, &UDispatchBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UDispatchBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDispatchBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
