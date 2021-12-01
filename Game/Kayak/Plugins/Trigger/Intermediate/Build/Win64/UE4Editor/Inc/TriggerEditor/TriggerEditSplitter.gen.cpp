// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerEditSplitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEditSplitter() {}
// Cross Module References
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerEditSplitter_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerEditSplitter();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSplitterStyle();
// End Cross Module References
	void UTriggerEditSplitter::StaticRegisterNativesUTriggerEditSplitter()
	{
	}
	UClass* Z_Construct_UClass_UTriggerEditSplitter_NoRegister()
	{
		return UTriggerEditSplitter::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEditSplitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitterStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SplitterStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEditSplitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditSplitter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * wrapper for splitter\n */" },
		{ "IncludePath", "Widget/TriggerEditSplitter.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditSplitter.h" },
		{ "ToolTip", "wrapper for splitter" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditSplitter_Statics::NewProp_SplitterStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditSplitter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerEditSplitter_Statics::NewProp_SplitterStyle = { "SplitterStyle", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditSplitter, SplitterStyle), Z_Construct_UScriptStruct_FSplitterStyle, METADATA_PARAMS(Z_Construct_UClass_UTriggerEditSplitter_Statics::NewProp_SplitterStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditSplitter_Statics::NewProp_SplitterStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEditSplitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditSplitter_Statics::NewProp_SplitterStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEditSplitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEditSplitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEditSplitter_Statics::ClassParams = {
		&UTriggerEditSplitter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerEditSplitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditSplitter_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEditSplitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditSplitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEditSplitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEditSplitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEditSplitter, 2137675300);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerEditSplitter>()
	{
		return UTriggerEditSplitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEditSplitter(Z_Construct_UClass_UTriggerEditSplitter, &UTriggerEditSplitter::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerEditSplitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEditSplitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
