// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskStartInformationBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStartInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStartInformationBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskComponentInformation();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execGetNeedToEvaluateStartConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetNeedToEvaluateStartConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execSetNeedToEvaluateStartConditions)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNeedToEvaluateStartConditions(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execNeedWaitTargetComponentLoaded)
	{
		P_GET_STRUCT_REF(FTriggerTaskComponentInformation,Z_Param_Out_ComponentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NeedWaitTargetComponentLoaded_Implementation(Z_Param_Out_ComponentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execSetWaitRelatedComponentLoaded)
	{
		P_GET_UBOOL(Z_Param_NewValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaitRelatedComponentLoaded(Z_Param_NewValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execEqual)
	{
		P_GET_OBJECT(UTriggerTaskStartInformationBase,Z_Param_OtherInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Equal_Implementation(Z_Param_OtherInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execCopyFromActiveInfo)
	{
		P_GET_STRUCT_REF(FTaskActivationInfo,Z_Param_Out_ActiveInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CopyFromActiveInfo_Implementation(Z_Param_Out_ActiveInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStartInformationBase::execGetToggledActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetToggledActor_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTaskStartInformationBase_CopyFromActiveInfo = FName(TEXT("CopyFromActiveInfo"));
	void UTriggerTaskStartInformationBase::CopyFromActiveInfo(FTaskActivationInfo const& ActiveInfo)
	{
		TriggerTaskStartInformationBase_eventCopyFromActiveInfo_Parms Parms;
		Parms.ActiveInfo=ActiveInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStartInformationBase_CopyFromActiveInfo),&Parms);
	}
	static FName NAME_UTriggerTaskStartInformationBase_Equal = FName(TEXT("Equal"));
	bool UTriggerTaskStartInformationBase::Equal(const UTriggerTaskStartInformationBase* OtherInfo) const
	{
		TriggerTaskStartInformationBase_eventEqual_Parms Parms;
		Parms.OtherInfo=OtherInfo;
		const_cast<UTriggerTaskStartInformationBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStartInformationBase_Equal),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskStartInformationBase_GetToggledActor = FName(TEXT("GetToggledActor"));
	AActor* UTriggerTaskStartInformationBase::GetToggledActor() const
	{
		TriggerTaskStartInformationBase_eventGetToggledActor_Parms Parms;
		const_cast<UTriggerTaskStartInformationBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStartInformationBase_GetToggledActor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded = FName(TEXT("NeedWaitTargetComponentLoaded"));
	bool UTriggerTaskStartInformationBase::NeedWaitTargetComponentLoaded(FTriggerTaskComponentInformation const& ComponentInfo) const
	{
		TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms Parms;
		Parms.ComponentInfo=ComponentInfo;
		const_cast<UTriggerTaskStartInformationBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded),&Parms);
		return !!Parms.ReturnValue;
	}
	void UTriggerTaskStartInformationBase::StaticRegisterNativesUTriggerTaskStartInformationBase()
	{
		UClass* Class = UTriggerTaskStartInformationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CopyFromActiveInfo", &UTriggerTaskStartInformationBase::execCopyFromActiveInfo },
			{ "Equal", &UTriggerTaskStartInformationBase::execEqual },
			{ "GetNeedToEvaluateStartConditions", &UTriggerTaskStartInformationBase::execGetNeedToEvaluateStartConditions },
			{ "GetToggledActor", &UTriggerTaskStartInformationBase::execGetToggledActor },
			{ "NeedWaitTargetComponentLoaded", &UTriggerTaskStartInformationBase::execNeedWaitTargetComponentLoaded },
			{ "SetNeedToEvaluateStartConditions", &UTriggerTaskStartInformationBase::execSetNeedToEvaluateStartConditions },
			{ "SetWaitRelatedComponentLoaded", &UTriggerTaskStartInformationBase::execSetWaitRelatedComponentLoaded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::NewProp_ActiveInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::NewProp_ActiveInfo = { "ActiveInfo", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStartInformationBase_eventCopyFromActiveInfo_Parms, ActiveInfo), Z_Construct_UScriptStruct_FTaskActivationInfo, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::NewProp_ActiveInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::NewProp_ActiveInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::NewProp_ActiveInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Copy data from activation information\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "Copy data from activation information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "CopyFromActiveInfo", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventCopyFromActiveInfo_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_OtherInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_OtherInfo = { "OtherInfo", nullptr, (EPropertyFlags)0x0010000000080082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStartInformationBase_eventEqual_Parms, OtherInfo), Z_Construct_UClass_UTriggerTaskStartInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_OtherInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_OtherInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskStartInformationBase_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStartInformationBase_eventEqual_Parms), &Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_OtherInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//check weather two toggle information is the same, Default true when the two info has the same toggled actor and class\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "check weather two toggle information is the same, Default true when the two info has the same toggled actor and class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "Equal", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventEqual_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics
	{
		struct TriggerTaskStartInformationBase_eventGetNeedToEvaluateStartConditions_Parms
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
	void Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskStartInformationBase_eventGetNeedToEvaluateStartConditions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStartInformationBase_eventGetNeedToEvaluateStartConditions_Parms), &Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "GetNeedToEvaluateStartConditions", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventGetNeedToEvaluateStartConditions_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStartInformationBase_eventGetToggledActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get the actor who toggle this trigger\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "Get the actor who toggle this trigger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "GetToggledActor", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventGetToggledActor_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ComponentInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ComponentInfo = { "ComponentInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms, ComponentInfo), Z_Construct_UScriptStruct_FTriggerTaskComponentInformation, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ComponentInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ComponentInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms), &Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ComponentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Try to check weather when this information occurred, the target component need to wait all related components have been loaded.\n\x09* \n\x09* @param ComponentInfo The information of related component.\n\x09* \n\x09* #return true means all related component should be loaded\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "* Try to check weather when this information occurred, the target component need to wait all related components have been loaded.\n*\n* @param ComponentInfo The information of related component.\n*\n* #return true means all related component should be loaded" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "NeedWaitTargetComponentLoaded", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics
	{
		struct TriggerTaskStartInformationBase_eventSetNeedToEvaluateStartConditions_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((TriggerTaskStartInformationBase_eventSetNeedToEvaluateStartConditions_Parms*)Obj)->Value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStartInformationBase_eventSetNeedToEvaluateStartConditions_Parms), &Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "SetNeedToEvaluateStartConditions", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventSetNeedToEvaluateStartConditions_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics
	{
		struct TriggerTaskStartInformationBase_eventSetWaitRelatedComponentLoaded_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((TriggerTaskStartInformationBase_eventSetWaitRelatedComponentLoaded_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskStartInformationBase_eventSetWaitRelatedComponentLoaded_Parms), &Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStartInformationBase, nullptr, "SetWaitRelatedComponentLoaded", nullptr, nullptr, sizeof(TriggerTaskStartInformationBase_eventSetWaitRelatedComponentLoaded_Parms), Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStartInformationBase_NoRegister()
	{
		return UTriggerTaskStartInformationBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaitRelatedComponentLoaded_MetaData[];
#endif
		static void NewProp_WaitRelatedComponentLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WaitRelatedComponentLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeedToEvaluateStartConditions_MetaData[];
#endif
		static void NewProp_NeedToEvaluateStartConditions_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToEvaluateStartConditions;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOperationInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_CopyFromActiveInfo, "CopyFromActiveInfo" }, // 2737838867
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_Equal, "Equal" }, // 2240811450
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetNeedToEvaluateStartConditions, "GetNeedToEvaluateStartConditions" }, // 1052642055
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_GetToggledActor, "GetToggledActor" }, // 2984628284
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_NeedWaitTargetComponentLoaded, "NeedWaitTargetComponentLoaded" }, // 3760702767
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetNeedToEvaluateStartConditions, "SetNeedToEvaluateStartConditions" }, // 3681895
		{ &Z_Construct_UFunction_UTriggerTaskStartInformationBase_SetWaitRelatedComponentLoaded, "SetWaitRelatedComponentLoaded" }, // 3758332665
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* The base class to generate start information once one trigger task is tart to active\n*\n* As the UE4 BP only support the class which derived form the UObject or struct,\n* I want this data can correspond to different status to gather different data,\n* I need to make it derived from the UObject\n*/" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "* The base class to generate start information once one trigger task is tart to active\n*\n* As the UE4 BP only support the class which derived form the UObject or struct,\n* I want this data can correspond to different status to gather different data,\n* I need to make it derived from the UObject" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* True this toggle information need the related task component to be loaded first.\n\x09* False means this toggle information do not care weather the related component have been loaded.\n\x09* If the related component have been loaded then it work, or it will do nothing.\n\x09* \n\x09* This is used for designer to confine the default behavior. the final behavior should be defined in the function: NeedWaitTargetComponentLoaded.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "* True this toggle information need the related task component to be loaded first.\n* False means this toggle information do not care weather the related component have been loaded.\n* If the related component have been loaded then it work, or it will do nothing.\n*\n* This is used for designer to confine the default behavior. the final behavior should be defined in the function: NeedWaitTargetComponentLoaded." },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded_SetBit(void* Obj)
	{
		((UTriggerTaskStartInformationBase*)Obj)->WaitRelatedComponentLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded = { "WaitRelatedComponentLoaded", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskStartInformationBase), &Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Flag to check weather this toggle information should make the trigger task to evaluator the start conditions\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStartInformationBase.h" },
		{ "ToolTip", "* Flag to check weather this toggle information should make the trigger task to evaluator the start conditions" },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions_SetBit(void* Obj)
	{
		((UTriggerTaskStartInformationBase*)Obj)->NeedToEvaluateStartConditions = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions = { "NeedToEvaluateStartConditions", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskStartInformationBase), &Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_WaitRelatedComponentLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::NewProp_NeedToEvaluateStartConditions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStartInformationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::ClassParams = {
		&UTriggerTaskStartInformationBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::PropPointers),
		0,
		0x00B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStartInformationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStartInformationBase, 188854201);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStartInformationBase>()
	{
		return UTriggerTaskStartInformationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStartInformationBase(Z_Construct_UClass_UTriggerTaskStartInformationBase, &UTriggerTaskStartInformationBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStartInformationBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStartInformationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
