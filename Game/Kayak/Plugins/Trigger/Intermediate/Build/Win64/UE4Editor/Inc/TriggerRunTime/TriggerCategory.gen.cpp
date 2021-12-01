// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskComponent/Category/TriggerCategory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerCategory() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerCategoryBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerCategoryBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTaskComponentCategory_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTaskComponentCategory();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerCategoryBase::execGenerateMapNameFromCategroyTag)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutMapNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMapNameFromCategroyTag(Z_Param_Out_OutMapNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execMarkScenerioDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkScenerioDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execMarkDifficultyDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkDifficultyDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execMarkCategoryDirty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkCategoryDirty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execIsValidCategory)
	{
		P_GET_UBOOL(Z_Param_CompleteCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidCategory(Z_Param_CompleteCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execHaveValidScenarioNode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveValidScenarioNode(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execHaveValidDifficultyNode)
	{
		P_GET_OBJECT(APlayerController,Z_Param_Player);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HaveValidDifficultyNode(Z_Param_Player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execGetMapName)
	{
		P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_CategoryTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetMapName(Z_Param_Out_CategoryTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execUpdateCategoryToCurrentMap)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateCategoryToCurrentMap();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execGetExportedMapNameByParentCategory)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutMapNames);
		P_GET_OBJECT(UTriggerCategoryBase,Z_Param_ParentCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetExportedMapNameByParentCategory_Implementation(Z_Param_Out_OutMapNames,Z_Param_ParentCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execGetExportedMapName)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_OutMapNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetExportedMapName_Implementation(Z_Param_Out_OutMapNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execIsChildCategoryOfGameplayTagContainer)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_ParentTagContainer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildCategoryOfGameplayTagContainer_Implementation(Z_Param_Out_ParentTagContainer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execIsChildCategoryOfTriggerCategory)
	{
		P_GET_OBJECT(UTriggerCategoryBase,Z_Param_ParentCategory);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChildCategoryOfTriggerCategory_Implementation(Z_Param_ParentCategory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execIsMathcedForCurrrentRuntimeContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMathcedForCurrrentRuntimeContent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerCategoryBase::execInitializeCategory)
	{
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeCategory(Z_Param_Owner);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerCategoryBase_GetExportedMapName = FName(TEXT("GetExportedMapName"));
	void UTriggerCategoryBase::GetExportedMapName(TArray<FString>& OutMapNames) const
	{
		TriggerCategoryBase_eventGetExportedMapName_Parms Parms;
		Parms.OutMapNames=OutMapNames;
		const_cast<UTriggerCategoryBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerCategoryBase_GetExportedMapName),&Parms);
		OutMapNames=Parms.OutMapNames;
	}
	static FName NAME_UTriggerCategoryBase_GetExportedMapNameByParentCategory = FName(TEXT("GetExportedMapNameByParentCategory"));
	void UTriggerCategoryBase::GetExportedMapNameByParentCategory(TArray<FString>& OutMapNames, UTriggerCategoryBase* ParentCategory) const
	{
		TriggerCategoryBase_eventGetExportedMapNameByParentCategory_Parms Parms;
		Parms.OutMapNames=OutMapNames;
		Parms.ParentCategory=ParentCategory;
		const_cast<UTriggerCategoryBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerCategoryBase_GetExportedMapNameByParentCategory),&Parms);
		OutMapNames=Parms.OutMapNames;
	}
	static FName NAME_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer = FName(TEXT("IsChildCategoryOfGameplayTagContainer"));
	bool UTriggerCategoryBase::IsChildCategoryOfGameplayTagContainer(FGameplayTagContainer const& ParentTagContainer) const
	{
		TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms Parms;
		Parms.ParentTagContainer=ParentTagContainer;
		const_cast<UTriggerCategoryBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory = FName(TEXT("IsChildCategoryOfTriggerCategory"));
	bool UTriggerCategoryBase::IsChildCategoryOfTriggerCategory(UTriggerCategoryBase* ParentCategory) const
	{
		TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms Parms;
		Parms.ParentCategory=ParentCategory;
		const_cast<UTriggerCategoryBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent = FName(TEXT("IsMathcedForCurrrentRuntimeContent"));
	bool UTriggerCategoryBase::IsMathcedForCurrrentRuntimeContent() const
	{
		TriggerCategoryBase_eventIsMathcedForCurrrentRuntimeContent_Parms Parms;
		const_cast<UTriggerCategoryBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerCategoryBase_OnInitializeCategory = FName(TEXT("OnInitializeCategory"));
	void UTriggerCategoryBase::OnInitializeCategory(UObject* InOwner)
	{
		TriggerCategoryBase_eventOnInitializeCategory_Parms Parms;
		Parms.InOwner=InOwner;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerCategoryBase_OnInitializeCategory),&Parms);
	}
	void UTriggerCategoryBase::StaticRegisterNativesUTriggerCategoryBase()
	{
		UClass* Class = UTriggerCategoryBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateMapNameFromCategroyTag", &UTriggerCategoryBase::execGenerateMapNameFromCategroyTag },
			{ "GetExportedMapName", &UTriggerCategoryBase::execGetExportedMapName },
			{ "GetExportedMapNameByParentCategory", &UTriggerCategoryBase::execGetExportedMapNameByParentCategory },
			{ "GetMapName", &UTriggerCategoryBase::execGetMapName },
			{ "GetOwner", &UTriggerCategoryBase::execGetOwner },
			{ "HaveValidDifficultyNode", &UTriggerCategoryBase::execHaveValidDifficultyNode },
			{ "HaveValidScenarioNode", &UTriggerCategoryBase::execHaveValidScenarioNode },
			{ "InitializeCategory", &UTriggerCategoryBase::execInitializeCategory },
			{ "IsChildCategoryOfGameplayTagContainer", &UTriggerCategoryBase::execIsChildCategoryOfGameplayTagContainer },
			{ "IsChildCategoryOfTriggerCategory", &UTriggerCategoryBase::execIsChildCategoryOfTriggerCategory },
			{ "IsMathcedForCurrrentRuntimeContent", &UTriggerCategoryBase::execIsMathcedForCurrrentRuntimeContent },
			{ "IsValidCategory", &UTriggerCategoryBase::execIsValidCategory },
			{ "MarkCategoryDirty", &UTriggerCategoryBase::execMarkCategoryDirty },
			{ "MarkDifficultyDirty", &UTriggerCategoryBase::execMarkDifficultyDirty },
			{ "MarkScenerioDirty", &UTriggerCategoryBase::execMarkScenerioDirty },
			{ "UpdateCategoryToCurrentMap", &UTriggerCategoryBase::execUpdateCategoryToCurrentMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics
	{
		struct TriggerCategoryBase_eventGenerateMapNameFromCategroyTag_Parms
		{
			TArray<FString> OutMapNames;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutMapNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMapNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::NewProp_OutMapNames_Inner = { "OutMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::NewProp_OutMapNames = { "OutMapNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGenerateMapNameFromCategroyTag_Parms, OutMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::NewProp_OutMapNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::NewProp_OutMapNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category|Editor" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "GenerateMapNameFromCategroyTag", nullptr, nullptr, sizeof(TriggerCategoryBase_eventGenerateMapNameFromCategroyTag_Parms), Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutMapNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMapNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::NewProp_OutMapNames_Inner = { "OutMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::NewProp_OutMapNames = { "OutMapNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGetExportedMapName_Parms, OutMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::NewProp_OutMapNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::NewProp_OutMapNames,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Get the map name which the owner of this category should be exported.\n\x09* If the MapNames is not specified then just use the default difficulty tag as the the exported map name\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Get the map name which the owner of this category should be exported.\n* If the MapNames is not specified then just use the default difficulty tag as the the exported map name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "GetExportedMapName", nullptr, nullptr, sizeof(TriggerCategoryBase_eventGetExportedMapName_Parms), Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics
	{
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OutMapNames_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutMapNames;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentCategory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_OutMapNames_Inner = { "OutMapNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_OutMapNames = { "OutMapNames", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGetExportedMapNameByParentCategory_Parms, OutMapNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_ParentCategory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_ParentCategory = { "ParentCategory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGetExportedMapNameByParentCategory_Parms, ParentCategory), Z_Construct_UClass_UTriggerCategoryBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_ParentCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_ParentCategory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_OutMapNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_OutMapNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::NewProp_ParentCategory,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Get the actual map names which correspond to the parent category.\n\x09* By default if other category contain category: (TriggerCategory.Easy.TestMap, TriggerCategory.Hard.TestMap), and the this category contain category:(TriggerCategory.Totrial, A.Easy, A.Hard.FormalMap)\n\x09* the out map name is just {Easy}\n\x09* \n\x09* @param OtherCategory The category used to define the final map name\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Get the actual map names which correspond to the parent category.\n* By default if other category contain category: (TriggerCategory.Easy.TestMap, TriggerCategory.Hard.TestMap), and the this category contain category:(TriggerCategory.Totrial, A.Easy, A.Hard.FormalMap)\n* the out map name is just {Easy}\n*\n* @param OtherCategory The category used to define the final map name" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "GetExportedMapNameByParentCategory", nullptr, nullptr, sizeof(TriggerCategoryBase_eventGetExportedMapNameByParentCategory_Parms), Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics
	{
		struct TriggerCategoryBase_eventGetMapName_Parms
		{
			FGameplayTag CategoryTag;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CategoryTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CategoryTag;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_CategoryTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_CategoryTag = { "CategoryTag", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGetMapName_Parms, CategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_CategoryTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_CategoryTag_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGetMapName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_CategoryTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Get the final map name for the target trigger category tag\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Get the final map name for the target trigger category tag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "GetMapName", nullptr, nullptr, sizeof(TriggerCategoryBase_eventGetMapName_Parms), Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_GetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_GetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics
	{
		struct TriggerCategoryBase_eventGetOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(TriggerCategoryBase_eventGetOwner_Parms), Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics
	{
		struct TriggerCategoryBase_eventHaveValidDifficultyNode_Parms
		{
			APlayerController* Player;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventHaveValidDifficultyNode_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventHaveValidDifficultyNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventHaveValidDifficultyNode_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Check weather this category have difficulty tags\n\x09* \n\x09* @param Player the player who want to check category\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Check weather this category have difficulty tags\n*\n* @param Player the player who want to check category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "HaveValidDifficultyNode", nullptr, nullptr, sizeof(TriggerCategoryBase_eventHaveValidDifficultyNode_Parms), Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics
	{
		struct TriggerCategoryBase_eventHaveValidScenarioNode_Parms
		{
			APlayerController* Player;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventHaveValidScenarioNode_Parms, Player), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventHaveValidScenarioNode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventHaveValidScenarioNode_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::NewProp_Player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "//Check weather this category have scenario tags\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "Check weather this category have scenario tags" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "HaveValidScenarioNode", nullptr, nullptr, sizeof(TriggerCategoryBase_eventHaveValidScenarioNode_Parms), Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics
	{
		struct TriggerCategoryBase_eventInitializeCategory_Parms
		{
			UObject* Owner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventInitializeCategory_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "//Initialize this category after it is created\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "Initialize this category after it is created" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "InitializeCategory", nullptr, nullptr, sizeof(TriggerCategoryBase_eventInitializeCategory_Parms), Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTagContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ParentTagContainer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ParentTagContainer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ParentTagContainer = { "ParentTagContainer", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms, ParentTagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ParentTagContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ParentTagContainer_MetaData)) };
	void Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ParentTagContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "IsChildCategoryOfGameplayTagContainer", nullptr, nullptr, sizeof(TriggerCategoryBase_eventIsChildCategoryOfGameplayTagContainer_Parms), Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentCategory;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ParentCategory_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ParentCategory = { "ParentCategory", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms, ParentCategory), Z_Construct_UClass_UTriggerCategoryBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ParentCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ParentCategory_MetaData)) };
	void Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ParentCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Check weather this category is the child of the parent category\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Check weather this category is the child of the parent category" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "IsChildCategoryOfTriggerCategory", nullptr, nullptr, sizeof(TriggerCategoryBase_eventIsChildCategoryOfTriggerCategory_Parms), Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventIsMathcedForCurrrentRuntimeContent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventIsMathcedForCurrrentRuntimeContent_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Check weather this category is matched for current trigger runtime content;\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Check weather this category is matched for current trigger runtime content;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "IsMathcedForCurrrentRuntimeContent", nullptr, nullptr, sizeof(TriggerCategoryBase_eventIsMathcedForCurrrentRuntimeContent_Parms), Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics
	{
		struct TriggerCategoryBase_eventIsValidCategory_Parms
		{
			bool CompleteCheck;
			bool ReturnValue;
		};
		static void NewProp_CompleteCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CompleteCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_CompleteCheck_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventIsValidCategory_Parms*)Obj)->CompleteCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_CompleteCheck = { "CompleteCheck", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventIsValidCategory_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_CompleteCheck_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerCategoryBase_eventIsValidCategory_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerCategoryBase_eventIsValidCategory_Parms), &Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_CompleteCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* Check weather this category is valid.\n\x09* the categories should not be empty.\n\x09* and the format should be {TriggerCategory.Difficulty.MapName.Scenario}\n\x09* This function will not check the runtime difficulty and scenario. it only check the format\n\x09* \n\x09* @param CompleteCheck Weather to check this category completely which will regard of the cashed data\n\x09* \n\x09*/" },
		{ "CPP_Default_CompleteCheck", "false" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* Check weather this category is valid.\n* the categories should not be empty.\n* and the format should be {TriggerCategory.Difficulty.MapName.Scenario}\n* This function will not check the runtime difficulty and scenario. it only check the format\n*\n* @param CompleteCheck Weather to check this category completely which will regard of the cashed data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "IsValidCategory", nullptr, nullptr, sizeof(TriggerCategoryBase_eventIsValidCategory_Parms), Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "MarkCategoryDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "MarkDifficultyDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "MarkScenerioDirty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerCategoryBase_eventOnInitializeCategory_Parms, InOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::NewProp_InOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "OnInitializeCategory", nullptr, nullptr, sizeof(TriggerCategoryBase_eventOnInitializeCategory_Parms), Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n\x09* This function will remove all tags which is not match for the owned level.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* This function will remove all tags which is not match for the owned level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerCategoryBase, nullptr, "UpdateCategoryToCurrentMap", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerCategoryBase_NoRegister()
	{
		return UTriggerCategoryBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerCategoryBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Categories;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerCategoryBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerCategoryBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerCategoryBase_GenerateMapNameFromCategroyTag, "GenerateMapNameFromCategroyTag" }, // 3008425769
		{ &Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapName, "GetExportedMapName" }, // 2546346209
		{ &Z_Construct_UFunction_UTriggerCategoryBase_GetExportedMapNameByParentCategory, "GetExportedMapNameByParentCategory" }, // 1527476479
		{ &Z_Construct_UFunction_UTriggerCategoryBase_GetMapName, "GetMapName" }, // 4234565583
		{ &Z_Construct_UFunction_UTriggerCategoryBase_GetOwner, "GetOwner" }, // 3402848442
		{ &Z_Construct_UFunction_UTriggerCategoryBase_HaveValidDifficultyNode, "HaveValidDifficultyNode" }, // 2839869916
		{ &Z_Construct_UFunction_UTriggerCategoryBase_HaveValidScenarioNode, "HaveValidScenarioNode" }, // 2841638463
		{ &Z_Construct_UFunction_UTriggerCategoryBase_InitializeCategory, "InitializeCategory" }, // 2882649404
		{ &Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfGameplayTagContainer, "IsChildCategoryOfGameplayTagContainer" }, // 2606316761
		{ &Z_Construct_UFunction_UTriggerCategoryBase_IsChildCategoryOfTriggerCategory, "IsChildCategoryOfTriggerCategory" }, // 3601475692
		{ &Z_Construct_UFunction_UTriggerCategoryBase_IsMathcedForCurrrentRuntimeContent, "IsMathcedForCurrrentRuntimeContent" }, // 1344358455
		{ &Z_Construct_UFunction_UTriggerCategoryBase_IsValidCategory, "IsValidCategory" }, // 437683500
		{ &Z_Construct_UFunction_UTriggerCategoryBase_MarkCategoryDirty, "MarkCategoryDirty" }, // 2766896423
		{ &Z_Construct_UFunction_UTriggerCategoryBase_MarkDifficultyDirty, "MarkDifficultyDirty" }, // 2717780736
		{ &Z_Construct_UFunction_UTriggerCategoryBase_MarkScenerioDirty, "MarkScenerioDirty" }, // 1245024467
		{ &Z_Construct_UFunction_UTriggerCategoryBase_OnInitializeCategory, "OnInitializeCategory" }, // 73554519
		{ &Z_Construct_UFunction_UTriggerCategoryBase_UpdateCategoryToCurrentMap, "UpdateCategoryToCurrentMap" }, // 1346300782
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerCategoryBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Category" },
		{ "IncludePath", "TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerCategoryBase_Statics::NewProp_Categories_MetaData[] = {
		{ "Category", "Category" },
		{ "Comment", "/*\n\x09* The categories which should be confined before runtime\n\x09* This categories should have fixed format:\n\x09* The first node should always be TriggerCategory, this should never miss. and it can be confined in the UTriggerConfig::RootTag\n\x09* The second node should be the Difficulty, this is optional, if there is no difficulty tag means it is used for all difficulty\n\x09* The third node should be the MapName, this is optional, and if it is specified, it should be same as the name of president level\n\x09* The fourth node should be the Scenario, this is optional, if it is empty then it will be used for all difficulty\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* The categories which should be confined before runtime\n* This categories should have fixed format:\n* The first node should always be TriggerCategory, this should never miss. and it can be confined in the UTriggerConfig::RootTag\n* The second node should be the Difficulty, this is optional, if there is no difficulty tag means it is used for all difficulty\n* The third node should be the MapName, this is optional, and if it is specified, it should be same as the name of president level\n* The fourth node should be the Scenario, this is optional, if it is empty then it will be used for all difficulty" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerCategoryBase_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerCategoryBase, Categories), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_UTriggerCategoryBase_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerCategoryBase_Statics::NewProp_Categories_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerCategoryBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerCategoryBase_Statics::NewProp_Categories,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerCategoryBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerCategoryBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerCategoryBase_Statics::ClassParams = {
		&UTriggerCategoryBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerCategoryBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerCategoryBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerCategoryBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerCategoryBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerCategoryBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerCategoryBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerCategoryBase, 537537650);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerCategoryBase>()
	{
		return UTriggerCategoryBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerCategoryBase(Z_Construct_UClass_UTriggerCategoryBase, &UTriggerCategoryBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerCategoryBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerCategoryBase);
	void UTaskComponentCategory::StaticRegisterNativesUTaskComponentCategory()
	{
	}
	UClass* Z_Construct_UClass_UTaskComponentCategory_NoRegister()
	{
		return UTaskComponentCategory::StaticClass();
	}
	struct Z_Construct_UClass_UTaskComponentCategory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedExportToNewMap_MetaData[];
#endif
		static void NewProp_NeedExportToNewMap_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedExportToNewMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MapNames;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTaskComponentCategory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerCategoryBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskComponentCategory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Category" },
		{ "Comment", "/*\n* The category which is used for task component to distinguish \n*/" },
		{ "IncludePath", "TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* The category which is used for task component to distinguish" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap_MetaData[] = {
		{ "Category", "Editor" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
	};
#endif
	void Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap_SetBit(void* Obj)
	{
		((UTaskComponentCategory*)Obj)->NeedExportToNewMap = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap = { "NeedExportToNewMap", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTaskComponentCategory), &Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames_Inner = { "MapNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames_MetaData[] = {
		{ "Category", "Editor" },
		{ "Comment", "/*\n\x09* The specified map name of the owner to be exported.\n\x09* If this value is empty then I will generated the default map name form the category\n\x09*/" },
		{ "EditCondition", "NeedExportToNewMap" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/Category/TriggerCategory.h" },
		{ "ToolTip", "* The specified map name of the owner to be exported.\n* If this value is empty then I will generated the default map name form the category" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames = { "MapNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTaskComponentCategory, MapNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTaskComponentCategory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_NeedExportToNewMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTaskComponentCategory_Statics::NewProp_MapNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTaskComponentCategory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTaskComponentCategory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTaskComponentCategory_Statics::ClassParams = {
		&UTaskComponentCategory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTaskComponentCategory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponentCategory_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTaskComponentCategory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTaskComponentCategory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTaskComponentCategory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTaskComponentCategory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTaskComponentCategory, 387643394);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTaskComponentCategory>()
	{
		return UTaskComponentCategory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTaskComponentCategory(Z_Construct_UClass_UTaskComponentCategory, &UTaskComponentCategory::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTaskComponentCategory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTaskComponentCategory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
