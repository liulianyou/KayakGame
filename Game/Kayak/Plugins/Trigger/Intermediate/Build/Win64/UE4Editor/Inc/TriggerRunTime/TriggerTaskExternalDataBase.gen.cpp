// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TriggerTaskExternalDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskExternalDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskExternalDataBase::execGetTriggerTaskOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->GetTriggerTaskOwner();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTaskExternalDataBase_OnFinialize = FName(TEXT("OnFinialize"));
	void UTriggerTaskExternalDataBase::OnFinialize()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskExternalDataBase_OnFinialize),NULL);
	}
	static FName NAME_UTriggerTaskExternalDataBase_OnInitialize = FName(TEXT("OnInitialize"));
	void UTriggerTaskExternalDataBase::OnInitialize(UTriggerTaskBase* Owner)
	{
		TriggerTaskExternalDataBase_eventOnInitialize_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskExternalDataBase_OnInitialize),&Parms);
	}
	static FName NAME_UTriggerTaskExternalDataBase_OnReset = FName(TEXT("OnReset"));
	void UTriggerTaskExternalDataBase::OnReset(UOperationInformationBase* ResetOperationInfo)
	{
		TriggerTaskExternalDataBase_eventOnReset_Parms Parms;
		Parms.ResetOperationInfo=ResetOperationInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskExternalDataBase_OnReset),&Parms);
	}
	void UTriggerTaskExternalDataBase::StaticRegisterNativesUTriggerTaskExternalDataBase()
	{
		UClass* Class = UTriggerTaskExternalDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTriggerTaskOwner", &UTriggerTaskExternalDataBase::execGetTriggerTaskOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics
	{
		struct TriggerTaskExternalDataBase_eventGetTriggerTaskOwner_Parms
		{
			UTriggerTaskBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskExternalDataBase_eventGetTriggerTaskOwner_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTask|Descriptor" },
		{ "Comment", "/*\n\x09* Get the owner trigger task\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerTaskExternalDataBase.h" },
		{ "ToolTip", "* Get the owner trigger task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskExternalDataBase, nullptr, "GetTriggerTaskOwner", nullptr, nullptr, sizeof(TriggerTaskExternalDataBase_eventGetTriggerTaskOwner_Parms), Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTask|Descriptor" },
		{ "Comment", "//This should be invoked when the owner don't want to use this data\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerTaskExternalDataBase.h" },
		{ "ToolTip", "This should be invoked when the owner don't want to use this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskExternalDataBase, nullptr, "OnFinialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskExternalDataBase_eventOnInitialize_Parms, Owner), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTask|Descriptor" },
		{ "Comment", "/*\n\x09* Used to initialize this data\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerTaskExternalDataBase.h" },
		{ "ToolTip", "* Used to initialize this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskExternalDataBase, nullptr, "OnInitialize", nullptr, nullptr, sizeof(TriggerTaskExternalDataBase_eventOnInitialize_Parms), Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::NewProp_ResetOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::NewProp_ResetOperationInfo = { "ResetOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskExternalDataBase_eventOnReset_Parms, ResetOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::NewProp_ResetOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::NewProp_ResetOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::NewProp_ResetOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTask|Descriptor" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerTaskExternalDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskExternalDataBase, nullptr, "OnReset", nullptr, nullptr, sizeof(TriggerTaskExternalDataBase_eventOnReset_Parms), Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister()
	{
		return UTriggerTaskExternalDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskExternalDataBase_GetTriggerTaskOwner, "GetTriggerTaskOwner" }, // 2583571823
		{ &Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnFinialize, "OnFinialize" }, // 2196179374
		{ &Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnInitialize, "OnInitialize" }, // 1759584639
		{ &Z_Construct_UFunction_UTriggerTaskExternalDataBase_OnReset, "OnReset" }, // 3520484894
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|ExternalData" },
		{ "IncludePath", "Tool/TriggerExternalData/TriggerTaskExternalDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerTaskExternalDataBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskExternalDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::ClassParams = {
		&UTriggerTaskExternalDataBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskExternalDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskExternalDataBase, 334248178);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskExternalDataBase>()
	{
		return UTriggerTaskExternalDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskExternalDataBase(Z_Construct_UClass_UTriggerTaskExternalDataBase, &UTriggerTaskExternalDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskExternalDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskExternalDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
