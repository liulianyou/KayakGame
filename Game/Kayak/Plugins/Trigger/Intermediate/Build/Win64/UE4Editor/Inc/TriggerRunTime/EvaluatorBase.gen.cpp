// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/EvaluatorBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluatorBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorDataBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventEvaluatorDelegate_Parms
		{
			UEvaluatorBase* Evaluator;
			bool EvaluatorResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Evaluator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Evaluator;
		static void NewProp_EvaluatorResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EvaluatorResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_Evaluator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_Evaluator = { "Evaluator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventEvaluatorDelegate_Parms, Evaluator), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_Evaluator_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_Evaluator_MetaData)) };
	void Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_EvaluatorResult_SetBit(void* Obj)
	{
		((_Script_TriggerRunTime_eventEvaluatorDelegate_Parms*)Obj)->EvaluatorResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_EvaluatorResult = { "EvaluatorResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_TriggerRunTime_eventEvaluatorDelegate_Parms), &Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_EvaluatorResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_Evaluator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::NewProp_EvaluatorResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "EvaluatorDelegate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventEvaluatorDelegate_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execNotifyToEvaluate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyToEvaluate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execMarkEvaluateable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkEvaluateable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execGetOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execCreateNewExternalData)
	{
		P_GET_OBJECT(UClass,Z_Param_EvaluatorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEvaluatorDataBase**)Z_Param__Result=P_THIS->CreateNewExternalData(Z_Param_EvaluatorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execSetExternalData)
	{
		P_GET_OBJECT(UEvaluatorDataBase,Z_Param_NewData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetExternalData(Z_Param_NewData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execGetExternalData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UEvaluatorDataBase**)Z_Param__Result=P_THIS->GetExternalData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execGetEvaluateCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetEvaluateCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execGetLastEvaluatorResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLastEvaluatorResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execBP_Reset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BP_Reset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEvaluatorBase::execBP_Evaluator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BP_Evaluator_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UEvaluatorBase_BP_Evaluator = FName(TEXT("BP_Evaluator"));
	bool UEvaluatorBase::BP_Evaluator()
	{
		EvaluatorBase_eventBP_Evaluator_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UEvaluatorBase_BP_Evaluator),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UEvaluatorBase_BP_Initialize = FName(TEXT("BP_Initialize"));
	void UEvaluatorBase::BP_Initialize(UObject* OwnerObject)
	{
		EvaluatorBase_eventBP_Initialize_Parms Parms;
		Parms.OwnerObject=OwnerObject;
		ProcessEvent(FindFunctionChecked(NAME_UEvaluatorBase_BP_Initialize),&Parms);
	}
	static FName NAME_UEvaluatorBase_BP_Reset = FName(TEXT("BP_Reset"));
	void UEvaluatorBase::BP_Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEvaluatorBase_BP_Reset),NULL);
	}
	static FName NAME_UEvaluatorBase_OnMarkEvaluateable = FName(TEXT("OnMarkEvaluateable"));
	void UEvaluatorBase::OnMarkEvaluateable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UEvaluatorBase_OnMarkEvaluateable),NULL);
	}
	void UEvaluatorBase::StaticRegisterNativesUEvaluatorBase()
	{
		UClass* Class = UEvaluatorBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BP_Evaluator", &UEvaluatorBase::execBP_Evaluator },
			{ "BP_Reset", &UEvaluatorBase::execBP_Reset },
			{ "CreateNewExternalData", &UEvaluatorBase::execCreateNewExternalData },
			{ "GetEvaluateCount", &UEvaluatorBase::execGetEvaluateCount },
			{ "GetExternalData", &UEvaluatorBase::execGetExternalData },
			{ "GetLastEvaluatorResult", &UEvaluatorBase::execGetLastEvaluatorResult },
			{ "GetOwner", &UEvaluatorBase::execGetOwner },
			{ "MarkEvaluateable", &UEvaluatorBase::execMarkEvaluateable },
			{ "NotifyToEvaluate", &UEvaluatorBase::execNotifyToEvaluate },
			{ "SetExternalData", &UEvaluatorBase::execSetExternalData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EvaluatorBase_eventBP_Evaluator_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EvaluatorBase_eventBP_Evaluator_Parms), &Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "Comment", "/*\n\x09* Allow one chance to the BP to override the native implementation\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* Allow one chance to the BP to override the native implementation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "BP_Evaluator", nullptr, nullptr, sizeof(EvaluatorBase_eventBP_Evaluator_Parms), Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::NewProp_OwnerObject = { "OwnerObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventBP_Initialize_Parms, OwnerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::NewProp_OwnerObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "Comment", "//Initialize the local variables this function only be called in the BeginPlaye stage\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "Initialize the local variables this function only be called in the BeginPlaye stage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "BP_Initialize", nullptr, nullptr, sizeof(EvaluatorBase_eventBP_Initialize_Parms), Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_BP_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_BP_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_BP_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_BP_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_BP_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "BP_Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_BP_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_BP_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_BP_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_BP_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics
	{
		struct EvaluatorBase_eventCreateNewExternalData_Parms
		{
			TSubclassOf<UEvaluatorDataBase>  EvaluatorClass;
			UEvaluatorDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EvaluatorClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::NewProp_EvaluatorClass = { "EvaluatorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventCreateNewExternalData_Parms, EvaluatorClass), Z_Construct_UClass_UEvaluatorDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventCreateNewExternalData_Parms, ReturnValue), Z_Construct_UClass_UEvaluatorDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::NewProp_EvaluatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "CreateNewExternalData", nullptr, nullptr, sizeof(EvaluatorBase_eventCreateNewExternalData_Parms), Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics
	{
		struct EvaluatorBase_eventGetEvaluateCount_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventGetEvaluateCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "GetEvaluateCount", nullptr, nullptr, sizeof(EvaluatorBase_eventGetEvaluateCount_Parms), Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics
	{
		struct EvaluatorBase_eventGetExternalData_Parms
		{
			UEvaluatorDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventGetExternalData_Parms, ReturnValue), Z_Construct_UClass_UEvaluatorDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "GetExternalData", nullptr, nullptr, sizeof(EvaluatorBase_eventGetExternalData_Parms), Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_GetExternalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_GetExternalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics
	{
		struct EvaluatorBase_eventGetLastEvaluatorResult_Parms
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
	void Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((EvaluatorBase_eventGetLastEvaluatorResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(EvaluatorBase_eventGetLastEvaluatorResult_Parms), &Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "Comment", "//Get the last result of evaluator\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "Get the last result of evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "GetLastEvaluatorResult", nullptr, nullptr, sizeof(EvaluatorBase_eventGetLastEvaluatorResult_Parms), Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics
	{
		struct EvaluatorBase_eventGetOwner_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "GetOwner", nullptr, nullptr, sizeof(EvaluatorBase_eventGetOwner_Parms), Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_GetOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_GetOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "Comment", "/*\n\x09* Make the evaluator can be evaluate again.\n\x09* As when this evaluator is passed the result will be cashed, and when I invoke evaluate function it will only return the last cashed value\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* Make the evaluator can be evaluate again.\n* As when this evaluator is passed the result will be cashed, and when I invoke evaluate function it will only return the last cashed value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "MarkEvaluateable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "Comment", "/*\n\x09* This function should also be invoked when some conditions of this evaluator have changed,\n\x09* so that the outer module can know the result of changed immediately.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* This function should also be invoked when some conditions of this evaluator have changed,\n* so that the outer module can know the result of changed immediately." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "NotifyToEvaluate", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "Comment", "/*\n\x09* Invoked in MarkEvaluateable.\n\x09* Make the evaluator can be evaluate again.\n\x09* As when this evaluator is passed the result will be cashed, and when I invoke evaluate function it will only return the last cashed value\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* Invoked in MarkEvaluateable.\n* Make the evaluator can be evaluate again.\n* As when this evaluator is passed the result will be cashed, and when I invoke evaluate function it will only return the last cashed value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "OnMarkEvaluateable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics
	{
		struct EvaluatorBase_eventSetExternalData_Parms
		{
			UEvaluatorDataBase* NewData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EvaluatorBase_eventSetExternalData_Parms, NewData), Z_Construct_UClass_UEvaluatorDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::NewProp_NewData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Evaluator" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEvaluatorBase, nullptr, "SetExternalData", nullptr, nullptr, sizeof(EvaluatorBase_eventSetExternalData_Parms), Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEvaluatorBase_SetExternalData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEvaluatorBase_SetExternalData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister()
	{
		return UEvaluatorBase::StaticClass();
	}
	struct Z_Construct_UClass_UEvaluatorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseResult_MetaData[];
#endif
		static void NewProp_InverseResult_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InverseResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluatorDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EvaluatorDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExternalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvaluatorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEvaluatorBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEvaluatorBase_BP_Evaluator, "BP_Evaluator" }, // 346422448
		{ &Z_Construct_UFunction_UEvaluatorBase_BP_Initialize, "BP_Initialize" }, // 3944913191
		{ &Z_Construct_UFunction_UEvaluatorBase_BP_Reset, "BP_Reset" }, // 1328851585
		{ &Z_Construct_UFunction_UEvaluatorBase_CreateNewExternalData, "CreateNewExternalData" }, // 3885859867
		{ &Z_Construct_UFunction_UEvaluatorBase_GetEvaluateCount, "GetEvaluateCount" }, // 4092631558
		{ &Z_Construct_UFunction_UEvaluatorBase_GetExternalData, "GetExternalData" }, // 44549592
		{ &Z_Construct_UFunction_UEvaluatorBase_GetLastEvaluatorResult, "GetLastEvaluatorResult" }, // 2442859965
		{ &Z_Construct_UFunction_UEvaluatorBase_GetOwner, "GetOwner" }, // 1469153073
		{ &Z_Construct_UFunction_UEvaluatorBase_MarkEvaluateable, "MarkEvaluateable" }, // 673710160
		{ &Z_Construct_UFunction_UEvaluatorBase_NotifyToEvaluate, "NotifyToEvaluate" }, // 600526519
		{ &Z_Construct_UFunction_UEvaluatorBase_OnMarkEvaluateable, "OnMarkEvaluateable" }, // 1250410050
		{ &Z_Construct_UFunction_UEvaluatorBase_SetExternalData, "SetExternalData" }, // 343173195
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerEvaluator/EvaluatorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult_MetaData[] = {
		{ "Category", "Evaluator" },
		{ "Comment", "//Flag used to inverse the final result of the Evaluator\n" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "Flag used to inverse the final result of the Evaluator" },
	};
#endif
	void Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult_SetBit(void* Obj)
	{
		((UEvaluatorBase*)Obj)->InverseResult = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult = { "InverseResult", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UEvaluatorBase), &Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_EvaluatorDelegate_MetaData[] = {
		{ "Comment", "/*\n\x09* The delegate will be used to be broadcast when this evaluator is successful\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* The delegate will be used to be broadcast when this evaluator is successful" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_EvaluatorDelegate = { "EvaluatorDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEvaluatorBase, EvaluatorDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_EvaluatorDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_EvaluatorDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_EvaluatorDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_ExternalData_MetaData[] = {
		{ "Comment", "/*\n\x09* The data should be processed in this evaluator.\n\x09* when this evaluator evaluate it will first check it own evaluator,\n\x09* if this evaluator failed then it will check weather the external data will make this evaluator success.\n\x09* This means if Evaluator function return true, I will ignore the external data.\n\x09* So we can treat the external data is additional condition to supplement this evaluator when the evaluator is failed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* The data should be processed in this evaluator.\n* when this evaluator evaluate it will first check it own evaluator,\n* if this evaluator failed then it will check weather the external data will make this evaluator success.\n* This means if Evaluator function return true, I will ignore the external data.\n* So we can treat the external data is additional condition to supplement this evaluator when the evaluator is failed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_ExternalData = { "ExternalData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEvaluatorBase, ExternalData), Z_Construct_UClass_UEvaluatorDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_ExternalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_ExternalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/*\n\x09* The owner of this object. some times it is differ from the outer of this object\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/EvaluatorBase.h" },
		{ "ToolTip", "* The owner of this object. some times it is differ from the outer of this object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEvaluatorBase, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvaluatorBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_InverseResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_EvaluatorDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_ExternalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorBase_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvaluatorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluatorBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEvaluatorBase_Statics::ClassParams = {
		&UEvaluatorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEvaluatorBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorBase_Statics::PropPointers),
		0,
		0x04B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEvaluatorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvaluatorBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEvaluatorBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEvaluatorBase, 1566132452);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UEvaluatorBase>()
	{
		return UEvaluatorBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEvaluatorBase(Z_Construct_UClass_UEvaluatorBase, &UEvaluatorBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UEvaluatorBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvaluatorBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
