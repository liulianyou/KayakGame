// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Record/TR_TriggerTaskForReset.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTR_TriggerTaskForReset() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTR_TriggerTaskForReset_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTR_TriggerTaskForReset();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTR_TriggerTask();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTR_TriggerTaskForReset::StaticRegisterNativesUTR_TriggerTaskForReset()
	{
	}
	UClass* Z_Construct_UClass_UTR_TriggerTaskForReset_NoRegister()
	{
		return UTR_TriggerTaskForReset::StaticClass();
	}
	struct Z_Construct_UClass_UTR_TriggerTaskForReset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTR_TriggerTask,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Record" },
		{ "IncludePath", "Tool/Record/TR_TriggerTaskForReset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Record/TR_TriggerTaskForReset.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTR_TriggerTaskForReset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::ClassParams = {
		&UTR_TriggerTaskForReset::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTR_TriggerTaskForReset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTR_TriggerTaskForReset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTR_TriggerTaskForReset, 3957490135);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTR_TriggerTaskForReset>()
	{
		return UTR_TriggerTaskForReset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTR_TriggerTaskForReset(Z_Construct_UClass_UTR_TriggerTaskForReset, &UTR_TriggerTaskForReset::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTR_TriggerTaskForReset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTR_TriggerTaskForReset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
