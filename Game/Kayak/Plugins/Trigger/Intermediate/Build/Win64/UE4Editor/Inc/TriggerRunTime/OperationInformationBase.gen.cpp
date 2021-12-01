// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/OperationInformationBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperationInformationBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOperationScope();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FOperationScope::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOperationScope_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperationScope, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OperationScope"), sizeof(FOperationScope), Get_Z_Construct_UScriptStruct_FOperationScope_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOperationScope>()
{
	return FOperationScope::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOperationScope(FOperationScope::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OperationScope"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationScope
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationScope()
	{
		UScriptStruct::DeferCppStructOps<FOperationScope>(FName(TEXT("OperationScope")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationScope;
	struct Z_Construct_UScriptStruct_FOperationScope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationScope_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Hodl the base inforamtion for the scope of this operation\n*/" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Hodl the base inforamtion for the scope of this operation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperationScope_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperationScope>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Causer_MetaData[] = {
		{ "Category", "OperationScope" },
		{ "Comment", "//Who initiate this operation\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "Who initiate this operation" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationScope, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Causer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Causer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "Category", "OperationScope" },
		{ "Comment", "//How this operation will apply to target\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "How this operation will apply to target" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationScope, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_OperationStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Target_MetaData[] = {
		{ "Category", "OperationScope" },
		{ "Comment", "//Which target this operation will apply to\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "Which target this operation will apply to" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationScope, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperationScope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationScope_Statics::NewProp_Target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperationScope_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"OperationScope",
		sizeof(FOperationScope),
		alignof(FOperationScope),
		Z_Construct_UScriptStruct_FOperationScope_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationScope_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationScope_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationScope_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperationScope()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOperationScope_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OperationScope"), sizeof(FOperationScope), Get_Z_Construct_UScriptStruct_FOperationScope_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOperationScope_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOperationScope_Hash() { return 518043407U; }
	DEFINE_FUNCTION(UOperationInformationBase::execCreateNewOperationInfo)
	{
		P_GET_OBJECT(UClass,Z_Param_OperationClass);
		P_GET_OBJECT(UObject,Z_Param_Owner);
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_Style);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UOperationInformationBase**)Z_Param__Result=UOperationInformationBase::CreateNewOperationInfo(Z_Param_OperationClass,Z_Param_Owner,Z_Param_Causer,Z_Param_Target,Z_Param_Style);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationBase::execFindOperationScope)
	{
		P_GET_TARRAY_REF(FOperationScope,Z_Param_Out_OuterScopes);
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FindOperationScope(Z_Param_Out_OuterScopes,Z_Param_Causer,Z_Param_OperationStyle,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationBase::execRemoveOperation)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOperation(Z_Param_Causer,Z_Param_OperationStyle,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationBase::execAddNewOperation)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_OBJECT(UTriggerStyleBase,Z_Param_OperationStyle);
		P_GET_OBJECT(UObject,Z_Param_Target);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddNewOperation(Z_Param_Causer,Z_Param_OperationStyle,Z_Param_Target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationBase::execGetOperations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOperationScope>*)Z_Param__Result=P_THIS->GetOperations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationBase::execGetConstOperations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FOperationScope>*)Z_Param__Result=P_THIS->GetConstOperations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOperationInformationBase::execShouldReplicateInformation)
	{
		P_GET_OBJECT(UObject,Z_Param_OperatorOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldReplicateInformation_Implementation(Z_Param_OperatorOwner);
		P_NATIVE_END;
	}
	static FName NAME_UOperationInformationBase_OnCanAddNewOpertion = FName(TEXT("OnCanAddNewOpertion"));
	bool UOperationInformationBase::OnCanAddNewOpertion(UObject* Causer, UTriggerStyleBase* OperationStyle, UObject* Target)
	{
		OperationInformationBase_eventOnCanAddNewOpertion_Parms Parms;
		Parms.Causer=Causer;
		Parms.OperationStyle=OperationStyle;
		Parms.Target=Target;
		ProcessEvent(FindFunctionChecked(NAME_UOperationInformationBase_OnCanAddNewOpertion),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UOperationInformationBase_ShouldReplicateInformation = FName(TEXT("ShouldReplicateInformation"));
	bool UOperationInformationBase::ShouldReplicateInformation(UObject* OperatorOwner) const
	{
		OperationInformationBase_eventShouldReplicateInformation_Parms Parms;
		Parms.OperatorOwner=OperatorOwner;
		const_cast<UOperationInformationBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UOperationInformationBase_ShouldReplicateInformation),&Parms);
		return !!Parms.ReturnValue;
	}
	void UOperationInformationBase::StaticRegisterNativesUOperationInformationBase()
	{
		UClass* Class = UOperationInformationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewOperation", &UOperationInformationBase::execAddNewOperation },
			{ "CreateNewOperationInfo", &UOperationInformationBase::execCreateNewOperationInfo },
			{ "FindOperationScope", &UOperationInformationBase::execFindOperationScope },
			{ "GetConstOperations", &UOperationInformationBase::execGetConstOperations },
			{ "GetOperations", &UOperationInformationBase::execGetOperations },
			{ "RemoveOperation", &UOperationInformationBase::execRemoveOperation },
			{ "ShouldReplicateInformation", &UOperationInformationBase::execShouldReplicateInformation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics
	{
		struct OperationInformationBase_eventAddNewOperation_Parms
		{
			UObject* Causer;
			UTriggerStyleBase* OperationStyle;
			UObject* Target;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventAddNewOperation_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventAddNewOperation_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_OperationStyle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventAddNewOperation_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventAddNewOperation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Operation" },
		{ "Comment", "/*\n\x09* Add new operation\n\x09*\n\x09* @param Causer who initiate this operation\n\x09* @param OperationStyle\x09How this operation will apply to target\n\x09* @param Target\x09Which one this operation will apply to\n\x09*\n\x09* #return the index of the new operation scope\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Add new operation\n*\n* @param Causer who initiate this operation\n* @param OperationStyle How this operation will apply to target\n* @param Target Which one this operation will apply to\n*\n* #return the index of the new operation scope" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "AddNewOperation", nullptr, nullptr, sizeof(OperationInformationBase_eventAddNewOperation_Parms), Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_AddNewOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_AddNewOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics
	{
		struct OperationInformationBase_eventCreateNewOperationInfo_Parms
		{
			TSubclassOf<UOperationInformationBase>  OperationClass;
			UObject* Owner;
			UObject* Causer;
			UObject* Target;
			UTriggerStyleBase* Style;
			UOperationInformationBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OperationClass;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Style_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Style;
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
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_OperationClass = { "OperationClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventCreateNewOperationInfo_Parms, OperationClass), Z_Construct_UClass_UOperationInformationBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventCreateNewOperationInfo_Parms, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventCreateNewOperationInfo_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventCreateNewOperationInfo_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Style_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Style = { "Style", nullptr, (EPropertyFlags)0x0010040000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventCreateNewOperationInfo_Parms, Style), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Style_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Style_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventCreateNewOperationInfo_Parms, ReturnValue), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_OperationClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Owner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_Style,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "TriggerRuntime|Operations" },
		{ "Comment", "/*\n\x09* Create new operation to start the trigger task when at the end of rescue\n\x09*\n\x09* @param OperationClass\x09The class to be used to create new operation\n\x09* @param Owner the place where this operation occurred\n\x09* @param Causer Who initiate this operation\n\x09* @param Target which task should be\n\x09*/" },
		{ "CPP_Default_Causer", "None" },
		{ "CPP_Default_Style", "None" },
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Create new operation to start the trigger task when at the end of rescue\n*\n* @param OperationClass The class to be used to create new operation\n* @param Owner the place where this operation occurred\n* @param Causer Who initiate this operation\n* @param Target which task should be" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "CreateNewOperationInfo", nullptr, nullptr, sizeof(OperationInformationBase_eventCreateNewOperationInfo_Parms), Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics
	{
		struct OperationInformationBase_eventFindOperationScope_Parms
		{
			TArray<FOperationScope> OuterScopes;
			UObject* Causer;
			UTriggerStyleBase* OperationStyle;
			UObject* Target;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OuterScopes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OuterScopes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OuterScopes_Inner = { "OuterScopes", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationScope, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OuterScopes = { "OuterScopes", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventFindOperationScope_Parms, OuterScopes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventFindOperationScope_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventFindOperationScope_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OperationStyle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventFindOperationScope_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OuterScopes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OuterScopes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Operation" },
		{ "Comment", "/*\n\x09* Find all scopes which is matched the rule\n\x09* If the value of causer, operation style and Target is null, then the target rule will always passed\n\x09*/" },
		{ "CPP_Default_Causer", "None" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Find all scopes which is matched the rule\n* If the value of causer, operation style and Target is null, then the target rule will always passed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "FindOperationScope", nullptr, nullptr, sizeof(OperationInformationBase_eventFindOperationScope_Parms), Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_FindOperationScope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_FindOperationScope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics
	{
		struct OperationInformationBase_eventGetConstOperations_Parms
		{
			TArray<FOperationScope> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventGetConstOperations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Operation" },
		{ "Comment", "/*\n\x09* Get the causers who rise up this action\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Get the causers who rise up this action" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "GetConstOperations", nullptr, nullptr, sizeof(OperationInformationBase_eventGetConstOperations_Parms), Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_GetConstOperations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_GetConstOperations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics
	{
		struct OperationInformationBase_eventGetOperations_Parms
		{
			TArray<FOperationScope> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationScope, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventGetOperations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Operation" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "GetOperations", nullptr, nullptr, sizeof(OperationInformationBase_eventGetOperations_Parms), Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_GetOperations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_GetOperations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventOnCanAddNewOpertion_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventOnCanAddNewOpertion_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_OperationStyle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventOnCanAddNewOpertion_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperationInformationBase_eventOnCanAddNewOpertion_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OperationInformationBase_eventOnCanAddNewOpertion_Parms), &Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_Target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* The rule used when added new operation.\n\x09* Give the BP one access to determine how to add the new operation\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* The rule used when added new operation.\n* Give the BP one access to determine how to add the new operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "OnCanAddNewOpertion", nullptr, nullptr, sizeof(OperationInformationBase_eventOnCanAddNewOpertion_Parms), Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics
	{
		struct OperationInformationBase_eventRemoveOperation_Parms
		{
			UObject* Causer;
			UTriggerStyleBase* OperationStyle;
			UObject* Target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationStyle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventRemoveOperation_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_OperationStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_OperationStyle = { "OperationStyle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventRemoveOperation_Parms, OperationStyle), Z_Construct_UClass_UTriggerStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_OperationStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_OperationStyle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventRemoveOperation_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_OperationStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Operation" },
		{ "Comment", "/*\n\x09* Remove the operation if it exist\n\x09* When all the parameter is null then this function will remove all operation scopes in this operation information\n\x09*\n\x09* @param Causer who initiate this operation\n\x09* @param OperationStyle\x09How this operation will apply to target\n\x09* @param Target\x09Which one this operation will apply to\n\x09*\n\x09*/" },
		{ "CPP_Default_Causer", "None" },
		{ "CPP_Default_OperationStyle", "None" },
		{ "CPP_Default_Target", "None" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Remove the operation if it exist\n* When all the parameter is null then this function will remove all operation scopes in this operation information\n*\n* @param Causer who initiate this operation\n* @param OperationStyle How this operation will apply to target\n* @param Target Which one this operation will apply to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "RemoveOperation", nullptr, nullptr, sizeof(OperationInformationBase_eventRemoveOperation_Parms), Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_RemoveOperation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_RemoveOperation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperatorOwner;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::NewProp_OperatorOwner = { "OperatorOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OperationInformationBase_eventShouldReplicateInformation_Parms, OperatorOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((OperationInformationBase_eventShouldReplicateInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OperationInformationBase_eventShouldReplicateInformation_Parms), &Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::NewProp_OperatorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Try to check weather this operation information should be replicated.\n\x09*\n\x09* @param OperatorOwner\x09The owner who initiate this operation, this may not the same as the causer, It is always the place which this operation stay\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Try to check weather this operation information should be replicated.\n*\n* @param OperatorOwner  The owner who initiate this operation, this may not the same as the causer, It is always the place which this operation stay" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOperationInformationBase, nullptr, "ShouldReplicateInformation", nullptr, nullptr, sizeof(OperationInformationBase_eventShouldReplicateInformation_Parms), Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister()
	{
		return UOperationInformationBase::StaticClass();
	}
	struct Z_Construct_UClass_UOperationInformationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Replicated_MetaData[];
#endif
		static void NewProp_Replicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Replicated;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Operations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Operations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOperationInformationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOperationInformationBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOperationInformationBase_AddNewOperation, "AddNewOperation" }, // 1754922157
		{ &Z_Construct_UFunction_UOperationInformationBase_CreateNewOperationInfo, "CreateNewOperationInfo" }, // 741847527
		{ &Z_Construct_UFunction_UOperationInformationBase_FindOperationScope, "FindOperationScope" }, // 1875642182
		{ &Z_Construct_UFunction_UOperationInformationBase_GetConstOperations, "GetConstOperations" }, // 405522936
		{ &Z_Construct_UFunction_UOperationInformationBase_GetOperations, "GetOperations" }, // 3434269141
		{ &Z_Construct_UFunction_UOperationInformationBase_OnCanAddNewOpertion, "OnCanAddNewOpertion" }, // 1710404315
		{ &Z_Construct_UFunction_UOperationInformationBase_RemoveOperation, "RemoveOperation" }, // 2082859366
		{ &Z_Construct_UFunction_UOperationInformationBase_ShouldReplicateInformation, "ShouldReplicateInformation" }, // 1903005090
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperationInformationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|OperationInfo" },
		{ "Comment", "/*\n* The base class to identify the operation information\n*/" },
		{ "IncludePath", "Tool/OperationInformation/OperationInformationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* The base class to identify the operation information" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated_MetaData[] = {
		{ "Category", "OperationInfo" },
		{ "Comment", "/*\n\x09* Flag to check weather we should replicate its properties which are marked as replicated\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "* Flag to check weather we should replicate its properties which are marked as replicated" },
	};
#endif
	void Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated_SetBit(void* Obj)
	{
		((UOperationInformationBase*)Obj)->Replicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated = { "Replicated", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UOperationInformationBase), &Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations_Inner = { "Operations", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationScope, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations_MetaData[] = {
		{ "Comment", "//The internal operation data\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationBase.h" },
		{ "ToolTip", "The internal operation data" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations = { "Operations", nullptr, (EPropertyFlags)0x0040008000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOperationInformationBase, Operations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOperationInformationBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Replicated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOperationInformationBase_Statics::NewProp_Operations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOperationInformationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOperationInformationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOperationInformationBase_Statics::ClassParams = {
		&UOperationInformationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UOperationInformationBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationBase_Statics::PropPointers),
		0,
		0x04B000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOperationInformationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOperationInformationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOperationInformationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOperationInformationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOperationInformationBase, 2333407513);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UOperationInformationBase>()
	{
		return UOperationInformationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOperationInformationBase(Z_Construct_UClass_UOperationInformationBase, &UOperationInformationBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UOperationInformationBase"), false, nullptr, nullptr, nullptr);

	void UOperationInformationBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Operations(TEXT("Operations"));

		const bool bIsValid = true
			&& Name_Operations == ClassReps[(int32)ENetFields_Private::Operations].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UOperationInformationBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOperationInformationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
