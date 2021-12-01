// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerType/SceneTrigger/SceneAISpawnTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneAISpawnTrigger() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASceneAISpawnTrigger_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASceneAISpawnTrigger();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBox();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void ASceneAISpawnTrigger::StaticRegisterNativesASceneAISpawnTrigger()
	{
	}
	UClass* Z_Construct_UClass_ASceneAISpawnTrigger_NoRegister()
	{
		return ASceneAISpawnTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ASceneAISpawnTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASceneAISpawnTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANewTriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASceneAISpawnTrigger_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trigger|SceneTrigger" },
		{ "IncludePath", "TriggerType/SceneTrigger/SceneAISpawnTrigger.h" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SceneAISpawnTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASceneAISpawnTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASceneAISpawnTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASceneAISpawnTrigger_Statics::ClassParams = {
		&ASceneAISpawnTrigger::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASceneAISpawnTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASceneAISpawnTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASceneAISpawnTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASceneAISpawnTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASceneAISpawnTrigger, 352559276);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ASceneAISpawnTrigger>()
	{
		return ASceneAISpawnTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASceneAISpawnTrigger(Z_Construct_UClass_ASceneAISpawnTrigger, &ASceneAISpawnTrigger::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ASceneAISpawnTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASceneAISpawnTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
