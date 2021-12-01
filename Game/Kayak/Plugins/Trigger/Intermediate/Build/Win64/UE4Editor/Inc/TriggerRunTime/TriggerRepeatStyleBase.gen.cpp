// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/RepeatStyle/TriggerRepeatStyleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerRepeatStyleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRepeatStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRepeatStyleBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerRepeatStyleBase::execTryToRepeat)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->TryToRepeat_Implementation(Z_Param_Object);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerRepeatStyleBase_TryToRepeat = FName(TEXT("TryToRepeat"));
	bool UTriggerRepeatStyleBase::TryToRepeat(UObject* Object)
	{
		TriggerRepeatStyleBase_eventTryToRepeat_Parms Parms;
		Parms.Object=Object;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerRepeatStyleBase_TryToRepeat),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTriggerRepeatStyleBase::StaticRegisterNativesUTriggerRepeatStyleBase()
	{
		UClass* Class = UTriggerRepeatStyleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TryToRepeat", &UTriggerRepeatStyleBase::execTryToRepeat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRepeatStyleBase_eventTryToRepeat_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerRepeatStyleBase_eventTryToRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerRepeatStyleBase_eventTryToRepeat_Parms), &Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::NewProp_Object,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "/*\n\x09* Try to repeat target object\n\x09* \n\x09* #return false means this repeat style do not process target object, and the target object need to define the repeat behavior by itself\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/TriggerRepeatStyleBase.h" },
		{ "ToolTip", "* Try to repeat target object\n*\n* #return false means this repeat style do not process target object, and the target object need to define the repeat behavior by itself" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRepeatStyleBase, nullptr, "TryToRepeat", nullptr, nullptr, sizeof(TriggerRepeatStyleBase_eventTryToRepeat_Parms), Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerRepeatStyleBase_NoRegister()
	{
		return UTriggerRepeatStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerRepeatStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerRepeatStyleBase_TryToRepeat, "TryToRepeat" }, // 1413993494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tool/TriggerTaskStyle/RepeatStyle/TriggerRepeatStyleBase.h" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/TriggerRepeatStyleBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerRepeatStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::ClassParams = {
		&UTriggerRepeatStyleBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerRepeatStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerRepeatStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerRepeatStyleBase, 3758681002);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerRepeatStyleBase>()
	{
		return UTriggerRepeatStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerRepeatStyleBase(Z_Construct_UClass_UTriggerRepeatStyleBase, &UTriggerRepeatStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerRepeatStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerRepeatStyleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
