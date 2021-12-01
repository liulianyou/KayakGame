// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/TriggerEvaluator_OR.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEvaluator_OR() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEvaluator_OR_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEvaluator_OR();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerEvaluator_OR::StaticRegisterNativesUTriggerEvaluator_OR()
	{
	}
	UClass* Z_Construct_UClass_UTriggerEvaluator_OR_NoRegister()
	{
		return UTriggerEvaluator_OR::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEvaluator_OR_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEvaluator_OR_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEvaluator_OR_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The operation just like ||, which means one of the sub triggers toggled the condition,\n* than they can notify or affect other triggers\n*/" },
		{ "DisplayName", "OR" },
		{ "IncludePath", "TriggerEvaluator/TriggerEvaluator_OR.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/TriggerEvaluator_OR.h" },
		{ "ToolTip", "* The operation just like ||, which means one of the sub triggers toggled the condition,\n* than they can notify or affect other triggers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEvaluator_OR_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEvaluator_OR>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEvaluator_OR_Statics::ClassParams = {
		&UTriggerEvaluator_OR::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEvaluator_OR_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEvaluator_OR_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEvaluator_OR()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEvaluator_OR_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEvaluator_OR, 4201966719);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEvaluator_OR>()
	{
		return UTriggerEvaluator_OR::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEvaluator_OR(Z_Construct_UClass_UTriggerEvaluator_OR, &UTriggerEvaluator_OR::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEvaluator_OR"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEvaluator_OR);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
