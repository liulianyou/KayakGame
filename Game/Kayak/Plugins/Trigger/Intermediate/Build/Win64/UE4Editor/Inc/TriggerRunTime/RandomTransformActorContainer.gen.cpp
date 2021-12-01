// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/RandomTransformActorContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomTransformActorContainer() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARandomTransformActorContainer_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ARandomTransformActorContainer();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_APlaceableActorContainer();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	void ARandomTransformActorContainer::StaticRegisterNativesARandomTransformActorContainer()
	{
	}
	UClass* Z_Construct_UClass_ARandomTransformActorContainer_NoRegister()
	{
		return ARandomTransformActorContainer::StaticClass();
	}
	struct Z_Construct_UClass_ARandomTransformActorContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickerPools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickerPools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PickerPools;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformPools_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformPools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TransformPools;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARandomTransformActorContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlaceableActorContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomTransformActorContainer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A PlaceableActorContainer that random transform base on PickerPools. copy from ARandomTransformTrigger, but has different parent class.\n */" },
		{ "IncludePath", "Tool/RandomTransformActorContainer.h" },
		{ "ModuleRelativePath", "Public/Tool/RandomTransformActorContainer.h" },
		{ "ToolTip", "A PlaceableActorContainer that random transform base on PickerPools. copy from ARandomTransformTrigger, but has different parent class." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools_Inner = { "PickerPools", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAIPreviewCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "//The actors which will used to generated the informations which will be used for this pawn\n" },
		{ "ModuleRelativePath", "Public/Tool/RandomTransformActorContainer.h" },
		{ "ToolTip", "The actors which will used to generated the informations which will be used for this pawn" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools = { "PickerPools", nullptr, (EPropertyFlags)0x0010000800000805, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomTransformActorContainer, PickerPools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools_Inner = { "TransformPools", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools_MetaData[] = {
		{ "Category", "Transfrom" },
		{ "Comment", "//The transform pool that this pawn will be transfered randomly\n" },
		{ "ModuleRelativePath", "Public/Tool/RandomTransformActorContainer.h" },
		{ "ToolTip", "The transform pool that this pawn will be transfered randomly" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools = { "TransformPools", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARandomTransformActorContainer, TransformPools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARandomTransformActorContainer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_PickerPools,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARandomTransformActorContainer_Statics::NewProp_TransformPools,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARandomTransformActorContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARandomTransformActorContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARandomTransformActorContainer_Statics::ClassParams = {
		&ARandomTransformActorContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARandomTransformActorContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARandomTransformActorContainer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARandomTransformActorContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARandomTransformActorContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARandomTransformActorContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARandomTransformActorContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARandomTransformActorContainer, 3437403788);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ARandomTransformActorContainer>()
	{
		return ARandomTransformActorContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARandomTransformActorContainer(Z_Construct_UClass_ARandomTransformActorContainer, &ARandomTransformActorContainer::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ARandomTransformActorContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARandomTransformActorContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
