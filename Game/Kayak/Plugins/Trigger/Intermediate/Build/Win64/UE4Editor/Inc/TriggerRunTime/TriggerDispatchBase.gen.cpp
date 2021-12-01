// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerDispatchType/TriggerDispatchBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDispatchBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerDispatchBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerDispatchBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerDispatchBase::execDispatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Dispatch_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerDispatchBase_Dispatch = FName(TEXT("Dispatch"));
	bool UTriggerDispatchBase::Dispatch()
	{
		TriggerDispatchBase_eventDispatch_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerDispatchBase_Dispatch),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTriggerDispatchBase::StaticRegisterNativesUTriggerDispatchBase()
	{
		UClass* Class = UTriggerDispatchBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Dispatch", &UTriggerDispatchBase::execDispatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerDispatchBase_eventDispatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerDispatchBase_eventDispatch_Parms), &Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::Function_MetaDataParams[] = {
		{ "Category", "GaiaTrigger|Dispatch" },
		{ "Comment", "/*\n\x09* Start to run triggers or tasks\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerDispatchType/TriggerDispatchBase.h" },
		{ "ToolTip", "* Start to run triggers or tasks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerDispatchBase, nullptr, "Dispatch", nullptr, nullptr, sizeof(TriggerDispatchBase_eventDispatch_Parms), Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerDispatchBase_Dispatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerDispatchBase_Dispatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerDispatchBase_NoRegister()
	{
		return UTriggerDispatchBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerDispatchBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerDispatchBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerDispatchBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerDispatchBase_Dispatch, "Dispatch" }, // 3506571061
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerDispatchBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Trigger Dispatch Style" },
		{ "HideCategories", "Object, Active, Mobility" },
		{ "IncludePath", "TriggerDispatchType/TriggerDispatchBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerDispatchType/TriggerDispatchBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerDispatchBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerDispatchBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerDispatchBase_Statics::ClassParams = {
		&UTriggerDispatchBase::StaticClass,
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
		0x041000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerDispatchBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerDispatchBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerDispatchBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerDispatchBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerDispatchBase, 1326626217);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerDispatchBase>()
	{
		return UTriggerDispatchBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerDispatchBase(Z_Construct_UClass_UTriggerDispatchBase, &UTriggerDispatchBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerDispatchBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerDispatchBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
