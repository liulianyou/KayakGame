// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/CommonStyle/TriggerCommonStyleBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCommonStyleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerCommonStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerCommonStyleBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerCommonStyleBase::StaticRegisterNativesUTriggerCommonStyleBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerCommonStyleBase_NoRegister()
	{
		return UTriggerCommonStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerCommonStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerCommonStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerCommonStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Style|Common" },
		{ "IncludePath", "Tool/TriggerTaskStyle/CommonStyle/TriggerCommonStyleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/CommonStyle/TriggerCommonStyleBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerCommonStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerCommonStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerCommonStyleBase_Statics::ClassParams = {
		&UTriggerCommonStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerCommonStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerCommonStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerCommonStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerCommonStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerCommonStyleBase, 4025993159);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerCommonStyleBase>()
	{
		return UTriggerCommonStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerCommonStyleBase(Z_Construct_UClass_UTriggerCommonStyleBase, &UTriggerCommonStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerCommonStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerCommonStyleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
