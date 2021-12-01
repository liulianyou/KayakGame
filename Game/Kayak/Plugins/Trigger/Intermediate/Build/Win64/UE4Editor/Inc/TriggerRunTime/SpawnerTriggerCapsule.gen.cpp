// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerType/SceneTrigger/SpawnerTriggerCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerTriggerCapsule() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerCapsule_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerCapsule();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void ASpawnerTriggerCapsule::StaticRegisterNativesASpawnerTriggerCapsule()
	{
	}
	UClass* Z_Construct_UClass_ASpawnerTriggerCapsule_NoRegister()
	{
		return ASpawnerTriggerCapsule::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnerTriggerCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpawnerTriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Spawner Trigger with Capsule Collision Component.\n */" },
		{ "IncludePath", "TriggerType/SceneTrigger/SpawnerTriggerCapsule.h" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerCapsule.h" },
		{ "ToolTip", "Spawner Trigger with Capsule Collision Component." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerTriggerCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::ClassParams = {
		&ASpawnerTriggerCapsule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnerTriggerCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnerTriggerCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnerTriggerCapsule, 1765526366);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ASpawnerTriggerCapsule>()
	{
		return ASpawnerTriggerCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnerTriggerCapsule(Z_Construct_UClass_ASpawnerTriggerCapsule, &ASpawnerTriggerCapsule::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ASpawnerTriggerCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerTriggerCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
