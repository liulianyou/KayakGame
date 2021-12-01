// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/NewTriggerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewTriggerBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventTaskRunningStateSignature_Parms
		{
			UTriggerTaskBase* Target;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventTaskRunningStateSignature_Parms, Target), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "TaskRunningStateSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventTaskRunningStateSignature_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execIsAllTaskInThisTriggerFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAllTaskInThisTriggerFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execHasBeenToggled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBeenToggled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execCanRepeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanRepeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execGetTriggerTaskComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskComponentBase**)Z_Param__Result=P_THIS->GetTriggerTaskComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execGetTriggerManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerManager**)Z_Param__Result=P_THIS->GetTriggerManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execTaskRunStatusCheck)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TaskRunStatusCheck(Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execCanbeToggled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanbeToggled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execDuplicateTrigger)
	{
		P_GET_OBJECT(ULevel,Z_Param_TargetLevel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TScriptInterface<ITriggerInterface>*)Z_Param__Result=P_THIS->DuplicateTrigger(Z_Param_TargetLevel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execRemoveTriggerTaskComponent)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ComponentID);
		P_GET_UBOOL(Z_Param_IncludeChildrenComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTriggerTaskComponent(Z_Param_Out_ComponentID,Z_Param_IncludeChildrenComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execAddTriggerTaskComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_TriggerTaskComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskComponentBase**)Z_Param__Result=P_THIS->AddTriggerTaskComponent(Z_Param_TriggerTaskComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execGetTriggerTaskComponents)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_TaskComponents);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetTriggerTaskComponents(Z_Param_Out_TaskComponents);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execGetUniqueRuntimeID)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUniqueRuntimeID(Z_Param_Out_OutID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANewTriggerBase::execGetBoxBounds)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_HalfBoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoxBounds(Z_Param_Out_Origin,Z_Param_Out_HalfBoxExtent);
		P_NATIVE_END;
	}
	void ANewTriggerBase::StaticRegisterNativesANewTriggerBase()
	{
		UClass* Class = ANewTriggerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddTriggerTaskComponent", &ANewTriggerBase::execAddTriggerTaskComponent },
			{ "CanbeToggled", &ANewTriggerBase::execCanbeToggled },
			{ "CanRepeat", &ANewTriggerBase::execCanRepeat },
			{ "DuplicateTrigger", &ANewTriggerBase::execDuplicateTrigger },
			{ "GetBoxBounds", &ANewTriggerBase::execGetBoxBounds },
			{ "GetTriggerManager", &ANewTriggerBase::execGetTriggerManager },
			{ "GetTriggerTaskComponent", &ANewTriggerBase::execGetTriggerTaskComponent },
			{ "GetTriggerTaskComponents", &ANewTriggerBase::execGetTriggerTaskComponents },
			{ "GetUniqueRuntimeID", &ANewTriggerBase::execGetUniqueRuntimeID },
			{ "HasBeenToggled", &ANewTriggerBase::execHasBeenToggled },
			{ "IsAllTaskInThisTriggerFinished", &ANewTriggerBase::execIsAllTaskInThisTriggerFinished },
			{ "RemoveTriggerTaskComponent", &ANewTriggerBase::execRemoveTriggerTaskComponent },
			{ "TaskRunStatusCheck", &ANewTriggerBase::execTaskRunStatusCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics
	{
		struct NewTriggerBase_eventAddTriggerTaskComponent_Parms
		{
			UTriggerTaskComponentBase* TriggerTaskComponent;
			UTriggerTaskComponentBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTaskComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTaskComponent;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_TriggerTaskComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_TriggerTaskComponent = { "TriggerTaskComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventAddTriggerTaskComponent_Parms, TriggerTaskComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_TriggerTaskComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_TriggerTaskComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventAddTriggerTaskComponent_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_TriggerTaskComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "AddTriggerTaskComponent", nullptr, nullptr, sizeof(NewTriggerBase_eventAddTriggerTaskComponent_Parms), Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics
	{
		struct NewTriggerBase_eventCanbeToggled_Parms
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
	void Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventCanbeToggled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventCanbeToggled_Parms), &Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Check weather this trigger can be toggled\n" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "Check weather this trigger can be toggled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "CanbeToggled", nullptr, nullptr, sizeof(NewTriggerBase_eventCanbeToggled_Parms), Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_CanbeToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_CanbeToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics
	{
		struct NewTriggerBase_eventCanRepeat_Parms
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
	void Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventCanRepeat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventCanRepeat_Parms), &Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime" },
		{ "Comment", "//Get the flag weather this trigger can be toggled repeatably\n" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "Get the flag weather this trigger can be toggled repeatably" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "CanRepeat", nullptr, nullptr, sizeof(NewTriggerBase_eventCanRepeat_Parms), Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_CanRepeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_CanRepeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics
	{
		struct NewTriggerBase_eventDuplicateTrigger_Parms
		{
			ULevel* TargetLevel;
			TScriptInterface<ITriggerInterface> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLevel;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::NewProp_TargetLevel = { "TargetLevel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventDuplicateTrigger_Parms, TargetLevel), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventDuplicateTrigger_Parms, ReturnValue), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::NewProp_TargetLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Duplicate a new trigger of this trigger to the target level.\n\x09*/" },
		{ "CPP_Default_TargetLevel", "None" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "* Duplicate a new trigger of this trigger to the target level." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "DuplicateTrigger", nullptr, nullptr, sizeof(NewTriggerBase_eventDuplicateTrigger_Parms), Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics
	{
		struct NewTriggerBase_eventGetBoxBounds_Parms
		{
			FVector Origin;
			FVector HalfBoxExtent;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Origin;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HalfBoxExtent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventGetBoxBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_HalfBoxExtent = { "HalfBoxExtent", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventGetBoxBounds_Parms, HalfBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventGetBoxBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventGetBoxBounds_Parms), &Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_HalfBoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Override TriggerInterface Begin\n" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "Override TriggerInterface Begin" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "GetBoxBounds", nullptr, nullptr, sizeof(NewTriggerBase_eventGetBoxBounds_Parms), Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics
	{
		struct NewTriggerBase_eventGetTriggerManager_Parms
		{
			UTriggerManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventGetTriggerManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "GetTriggerManager", nullptr, nullptr, sizeof(NewTriggerBase_eventGetTriggerManager_Parms), Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics
	{
		struct NewTriggerBase_eventGetTriggerTaskComponent_Parms
		{
			UTriggerTaskComponentBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventGetTriggerTaskComponent_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "GetTriggerTaskComponent", nullptr, nullptr, sizeof(NewTriggerBase_eventGetTriggerTaskComponent_Parms), Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics
	{
		struct NewTriggerBase_eventGetTriggerTaskComponents_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_Inner = { "TaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents = { "TaskComponents", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventGetTriggerTaskComponents_Parms, TaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::NewProp_TaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "GetTriggerTaskComponents", nullptr, nullptr, sizeof(NewTriggerBase_eventGetTriggerTaskComponents_Parms), Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics
	{
		struct NewTriggerBase_eventGetUniqueRuntimeID_Parms
		{
			int32 OutID;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OutID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::NewProp_OutID = { "OutID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventGetUniqueRuntimeID_Parms, OutID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventGetUniqueRuntimeID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventGetUniqueRuntimeID_Parms), &Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::NewProp_OutID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "GetUniqueRuntimeID", nullptr, nullptr, sizeof(NewTriggerBase_eventGetUniqueRuntimeID_Parms), Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics
	{
		struct NewTriggerBase_eventHasBeenToggled_Parms
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
	void Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventHasBeenToggled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventHasBeenToggled_Parms), &Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime" },
		{ "Comment", "//Get the flag weather this trigger has been toggled\n" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "Get the flag weather this trigger has been toggled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "HasBeenToggled", nullptr, nullptr, sizeof(NewTriggerBase_eventHasBeenToggled_Parms), Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics
	{
		struct NewTriggerBase_eventIsAllTaskInThisTriggerFinished_Parms
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
	void Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventIsAllTaskInThisTriggerFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventIsAllTaskInThisTriggerFinished_Parms), &Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunTime" },
		{ "Comment", "//Get the flag weather all task in this trigger have finished\n" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "Get the flag weather all task in this trigger have finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "IsAllTaskInThisTriggerFinished", nullptr, nullptr, sizeof(NewTriggerBase_eventIsAllTaskInThisTriggerFinished_Parms), Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics
	{
		struct NewTriggerBase_eventRemoveTriggerTaskComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventRemoveTriggerTaskComponent_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID_MetaData)) };
	void Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent_SetBit(void* Obj)
	{
		((NewTriggerBase_eventRemoveTriggerTaskComponent_Parms*)Obj)->IncludeChildrenComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent = { "IncludeChildrenComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventRemoveTriggerTaskComponent_Parms), &Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NewTriggerBase_eventRemoveTriggerTaskComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NewTriggerBase_eventRemoveTriggerTaskComponent_Parms), &Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_IncludeChildrenComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Remove all components which ID is equal to the component ID,\n\x09* If the target component is the root component then I will pick up another trigger task component as root component,\n\x09* If there is not another trigger task component then just remove the root component\n\x09*/" },
		{ "CPP_Default_IncludeChildrenComponent", "false" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "* Remove all components which ID is equal to the component ID,\n* If the target component is the root component then I will pick up another trigger task component as root component,\n* If there is not another trigger task component then just remove the root component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "RemoveTriggerTaskComponent", nullptr, nullptr, sizeof(NewTriggerBase_eventRemoveTriggerTaskComponent_Parms), Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics
	{
		struct NewTriggerBase_eventTaskRunStatusCheck_Parms
		{
			UTriggerTaskBase* Task;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewTriggerBase_eventTaskRunStatusCheck_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANewTriggerBase, nullptr, "TaskRunStatusCheck", nullptr, nullptr, sizeof(NewTriggerBase_eventTaskRunStatusCheck_Parms), Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANewTriggerBase_NoRegister()
	{
		return ANewTriggerBase::StaticClass();
	}
	struct Z_Construct_UClass_ANewTriggerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnTaskRunning_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTaskRunning;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RegistedStateEventTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegistedStateEventTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RegistedStateEventTasks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTaskComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTaskComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenRegisted_MetaData[];
#endif
		static void NewProp_HasBeenRegisted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenRegisted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANewTriggerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANewTriggerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANewTriggerBase_AddTriggerTaskComponent, "AddTriggerTaskComponent" }, // 3078968963
		{ &Z_Construct_UFunction_ANewTriggerBase_CanbeToggled, "CanbeToggled" }, // 2336866925
		{ &Z_Construct_UFunction_ANewTriggerBase_CanRepeat, "CanRepeat" }, // 1066295247
		{ &Z_Construct_UFunction_ANewTriggerBase_DuplicateTrigger, "DuplicateTrigger" }, // 453823782
		{ &Z_Construct_UFunction_ANewTriggerBase_GetBoxBounds, "GetBoxBounds" }, // 993059699
		{ &Z_Construct_UFunction_ANewTriggerBase_GetTriggerManager, "GetTriggerManager" }, // 672168494
		{ &Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponent, "GetTriggerTaskComponent" }, // 2619491263
		{ &Z_Construct_UFunction_ANewTriggerBase_GetTriggerTaskComponents, "GetTriggerTaskComponents" }, // 2757288785
		{ &Z_Construct_UFunction_ANewTriggerBase_GetUniqueRuntimeID, "GetUniqueRuntimeID" }, // 2673174875
		{ &Z_Construct_UFunction_ANewTriggerBase_HasBeenToggled, "HasBeenToggled" }, // 858186418
		{ &Z_Construct_UFunction_ANewTriggerBase_IsAllTaskInThisTriggerFinished, "IsAllTaskInThisTriggerFinished" }, // 679510969
		{ &Z_Construct_UFunction_ANewTriggerBase_RemoveTriggerTaskComponent, "RemoveTriggerTaskComponent" }, // 1513996173
		{ &Z_Construct_UFunction_ANewTriggerBase_TaskRunStatusCheck, "TaskRunStatusCheck" }, // 1482092425
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewTriggerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This Trigger is not the same as the Engine Trigger class which root component is ShapeComponent,\n* This class used to make the Designer to group some items in Blueprint Class\n*/" },
		{ "IncludePath", "NewTriggerBase.h" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "* This Trigger is not the same as the Engine Trigger class which root component is ShapeComponent,\n* This class used to make the Designer to group some items in Blueprint Class" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_OnTaskRunning_MetaData[] = {
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_OnTaskRunning = { "OnTaskRunning", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewTriggerBase, OnTaskRunning), Z_Construct_UDelegateFunction_TriggerRunTime_TaskRunningStateSignature__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_OnTaskRunning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_OnTaskRunning_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks_Inner = { "RegistedStateEventTasks", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks = { "RegistedStateEventTasks", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewTriggerBase, RegistedStateEventTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_TriggerTaskComponent_MetaData[] = {
		{ "Category", "Task" },
		{ "Comment", "//The main task component of this actor.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "The main task component of this actor." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_TriggerTaskComponent = { "TriggerTaskComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANewTriggerBase, TriggerTaskComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_TriggerTaskComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_TriggerTaskComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted_MetaData[] = {
		{ "Comment", "//Flag to check weather this trigger have been registered\n" },
		{ "ModuleRelativePath", "Public/NewTriggerBase.h" },
		{ "ToolTip", "Flag to check weather this trigger have been registered" },
	};
#endif
	void Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted_SetBit(void* Obj)
	{
		((ANewTriggerBase*)Obj)->HasBeenRegisted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted = { "HasBeenRegisted", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ANewTriggerBase), &Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANewTriggerBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_OnTaskRunning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_RegistedStateEventTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_TriggerTaskComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANewTriggerBase_Statics::NewProp_HasBeenRegisted,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANewTriggerBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTriggerInterface_NoRegister, (int32)VTABLE_OFFSET(ANewTriggerBase, ITriggerInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANewTriggerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANewTriggerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANewTriggerBase_Statics::ClassParams = {
		&ANewTriggerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANewTriggerBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANewTriggerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANewTriggerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANewTriggerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANewTriggerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANewTriggerBase, 802714227);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ANewTriggerBase>()
	{
		return ANewTriggerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANewTriggerBase(Z_Construct_UClass_ANewTriggerBase, &ANewTriggerBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ANewTriggerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANewTriggerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
