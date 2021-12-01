// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSaveGameHeadInfoBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameSystemInfoBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execIsEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsEmpty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execEmpty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Empty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execGetCustomVersions)
	{
		P_GET_TARRAY_REF(FGuid,Z_Param_Out_Keys);
		P_GET_TARRAY_REF(int32,Z_Param_Out_Versions);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ReferenceCounts);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCustomVersions(Z_Param_Out_Keys,Z_Param_Out_Versions,Z_Param_Out_ReferenceCounts);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execSetCustomVersions)
	{
		P_GET_STRUCT(FGuid,Z_Param_CustomKey);
		P_GET_PROPERTY(FIntProperty,Z_Param_Version);
		P_GET_PROPERTY(FNameProperty,Z_Param_FriendlyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomVersions(Z_Param_CustomKey,Z_Param_Version,Z_Param_FriendlyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execGetCustomVersionFormat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomVersionFormat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execSetCustomVersionFormat)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InCustomVersionFormat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomVersionFormat(Z_Param_InCustomVersionFormat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execGetSavedEngineVersion)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InMajor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InMinor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InPatch);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_InChangelist);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InBranch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSavedEngineVersion(Z_Param_Out_InMajor,Z_Param_Out_InMinor,Z_Param_Out_InPatch,Z_Param_Out_InChangelist,Z_Param_Out_InBranch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execSetSavedEngineVersion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InMajor);
		P_GET_PROPERTY(FIntProperty,Z_Param_InMinor);
		P_GET_PROPERTY(FIntProperty,Z_Param_InPatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_InChangelist);
		P_GET_PROPERTY(FStrProperty,Z_Param_InBranch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSavedEngineVersion(Z_Param_InMajor,Z_Param_InMinor,Z_Param_InPatch,Z_Param_InChangelist,Z_Param_InBranch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execGetPackageFileUE4Version)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPackageFileUE4Version();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execSetPackageFileUE4Version)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InPackageFileUE4Version);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPackageFileUE4Version(Z_Param_InPackageFileUE4Version);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execGetSaveGameVersion)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSaveGameVersion();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execSetSaveGameVersion)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSaveGameVersion);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSaveGameVersion(Z_Param_InSaveGameVersion);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execGetFileTypeTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFileTypeTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveGameSystemInfoBase::execSetFileTypeTag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InFileTypeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFileTypeTag(Z_Param_InFileTypeTag);
		P_NATIVE_END;
	}
	void USaveGameSystemInfoBase::StaticRegisterNativesUSaveGameSystemInfoBase()
	{
		UClass* Class = USaveGameSystemInfoBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Empty", &USaveGameSystemInfoBase::execEmpty },
			{ "GetCustomVersionFormat", &USaveGameSystemInfoBase::execGetCustomVersionFormat },
			{ "GetCustomVersions", &USaveGameSystemInfoBase::execGetCustomVersions },
			{ "GetFileTypeTag", &USaveGameSystemInfoBase::execGetFileTypeTag },
			{ "GetPackageFileUE4Version", &USaveGameSystemInfoBase::execGetPackageFileUE4Version },
			{ "GetSavedEngineVersion", &USaveGameSystemInfoBase::execGetSavedEngineVersion },
			{ "GetSaveGameVersion", &USaveGameSystemInfoBase::execGetSaveGameVersion },
			{ "IsEmpty", &USaveGameSystemInfoBase::execIsEmpty },
			{ "SetCustomVersionFormat", &USaveGameSystemInfoBase::execSetCustomVersionFormat },
			{ "SetCustomVersions", &USaveGameSystemInfoBase::execSetCustomVersions },
			{ "SetFileTypeTag", &USaveGameSystemInfoBase::execSetFileTypeTag },
			{ "SetPackageFileUE4Version", &USaveGameSystemInfoBase::execSetPackageFileUE4Version },
			{ "SetSavedEngineVersion", &USaveGameSystemInfoBase::execSetSavedEngineVersion },
			{ "SetSaveGameVersion", &USaveGameSystemInfoBase::execSetSaveGameVersion },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_Empty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_Empty_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_Empty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "Empty", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_Empty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_Empty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_Empty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_Empty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics
	{
		struct SaveGameSystemInfoBase_eventGetCustomVersionFormat_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetCustomVersionFormat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "GetCustomVersionFormat", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventGetCustomVersionFormat_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics
	{
		struct SaveGameSystemInfoBase_eventGetCustomVersions_Parms
		{
			TArray<FGuid> Keys;
			TArray<int32> Versions;
			TArray<int32> ReferenceCounts;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Versions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Versions;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReferenceCounts_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReferenceCounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetCustomVersions_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Versions_Inner = { "Versions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Versions = { "Versions", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetCustomVersions_Parms, Versions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_ReferenceCounts_Inner = { "ReferenceCounts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_ReferenceCounts = { "ReferenceCounts", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetCustomVersions_Parms, ReferenceCounts), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Versions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_Versions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_ReferenceCounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::NewProp_ReferenceCounts,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "GetCustomVersions", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventGetCustomVersions_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics
	{
		struct SaveGameSystemInfoBase_eventGetFileTypeTag_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetFileTypeTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "GetFileTypeTag", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventGetFileTypeTag_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics
	{
		struct SaveGameSystemInfoBase_eventGetPackageFileUE4Version_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetPackageFileUE4Version_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "GetPackageFileUE4Version", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventGetPackageFileUE4Version_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics
	{
		struct SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms
		{
			int32 InMajor;
			int32 InMinor;
			int32 InPatch;
			int32 InChangelist;
			FString InBranch;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InMajor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InMinor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InPatch;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InChangelist;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBranch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InMajor = { "InMajor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms, InMajor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InMinor = { "InMinor", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms, InMinor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms, InPatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InChangelist = { "InChangelist", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms, InChangelist), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InBranch = { "InBranch", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms, InBranch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InMajor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InMinor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InPatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InChangelist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::NewProp_InBranch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "GetSavedEngineVersion", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventGetSavedEngineVersion_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics
	{
		struct SaveGameSystemInfoBase_eventGetSaveGameVersion_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventGetSaveGameVersion_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "GetSaveGameVersion", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventGetSaveGameVersion_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics
	{
		struct SaveGameSystemInfoBase_eventIsEmpty_Parms
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
	void Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameSystemInfoBase_eventIsEmpty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameSystemInfoBase_eventIsEmpty_Parms), &Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "IsEmpty", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventIsEmpty_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics
	{
		struct SaveGameSystemInfoBase_eventSetCustomVersionFormat_Parms
		{
			int32 InCustomVersionFormat;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InCustomVersionFormat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::NewProp_InCustomVersionFormat = { "InCustomVersionFormat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetCustomVersionFormat_Parms, InCustomVersionFormat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::NewProp_InCustomVersionFormat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "SetCustomVersionFormat", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventSetCustomVersionFormat_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics
	{
		struct SaveGameSystemInfoBase_eventSetCustomVersions_Parms
		{
			FGuid CustomKey;
			int32 Version;
			FName FriendlyName;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CustomKey;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Version;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FriendlyName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::NewProp_CustomKey = { "CustomKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetCustomVersions_Parms, CustomKey), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetCustomVersions_Parms, Version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetCustomVersions_Parms, FriendlyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::NewProp_CustomKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::NewProp_Version,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::NewProp_FriendlyName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "SetCustomVersions", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventSetCustomVersions_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics
	{
		struct SaveGameSystemInfoBase_eventSetFileTypeTag_Parms
		{
			int32 InFileTypeTag;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InFileTypeTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::NewProp_InFileTypeTag = { "InFileTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetFileTypeTag_Parms, InFileTypeTag), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::NewProp_InFileTypeTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "SetFileTypeTag", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventSetFileTypeTag_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics
	{
		struct SaveGameSystemInfoBase_eventSetPackageFileUE4Version_Parms
		{
			int32 InPackageFileUE4Version;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InPackageFileUE4Version;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::NewProp_InPackageFileUE4Version = { "InPackageFileUE4Version", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetPackageFileUE4Version_Parms, InPackageFileUE4Version), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::NewProp_InPackageFileUE4Version,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "SetPackageFileUE4Version", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventSetPackageFileUE4Version_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics
	{
		struct SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms
		{
			int32 InMajor;
			int32 InMinor;
			int32 InPatch;
			int32 InChangelist;
			FString InBranch;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InMajor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InMinor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InPatch;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InChangelist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InBranch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InBranch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InMajor = { "InMajor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms, InMajor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InMinor = { "InMinor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms, InMinor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InPatch = { "InPatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms, InPatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InChangelist = { "InChangelist", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms, InChangelist), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InBranch_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InBranch = { "InBranch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms, InBranch), METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InBranch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InBranch_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InMajor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InMinor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InPatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InChangelist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::NewProp_InBranch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "SetSavedEngineVersion", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventSetSavedEngineVersion_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics
	{
		struct SaveGameSystemInfoBase_eventSetSaveGameVersion_Parms
		{
			int32 InSaveGameVersion;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InSaveGameVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::NewProp_InSaveGameVersion = { "InSaveGameVersion", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveGameSystemInfoBase_eventSetSaveGameVersion_Parms, InSaveGameVersion), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::NewProp_InSaveGameVersion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameSystemInfoBase, nullptr, "SetSaveGameVersion", nullptr, nullptr, sizeof(SaveGameSystemInfoBase_eventSetSaveGameVersion_Parms), Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister()
	{
		return USaveGameSystemInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameSystemInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameSystemInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameSystemInfoBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_Empty, "Empty" }, // 693222729
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersionFormat, "GetCustomVersionFormat" }, // 2913422194
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_GetCustomVersions, "GetCustomVersions" }, // 3310595171
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_GetFileTypeTag, "GetFileTypeTag" }, // 3487757826
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_GetPackageFileUE4Version, "GetPackageFileUE4Version" }, // 1631090104
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_GetSavedEngineVersion, "GetSavedEngineVersion" }, // 3937473357
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_GetSaveGameVersion, "GetSaveGameVersion" }, // 417955459
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_IsEmpty, "IsEmpty" }, // 1069452413
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersionFormat, "SetCustomVersionFormat" }, // 146326017
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_SetCustomVersions, "SetCustomVersions" }, // 840379262
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_SetFileTypeTag, "SetFileTypeTag" }, // 2703149743
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_SetPackageFileUE4Version, "SetPackageFileUE4Version" }, // 2757998062
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_SetSavedEngineVersion, "SetSavedEngineVersion" }, // 3721189
		{ &Z_Construct_UFunction_USaveGameSystemInfoBase_SetSaveGameVersion, "SetSaveGameVersion" }, // 3685279635
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameSystemInfoBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n* Customize system information which can be confined outside.\n*/" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h" },
		{ "ToolTip", "* Customize system information which can be confined outside." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameSystemInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameSystemInfoBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameSystemInfoBase_Statics::ClassParams = {
		&USaveGameSystemInfoBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameSystemInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameSystemInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameSystemInfoBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameSystemInfoBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameSystemInfoBase, 3874638924);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USaveGameSystemInfoBase>()
	{
		return USaveGameSystemInfoBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameSystemInfoBase(Z_Construct_UClass_USaveGameSystemInfoBase, &USaveGameSystemInfoBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USaveGameSystemInfoBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameSystemInfoBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
