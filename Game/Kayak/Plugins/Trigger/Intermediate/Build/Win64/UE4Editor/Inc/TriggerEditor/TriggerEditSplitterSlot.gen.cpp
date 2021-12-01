// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerEditSplitterSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEditSplitterSlot() {}
// Cross Module References
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerEditSplitterSlot_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerEditSplitterSlot();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
// End Cross Module References
	void UTriggerEditSplitterSlot::StaticRegisterNativesUTriggerEditSplitterSlot()
	{
	}
	UClass* Z_Construct_UClass_UTriggerEditSplitterSlot_NoRegister()
	{
		return UTriggerEditSplitterSlot::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEditSplitterSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SizeValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SizeValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Slot for Trigger Edit Splitter.\n */" },
		{ "IncludePath", "Widget/TriggerEditSplitterSlot.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditSplitterSlot.h" },
		{ "ToolTip", "Slot for Trigger Edit Splitter." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::NewProp_SizeValue_MetaData[] = {
		{ "Category", "Layout|Trigger Edit Splitter Slot" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditSplitterSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::NewProp_SizeValue = { "SizeValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditSplitterSlot, SizeValue), METADATA_PARAMS(Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::NewProp_SizeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::NewProp_SizeValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::NewProp_SizeValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEditSplitterSlot>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::ClassParams = {
		&UTriggerEditSplitterSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEditSplitterSlot()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEditSplitterSlot_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEditSplitterSlot, 3150491526);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerEditSplitterSlot>()
	{
		return UTriggerEditSplitterSlot::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEditSplitterSlot(Z_Construct_UClass_UTriggerEditSplitterSlot, &UTriggerEditSplitterSlot::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerEditSplitterSlot"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEditSplitterSlot);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
