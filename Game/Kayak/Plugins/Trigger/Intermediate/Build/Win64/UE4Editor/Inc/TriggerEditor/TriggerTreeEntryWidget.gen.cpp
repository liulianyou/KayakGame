// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerTreeEntryWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTreeEntryWidget() {}
// Cross Module References
	TRIGGEREDITOR_API UFunction* Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTreeEntryWidget();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTreeViewObject_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTreeEntryWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
	UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics
	{
		struct TriggerTreeEntryWidget_eventOnSelectedTrigger_Parms
		{
			UTriggerTreeViewObject* SelectedTreeObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedTreeObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::NewProp_SelectedTreeObject = { "SelectedTreeObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTreeEntryWidget_eventOnSelectedTrigger_Parms, SelectedTreeObject), Z_Construct_UClass_UTriggerTreeViewObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::NewProp_SelectedTreeObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTreeEntryWidget, nullptr, "OnSelectedTrigger__DelegateSignature", nullptr, nullptr, sizeof(TriggerTreeEntryWidget_eventOnSelectedTrigger_Parms), Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTriggerTreeEntryWidget::execToggleExpansion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleExpansion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTreeEntryWidget::execIsTreeItemExpanded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTreeItemExpanded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTreeEntryWidget::execOnTriggerSelectedCall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerSelectedCall();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTreeEntryWidget_TriggerSelected = FName(TEXT("TriggerSelected"));
	void UTriggerTreeEntryWidget::TriggerSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTreeEntryWidget_TriggerSelected),NULL);
	}
	static FName NAME_UTriggerTreeEntryWidget_TriggerUnSelected = FName(TEXT("TriggerUnSelected"));
	void UTriggerTreeEntryWidget::TriggerUnSelected()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTreeEntryWidget_TriggerUnSelected),NULL);
	}
	void UTriggerTreeEntryWidget::StaticRegisterNativesUTriggerTreeEntryWidget()
	{
		UClass* Class = UTriggerTreeEntryWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsTreeItemExpanded", &UTriggerTreeEntryWidget::execIsTreeItemExpanded },
			{ "OnTriggerSelectedCall", &UTriggerTreeEntryWidget::execOnTriggerSelectedCall },
			{ "ToggleExpansion", &UTriggerTreeEntryWidget::execToggleExpansion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics
	{
		struct TriggerTreeEntryWidget_eventIsTreeItemExpanded_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTreeEntryWidget_eventIsTreeItemExpanded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTreeEntryWidget_eventIsTreeItemExpanded_Parms), &Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTreeEntryWidget, nullptr, "IsTreeItemExpanded", nullptr, nullptr, sizeof(TriggerTreeEntryWidget_eventIsTreeItemExpanded_Parms), Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTreeEntryWidget, nullptr, "OnTriggerSelectedCall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTreeEntryWidget, nullptr, "ToggleExpansion", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTreeEntryWidget, nullptr, "TriggerSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTreeEntryWidget, nullptr, "TriggerUnSelected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTreeEntryWidget_NoRegister()
	{
		return UTriggerTreeEntryWidget::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTreeEntryWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectedTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectedTrigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTreeEntryWidget_IsTreeItemExpanded, "IsTreeItemExpanded" }, // 3535478615
		{ &Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature, "OnSelectedTrigger__DelegateSignature" }, // 1603844211
		{ &Z_Construct_UFunction_UTriggerTreeEntryWidget_OnTriggerSelectedCall, "OnTriggerSelectedCall" }, // 983117569
		{ &Z_Construct_UFunction_UTriggerTreeEntryWidget_ToggleExpansion, "ToggleExpansion" }, // 835994892
		{ &Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerSelected, "TriggerSelected" }, // 979793031
		{ &Z_Construct_UFunction_UTriggerTreeEntryWidget_TriggerUnSelected, "TriggerUnSelected" }, // 1662768568
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trigger Tree Entry Widget.\n */" },
		{ "IncludePath", "Widget/TriggerTreeEntryWidget.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
		{ "ToolTip", "Trigger Tree Entry Widget." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_OnSelectedTrigger_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_OnSelectedTrigger = { "OnSelectedTrigger", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeEntryWidget, OnSelectedTrigger), Z_Construct_UDelegateFunction_UTriggerTreeEntryWidget_OnSelectedTrigger__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_OnSelectedTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_OnSelectedTrigger_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_TriggerObject_MetaData[] = {
		{ "Category", "TriggerTree" },
		{ "ModuleRelativePath", "Public/Widget/TriggerTreeEntryWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_TriggerObject = { "TriggerObject", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTreeEntryWidget, TriggerObject), Z_Construct_UClass_UTriggerTreeViewObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_TriggerObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_TriggerObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_OnSelectedTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::NewProp_TriggerObject,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(UTriggerTreeEntryWidget, IUserObjectListEntry), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTreeEntryWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::ClassParams = {
		&UTriggerTreeEntryWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTreeEntryWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTreeEntryWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTreeEntryWidget, 1929389456);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerTreeEntryWidget>()
	{
		return UTriggerTreeEntryWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTreeEntryWidget(Z_Construct_UClass_UTriggerTreeEntryWidget, &UTriggerTreeEntryWidget::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerTreeEntryWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTreeEntryWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
