// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/TriggerStyleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerStyleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerStyleBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerStyleBase::execExecute)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerStyleBase::execInitializeStyle)
	{
		P_GET_OBJECT(UObject,Z_Param_OwnerObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeStyle(Z_Param_OwnerObject);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerStyleBase_OnExecute = FName(TEXT("OnExecute"));
	void UTriggerStyleBase::OnExecute()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerStyleBase_OnExecute),NULL);
	}
	static FName NAME_UTriggerStyleBase_OnInitializeStyle = FName(TEXT("OnInitializeStyle"));
	void UTriggerStyleBase::OnInitializeStyle(UObject* OwnerObject)
	{
		TriggerStyleBase_eventOnInitializeStyle_Parms Parms;
		Parms.OwnerObject=OwnerObject;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerStyleBase_OnInitializeStyle),&Parms);
	}
	void UTriggerStyleBase::StaticRegisterNativesUTriggerStyleBase()
	{
		UClass* Class = UTriggerStyleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Execute", &UTriggerStyleBase::execExecute },
			{ "GetOwner", &UTriggerStyleBase::execGetOwner },
			{ "InitializeStyle", &UTriggerStyleBase::execInitializeStyle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerStyleBase_Execute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerStyleBase_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskStyle" },
		{ "Comment", "//This function used to do the actual execution for this style\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
		{ "ToolTip", "This function used to do the actual execution for this style" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerStyleBase_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerStyleBase, nullptr, "Execute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerStyleBase_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerStyleBase_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerStyleBase_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics
	{
		struct TriggerStyleBase_eventGetOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStyleBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerStyleBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(TriggerStyleBase_eventGetOwner_Parms), Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerStyleBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerStyleBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics
	{
		struct TriggerStyleBase_eventInitializeStyle_Parms
		{
			UObject* OwnerObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStyleBase_eventInitializeStyle_Parms, OwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::NewProp_OwnerObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskStyle" },
		{ "Comment", "/*\n\x09* Initialize this repeat style\n\x09*\n\x09* @param OwnerObject The object who initialize this repeat style\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
		{ "ToolTip", "* Initialize this repeat style\n*\n* @param OwnerObject The object who initialize this repeat style" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerStyleBase, nullptr, "InitializeStyle", nullptr, nullptr, sizeof(TriggerStyleBase_eventInitializeStyle_Parms), Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerStyleBase_OnExecute_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerStyleBase_OnExecute_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskStyle" },
		{ "Comment", "//This function used to do the actual execution for this style\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
		{ "ToolTip", "This function used to do the actual execution for this style" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerStyleBase_OnExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerStyleBase, nullptr, "OnExecute", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerStyleBase_OnExecute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_OnExecute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerStyleBase_OnExecute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerStyleBase_OnExecute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerStyleBase_eventOnInitializeStyle_Parms, OwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::NewProp_OwnerObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTaskStyle" },
		{ "Comment", "/*\n\x09* Initialize this repeat style\n\x09*\n\x09* @param OwnerObject The object who initialize this repeat style\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
		{ "ToolTip", "* Initialize this repeat style\n*\n* @param OwnerObject The object who initialize this repeat style" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerStyleBase, nullptr, "OnInitializeStyle", nullptr, nullptr, sizeof(TriggerStyleBase_eventOnInitializeStyle_Parms), Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister()
	{
		return UTriggerStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerStyleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerStyleBase_Execute, "Execute" }, // 925343237
		{ &Z_Construct_UFunction_UTriggerStyleBase_GetOwner, "GetOwner" }, // 455721380
		{ &Z_Construct_UFunction_UTriggerStyleBase_InitializeStyle, "InitializeStyle" }, // 1599268675
		{ &Z_Construct_UFunction_UTriggerStyleBase_OnExecute, "OnExecute" }, // 4277780842
		{ &Z_Construct_UFunction_UTriggerStyleBase_OnInitializeStyle, "OnInitializeStyle" }, // 132398966
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tool/TriggerTaskStyle/TriggerStyleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerStyleBase_Statics::NewProp_Owner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BlueprintGetter", "GetOwner" },
		{ "Category", "TriggerStyleBase" },
		{ "Comment", "/*\n\x09* The owner of this object. some times it is differ from the outer of this object\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/TriggerStyleBase.h" },
		{ "ToolTip", "* The owner of this object. some times it is differ from the outer of this object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerStyleBase_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerStyleBase, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerStyleBase_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerStyleBase_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerStyleBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerStyleBase_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerStyleBase_Statics::ClassParams = {
		&UTriggerStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerStyleBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerStyleBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerStyleBase, 998669260);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerStyleBase>()
	{
		return UTriggerStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerStyleBase(Z_Construct_UClass_UTriggerStyleBase, &UTriggerStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerStyleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
