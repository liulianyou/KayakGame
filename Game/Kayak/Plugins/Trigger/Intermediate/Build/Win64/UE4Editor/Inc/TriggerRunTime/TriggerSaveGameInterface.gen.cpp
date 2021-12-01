// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ToolFactory/SaveGame/TriggerSaveGameInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerSaveGameInterface() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerSaveGameInterface_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerSaveGameInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_USaveGameConfigBase_NoRegister();
// End Cross Module References
	void ITriggerSaveGameInterface::OnLoadGameDataComplete(USaveGameConfigBase* ConfigData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnLoadGameDataComplete instead.");
	}
	void ITriggerSaveGameInterface::OnStartToLoadGameData(USaveGameConfigBase* ConfigData)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStartToLoadGameData instead.");
	}
	void UTriggerSaveGameInterface::StaticRegisterNativesUTriggerSaveGameInterface()
	{
	}
	struct Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameInterface_eventOnLoadGameDataComplete_Parms, ConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::NewProp_ConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* This function will be invoked when the loading data have finished.\n\x09* All information value in the target object have been serialized\n\x09*\n\x09* @param ConfigData the config data which will hold the original save data information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameInterface.h" },
		{ "ToolTip", "* This function will be invoked when the loading data have finished.\n* All information value in the target object have been serialized\n*\n* @param ConfigData the config data which will hold the original save data information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameInterface, nullptr, "OnLoadGameDataComplete", nullptr, nullptr, sizeof(TriggerSaveGameInterface_eventOnLoadGameDataComplete_Parms), Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ConfigData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::NewProp_ConfigData = { "ConfigData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerSaveGameInterface_eventOnStartToLoadGameData_Parms, ConfigData), Z_Construct_UClass_USaveGameConfigBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::NewProp_ConfigData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SaveGame" },
		{ "Comment", "/*\n\x09* This function will be invoked when this system will serialize the this object.\n\x09* At this moment the value which have SaveGame Flag have not been assigned by the save data.\n\x09*\n\x09* @param ConfigData the config data which will hold the original save data information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameInterface.h" },
		{ "ToolTip", "* This function will be invoked when this system will serialize the this object.\n* At this moment the value which have SaveGame Flag have not been assigned by the save data.\n*\n* @param ConfigData the config data which will hold the original save data information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerSaveGameInterface, nullptr, "OnStartToLoadGameData", nullptr, nullptr, sizeof(TriggerSaveGameInterface_eventOnStartToLoadGameData_Parms), Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerSaveGameInterface_NoRegister()
	{
		return UTriggerSaveGameInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerSaveGameInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerSaveGameInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerSaveGameInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerSaveGameInterface_OnLoadGameDataComplete, "OnLoadGameDataComplete" }, // 2568362821
		{ &Z_Construct_UFunction_UTriggerSaveGameInterface_OnStartToLoadGameData, "OnStartToLoadGameData" }, // 2775859646
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerSaveGameInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/ToolFactory/SaveGame/TriggerSaveGameInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerSaveGameInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITriggerSaveGameInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerSaveGameInterface_Statics::ClassParams = {
		&UTriggerSaveGameInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerSaveGameInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerSaveGameInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerSaveGameInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerSaveGameInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerSaveGameInterface, 3185325151);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerSaveGameInterface>()
	{
		return UTriggerSaveGameInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerSaveGameInterface(Z_Construct_UClass_UTriggerSaveGameInterface, &UTriggerSaveGameInterface::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerSaveGameInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerSaveGameInterface);
	static FName NAME_UTriggerSaveGameInterface_OnLoadGameDataComplete = FName(TEXT("OnLoadGameDataComplete"));
	void ITriggerSaveGameInterface::Execute_OnLoadGameDataComplete(UObject* O, USaveGameConfigBase* ConfigData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerSaveGameInterface::StaticClass()));
		TriggerSaveGameInterface_eventOnLoadGameDataComplete_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerSaveGameInterface_OnLoadGameDataComplete);
		if (Func)
		{
			Parms.ConfigData=ConfigData;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerSaveGameInterface_OnStartToLoadGameData = FName(TEXT("OnStartToLoadGameData"));
	void ITriggerSaveGameInterface::Execute_OnStartToLoadGameData(UObject* O, USaveGameConfigBase* ConfigData)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerSaveGameInterface::StaticClass()));
		TriggerSaveGameInterface_eventOnStartToLoadGameData_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerSaveGameInterface_OnStartToLoadGameData);
		if (Func)
		{
			Parms.ConfigData=ConfigData;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
