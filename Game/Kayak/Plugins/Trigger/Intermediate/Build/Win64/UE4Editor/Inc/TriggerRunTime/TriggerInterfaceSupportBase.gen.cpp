// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerInterfaceSupportBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterfaceSupportBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterfaceSupportBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execCanbeToggled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanbeToggled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execGetUniqueRuntimeID)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUniqueRuntimeID(Z_Param_Out_OutId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execAddTriggerTaskComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_NewComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskComponentBase**)Z_Param__Result=P_THIS->AddTriggerTaskComponent(Z_Param_NewComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execRemoveTriggerTaskComponent)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ComponentID);
		P_GET_UBOOL(Z_Param_IncludeChildrenComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTriggerTaskComponent(Z_Param_Out_ComponentID,Z_Param_IncludeChildrenComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execGetTriggerTaskComponents)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_TaskComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriggerTaskComponents(Z_Param_Out_TaskComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execGetOwnerObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetOwnerObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerInterfaceSupportBase::execInitialize)
	{
		P_GET_OBJECT(UObject,Z_Param_ObjectOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_ObjectOwner);
		P_NATIVE_END;
	}
	void UTriggerInterfaceSupportBase::StaticRegisterNativesUTriggerInterfaceSupportBase()
	{
		UClass* Class = UTriggerInterfaceSupportBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTriggerTaskComponent", &UTriggerInterfaceSupportBase::execAddTriggerTaskComponent },
			{ "CanbeToggled", &UTriggerInterfaceSupportBase::execCanbeToggled },
			{ "GetOwnerObject", &UTriggerInterfaceSupportBase::execGetOwnerObject },
			{ "GetTriggerTaskComponents", &UTriggerInterfaceSupportBase::execGetTriggerTaskComponents },
			{ "GetUniqueRuntimeID", &UTriggerInterfaceSupportBase::execGetUniqueRuntimeID },
			{ "Initialize", &UTriggerInterfaceSupportBase::execInitialize },
			{ "RemoveTriggerTaskComponent", &UTriggerInterfaceSupportBase::execRemoveTriggerTaskComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics
	{
		struct TriggerInterfaceSupportBase_eventAddTriggerTaskComponent_Parms
		{
			UTriggerTaskComponentBase* NewComponent;
			UTriggerTaskComponentBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventAddTriggerTaskComponent_Parms, NewComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_NewComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventAddTriggerTaskComponent_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_NewComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "AddTriggerTaskComponent", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventAddTriggerTaskComponent_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics
	{
		struct TriggerInterfaceSupportBase_eventCanbeToggled_Parms
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
	void Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterfaceSupportBase_eventCanbeToggled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterfaceSupportBase_eventCanbeToggled_Parms), &Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Check weather this trigger can be toggled\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
		{ "ToolTip", "Check weather this trigger can be toggled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "CanbeToggled", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventCanbeToggled_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics
	{
		struct TriggerInterfaceSupportBase_eventGetOwnerObject_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventGetOwnerObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "GetOwnerObject", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventGetOwnerObject_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics
	{
		struct TriggerInterfaceSupportBase_eventGetTriggerTaskComponents_Parms
		{
			TArray<UTriggerTaskComponentBase*> TaskComponents;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TaskComponents;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_Inner = { "TaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents = { "TaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventGetTriggerTaskComponents_Parms, TaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "GetTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventGetTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics
	{
		struct TriggerInterfaceSupportBase_eventGetUniqueRuntimeID_Parms
		{
			int32 OutId;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OutId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::NewProp_OutId = { "OutId", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventGetUniqueRuntimeID_Parms, OutId), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterfaceSupportBase_eventGetUniqueRuntimeID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterfaceSupportBase_eventGetUniqueRuntimeID_Parms), &Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::NewProp_OutId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "GetUniqueRuntimeID", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventGetUniqueRuntimeID_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics
	{
		struct TriggerInterfaceSupportBase_eventInitialize_Parms
		{
			UObject* ObjectOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ObjectOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::NewProp_ObjectOwner = { "ObjectOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventInitialize_Parms, ObjectOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::NewProp_ObjectOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Initialize this support by the target object owner\n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
		{ "ToolTip", "Initialize this support by the target object owner" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "Initialize", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventInitialize_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics
	{
		struct TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms
		{
			FGuid ComponentID;
			bool IncludeChildrenComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentID;
		static void NewProp_IncludeChildrenComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IncludeChildrenComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID_MetaData)) };
	void Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent_SetBit(void* Obj)
	{
		((TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms*)Obj)->IncludeChildrenComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent = { "IncludeChildrenComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms), &Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms), &Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "CPP_Default_IncludeChildrenComponent", "false" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterfaceSupportBase, nullptr, "RemoveTriggerTaskComponent", nullptr, nullptr, sizeof(TriggerInterfaceSupportBase_eventRemoveTriggerTaskComponent_Parms), Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerInterfaceSupportBase_NoRegister()
	{
		return UTriggerInterfaceSupportBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_AddTriggerTaskComponent, "AddTriggerTaskComponent" }, // 876803821
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_CanbeToggled, "CanbeToggled" }, // 1094480134
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetOwnerObject, "GetOwnerObject" }, // 1175075072
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetTriggerTaskComponents, "GetTriggerTaskComponents" }, // 2488080258
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_GetUniqueRuntimeID, "GetUniqueRuntimeID" }, // 3150997110
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_Initialize, "Initialize" }, // 2088889207
		{ &Z_Construct_UFunction_UTriggerInterfaceSupportBase_RemoveTriggerTaskComponent, "RemoveTriggerTaskComponent" }, // 3262541215
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerInterfaceSupport" },
		{ "IncludePath", "Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "//The owner of this support \n" },
		{ "ModuleRelativePath", "Public/Tool/TriggerInterfaceSupport/TriggerInterfaceSupportBase.h" },
		{ "ToolTip", "The owner of this support" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerInterfaceSupportBase, Owner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerInterfaceSupportBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::ClassParams = {
		&UTriggerInterfaceSupportBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::PropPointers),
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerInterfaceSupportBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerInterfaceSupportBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerInterfaceSupportBase, 137595938);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerInterfaceSupportBase>()
	{
		return UTriggerInterfaceSupportBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerInterfaceSupportBase(Z_Construct_UClass_UTriggerInterfaceSupportBase, &UTriggerInterfaceSupportBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerInterfaceSupportBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerInterfaceSupportBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
