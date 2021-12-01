// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerEditor/Public/Widget/TriggerEditPanel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEditPanel() {}
// Cross Module References
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerEditPanel_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerEditPanel();
	BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
	UPackage* Z_Construct_UPackage__Script_TriggerEditor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBase_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerTreeViewObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTreeView_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerDetailsView_NoRegister();
	TRIGGEREDITOR_API UClass* Z_Construct_UClass_UTriggerRadioButton_NoRegister();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UTriggerEditPanel::execOnSelectComponents)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectComponents(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEditPanel::execOnSelectedTrigger)
	{
		P_GET_OBJECT(UTriggerTreeViewObject,Z_Param_TriggerData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectedTrigger(Z_Param_TriggerData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEditPanel::execOnTriggerTreeExpansionChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerTreeExpansionChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerEditPanel::execGetTriggersInLevel)
	{
		P_GET_TARRAY_REF(ANewTriggerBase*,Z_Param_Out_Result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriggersInLevel(Z_Param_Out_Result);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UTriggerEditPanel::StaticRegisterNativesUTriggerEditPanel()
	{
#if WITH_EDITOR
		UClass* Class = UTriggerEditPanel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTriggersInLevel", &UTriggerEditPanel::execGetTriggersInLevel },
			{ "OnSelectComponents", &UTriggerEditPanel::execOnSelectComponents },
			{ "OnSelectedTrigger", &UTriggerEditPanel::execOnSelectedTrigger },
			{ "OnTriggerTreeExpansionChanged", &UTriggerEditPanel::execOnTriggerTreeExpansionChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics
	{
		struct TriggerEditPanel_eventGetTriggersInLevel_Parms
		{
			TArray<ANewTriggerBase*> Result;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Result_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANewTriggerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEditPanel_eventGetTriggersInLevel_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::NewProp_Result_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "Comment", "//get all triggers in level, copy from UEditorLevelLibrary::GetAllLevelActors\n" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
		{ "ToolTip", "get all triggers in level, copy from UEditorLevelLibrary::GetAllLevelActors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEditPanel, nullptr, "GetTriggersInLevel", nullptr, nullptr, sizeof(TriggerEditPanel_eventGetTriggersInLevel_Parms), Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics
	{
		struct TriggerEditPanel_eventOnSelectComponents_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEditPanel_eventOnSelectComponents_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEditPanel, nullptr, "OnSelectComponents", nullptr, nullptr, sizeof(TriggerEditPanel_eventOnSelectComponents_Parms), Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics
	{
		struct TriggerEditPanel_eventOnSelectedTrigger_Parms
		{
			UTriggerTreeViewObject* TriggerData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::NewProp_TriggerData = { "TriggerData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEditPanel_eventOnSelectedTrigger_Parms, TriggerData), Z_Construct_UClass_UTriggerTreeViewObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::NewProp_TriggerData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEditPanel, nullptr, "OnSelectedTrigger", nullptr, nullptr, sizeof(TriggerEditPanel_eventOnSelectedTrigger_Parms), Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerEditPanel, nullptr, "OnTriggerTreeExpansionChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	UClass* Z_Construct_UClass_UTriggerEditPanel_NoRegister()
	{
		return UTriggerEditPanel::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEditPanel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurSelectedTrigger_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurSelectedTrigger;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TreeViewObjectArr_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TreeViewObjectArr_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TreeViewObjectArr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailsView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DetailsView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadioButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEditPanel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerEditor,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerEditPanel_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UTriggerEditPanel_GetTriggersInLevel, "GetTriggersInLevel" }, // 3396950658
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UTriggerEditPanel_OnSelectComponents, "OnSelectComponents" }, // 3793086847
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UTriggerEditPanel_OnSelectedTrigger, "OnSelectedTrigger" }, // 2921111646
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UTriggerEditPanel_OnTriggerTreeExpansionChanged, "OnTriggerTreeExpansionChanged" }, // 3823498889
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditPanel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Trigger Edit Panel, run in editor.\n */" },
		{ "IncludePath", "Widget/TriggerEditPanel.h" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
		{ "ToolTip", "Trigger Edit Panel, run in editor." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeView_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeView = { "TreeView", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditPanel, TreeView), Z_Construct_UClass_UTreeView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_CurSelectedTrigger_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_CurSelectedTrigger = { "CurSelectedTrigger", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditPanel, CurSelectedTrigger), Z_Construct_UClass_UTriggerTreeViewObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_CurSelectedTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_CurSelectedTrigger_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr_Inner = { "TreeViewObjectArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTreeViewObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr = { "TreeViewObjectArr", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditPanel, TreeViewObjectArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_DetailsView_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_DetailsView = { "DetailsView", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditPanel, DetailsView), Z_Construct_UClass_UTriggerDetailsView_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_DetailsView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_DetailsView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_RadioButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widget/TriggerEditPanel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_RadioButton = { "RadioButton", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerEditPanel, RadioButton), Z_Construct_UClass_UTriggerRadioButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_RadioButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_RadioButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerEditPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_CurSelectedTrigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_TreeViewObjectArr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_DetailsView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerEditPanel_Statics::NewProp_RadioButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEditPanel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEditPanel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEditPanel_Statics::ClassParams = {
		&UTriggerEditPanel::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_UTriggerEditPanel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEditPanel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEditPanel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEditPanel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEditPanel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEditPanel, 458235386);
	template<> TRIGGEREDITOR_API UClass* StaticClass<UTriggerEditPanel>()
	{
		return UTriggerEditPanel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEditPanel(Z_Construct_UClass_UTriggerEditPanel, &UTriggerEditPanel::StaticClass, TEXT("/Script/TriggerEditor"), TEXT("UTriggerEditPanel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEditPanel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
