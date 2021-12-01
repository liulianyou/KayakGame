// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/Record/TriggerRecordBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerRecordBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EEndRecordType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FRecordInstigatorInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRecordBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerRecordBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerFilterBase_NoRegister();
// End Cross Module References
	static UEnum* EEndRecordType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EEndRecordType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EEndRecordType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EEndRecordType>()
	{
		return EEndRecordType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEndRecordType(EEndRecordType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EEndRecordType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EEndRecordType_Hash() { return 1570164968U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EEndRecordType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEndRecordType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EEndRecordType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEndRecordType::EEndRecordType_Pause", (int64)EEndRecordType::EEndRecordType_Pause },
				{ "EEndRecordType::EEndRecordType_ClearRecordInfo", (int64)EEndRecordType::EEndRecordType_ClearRecordInfo },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EEndRecordType_ClearRecordInfo.Name", "EEndRecordType::EEndRecordType_ClearRecordInfo" },
				{ "EEndRecordType_Pause.Name", "EEndRecordType::EEndRecordType_Pause" },
				{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EEndRecordType",
				"EEndRecordType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FRecordInstigatorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FRecordInstigatorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRecordInstigatorInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("RecordInstigatorInfo"), sizeof(FRecordInstigatorInfo), Get_Z_Construct_UScriptStruct_FRecordInstigatorInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FRecordInstigatorInfo>()
{
	return FRecordInstigatorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRecordInstigatorInfo(FRecordInstigatorInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("RecordInstigatorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFRecordInstigatorInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFRecordInstigatorInfo()
	{
		UScriptStruct::DeferCppStructOps<FRecordInstigatorInfo>(FName(TEXT("RecordInstigatorInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFRecordInstigatorInfo;
	struct Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The information for the target instigator who want to record task\n*/" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
		{ "ToolTip", "* The information for the target instigator who want to record task" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRecordInstigatorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::NewProp_Instigator_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRecordInstigatorInfo, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::NewProp_Instigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::NewProp_Instigator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"RecordInstigatorInfo",
		sizeof(FRecordInstigatorInfo),
		alignof(FRecordInstigatorInfo),
		Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRecordInstigatorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRecordInstigatorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RecordInstigatorInfo"), sizeof(FRecordInstigatorInfo), Get_Z_Construct_UScriptStruct_FRecordInstigatorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRecordInstigatorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRecordInstigatorInfo_Hash() { return 3307769897U; }
	DEFINE_FUNCTION(UTriggerRecordBase::execEndRecord)
	{
		P_GET_STRUCT_REF(FRecordInstigatorInfo,Z_Param_Out_InstigatorInfo);
		P_GET_ENUM(EEndRecordType,Z_Param_EndType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndRecord_Implementation(Z_Param_Out_InstigatorInfo,EEndRecordType(Z_Param_EndType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRecordBase::execStartRecord)
	{
		P_GET_STRUCT_REF(FRecordInstigatorInfo,Z_Param_Out_InstigatorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRecord_Implementation(Z_Param_Out_InstigatorInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerRecordBase::execExecute)
	{
		P_GET_STRUCT_REF(FRecordInstigatorInfo,Z_Param_Out_InstigatorInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Execute_Implementation(Z_Param_Out_InstigatorInfo);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerRecordBase_EndRecord = FName(TEXT("EndRecord"));
	void UTriggerRecordBase::EndRecord(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType)
	{
		TriggerRecordBase_eventEndRecord_Parms Parms;
		Parms.InstigatorInfo=InstigatorInfo;
		Parms.EndType=EndType;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerRecordBase_EndRecord),&Parms);
		InstigatorInfo=Parms.InstigatorInfo;
	}
	static FName NAME_UTriggerRecordBase_Execute = FName(TEXT("Execute"));
	void UTriggerRecordBase::Execute(FRecordInstigatorInfo& InstigatorInfo)
	{
		TriggerRecordBase_eventExecute_Parms Parms;
		Parms.InstigatorInfo=InstigatorInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerRecordBase_Execute),&Parms);
		InstigatorInfo=Parms.InstigatorInfo;
	}
	static FName NAME_UTriggerRecordBase_StartRecord = FName(TEXT("StartRecord"));
	void UTriggerRecordBase::StartRecord(FRecordInstigatorInfo& InstigatorInfo)
	{
		TriggerRecordBase_eventStartRecord_Parms Parms;
		Parms.InstigatorInfo=InstigatorInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerRecordBase_StartRecord),&Parms);
		InstigatorInfo=Parms.InstigatorInfo;
	}
	void UTriggerRecordBase::StaticRegisterNativesUTriggerRecordBase()
	{
		UClass* Class = UTriggerRecordBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EndRecord", &UTriggerRecordBase::execEndRecord },
			{ "Execute", &UTriggerRecordBase::execExecute },
			{ "StartRecord", &UTriggerRecordBase::execStartRecord },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::NewProp_InstigatorInfo = { "InstigatorInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRecordBase_eventEndRecord_Parms, InstigatorInfo), Z_Construct_UScriptStruct_FRecordInstigatorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRecordBase_eventEndRecord_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_EEndRecordType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::NewProp_InstigatorInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::NewProp_EndType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Record" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRecordBase, nullptr, "EndRecord", nullptr, nullptr, sizeof(TriggerRecordBase_eventEndRecord_Parms), Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRecordBase_EndRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRecordBase_EndRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::NewProp_InstigatorInfo = { "InstigatorInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRecordBase_eventExecute_Parms, InstigatorInfo), Z_Construct_UScriptStruct_FRecordInstigatorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::NewProp_InstigatorInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Record" },
		{ "Comment", "/*\n\x09* Start to process the information for current recorded information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
		{ "ToolTip", "* Start to process the information for current recorded information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRecordBase, nullptr, "Execute", nullptr, nullptr, sizeof(TriggerRecordBase_eventExecute_Parms), Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRecordBase_Execute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRecordBase_Execute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::NewProp_InstigatorInfo = { "InstigatorInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerRecordBase_eventStartRecord_Parms, InstigatorInfo), Z_Construct_UScriptStruct_FRecordInstigatorInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::NewProp_InstigatorInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Record" },
		{ "Comment", "/*\n\x09* Start to record all trigger task \n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
		{ "ToolTip", "* Start to record all trigger task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerRecordBase, nullptr, "StartRecord", nullptr, nullptr, sizeof(TriggerRecordBase_eventStartRecord_Parms), Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerRecordBase_StartRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerRecordBase_StartRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerRecordBase_NoRegister()
	{
		return UTriggerRecordBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerRecordBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Filters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Filters;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerRecordBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerRecordBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerRecordBase_EndRecord, "EndRecord" }, // 4231843664
		{ &Z_Construct_UFunction_UTriggerRecordBase_Execute, "Execute" }, // 1551954281
		{ &Z_Construct_UFunction_UTriggerRecordBase_StartRecord, "StartRecord" }, // 3088119841
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRecordBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/Record/TriggerRecordBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_Inner_MetaData[] = {
		{ "Category", "Record" },
		{ "Comment", "/*\n\x09* These filters used to filter the information which will be record\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
		{ "ToolTip", "* These filters used to filter the information which will be record" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_Inner = { "Filters", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerFilterBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_MetaData[] = {
		{ "Category", "Record" },
		{ "Comment", "/*\n\x09* These filters used to filter the information which will be record\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/Record/TriggerRecordBase.h" },
		{ "ToolTip", "* These filters used to filter the information which will be record" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters = { "Filters", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerRecordBase, Filters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerRecordBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerRecordBase_Statics::NewProp_Filters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerRecordBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerRecordBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerRecordBase_Statics::ClassParams = {
		&UTriggerRecordBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerRecordBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRecordBase_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerRecordBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerRecordBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerRecordBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerRecordBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerRecordBase, 1226933829);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerRecordBase>()
	{
		return UTriggerRecordBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerRecordBase(Z_Construct_UClass_UTriggerRecordBase, &UTriggerRecordBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerRecordBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerRecordBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
