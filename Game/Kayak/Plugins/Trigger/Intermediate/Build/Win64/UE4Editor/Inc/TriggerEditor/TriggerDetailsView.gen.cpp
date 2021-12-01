// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerDetailsView.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerDetailsView() {}
// Cross Module References
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerDetailsView_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerDetailsView();
	UMGEDITOR_API UClass* Z_Construct_UClass_UDetailsView();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerDetailsView::execSelectObject)
	{
		P_GET_OBJECT(UObject,Z_Param_NewObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectObject(Z_Param_NewObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerDetailsView::execGetSelectedObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetSelectedObject();
		P_NATIVE_END;
	}
	void UTriggerDetailsView::StaticRegisterNativesUTriggerDetailsView()
	{
		UClass* Class = UTriggerDetailsView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSelectedObject", &UTriggerDetailsView::execGetSelectedObject },
			{ "SelectObject", &UTriggerDetailsView::execSelectObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics
	{
		struct TriggerDetailsView_eventGetSelectedObject_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDetailsView_eventGetSelectedObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Widget/TriggerDetailsView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerDetailsView, nullptr, "GetSelectedObject", nullptr, nullptr, sizeof(TriggerDetailsView_eventGetSelectedObject_Parms), Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics
	{
		struct TriggerDetailsView_eventSelectObject_Parms
		{
			UObject* NewObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::NewProp_NewObject = { "NewObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerDetailsView_eventSelectObject_Parms, NewObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::NewProp_NewObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Widget/TriggerDetailsView.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerDetailsView, nullptr, "SelectObject", nullptr, nullptr, sizeof(TriggerDetailsView_eventSelectObject_Parms), Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerDetailsView_SelectObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerDetailsView_SelectObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerDetailsView_NoRegister()
	{
		return UTriggerDetailsView::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerDetailsView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CategoriesToHide_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoriesToHide_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CategoriesToHide;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PropertiesToHide_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PropertiesToHide_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PropertiesToHide;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerDetailsView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDetailsView,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerDetailsView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerDetailsView_GetSelectedObject, "GetSelectedObject" }, // 3850957427
		{ &Z_Construct_UFunction_UTriggerDetailsView_SelectObject, "SelectObject" }, // 4268051417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerDetailsView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Details View for Triggers.\n */" },
		{ "IncludePath", "Widget/TriggerDetailsView.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerDetailsView.h" },
		{ "ToolTip", "Details View for Triggers." },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide_Inner = { "CategoriesToHide", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Widget/TriggerDetailsView.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide = { "CategoriesToHide", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerDetailsView, CategoriesToHide), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide_Inner = { "PropertiesToHide", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide_MetaData[] = {
		{ "Category", "View" },
		{ "ModuleRelativePath", "Public/Widget/TriggerDetailsView.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide = { "PropertiesToHide", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerDetailsView, PropertiesToHide), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerDetailsView_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_CategoriesToHide,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerDetailsView_Statics::NewProp_PropertiesToHide,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerDetailsView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerDetailsView>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerDetailsView_Statics::ClassParams = {
		&UTriggerDetailsView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerDetailsView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerDetailsView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerDetailsView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerDetailsView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerDetailsView()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerDetailsView_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerDetailsView, 2690088504);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerDetailsView>()
	{
		return UTriggerDetailsView::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerDetailsView(Z_Construct_UClass_UTriggerDetailsView, &UTriggerDetailsView::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerDetailsView"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerDetailsView);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
