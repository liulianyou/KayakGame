// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h"
#include "TriggerRunTime/Public/TriggerTask/TriggerTaskBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskStateSwitchBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStateSwitchBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "TriggerTaskStateSwitchEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execEvaluator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Evaluator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execMarkEvaluateable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkEvaluateable_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execSwitchState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchState_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execGetPassedStyles)
	{
		P_GET_TARRAY_REF(UTriggerStyleBase*,Z_Param_Out_Styles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPassedStyles(Z_Param_Out_Styles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execGetAllEvaluatorConditions)
	{
		P_GET_TARRAY_REF(UEvaluatorCondition*,Z_Param_Out_EvaluatorConditions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllEvaluatorConditions(Z_Param_Out_EvaluatorConditions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execGetAllStyles)
	{
		P_GET_TARRAY_REF(UTriggerStyleBase*,Z_Param_Out_Styles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllStyles(Z_Param_Out_Styles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execGetAllConditions)
	{
		P_GET_TARRAY_REF(UEvaluatorBase*,Z_Param_Out_Conditions);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllConditions(Z_Param_Out_Conditions);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execGetPassedCondition)
	{
		P_GET_TARRAY_REF(UEvaluatorBase*,Z_Param_Out_Conditions);
		P_GET_UBOOL(Z_Param_ContainOperators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetPassedCondition(Z_Param_Out_Conditions,Z_Param_ContainOperators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execAddNewConditionAndStyle)
	{
		P_GET_OBJECT(UEvaluatorBase,Z_Param_Condition);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_Style);
		P_GET_UBOOL(Z_Param_CondtionAndStyleMapped);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewConditionAndStyle_Implementation(Z_Param_Condition,Z_Param_Style,Z_Param_CondtionAndStyleMapped);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execIsSwitchOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSwitchOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execIsRunning)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execEndEvaluator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndEvaluator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execStartEvaluator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEvaluator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStateSwitchBase::execInitialize)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_Owner);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle = FName(TEXT("AddNewConditionAndStyle"));
	void UTriggerTaskStateSwitchBase::AddNewConditionAndStyle(UEvaluatorBase* Condition, UTriggerStyleBase* Style, bool CondtionAndStyleMapped)
	{
		TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms Parms;
		Parms.Condition=Condition;
		Parms.Style=Style;
		Parms.CondtionAndStyleMapped=CondtionAndStyleMapped ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle),&Parms);
	}
	static FName NAME_UTriggerTaskStateSwitchBase_MarkEvaluateable = FName(TEXT("MarkEvaluateable"));
	void UTriggerTaskStateSwitchBase::MarkEvaluateable()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_MarkEvaluateable),NULL);
	}
	static FName NAME_UTriggerTaskStateSwitchBase_OnEndEvaluator = FName(TEXT("OnEndEvaluator"));
	void UTriggerTaskStateSwitchBase::OnEndEvaluator()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_OnEndEvaluator),NULL);
	}
	static FName NAME_UTriggerTaskStateSwitchBase_OnInitialzie = FName(TEXT("OnInitialzie"));
	void UTriggerTaskStateSwitchBase::OnInitialzie(UTriggerTaskBase* Owner)
	{
		TriggerTaskStateSwitchBase_eventOnInitialzie_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_OnInitialzie),&Parms);
	}
	static FName NAME_UTriggerTaskStateSwitchBase_OnStartEvaluator = FName(TEXT("OnStartEvaluator"));
	void UTriggerTaskStateSwitchBase::OnStartEvaluator()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_OnStartEvaluator),NULL);
	}
	static FName NAME_UTriggerTaskStateSwitchBase_Reset = FName(TEXT("Reset"));
	void UTriggerTaskStateSwitchBase::Reset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_Reset),NULL);
	}
	static FName NAME_UTriggerTaskStateSwitchBase_SwitchState = FName(TEXT("SwitchState"));
	void UTriggerTaskStateSwitchBase::SwitchState()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStateSwitchBase_SwitchState),NULL);
	}
	void UTriggerTaskStateSwitchBase::StaticRegisterNativesUTriggerTaskStateSwitchBase()
	{
		UClass* Class = UTriggerTaskStateSwitchBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewConditionAndStyle", &UTriggerTaskStateSwitchBase::execAddNewConditionAndStyle },
			{ "EndEvaluator", &UTriggerTaskStateSwitchBase::execEndEvaluator },
			{ "Evaluator", &UTriggerTaskStateSwitchBase::execEvaluator },
			{ "GetAllConditions", &UTriggerTaskStateSwitchBase::execGetAllConditions },
			{ "GetAllEvaluatorConditions", &UTriggerTaskStateSwitchBase::execGetAllEvaluatorConditions },
			{ "GetAllStyles", &UTriggerTaskStateSwitchBase::execGetAllStyles },
			{ "GetPassedCondition", &UTriggerTaskStateSwitchBase::execGetPassedCondition },
			{ "GetPassedStyles", &UTriggerTaskStateSwitchBase::execGetPassedStyles },
			{ "Initialize", &UTriggerTaskStateSwitchBase::execInitialize },
			{ "IsRunning", &UTriggerTaskStateSwitchBase::execIsRunning },
			{ "IsSwitchOn", &UTriggerTaskStateSwitchBase::execIsSwitchOn },
			{ "MarkEvaluateable", &UTriggerTaskStateSwitchBase::execMarkEvaluateable },
			{ "Reset", &UTriggerTaskStateSwitchBase::execReset },
			{ "StartEvaluator", &UTriggerTaskStateSwitchBase::execStartEvaluator },
			{ "SwitchState", &UTriggerTaskStateSwitchBase::execSwitchState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
		static void NewProp_CondtionAndStyleMapped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CondtionAndStyleMapped;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Condition_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Condition = { "Condition", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms, Condition), Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Condition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Style_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms, Style), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Style_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_CondtionAndStyleMapped_SetBit(void* Obj)
	{
		((TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms*)Obj)->CondtionAndStyleMapped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_CondtionAndStyleMapped = { "CondtionAndStyleMapped", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms), &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_CondtionAndStyleMapped_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::NewProp_CondtionAndStyleMapped,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "/*\n\x09* @param MatchedToCondition True means the condition and style should be mapped\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* @param MatchedToCondition True means the condition and style should be mapped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "AddNewConditionAndStyle", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventAddNewConditionAndStyle_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "//Stop this evaluator\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Stop this evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "EndEvaluator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//All the evaluator should be check at this function\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "All the evaluator should be check at this function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "Evaluator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics
	{
		struct TriggerTaskStateSwitchBase_eventGetAllConditions_Parms
		{
			TArray<UEvaluatorBase*> Conditions;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventGetAllConditions_Parms, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::NewProp_Conditions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "GetAllConditions", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventGetAllConditions_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics
	{
		struct TriggerTaskStateSwitchBase_eventGetAllEvaluatorConditions_Parms
		{
			TArray<UEvaluatorCondition*> EvaluatorConditions;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EvaluatorConditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EvaluatorConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EvaluatorConditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions_Inner = { "EvaluatorConditions", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorCondition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions = { "EvaluatorConditions", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventGetAllEvaluatorConditions_Parms, EvaluatorConditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::NewProp_EvaluatorConditions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get call evaluator conditions in this switch\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Get call evaluator conditions in this switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "GetAllEvaluatorConditions", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventGetAllEvaluatorConditions_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics
	{
		struct TriggerTaskStateSwitchBase_eventGetAllStyles_Parms
		{
			TArray<UTriggerStyleBase*> Styles;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventGetAllStyles_Parms, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::NewProp_Styles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "GetAllStyles", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventGetAllStyles_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics
	{
		struct TriggerTaskStateSwitchBase_eventGetPassedCondition_Parms
		{
			TArray<UEvaluatorBase*> Conditions;
			bool ContainOperators;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Conditions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Conditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Conditions;
		static void NewProp_ContainOperators_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContainOperators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions_Inner = { "Conditions", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UEvaluatorBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions = { "Conditions", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventGetPassedCondition_Parms, Conditions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_ContainOperators_SetBit(void* Obj)
	{
		((TriggerTaskStateSwitchBase_eventGetPassedCondition_Parms*)Obj)->ContainOperators = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_ContainOperators = { "ContainOperators", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStateSwitchBase_eventGetPassedCondition_Parms), &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_ContainOperators_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_Conditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::NewProp_ContainOperators,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get passed condition for the target state condition\n\x09*/" },
		{ "CPP_Default_ContainOperators", "false" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* Get passed condition for the target state condition" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "GetPassedCondition", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventGetPassedCondition_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics
	{
		struct TriggerTaskStateSwitchBase_eventGetPassedStyles_Parms
		{
			TArray<UTriggerStyleBase*> Styles;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventGetPassedStyles_Parms, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::NewProp_Styles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get all the styles which condition meet the requisite\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* Get all the styles which condition meet the requisite" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "GetPassedStyles", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventGetPassedStyles_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics
	{
		struct TriggerTaskStateSwitchBase_eventInitialize_Parms
		{
			UTriggerTaskBase* Owner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventInitialize_Parms, Owner), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "Initialize", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventInitialize_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics
	{
		struct TriggerTaskStateSwitchBase_eventIsRunning_Parms
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
	void Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskStateSwitchBase_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStateSwitchBase_eventIsRunning_Parms), &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "//Check weather this switch is running to wait some conditions to be meet\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Check weather this switch is running to wait some conditions to be meet" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "IsRunning", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventIsRunning_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics
	{
		struct TriggerTaskStateSwitchBase_eventIsSwitchOn_Parms
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
	void Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskStateSwitchBase_eventIsSwitchOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStateSwitchBase_eventIsSwitchOn_Parms), &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "//Check weather this switch have meet some conditions\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Check weather this switch have meet some conditions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "IsSwitchOn", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventIsSwitchOn_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "/*\n\x09* Make this switch can be evaluate again\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* Make this switch can be evaluate again" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "MarkEvaluateable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "//Define how to stop this evaluator\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Define how to stop this evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "OnEndEvaluator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStateSwitchBase_eventOnInitialzie_Parms, Owner), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "OnInitialzie", nullptr, nullptr, sizeof(TriggerTaskStateSwitchBase_eventOnInitialzie_Parms), Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "//Define how to start this evaluator\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Define how to start this evaluator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "OnStartEvaluator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "/*\n\x09* Reset this switch\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* Reset this switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "//Start to evaluator when the task can switch to target state\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "Start to evaluator when the task can switch to target state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "StartEvaluator", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SwitchState" },
		{ "Comment", "/*\n\x09* Describe how to switch the trigger task state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* Describe how to switch the trigger task state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStateSwitchBase, nullptr, "SwitchState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister()
	{
		return UTriggerTaskStateSwitchBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTaskStateSwitchEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TriggerTaskStateSwitchEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_AddNewConditionAndStyle, "AddNewConditionAndStyle" }, // 3705663923
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_EndEvaluator, "EndEvaluator" }, // 2178286710
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Evaluator, "Evaluator" }, // 1897443541
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllConditions, "GetAllConditions" }, // 930162839
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllEvaluatorConditions, "GetAllEvaluatorConditions" }, // 947522157
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetAllStyles, "GetAllStyles" }, // 1266826415
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedCondition, "GetPassedCondition" }, // 3711747746
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_GetPassedStyles, "GetPassedStyles" }, // 2729884987
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Initialize, "Initialize" }, // 414620672
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsRunning, "IsRunning" }, // 2370354902
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_IsSwitchOn, "IsSwitchOn" }, // 4127368460
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_MarkEvaluateable, "MarkEvaluateable" }, // 3560042563
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnEndEvaluator, "OnEndEvaluator" }, // 4001623839
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnInitialzie, "OnInitialzie" }, // 3246385921
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_OnStartEvaluator, "OnStartEvaluator" }, // 919014894
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_Reset, "Reset" }, // 2708750366
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_StartEvaluator, "StartEvaluator" }, // 2335444367
		{ &Z_Construct_UFunction_UTriggerTaskStateSwitchBase_SwitchState, "SwitchState" }, // 2656209097
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::NewProp_TriggerTaskStateSwitchEvent_MetaData[] = {
		{ "Comment", "/*\n\x09* The delegate event to the trigger task, when the switch state is invoked then it will be executed\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStateSwitch/TriggerTaskStateSwitchBase.h" },
		{ "ToolTip", "* The delegate event to the trigger task, when the switch state is invoked then it will be executed" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::NewProp_TriggerTaskStateSwitchEvent = { "TriggerTaskStateSwitchEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskStateSwitchBase, TriggerTaskStateSwitchEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskStateSwitchEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::NewProp_TriggerTaskStateSwitchEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::NewProp_TriggerTaskStateSwitchEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::NewProp_TriggerTaskStateSwitchEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStateSwitchBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::ClassParams = {
		&UTriggerTaskStateSwitchBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::PropPointers),
		0,
		0x04B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStateSwitchBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStateSwitchBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStateSwitchBase, 1987451391);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStateSwitchBase>()
	{
		return UTriggerTaskStateSwitchBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStateSwitchBase(Z_Construct_UClass_UTriggerTaskStateSwitchBase, &UTriggerTaskStateSwitchBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStateSwitchBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStateSwitchBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
