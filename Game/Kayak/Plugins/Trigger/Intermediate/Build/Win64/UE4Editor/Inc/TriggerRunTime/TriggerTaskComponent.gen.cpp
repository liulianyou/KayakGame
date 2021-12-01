// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskComponent/TriggerTaskComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskComponent() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponent();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBase_NoRegister();
// End Cross Module References
	void UTriggerTaskComponent::StaticRegisterNativesUTriggerTaskComponent()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTaskComponent_NoRegister()
	{
		return UTriggerTaskComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildNodes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentNodes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskComponentBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Trigger task component used to manager the task triggered by trigger.\n* You can treat it as task dispatcher\n*/" },
		{ "DisplayName", "SceneTriggerTaskComponent" },
		{ "HideCategories", "Object LOD Activation Tags Cooking Physics Transform Rendering AssetUserData Collision Trigger PhysicsVolume" },
		{ "IncludePath", "TriggerTaskComponent/TriggerTaskComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponent.h" },
		{ "ToolTip", "* Trigger task component used to manager the task triggered by trigger.\n* You can treat it as task dispatcher" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes_Inner = { "ChildNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANewTriggerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes = { "ChildNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponent, ChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANewTriggerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerTaskComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskComponent, ParentNodes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ChildNodes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskComponent_Statics::NewProp_ParentNodes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskComponent_Statics::ClassParams = {
		&UTriggerTaskComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerTaskComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskComponent, 1215905293);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskComponent>()
	{
		return UTriggerTaskComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskComponent(Z_Construct_UClass_UTriggerTaskComponent, &UTriggerTaskComponent::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTriggerTaskComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
