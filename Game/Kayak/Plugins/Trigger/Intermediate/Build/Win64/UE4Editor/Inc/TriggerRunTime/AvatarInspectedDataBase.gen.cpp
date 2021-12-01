// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h"
#include "TriggerRunTime/Public/TriggerEvaluator/AvatarAttributes/CheckAvatarAttribute.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatarInspectedDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInspectedDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAvatarInspectedDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckAvatarAttribute_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execOnAvatarChanged)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Avatars);
		P_GET_UBOOL(Z_Param_IsAdded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAvatarChanged(Z_Param_Out_Avatars,Z_Param_IsAdded);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execUnRegisterEvents)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Avatars);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnRegisterEvents(Z_Param_Out_Avatars);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execRegisterEvents)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Avatars);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterEvents(Z_Param_Out_Avatars);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execNotifyEvalutorContentChanged)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NotifyEvalutorContentChanged();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execGetAllAvatars)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Avators);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllAvatars(Z_Param_Out_Avators);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execGetConditionOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCheckAvatarAttribute**)Z_Param__Result=P_THIS->GetConditionOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execReset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAvatarInspectedDataBase::execIsDataExceedExpectation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDataExceedExpectation_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UAvatarInspectedDataBase_BP_OnUnRegisterEvents = FName(TEXT("BP_OnUnRegisterEvents"));
	void UAvatarInspectedDataBase::BP_OnUnRegisterEvents(TArray<UObject*> const& Avatars)
	{
		AvatarInspectedDataBase_eventBP_OnUnRegisterEvents_Parms Parms;
		Parms.Avatars=Avatars;
		ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_BP_OnUnRegisterEvents),&Parms);
	}
	static FName NAME_UAvatarInspectedDataBase_IsDataExceedExpectation = FName(TEXT("IsDataExceedExpectation"));
	bool UAvatarInspectedDataBase::IsDataExceedExpectation()
	{
		AvatarInspectedDataBase_eventIsDataExceedExpectation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_IsDataExceedExpectation),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UAvatarInspectedDataBase_OnGetAllAvatars = FName(TEXT("OnGetAllAvatars"));
	void UAvatarInspectedDataBase::OnGetAllAvatars(TArray<UObject*>& Avators) const
	{
		AvatarInspectedDataBase_eventOnGetAllAvatars_Parms Parms;
		Parms.Avators=Avators;
		const_cast<UAvatarInspectedDataBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_OnGetAllAvatars),&Parms);
		Avators=Parms.Avators;
	}
	static FName NAME_UAvatarInspectedDataBase_OnInitialize = FName(TEXT("OnInitialize"));
	void UAvatarInspectedDataBase::OnInitialize(UCheckAvatarAttribute* Owner)
	{
		AvatarInspectedDataBase_eventOnInitialize_Parms Parms;
		Parms.Owner=Owner;
		ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_OnInitialize),&Parms);
	}
	static FName NAME_UAvatarInspectedDataBase_OnRegisterEvents = FName(TEXT("OnRegisterEvents"));
	void UAvatarInspectedDataBase::OnRegisterEvents(TArray<UObject*> const& Avatars)
	{
		AvatarInspectedDataBase_eventOnRegisterEvents_Parms Parms;
		Parms.Avatars=Avatars;
		ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_OnRegisterEvents),&Parms);
	}
	static FName NAME_UAvatarInspectedDataBase_OnReset = FName(TEXT("OnReset"));
	void UAvatarInspectedDataBase::OnReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_OnReset),NULL);
	}
	static FName NAME_UAvatarInspectedDataBase_OnUnRegisterEvents = FName(TEXT("OnUnRegisterEvents"));
	void UAvatarInspectedDataBase::OnUnRegisterEvents(TArray<UObject*> const& Avatars)
	{
		AvatarInspectedDataBase_eventOnUnRegisterEvents_Parms Parms;
		Parms.Avatars=Avatars;
		ProcessEvent(FindFunctionChecked(NAME_UAvatarInspectedDataBase_OnUnRegisterEvents),&Parms);
	}
	void UAvatarInspectedDataBase::StaticRegisterNativesUAvatarInspectedDataBase()
	{
		UClass* Class = UAvatarInspectedDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllAvatars", &UAvatarInspectedDataBase::execGetAllAvatars },
			{ "GetConditionOwner", &UAvatarInspectedDataBase::execGetConditionOwner },
			{ "IsDataExceedExpectation", &UAvatarInspectedDataBase::execIsDataExceedExpectation },
			{ "NotifyEvalutorContentChanged", &UAvatarInspectedDataBase::execNotifyEvalutorContentChanged },
			{ "OnAvatarChanged", &UAvatarInspectedDataBase::execOnAvatarChanged },
			{ "RegisterEvents", &UAvatarInspectedDataBase::execRegisterEvents },
			{ "Reset", &UAvatarInspectedDataBase::execReset },
			{ "UnRegisterEvents", &UAvatarInspectedDataBase::execUnRegisterEvents },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventBP_OnUnRegisterEvents_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "Comment", "/*\n\x09* When the avatars form avatar access changed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* When the avatars form avatar access changed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "BP_OnUnRegisterEvents", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventBP_OnUnRegisterEvents_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics
	{
		struct AvatarInspectedDataBase_eventGetAllAvatars_Parms
		{
			TArray<UObject*> Avators;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avators_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::NewProp_Avators_Inner = { "Avators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::NewProp_Avators = { "Avators", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventGetAllAvatars_Parms, Avators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::NewProp_Avators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::NewProp_Avators,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "GetAllAvatars", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventGetAllAvatars_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics
	{
		struct AvatarInspectedDataBase_eventGetConditionOwner_Parms
		{
			UCheckAvatarAttribute* ReturnValue;
		};
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventGetConditionOwner_Parms, ReturnValue), Z_Construct_UClass_UCheckAvatarAttribute_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "GetConditionOwner", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventGetConditionOwner_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AvatarInspectedDataBase_eventIsDataExceedExpectation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AvatarInspectedDataBase_eventIsDataExceedExpectation_Parms), &Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "Comment", "/*\n\x09* check weather the inspected data has exceed the expectations\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* check weather the inspected data has exceed the expectations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "IsDataExceedExpectation", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventIsDataExceedExpectation_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When the content in the data have changed It should notify the owner.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* When the content in the data have changed It should notify the owner." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "NotifyEvalutorContentChanged", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics
	{
		struct AvatarInspectedDataBase_eventOnAvatarChanged_Parms
		{
			TArray<UObject*> Avatars;
			bool IsAdded;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static void NewProp_IsAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAdded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventOnAvatarChanged_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars_MetaData)) };
	void Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_IsAdded_SetBit(void* Obj)
	{
		((AvatarInspectedDataBase_eventOnAvatarChanged_Parms*)Obj)->IsAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_IsAdded = { "IsAdded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AvatarInspectedDataBase_eventOnAvatarChanged_Parms), &Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_IsAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_Avatars,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::NewProp_IsAdded,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "OnAvatarChanged", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventOnAvatarChanged_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avators_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avators;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::NewProp_Avators_Inner = { "Avators", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::NewProp_Avators = { "Avators", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventOnGetAllAvatars_Parms, Avators), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::NewProp_Avators_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::NewProp_Avators,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "Comment", "/*\n\x09* Get All avatars that this data should be applay to \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* Get All avatars that this data should be applay to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "OnGetAllAvatars", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventOnGetAllAvatars_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventOnInitialize_Parms, Owner), Z_Construct_UClass_UCheckAvatarAttribute_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Initialize this data\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* Initialize this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "OnInitialize", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventOnInitialize_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventOnRegisterEvents_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "Comment", "/*\n\x09* Register event to inspect the tag changed in the target avatars\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* Register event to inspect the tag changed in the target avatars" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "OnRegisterEvents", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventOnRegisterEvents_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "Comment", "/*\n\x09* Reset this data\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* Reset this data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "OnReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventOnUnRegisterEvents_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "Comment", "/*\n\x09* UnRegister event to inspect the tag changed in the target avatars\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* UnRegister event to inspect the tag changed in the target avatars" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "OnUnRegisterEvents", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventOnUnRegisterEvents_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics
	{
		struct AvatarInspectedDataBase_eventRegisterEvents_Parms
		{
			TArray<UObject*> Avatars;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventRegisterEvents_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "RegisterEvents", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventRegisterEvents_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_Reset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "Reset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics
	{
		struct AvatarInspectedDataBase_eventUnRegisterEvents_Parms
		{
			TArray<UObject*> Avatars;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Avatars_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Avatars_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Avatars;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars_Inner = { "Avatars", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars = { "Avatars", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AvatarInspectedDataBase_eventUnRegisterEvents_Parms, Avatars), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::NewProp_Avatars,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::Function_MetaDataParams[] = {
		{ "Category", "AvatarInspectedData" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvatarInspectedDataBase, nullptr, "UnRegisterEvents", nullptr, nullptr, sizeof(AvatarInspectedDataBase_eventUnRegisterEvents_Parms), Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAvatarInspectedDataBase_NoRegister()
	{
		return UAvatarInspectedDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UAvatarInspectedDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAvatarInspectedDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAvatarInspectedDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_BP_OnUnRegisterEvents, "BP_OnUnRegisterEvents" }, // 3077793017
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_GetAllAvatars, "GetAllAvatars" }, // 568206911
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_GetConditionOwner, "GetConditionOwner" }, // 814169605
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_IsDataExceedExpectation, "IsDataExceedExpectation" }, // 1299540839
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_NotifyEvalutorContentChanged, "NotifyEvalutorContentChanged" }, // 3315673380
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_OnAvatarChanged, "OnAvatarChanged" }, // 2988149652
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_OnGetAllAvatars, "OnGetAllAvatars" }, // 1793078555
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_OnInitialize, "OnInitialize" }, // 2053120051
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_OnRegisterEvents, "OnRegisterEvents" }, // 3779332296
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_OnReset, "OnReset" }, // 2339685870
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_OnUnRegisterEvents, "OnUnRegisterEvents" }, // 11897567
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_RegisterEvents, "RegisterEvents" }, // 2007197924
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_Reset, "Reset" }, // 1529885805
		{ &Z_Construct_UFunction_UAvatarInspectedDataBase_UnRegisterEvents, "UnRegisterEvents" }, // 1215154037
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAvatarInspectedDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The data which is used in the evaluator: UCheckAvatarAttribute.\n* \n* When something is changed in the data, we should invoke the NotifyEvalutorContentChanged immediately.\n* \n* IsDataExceedExpectation is define how this data meet our exception\n*/" },
		{ "IncludePath", "TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/AvatarAttributes/AvatarData/AvatarInspectedDataBase.h" },
		{ "ToolTip", "* The data which is used in the evaluator: UCheckAvatarAttribute.\n*\n* When something is changed in the data, we should invoke the NotifyEvalutorContentChanged immediately.\n*\n* IsDataExceedExpectation is define how this data meet our exception" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAvatarInspectedDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvatarInspectedDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAvatarInspectedDataBase_Statics::ClassParams = {
		&UAvatarInspectedDataBase::StaticClass,
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
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAvatarInspectedDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAvatarInspectedDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAvatarInspectedDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAvatarInspectedDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAvatarInspectedDataBase, 1368609643);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAvatarInspectedDataBase>()
	{
		return UAvatarInspectedDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAvatarInspectedDataBase(Z_Construct_UClass_UAvatarInspectedDataBase, &UAvatarInspectedDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAvatarInspectedDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAvatarInspectedDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
