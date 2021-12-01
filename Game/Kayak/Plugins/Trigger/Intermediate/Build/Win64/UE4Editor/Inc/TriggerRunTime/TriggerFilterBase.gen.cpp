// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Filter/TriggerFilterBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerFilterBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerFilterBase::execBP_Reset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_Reset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerFilterBase::execBP_Pass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_Pass_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerFilterBase::execGetUObjectData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetUObjectData();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerFilterBase_BP_Pass = FName(TEXT("BP_Pass"));
	bool UTriggerFilterBase::BP_Pass() const
	{
		TriggerFilterBase_eventBP_Pass_Parms Parms;
		const_cast<UTriggerFilterBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerFilterBase_BP_Pass),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerFilterBase_BP_Reset = FName(TEXT("BP_Reset"));
	void UTriggerFilterBase::BP_Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerFilterBase_BP_Reset),NULL);
	}
	void UTriggerFilterBase::StaticRegisterNativesUTriggerFilterBase()
	{
		UClass* Class = UTriggerFilterBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_Pass", &UTriggerFilterBase::execBP_Pass },
			{ "BP_Reset", &UTriggerFilterBase::execBP_Reset },
			{ "GetUObjectData", &UTriggerFilterBase::execGetUObjectData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerFilterBase_eventBP_Pass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerFilterBase_eventBP_Pass_Parms), &Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Check weather we will pass this filter\n" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilterBase.h" },
		{ "ToolTip", "Check weather we will pass this filter" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerFilterBase, nullptr, "BP_Pass", nullptr, nullptr, sizeof(TriggerFilterBase_eventBP_Pass_Parms), Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerFilterBase_BP_Pass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerFilterBase_BP_Pass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerFilterBase_BP_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerFilterBase_BP_Reset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Reset the local variables \n" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilterBase.h" },
		{ "ToolTip", "Reset the local variables" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerFilterBase_BP_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerFilterBase, nullptr, "BP_Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerFilterBase_BP_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilterBase_BP_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerFilterBase_BP_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerFilterBase_BP_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics
	{
		struct TriggerFilterBase_eventGetUObjectData_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerFilterBase_eventGetUObjectData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilterBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerFilterBase, nullptr, "GetUObjectData", nullptr, nullptr, sizeof(TriggerFilterBase_eventGetUObjectData_Parms), Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerFilterBase_NoRegister()
	{
		return UTriggerFilterBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerFilterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerFilterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerFilterBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerFilterBase_BP_Pass, "BP_Pass" }, // 2370772329
		{ &Z_Construct_UFunction_UTriggerFilterBase_BP_Reset, "BP_Reset" }, // 1133152764
		{ &Z_Construct_UFunction_UTriggerFilterBase_GetUObjectData, "GetUObjectData" }, // 248742359
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerFilterBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Filter rule for the Trigger task UCheckActorOverlaped\n*/" },
		{ "IncludePath", "Tool/Filter/TriggerFilterBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Filter/TriggerFilterBase.h" },
		{ "ToolTip", "* Filter rule for the Trigger task UCheckActorOverlaped" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerFilterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerFilterBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerFilterBase_Statics::ClassParams = {
		&UTriggerFilterBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerFilterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerFilterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerFilterBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerFilterBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerFilterBase, 3207454258);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerFilterBase>()
	{
		return UTriggerFilterBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerFilterBase(Z_Construct_UClass_UTriggerFilterBase, &UTriggerFilterBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerFilterBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerFilterBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
