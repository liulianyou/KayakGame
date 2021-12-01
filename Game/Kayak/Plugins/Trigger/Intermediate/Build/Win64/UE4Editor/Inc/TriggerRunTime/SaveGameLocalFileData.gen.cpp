// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameLocalFileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameLocalFileData() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameLocalFileData_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameLocalFileData();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameTArrayData();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
// End Cross Module References
	void USaveGameLocalFileData::StaticRegisterNativesUSaveGameLocalFileData()
	{
	}
	UClass* Z_Construct_UClass_USaveGameLocalFileData_NoRegister()
	{
		return USaveGameLocalFileData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameLocalFileData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UserIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SlotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameLocalFileData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameTArrayData,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameLocalFileData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameLocalFileData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameLocalFileData.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_UserIndex_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "//The index of current save data should be saved\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameLocalFileData.h" },
		{ "ToolTip", "The index of current save data should be saved" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_UserIndex = { "UserIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameLocalFileData, UserIndex), METADATA_PARAMS(Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_UserIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_UserIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_SlotName_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "//The name of current save data file at disk\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameLocalFileData.h" },
		{ "ToolTip", "The name of current save data file at disk" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameLocalFileData, SlotName), METADATA_PARAMS(Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_SlotName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_SlotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameLocalFileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_UserIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameLocalFileData_Statics::NewProp_SlotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameLocalFileData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameLocalFileData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameLocalFileData_Statics::ClassParams = {
		&USaveGameLocalFileData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameLocalFileData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameLocalFileData_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameLocalFileData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameLocalFileData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameLocalFileData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameLocalFileData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameLocalFileData, 2262414362);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USaveGameLocalFileData>()
	{
		return USaveGameLocalFileData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameLocalFileData(Z_Construct_UClass_USaveGameLocalFileData, &USaveGameLocalFileData::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USaveGameLocalFileData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameLocalFileData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
