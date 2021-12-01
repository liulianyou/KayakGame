// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailedBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckGameOverFailedBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverFailedBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverFailedBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckGameOverBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UCheckGameOverFailedBase::StaticRegisterNativesUCheckGameOverFailedBase()
	{
	}
	UClass* Z_Construct_UClass_UCheckGameOverFailedBase_NoRegister()
	{
		return UCheckGameOverFailedBase::StaticClass();
	}
	struct Z_Construct_UClass_UCheckGameOverFailedBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckGameOverFailedBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCheckGameOverBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckGameOverFailedBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Abstract class to check weather the player is failed\n*/" },
		{ "IncludePath", "TriggerEvaluator/GameOverCondition/CheckGameOverFailedBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/GameOverCondition/CheckGameOverFailedBase.h" },
		{ "ToolTip", "* Abstract class to check weather the player is failed" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckGameOverFailedBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckGameOverFailedBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckGameOverFailedBase_Statics::ClassParams = {
		&UCheckGameOverFailedBase::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckGameOverFailedBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckGameOverFailedBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckGameOverFailedBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckGameOverFailedBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckGameOverFailedBase, 1542707711);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckGameOverFailedBase>()
	{
		return UCheckGameOverFailedBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckGameOverFailedBase(Z_Construct_UClass_UCheckGameOverFailedBase, &UCheckGameOverFailedBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckGameOverFailedBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckGameOverFailedBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
