// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetCommonOperationInfos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskResetCommonOperationInfos() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskReset_CommonReset_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskReset_CommonReset();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskResetInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskReset_CommonReset::execCommonReset)
	{
		P_GET_ENUM(ETriggerTaskResetType,Z_Param_InResetType);
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(UObject,Z_Param_TargetTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ParentOperation);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskReset_CommonReset**)Z_Param__Result=UTriggerTaskReset_CommonReset::CommonReset(ETriggerTaskResetType(Z_Param_InResetType),Z_Param_Owner,Z_Param_TargetTask,Z_Param_ParentOperation,Z_Param_OperationStyle);
		P_NATIVE_END;
	}
	void UTriggerTaskReset_CommonReset::StaticRegisterNativesUTriggerTaskReset_CommonReset()
	{
		UClass* Class = UTriggerTaskReset_CommonReset::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CommonReset", &UTriggerTaskReset_CommonReset::execCommonReset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics
	{
		struct TriggerTaskReset_CommonReset_eventCommonReset_Parms
		{
			ETriggerTaskResetType InResetType;
			UObject* Owner;
			UObject* TargetTask;
			UOperationInformationBase* ParentOperation;
			UTriggerStyleBase* OperationStyle;
			UTriggerTaskReset_CommonReset* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InResetType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InResetType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_InResetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_InResetType = { "InResetType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskReset_CommonReset_eventCommonReset_Parms, InResetType), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskReset_CommonReset_eventCommonReset_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_TargetTask = { "TargetTask", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskReset_CommonReset_eventCommonReset_Parms, TargetTask), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ParentOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ParentOperation = { "ParentOperation", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskReset_CommonReset_eventCommonReset_Parms, ParentOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ParentOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ParentOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskReset_CommonReset_eventCommonReset_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskReset_CommonReset_eventCommonReset_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskReset_CommonReset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_InResetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_InResetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_TargetTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ParentOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Cerate new operation to reset the trigger task\n\x09*/" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_ParentOperation", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetCommonOperationInfos.h" },
		{ "ToolTip", "* Cerate new operation to reset the trigger task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskReset_CommonReset, nullptr, "CommonReset", nullptr, nullptr, sizeof(TriggerTaskReset_CommonReset_eventCommonReset_Parms), Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskReset_CommonReset_NoRegister()
	{
		return UTriggerTaskReset_CommonReset::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskResetInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskReset_CommonReset_CommonReset, "CommonReset" }, // 497941931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "Comment", "/*\n* This reset operation which is occured at check point\n*/" },
		{ "DisplayName", "CommonReset" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetCommonOperationInfos.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskResetInformation/TriggerTaskResetCommonOperationInfos.h" },
		{ "ToolTip", "* This reset operation which is occured at check point" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskReset_CommonReset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::ClassParams = {
		&UTriggerTaskReset_CommonReset::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskReset_CommonReset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskReset_CommonReset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskReset_CommonReset, 1154432487);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskReset_CommonReset>()
	{
		return UTriggerTaskReset_CommonReset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskReset_CommonReset(Z_Construct_UClass_UTriggerTaskReset_CommonReset, &UTriggerTaskReset_CommonReset::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskReset_CommonReset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskReset_CommonReset);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
