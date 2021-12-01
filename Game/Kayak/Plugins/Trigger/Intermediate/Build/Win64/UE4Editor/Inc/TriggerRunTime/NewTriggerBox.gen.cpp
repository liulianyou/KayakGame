// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerType/SceneTrigger/NewTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewTriggerBox() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBox_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBox();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ASceneTrigger();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void ANewTriggerBox::StaticRegisterNativesANewTriggerBox()
	{
	}
	UClass* Z_Construct_UClass_ANewTriggerBox_NoRegister()
	{
		return ANewTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ANewTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASceneTrigger,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trigger|SceneTrigger" },
		{ "IncludePath", "TriggerType/SceneTrigger/NewTriggerBox.h" },
		{ "ModuleRelativePath", "Public/TriggerType/SceneTrigger/NewTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewTriggerBox_Statics::ClassParams = {
		&ANewTriggerBox::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANewTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewTriggerBox, 3766868703);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ANewTriggerBox>()
	{
		return ANewTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewTriggerBox(Z_Construct_UClass_ANewTriggerBox, &ANewTriggerBox::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ANewTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
