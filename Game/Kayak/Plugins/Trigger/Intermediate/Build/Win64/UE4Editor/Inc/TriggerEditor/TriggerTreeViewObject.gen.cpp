// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerTreeViewObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTreeViewObject() {}
// Cross Module References
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTreeViewObject_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTreeViewObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBase_NoRegister();
// End Cross Module References
	void UTriggerTreeViewObject::StaticRegisterNativesUTriggerTreeViewObject()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTreeViewObject_NoRegister()
	{
		return UTriggerTreeViewObject::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTreeViewObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TriggerName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TriggerLevel;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NextNodesChildren_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextNodesChildren_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextNodesChildren;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RingPointNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RingPointNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RingPointNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RepeatedNoes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatedNoes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RepeatedNoes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTreeViewObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * the trigger related data for tree view.\n */" },
		{ "IncludePath", "Widget/TriggerTreeViewObject.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
		{ "ToolTip", "the trigger related data for tree view." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerName_MetaData[] = {
		{ "Category", "TriggerTreeView" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerName = { "TriggerName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeViewObject, TriggerName), METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerLevel_MetaData[] = {
		{ "Category", "TriggerTreeView" },
		{ "Comment", "//the depth level in tree view, start from 0.\n" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
		{ "ToolTip", "the depth level in tree view, start from 0." },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerLevel = { "TriggerLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeViewObject, TriggerLevel), METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerLevel_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren_Inner = { "NextNodesChildren", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren_MetaData[] = {
		{ "Category", "TriggerTreeView" },
		{ "Comment", "//the children of the node in tree view, no ring, no repeat.\n" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
		{ "ToolTip", "the children of the node in tree view, no ring, no repeat." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren = { "NextNodesChildren", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeViewObject, NextNodesChildren), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes_Inner = { "RingPointNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes_MetaData[] = {
		{ "Category", "TriggerTreeView" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes = { "RingPointNodes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeViewObject, RingPointNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes_Inner = { "RepeatedNoes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes_MetaData[] = {
		{ "Category", "TriggerTreeView" },
		{ "Comment", "// repeat with trigger before\n" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
		{ "ToolTip", "repeat with trigger before" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes = { "RepeatedNoes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeViewObject, RepeatedNoes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_Trigger_MetaData[] = {
		{ "Category", "TriggerTreeViewObject" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeViewObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeViewObject, Trigger), Z_Construct_UClass_ANewTriggerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_Trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_Trigger_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTreeViewObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_TriggerLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_NextNodesChildren,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RingPointNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_RepeatedNoes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeViewObject_Statics::NewProp_Trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTreeViewObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTreeViewObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTreeViewObject_Statics::ClassParams = {
		&UTriggerTreeViewObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerTreeViewObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeViewObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeViewObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTreeViewObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTreeViewObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTreeViewObject, 2699171887);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerTreeViewObject>()
	{
		return UTriggerTreeViewObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTreeViewObject(Z_Construct_UClass_UTriggerTreeViewObject, &UTriggerTreeViewObject::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerTreeViewObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTreeViewObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
