// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/TriggerEvaluator_AND.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEvaluator_AND() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEvaluator_AND_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEvaluator_AND();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorOperation();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UTriggerEvaluator_AND::StaticRegisterNativesUTriggerEvaluator_AND()
	{
	}
	UClass* Z_Construct_UClass_UTriggerEvaluator_AND_NoRegister()
	{
		return UTriggerEvaluator_AND::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEvaluator_AND_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEvaluator_AND_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorOperation,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEvaluator_AND_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The operation just like &&, which means all the sub triggers toggled the condition,\n* than they can notify or affect other triggers\n*/" },
		{ "DisplayName", "AND" },
		{ "IncludePath", "TriggerEvaluator/TriggerEvaluator_AND.h" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/TriggerEvaluator_AND.h" },
		{ "ToolTip", "* The operation just like &&, which means all the sub triggers toggled the condition,\n* than they can notify or affect other triggers" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEvaluator_AND_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEvaluator_AND>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEvaluator_AND_Statics::ClassParams = {
		&UTriggerEvaluator_AND::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEvaluator_AND_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEvaluator_AND_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEvaluator_AND()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEvaluator_AND_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEvaluator_AND, 1524815555);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEvaluator_AND>()
	{
		return UTriggerEvaluator_AND::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEvaluator_AND(Z_Construct_UClass_UTriggerEvaluator_AND, &UTriggerEvaluator_AND::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEvaluator_AND"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEvaluator_AND);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
