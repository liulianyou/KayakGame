// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerTagWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTagWidget() {}
// Cross Module References
	TRIGGEREDITOR_API UFunction* Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTagWidget();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTagWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics
	{
		struct TriggerTagWidget_eventOnTriggerTagChanged_Parms
		{
			FGameplayTagContainer TriggerTags;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::NewProp_TriggerTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::NewProp_TriggerTags = { "TriggerTags", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTagWidget_eventOnTriggerTagChanged_Parms, TriggerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::NewProp_TriggerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::NewProp_TriggerTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::NewProp_TriggerTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTagWidget, nullptr, "OnTriggerTagChanged__DelegateSignature", nullptr, nullptr, sizeof(TriggerTagWidget_eventOnTriggerTagChanged_Parms), Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UTriggerTagWidget::StaticRegisterNativesUTriggerTagWidget()
	{
	}
	UClass* Z_Construct_UClass_UTriggerTagWidget_NoRegister()
	{
		return UTriggerTagWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTagWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilterTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTriggerTagChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTriggerTagChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTagWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTagWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature, "OnTriggerTagChanged__DelegateSignature" }, // 3132709952
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTagWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom tag widget for trigger, just wrap SCustomTagWidget.\n */" },
		{ "IncludePath", "Widget/TriggerTagWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTagWidget.h" },
		{ "ToolTip", "Custom tag widget for trigger, just wrap SCustomTagWidget." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_FilterTag_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTagWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTagWidget, FilterTag), METADATA_PARAMS(Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_FilterTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_FilterTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_OnTriggerTagChanged_MetaData[] = {
		{ "Category", "TriggerTagWidget|Event" },
		{ "Comment", "/** Called when the checked state has changed */" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTagWidget.h" },
		{ "ToolTip", "Called when the checked state has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_OnTriggerTagChanged = { "OnTriggerTagChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTagWidget, OnTriggerTagChanged), Z_Construct_UDelegateFunction_UTriggerTagWidget_OnTriggerTagChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_OnTriggerTagChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_OnTriggerTagChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTagWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_FilterTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTagWidget_Statics::NewProp_OnTriggerTagChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTagWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTagWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTagWidget_Statics::ClassParams = {
		&UTriggerTagWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UTriggerTagWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTagWidget_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTagWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTagWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTagWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTagWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTagWidget, 2996431855);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerTagWidget>()
	{
		return UTriggerTagWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTagWidget(Z_Construct_UClass_UTriggerTagWidget, &UTriggerTagWidget::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerTagWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTagWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
