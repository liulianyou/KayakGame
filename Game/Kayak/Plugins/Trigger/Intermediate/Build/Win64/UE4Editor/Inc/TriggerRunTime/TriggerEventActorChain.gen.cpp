// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskComponent/EventChain/TriggerEventActorChain.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEventActorChain() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventActorChain_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventActorChain();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEventChainBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UTriggerEventActorChain::StaticRegisterNativesUTriggerEventActorChain()
	{
	}
	UClass* Z_Construct_UClass_UTriggerEventActorChain_NoRegister()
	{
		return UTriggerEventActorChain::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEventActorChain_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ChildNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildNodes;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ParentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEventActorChain_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerEventChainBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventActorChain_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EventInfo" },
		{ "IncludePath", "TriggerTaskComponent/EventChain/TriggerEventActorChain.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventActorChain.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes_Inner = { "ChildNodes", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes_MetaData[] = {
		{ "Category", "EventInfo" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventActorChain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes = { "ChildNodes", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventActorChain, ChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0004000000020000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes_MetaData[] = {
		{ "Category", "EventInfo" },
		{ "DisplayAfter", "NextComponentInfos" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/EventChain/TriggerEventActorChain.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0024080000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEventActorChain, ParentNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEventActorChain_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ChildNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEventActorChain_Statics::NewProp_ParentNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEventActorChain_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEventActorChain>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEventActorChain_Statics::ClassParams = {
		&UTriggerEventActorChain::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerEventActorChain_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventActorChain_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEventActorChain_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEventActorChain_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEventActorChain()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEventActorChain_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEventActorChain, 3565679320);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEventActorChain>()
	{
		return UTriggerEventActorChain::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEventActorChain(Z_Construct_UClass_UTriggerEventActorChain, &UTriggerEventActorChain::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEventActorChain"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEventActorChain);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
