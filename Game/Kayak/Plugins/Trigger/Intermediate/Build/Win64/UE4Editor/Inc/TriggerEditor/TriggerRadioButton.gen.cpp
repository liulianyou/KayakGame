// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerRadioButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerRadioButton() {}
// Cross Module References
	TRIGGEREDITOR_API UFunction* Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerRadioButton_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerRadioButton();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics
	{
		struct _Script_TriggerEditor_eventOnTriggerRadioButtonSelectChanged_Parms
		{
			int32 NewSelectIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NewSelectIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::NewProp_NewSelectIndex = { "NewSelectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerEditor_eventOnTriggerRadioButtonSelectChanged_Parms, NewSelectIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::NewProp_NewSelectIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerEditor, nullptr, "OnTriggerRadioButtonSelectChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerEditor_eventOnTriggerRadioButtonSelectChanged_Parms), Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTriggerRadioButton::execSetTextArrByTriggerComponents)
	{
		P_GET_TARRAY(UTriggerTaskComponentBase*,Z_Param_ObjectsArr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextArrByTriggerComponents(Z_Param_ObjectsArr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRadioButton::execSetTextArrByObjects)
	{
		P_GET_TARRAY(UObject*,Z_Param_ObjectsArr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextArrByObjects(Z_Param_ObjectsArr);
		P_NATIVE_END;
	}
	void UTriggerRadioButton::StaticRegisterNativesUTriggerRadioButton()
	{
		UClass* Class = UTriggerRadioButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetTextArrByObjects", &UTriggerRadioButton::execSetTextArrByObjects },
			{ "SetTextArrByTriggerComponents", &UTriggerRadioButton::execSetTextArrByTriggerComponents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics
	{
		struct TriggerRadioButton_eventSetTextArrByObjects_Parms
		{
			TArray<UObject*> ObjectsArr;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectsArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr_Inner = { "ObjectsArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr = { "ObjectsArr", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRadioButton_eventSetTextArrByObjects_Parms, ObjectsArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::NewProp_ObjectsArr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRadioButton, nullptr, "SetTextArrByObjects", nullptr, nullptr, sizeof(TriggerRadioButton_eventSetTextArrByObjects_Parms), Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics
	{
		struct TriggerRadioButton_eventSetTextArrByTriggerComponents_Parms
		{
			TArray<UTriggerTaskComponentBase*> ObjectsArr;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectsArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObjectsArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjectsArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr_Inner = { "ObjectsArr", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr = { "ObjectsArr", nullptr, (EPropertyFlags)0x0010008000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRadioButton_eventSetTextArrByTriggerComponents_Parms, ObjectsArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::NewProp_ObjectsArr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRadioButton, nullptr, "SetTextArrByTriggerComponents", nullptr, nullptr, sizeof(TriggerRadioButton_eventSetTextArrByTriggerComponents_Parms), Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerRadioButton_NoRegister()
	{
		return UTriggerRadioButton::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerRadioButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonsOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ButtonsOffset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayTextArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayTextArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DisplayTextArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnRadioSelectChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRadioSelectChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerRadioButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerRadioButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByObjects, "SetTextArrByObjects" }, // 3669263833
		{ &Z_Construct_UFunction_UTriggerRadioButton_SetTextArrByTriggerComponents, "SetTextArrByTriggerComponents" }, // 3844130338
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRadioButton_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple radio button, for trigger editor panel.\n */" },
		{ "IncludePath", "Widget/TriggerRadioButton.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
		{ "ToolTip", "Simple radio button, for trigger editor panel." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_ButtonsOffset_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_ButtonsOffset = { "ButtonsOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerRadioButton, ButtonsOffset), METADATA_PARAMS(Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_ButtonsOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_ButtonsOffset_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr_Inner = { "DisplayTextArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr_MetaData[] = {
		{ "Category", "Style" },
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr = { "DisplayTextArr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerRadioButton, DisplayTextArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_OnRadioSelectChanged_MetaData[] = {
		{ "Category", "TriggerRadioButton|Event" },
		{ "Comment", "/** Called when the checked state has changed */" },
		{ "ModuleRelativePath", "Public/Widget/TriggerRadioButton.h" },
		{ "ToolTip", "Called when the checked state has changed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_OnRadioSelectChanged = { "OnRadioSelectChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerRadioButton, OnRadioSelectChanged), Z_Construct_UDelegateFunction_TriggerEditor_OnTriggerRadioButtonSelectChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_OnRadioSelectChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_OnRadioSelectChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerRadioButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_ButtonsOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_DisplayTextArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRadioButton_Statics::NewProp_OnRadioSelectChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerRadioButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerRadioButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerRadioButton_Statics::ClassParams = {
		&UTriggerRadioButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerRadioButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRadioButton_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerRadioButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRadioButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerRadioButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerRadioButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerRadioButton, 567719525);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerRadioButton>()
	{
		return UTriggerRadioButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerRadioButton(Z_Construct_UClass_UTriggerRadioButton, &UTriggerRadioButton::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerRadioButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerRadioButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
