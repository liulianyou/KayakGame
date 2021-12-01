// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerExternalData/TriggerDescriptor/TriggerDescriptorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDescriptorBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerDescriptorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerDescriptorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerDescriptorBase::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerDescriptorBase::execGetAlias)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAlias_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerDescriptorBase_GetAlias = FName(TEXT("GetAlias"));
	FString UTriggerDescriptorBase::GetAlias()
	{
		TriggerDescriptorBase_eventGetAlias_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerDescriptorBase_GetAlias),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerDescriptorBase_GetDescription = FName(TEXT("GetDescription"));
	FString UTriggerDescriptorBase::GetDescription()
	{
		TriggerDescriptorBase_eventGetDescription_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerDescriptorBase_GetDescription),&Parms);
		return Parms.ReturnValue;
	}
	void UTriggerDescriptorBase::StaticRegisterNativesUTriggerDescriptorBase()
	{
		UClass* Class = UTriggerDescriptorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAlias", &UTriggerDescriptorBase::execGetAlias },
			{ "GetDescription", &UTriggerDescriptorBase::execGetDescription },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDescriptorBase_eventGetAlias_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTask|Descriptor" },
		{ "Comment", "/*\n\x09* Get the alias for the owner\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerDescriptor/TriggerDescriptorBase.h" },
		{ "ToolTip", "* Get the alias for the owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerDescriptorBase, nullptr, "GetAlias", nullptr, nullptr, sizeof(TriggerDescriptorBase_eventGetAlias_Parms), Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDescriptorBase_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerTask|Descriptor" },
		{ "Comment", "/*\n\x09* Get the description to describe the owner\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerDescriptor/TriggerDescriptorBase.h" },
		{ "ToolTip", "* Get the description to describe the owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerDescriptorBase, nullptr, "GetDescription", nullptr, nullptr, sizeof(TriggerDescriptorBase_eventGetDescription_Parms), Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerDescriptorBase_NoRegister()
	{
		return UTriggerDescriptorBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerDescriptorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerDescriptorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerDescriptorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerDescriptorBase_GetAlias, "GetAlias" }, // 1111780891
		{ &Z_Construct_UFunction_UTriggerDescriptorBase_GetDescription, "GetDescription" }, // 2713729626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerDescriptorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tool/TriggerExternalData/TriggerDescriptor/TriggerDescriptorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerExternalData/TriggerDescriptor/TriggerDescriptorBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerDescriptorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerDescriptorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerDescriptorBase_Statics::ClassParams = {
		&UTriggerDescriptorBase::StaticClass,
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
		0x043010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerDescriptorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerDescriptorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerDescriptorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerDescriptorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerDescriptorBase, 2908030032);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerDescriptorBase>()
	{
		return UTriggerDescriptorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerDescriptorBase(Z_Construct_UClass_UTriggerDescriptorBase, &UTriggerDescriptorBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerDescriptorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerDescriptorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
