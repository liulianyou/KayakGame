// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameStrategyBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameConfigBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameStrategyBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameStrategyBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventOnSaveGameDelegate_Parms
		{
			USaveGameConfigBase* ConfigData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventOnSaveGameDelegate_Parms, ConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::NewProp_ConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "OnSaveGameDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventOnSaveGameDelegate_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(USaveGameStrategyBase::execPostSaveGameDeSerialalize)
	{
		P_GET_OBJECT(USaveGameConfigBase,Z_Param_SaveConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PostSaveGameDeSerialalize(Z_Param_SaveConfigData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameStrategyBase::execSaveGameDeSerialize)
	{
		P_GET_OBJECT(USaveGameConfigBase,Z_Param_SaveConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGameDeSerialize(Z_Param_SaveConfigData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameStrategyBase::execPreSaveGameDeSerialize)
	{
		P_GET_OBJECT(USaveGameConfigBase,Z_Param_SaveConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreSaveGameDeSerialize(Z_Param_SaveConfigData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameStrategyBase::execSaveGameSerialize)
	{
		P_GET_OBJECT(USaveGameConfigBase,Z_Param_SaveConfigData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SaveGameSerialize(Z_Param_SaveConfigData);
		P_NATIVE_END;
	}
	static FName NAME_USaveGameStrategyBase_OnLoadGame = FName(TEXT("OnLoadGame"));
	void USaveGameStrategyBase::OnLoadGame(USaveGameConfigBase* SaveConfigData)
	{
		SaveGameStrategyBase_eventOnLoadGame_Parms Parms;
		Parms.SaveConfigData=SaveConfigData;
		ProcessEvent(FindFunctionChecked(NAME_USaveGameStrategyBase_OnLoadGame),&Parms);
	}
	static FName NAME_USaveGameStrategyBase_OnPostLoadGame = FName(TEXT("OnPostLoadGame"));
	void USaveGameStrategyBase::OnPostLoadGame(USaveGameConfigBase* SaveConfigData)
	{
		SaveGameStrategyBase_eventOnPostLoadGame_Parms Parms;
		Parms.SaveConfigData=SaveConfigData;
		ProcessEvent(FindFunctionChecked(NAME_USaveGameStrategyBase_OnPostLoadGame),&Parms);
	}
	static FName NAME_USaveGameStrategyBase_OnPreLoadGame = FName(TEXT("OnPreLoadGame"));
	void USaveGameStrategyBase::OnPreLoadGame(USaveGameConfigBase* SaveConfigData)
	{
		SaveGameStrategyBase_eventOnPreLoadGame_Parms Parms;
		Parms.SaveConfigData=SaveConfigData;
		ProcessEvent(FindFunctionChecked(NAME_USaveGameStrategyBase_OnPreLoadGame),&Parms);
	}
	static FName NAME_USaveGameStrategyBase_OnSaveGame = FName(TEXT("OnSaveGame"));
	void USaveGameStrategyBase::OnSaveGame(USaveGameConfigBase* SaveConfigData)
	{
		SaveGameStrategyBase_eventOnSaveGame_Parms Parms;
		Parms.SaveConfigData=SaveConfigData;
		ProcessEvent(FindFunctionChecked(NAME_USaveGameStrategyBase_OnSaveGame),&Parms);
	}
	void USaveGameStrategyBase::StaticRegisterNativesUSaveGameStrategyBase()
	{
		UClass* Class = USaveGameStrategyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostSaveGameDeSerialalize", &USaveGameStrategyBase::execPostSaveGameDeSerialalize },
			{ "PreSaveGameDeSerialize", &USaveGameStrategyBase::execPreSaveGameDeSerialize },
			{ "SaveGameDeSerialize", &USaveGameStrategyBase::execSaveGameDeSerialize },
			{ "SaveGameSerialize", &USaveGameStrategyBase::execSaveGameSerialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventOnLoadGame_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Called when the save game system is loading game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Called when the save game system is loading game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "OnLoadGame", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventOnLoadGame_Parms), Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventOnPostLoadGame_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Called when the save game system is loading game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Called when the save game system is loading game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "OnPostLoadGame", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventOnPostLoadGame_Parms), Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventOnPreLoadGame_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Called when the save game system want to load game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Called when the save game system want to load game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "OnPreLoadGame", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventOnPreLoadGame_Parms), Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventOnSaveGame_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Called when the save game system want to save game\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Called when the save game system want to save game" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "OnSaveGame", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventOnSaveGame_Parms), Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics
	{
		struct SaveGameStrategyBase_eventPostSaveGameDeSerialalize_Parms
		{
			USaveGameConfigBase* SaveConfigData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventPostSaveGameDeSerialalize_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Do some post procession after deserialize;\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Do some post procession after deserialize;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "PostSaveGameDeSerialalize", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventPostSaveGameDeSerialalize_Parms), Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics
	{
		struct SaveGameStrategyBase_eventPreSaveGameDeSerialize_Parms
		{
			USaveGameConfigBase* SaveConfigData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventPreSaveGameDeSerialize_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Do some preparation for current deserialize\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Do some preparation for current deserialize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "PreSaveGameDeSerialize", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventPreSaveGameDeSerialize_Parms), Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics
	{
		struct SaveGameStrategyBase_eventSaveGameDeSerialize_Parms
		{
			USaveGameConfigBase* SaveConfigData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventSaveGameDeSerialize_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Deserialize game object to restore it.\n\x09* This should be the main function to do actual deserialize action\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Deserialize game object to restore it.\n* This should be the main function to do actual deserialize action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "SaveGameDeSerialize", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventSaveGameDeSerialize_Parms), Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics
	{
		struct SaveGameStrategyBase_eventSaveGameSerialize_Parms
		{
			USaveGameConfigBase* SaveConfigData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SaveConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::NewProp_SaveConfigData = { "SaveConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameStrategyBase_eventSaveGameSerialize_Parms, SaveConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::NewProp_SaveConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "Comment", "/*\n\x09* Serialize game object\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* Serialize game object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameStrategyBase, nullptr, "SaveGameSerialize", nullptr, nullptr, sizeof(SaveGameStrategyBase_eventSaveGameSerialize_Parms), Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveGameStrategyBase_NoRegister()
	{
		return USaveGameStrategyBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameStrategyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSaveGameDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSaveGameDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPreLoadGameDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPreLoadGameDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLoadGameDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLoadGameDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPostLoadGameDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPostLoadGameDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameStrategyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameStrategyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameStrategyBase_OnLoadGame, "OnLoadGame" }, // 2065624766
		{ &Z_Construct_UFunction_USaveGameStrategyBase_OnPostLoadGame, "OnPostLoadGame" }, // 3596663112
		{ &Z_Construct_UFunction_USaveGameStrategyBase_OnPreLoadGame, "OnPreLoadGame" }, // 45065243
		{ &Z_Construct_UFunction_USaveGameStrategyBase_OnSaveGame, "OnSaveGame" }, // 118663565
		{ &Z_Construct_UFunction_USaveGameStrategyBase_PostSaveGameDeSerialalize, "PostSaveGameDeSerialalize" }, // 2246028146
		{ &Z_Construct_UFunction_USaveGameStrategyBase_PreSaveGameDeSerialize, "PreSaveGameDeSerialize" }, // 540613737
		{ &Z_Construct_UFunction_USaveGameStrategyBase_SaveGameDeSerialize, "SaveGameDeSerialize" }, // 2828430143
		{ &Z_Construct_UFunction_USaveGameStrategyBase_SaveGameSerialize, "SaveGameSerialize" }, // 3169714086
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStrategyBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|SaveSystem" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnSaveGameDelegate_MetaData[] = {
		{ "Comment", "/*\n\x09* These event is executed before BP function\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
		{ "ToolTip", "* These event is executed before BP function" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnSaveGameDelegate = { "OnSaveGameDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStrategyBase, OnSaveGameDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnSaveGameDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnSaveGameDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPreLoadGameDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPreLoadGameDelegate = { "OnPreLoadGameDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStrategyBase, OnPreLoadGameDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPreLoadGameDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPreLoadGameDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnLoadGameDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnLoadGameDelegate = { "OnLoadGameDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStrategyBase, OnLoadGameDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnLoadGameDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnLoadGameDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPostLoadGameDelegate_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameStrategy/SaveGameStrategyBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPostLoadGameDelegate = { "OnPostLoadGameDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameStrategyBase, OnPostLoadGameDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_OnSaveGameDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPostLoadGameDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPostLoadGameDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameStrategyBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnSaveGameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPreLoadGameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnLoadGameDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameStrategyBase_Statics::NewProp_OnPostLoadGameDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameStrategyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameStrategyBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameStrategyBase_Statics::ClassParams = {
		&USaveGameStrategyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveGameStrategyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStrategyBase_Statics::PropPointers),
		0,
		0x049000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameStrategyBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameStrategyBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameStrategyBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameStrategyBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameStrategyBase, 3443586366);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USaveGameStrategyBase>()
	{
		return USaveGameStrategyBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameStrategyBase(Z_Construct_UClass_USaveGameStrategyBase, &USaveGameStrategyBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USaveGameStrategyBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameStrategyBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
