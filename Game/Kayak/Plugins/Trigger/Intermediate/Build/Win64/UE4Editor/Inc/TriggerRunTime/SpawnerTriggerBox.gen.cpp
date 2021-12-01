// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerType/SceneTrigger/SpawnerTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerTriggerBox() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBox_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBox();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASpawnerTriggerBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void ASpawnerTriggerBox::StaticRegisterNativesASpawnerTriggerBox()
	{
	}
	UClass* Z_Construct_UClass_ASpawnerTriggerBox_NoRegister()
	{
		return ASpawnerTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ASpawnerTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawnerTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASpawnerTriggerBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawnerTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Spawner Trigger with Box Collision Component.\n */" },
		{ "IncludePath", "TriggerType/SceneTrigger/SpawnerTriggerBox.h" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/SpawnerTriggerBox.h" },
		{ "ToolTip", "Spawner Trigger with Box Collision Component." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawnerTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawnerTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawnerTriggerBox_Statics::ClassParams = {
		&ASpawnerTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASpawnerTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawnerTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawnerTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawnerTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnerTriggerBox, 2556601093);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ASpawnerTriggerBox>()
	{
		return ASpawnerTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnerTriggerBox(Z_Construct_UClass_ASpawnerTriggerBox, &ASpawnerTriggerBox::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ASpawnerTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnerTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
