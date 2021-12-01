// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGameConfigBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameConfigBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameConfigBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameStrategyBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameTArrayData_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameTArrayData();
// End Cross Module References
	DEFINE_FUNCTION(USaveGameConfigBase::execIsVaildConfigData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVaildConfigData();
		P_NATIVE_END;
	}
	void USaveGameConfigBase::StaticRegisterNativesUSaveGameConfigBase()
	{
		UClass* Class = USaveGameConfigBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsVaildConfigData", &USaveGameConfigBase::execIsVaildConfigData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics
	{
		struct SaveGameConfigBase_eventIsVaildConfigData_Parms
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
	void Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveGameConfigBase_eventIsVaildConfigData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveGameConfigBase_eventIsVaildConfigData_Parms), &Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* Check weather this config data is valid\n\x09* #return true means is data can be used or it can not be used\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "ToolTip", "* Check weather this config data is valid\n* #return true means is data can be used or it can not be used" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveGameConfigBase, nullptr, "IsVaildConfigData", nullptr, nullptr, sizeof(SaveGameConfigBase_eventIsVaildConfigData_Parms), Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveGameConfigBase_NoRegister()
	{
		return USaveGameConfigBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameConfigBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SystemInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SystemInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StrategyClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StrategyClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLoading_MetaData[];
#endif
		static void NewProp_IsLoading_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLoading;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameConfigBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveGameConfigBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveGameConfigBase_IsVaildConfigData, "IsVaildConfigData" }, // 2345451701
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameConfigBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_SystemInfo_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "//The trigger save game system Head info data\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "ToolTip", "The trigger save game system Head info data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_SystemInfo = { "SystemInfo", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameConfigBase, SystemInfo), Z_Construct_UClass_USaveGameSystemInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_SystemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_SystemInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_StrategyClass_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* The strategy class to process the data, If it is not specified for loading then I will find the appropriate strategy class by PreporcessData of all defined strategy class\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "ToolTip", "* The strategy class to process the data, If it is not specified for loading then I will find the appropriate strategy class by PreporcessData of all defined strategy class" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_StrategyClass = { "StrategyClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameConfigBase, StrategyClass), Z_Construct_UClass_USaveGameStrategyBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_StrategyClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_StrategyClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "//Flag to check weather this config is used for load save data\n" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "ToolTip", "Flag to check weather this config is used for load save data" },
	};
#endif
	void Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading_SetBit(void* Obj)
	{
		((USaveGameConfigBase*)Obj)->IsLoading = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading = { "IsLoading", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USaveGameConfigBase), &Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading_SetBit, METADATA_PARAMS(Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameConfigBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_SystemInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_StrategyClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameConfigBase_Statics::NewProp_IsLoading,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameConfigBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameConfigBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameConfigBase_Statics::ClassParams = {
		&USaveGameConfigBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveGameConfigBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameConfigBase_Statics::PropPointers),
		0,
		0x049000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameConfigBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameConfigBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameConfigBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameConfigBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameConfigBase, 301901120);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USaveGameConfigBase>()
	{
		return USaveGameConfigBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameConfigBase(Z_Construct_UClass_USaveGameConfigBase, &USaveGameConfigBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USaveGameConfigBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameConfigBase);
	void USaveGameTArrayData::StaticRegisterNativesUSaveGameTArrayData()
	{
	}
	UClass* Z_Construct_UClass_USaveGameTArrayData_NoRegister()
	{
		return USaveGameTArrayData::StaticClass();
	}
	struct Z_Construct_UClass_USaveGameTArrayData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveGameTArrayData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGameConfigBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameTArrayData_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* This data only can be read by BP which hold the save game data.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/SaveGameConfig/SaveGameConfigBase.h" },
		{ "ToolTip", "* This data only can be read by BP which hold the save game data." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USaveGameTArrayData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveGameTArrayData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveGameTArrayData_Statics::NewProp_Data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveGameTArrayData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGameTArrayData>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveGameTArrayData_Statics::ClassParams = {
		&USaveGameTArrayData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USaveGameTArrayData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTArrayData_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USaveGameTArrayData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveGameTArrayData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveGameTArrayData()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveGameTArrayData_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveGameTArrayData, 1771720422);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<USaveGameTArrayData>()
	{
		return USaveGameTArrayData::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveGameTArrayData(Z_Construct_UClass_USaveGameTArrayData, &USaveGameTArrayData::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("USaveGameTArrayData"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGameTArrayData);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
