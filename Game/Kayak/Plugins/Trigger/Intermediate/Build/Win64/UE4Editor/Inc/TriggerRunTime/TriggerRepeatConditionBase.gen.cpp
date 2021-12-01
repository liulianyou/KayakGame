// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/TriggerRepeatConditionBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerRepeatConditionBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskRepeatCondtionBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskRepeatCondtionBase::execTryToRepeat)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryToRepeat_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskRepeatCondtionBase::execGetRepeatCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRepeatCount_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTaskRepeatCondtionBase_GetRepeatCount = FName(TEXT("GetRepeatCount"));
	int32 UTriggerTaskRepeatCondtionBase::GetRepeatCount()
	{
		TriggerTaskRepeatCondtionBase_eventGetRepeatCount_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskRepeatCondtionBase_GetRepeatCount),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskRepeatCondtionBase_TryToRepeat = FName(TEXT("TryToRepeat"));
	bool UTriggerTaskRepeatCondtionBase::TryToRepeat(UObject* Object)
	{
		TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskRepeatCondtionBase_TryToRepeat),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTriggerTaskRepeatCondtionBase::StaticRegisterNativesUTriggerTaskRepeatCondtionBase()
	{
		UClass* Class = UTriggerTaskRepeatCondtionBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRepeatCount", &UTriggerTaskRepeatCondtionBase::execGetRepeatCount },
			{ "TryToRepeat", &UTriggerTaskRepeatCondtionBase::execTryToRepeat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRepeatCondtionBase_eventGetRepeatCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "//Get the count of repeat.\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/TriggerRepeatConditionBase.h" },
		{ "ToolTip", "Get the count of repeat." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRepeatCondtionBase, nullptr, "GetRepeatCount", nullptr, nullptr, sizeof(TriggerTaskRepeatCondtionBase_eventGetRepeatCount_Parms), Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms), &Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "/*\n\x09* Try to repeat target object\n\x09* \n\x09* #return true means the target object's repeat action have been delegated by the the repeat style.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/TriggerRepeatConditionBase.h" },
		{ "ToolTip", "* Try to repeat target object\n*\n* #return true means the target object's repeat action have been delegated by the the repeat style." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskRepeatCondtionBase, nullptr, "TryToRepeat", nullptr, nullptr, sizeof(TriggerTaskRepeatCondtionBase_eventTryToRepeat_Parms), Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_NoRegister()
	{
		return UTriggerTaskRepeatCondtionBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_GetRepeatCount, "GetRepeatCount" }, // 2065459266
		{ &Z_Construct_UFunction_UTriggerTaskRepeatCondtionBase_TryToRepeat, "TryToRepeat" }, // 8052388
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/TriggerRepeatConditionBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/TriggerRepeatConditionBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskRepeatCondtionBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::ClassParams = {
		&UTriggerTaskRepeatCondtionBase::StaticClass,
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
		0x04B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskRepeatCondtionBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskRepeatCondtionBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskRepeatCondtionBase, 2265927591);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskRepeatCondtionBase>()
	{
		return UTriggerTaskRepeatCondtionBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskRepeatCondtionBase(Z_Construct_UClass_UTriggerTaskRepeatCondtionBase, &UTriggerTaskRepeatCondtionBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskRepeatCondtionBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskRepeatCondtionBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
