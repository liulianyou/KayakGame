// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/ContributeRule/AddContribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddContribution() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAddContribution_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAddContribution();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void UAddContribution::StaticRegisterNativesUAddContribution()
	{
	}
	UClass* Z_Construct_UClass_UAddContribution_NoRegister()
	{
		return UAddContribution::StaticClass();
	}
	struct Z_Construct_UClass_UAddContribution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddContribution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContributeRuleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddContribution_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/InteractionTask/ContributeRule/AddContribution.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/ContributeRule/AddContribution.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddContribution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddContribution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddContribution_Statics::ClassParams = {
		&UAddContribution::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAddContribution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddContribution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddContribution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddContribution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddContribution, 896329916);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAddContribution>()
	{
		return UAddContribution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddContribution(Z_Construct_UClass_UAddContribution, &UAddContribution::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAddContribution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddContribution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
