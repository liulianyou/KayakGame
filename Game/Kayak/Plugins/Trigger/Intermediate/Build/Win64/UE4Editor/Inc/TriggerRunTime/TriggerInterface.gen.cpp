// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerInterface() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
// End Cross Module References
	DEFINE_FUNCTION(ITriggerInterface::execTrigger)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Trigger();
		P_NATIVE_END;
	}
	UTriggerTaskComponentBase* ITriggerInterface::OnAddTriggerTaskComponent(UTriggerTaskComponentBase* NewComponent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnAddTriggerTaskComponent instead.");
		TriggerInterface_eventOnAddTriggerTaskComponent_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITriggerInterface::OnCanBeToggled(bool& Toggled) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCanBeToggled instead.");
	}
	TScriptInterface<ITriggerInterface> ITriggerInterface::OnDuplicateTrigger(ULevel* TargetLeve)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnDuplicateTrigger instead.");
		TriggerInterface_eventOnDuplicateTrigger_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITriggerInterface::OnGetBoxBounds(FVector& Origin, FVector& HalfBoxExtent) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGetBoxBounds instead.");
		TriggerInterface_eventOnGetBoxBounds_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITriggerInterface::OnGetTriggerTaskComponents(TArray<UTriggerTaskComponentBase*>& TaskComponents) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGetTriggerTaskComponents instead.");
	}
	bool ITriggerInterface::OnGetUniqueRuntimeID(int32& OutID) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnGetUniqueRuntimeID instead.");
		TriggerInterface_eventOnGetUniqueRuntimeID_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITriggerInterface::OnRemoveTriggerTaskComponentByID(FGuid const& ComponentID, bool IncludeChildrenComponent)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnRemoveTriggerTaskComponentByID instead.");
		TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms Parms;
		return Parms.ReturnValue;
	}
	void UTriggerInterface::StaticRegisterNativesUTriggerInterface()
	{
		UClass* Class = UTriggerInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Trigger", &ITriggerInterface::execTrigger },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnAddTriggerTaskComponent_Parms, NewComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_NewComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_NewComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnAddTriggerTaskComponent_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_NewComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Add the new trigger task component to the trigger\n\x09* \n\x09* #return false means added success.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
		{ "ToolTip", "* Add the new trigger task component to the trigger\n*\n* #return false means added success." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnAddTriggerTaskComponent", nullptr, nullptr, sizeof(TriggerInterface_eventOnAddTriggerTaskComponent_Parms), Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics
	{
		static void NewProp_Toggled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Toggled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::NewProp_Toggled_SetBit(void* Obj)
	{
		((TriggerInterface_eventOnCanBeToggled_Parms*)Obj)->Toggled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::NewProp_Toggled = { "Toggled", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterface_eventOnCanBeToggled_Parms), &Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::NewProp_Toggled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::NewProp_Toggled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* @param Toggled this is the return value, you should change it in this function\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
		{ "ToolTip", "* @param Toggled this is the return value, you should change it in this function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnCanBeToggled", nullptr, nullptr, sizeof(TriggerInterface_eventOnCanBeToggled_Parms), Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetLeve;
		static const UE4CodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::NewProp_TargetLeve = { "TargetLeve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnDuplicateTrigger_Parms, TargetLeve), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnDuplicateTrigger_Parms, ReturnValue), Z_Construct_UClass_UTriggerInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::NewProp_TargetLeve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Try to copy the this trigger to target level\n\x09* \n\x09* @param TargetLevel If it is null then the I will copy new trigger the the level current trigger at\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
		{ "ToolTip", "* Try to copy the this trigger to target level\n*\n* @param TargetLevel If it is null then the I will copy new trigger the the level current trigger at" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnDuplicateTrigger", nullptr, nullptr, sizeof(TriggerInterface_eventOnDuplicateTrigger_Parms), Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics
	{
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnGetBoxBounds_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_HalfBoxExtent = { "HalfBoxExtent", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnGetBoxBounds_Parms, HalfBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterface_eventOnGetBoxBounds_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterface_eventOnGetBoxBounds_Parms), &Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_Origin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_HalfBoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get the bounds for target trigger\n\x09*\n\x09* @param Origin\x09\x09\x09\x09The origin of the this box\n\x09* @param HalfBoxExtent\x09\x09The half value for each axis of the box\n\x09*\n\x09* #return\x09""false means this function should not work, the Origin and HalfBoxExtend should be dropped\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
		{ "ToolTip", "* Get the bounds for target trigger\n*\n* @param Origin                         The origin of the this box\n* @param HalfBoxExtent          The half value for each axis of the box\n*\n* #return       false means this function should not work, the Origin and HalfBoxExtend should be dropped" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnGetBoxBounds", nullptr, nullptr, sizeof(TriggerInterface_eventOnGetBoxBounds_Parms), Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics
	{
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents_Inner = { "TaskComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents = { "TaskComponents", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnGetTriggerTaskComponents_Parms, TaskComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::NewProp_TaskComponents,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnGetTriggerTaskComponents", nullptr, nullptr, sizeof(TriggerInterface_eventOnGetTriggerTaskComponents_Parms), Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OutID;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::NewProp_OutID = { "OutID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnGetUniqueRuntimeID_Parms, OutID), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterface_eventOnGetUniqueRuntimeID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterface_eventOnGetUniqueRuntimeID_Parms), &Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::NewProp_OutID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get the unique ID for the trigger runtime\n" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
		{ "ToolTip", "Get the unique ID for the trigger runtime" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnGetUniqueRuntimeID", nullptr, nullptr, sizeof(TriggerInterface_eventOnGetUniqueRuntimeID_Parms), Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics
	{
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ComponentID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ComponentID = { "ComponentID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms, ComponentID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ComponentID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ComponentID_MetaData)) };
	void Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_IncludeChildrenComponent_SetBit(void* Obj)
	{
		((TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms*)Obj)->IncludeChildrenComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_IncludeChildrenComponent = { "IncludeChildrenComponent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms), &Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_IncludeChildrenComponent_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms), &Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ComponentID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_IncludeChildrenComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Remove the trigger task component with the specific component ID\n\x09* \n\x09* #return true means removed success, visa verse\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
		{ "ToolTip", "* Remove the trigger task component with the specific component ID\n*\n* #return true means removed success, visa verse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "OnRemoveTriggerTaskComponentByID", nullptr, nullptr, sizeof(TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms), Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerInterface_Trigger_Statics
	{
		struct TriggerInterface_eventTrigger_Parms
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
	void Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerInterface_eventTrigger_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerInterface_eventTrigger_Parms), &Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerInterface, nullptr, "Trigger", nullptr, nullptr, sizeof(TriggerInterface_eventTrigger_Parms), Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerInterface_Trigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerInterface_Trigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerInterface_NoRegister()
	{
		return UTriggerInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerInterface_OnAddTriggerTaskComponent, "OnAddTriggerTaskComponent" }, // 3341839813
		{ &Z_Construct_UFunction_UTriggerInterface_OnCanBeToggled, "OnCanBeToggled" }, // 2187539006
		{ &Z_Construct_UFunction_UTriggerInterface_OnDuplicateTrigger, "OnDuplicateTrigger" }, // 2651639785
		{ &Z_Construct_UFunction_UTriggerInterface_OnGetBoxBounds, "OnGetBoxBounds" }, // 3589218269
		{ &Z_Construct_UFunction_UTriggerInterface_OnGetTriggerTaskComponents, "OnGetTriggerTaskComponents" }, // 1765283452
		{ &Z_Construct_UFunction_UTriggerInterface_OnGetUniqueRuntimeID, "OnGetUniqueRuntimeID" }, // 21038678
		{ &Z_Construct_UFunction_UTriggerInterface_OnRemoveTriggerTaskComponentByID, "OnRemoveTriggerTaskComponentByID" }, // 109921615
		{ &Z_Construct_UFunction_UTriggerInterface_Trigger, "Trigger" }, // 1261592757
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITriggerInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerInterface_Statics::ClassParams = {
		&UTriggerInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTriggerInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerInterface, 3845073945);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerInterface>()
	{
		return UTriggerInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerInterface(Z_Construct_UClass_UTriggerInterface, &UTriggerInterface::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerInterface);
	static FName NAME_UTriggerInterface_OnAddTriggerTaskComponent = FName(TEXT("OnAddTriggerTaskComponent"));
	UTriggerTaskComponentBase* ITriggerInterface::Execute_OnAddTriggerTaskComponent(UObject* O, UTriggerTaskComponentBase* NewComponent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnAddTriggerTaskComponent_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnAddTriggerTaskComponent);
		if (Func)
		{
			Parms.NewComponent=NewComponent;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerInterface_OnCanBeToggled = FName(TEXT("OnCanBeToggled"));
	void ITriggerInterface::Execute_OnCanBeToggled(const UObject* O, bool& Toggled)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnCanBeToggled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnCanBeToggled);
		if (Func)
		{
			Parms.Toggled=Toggled;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Toggled=Parms.Toggled;
		}
	}
	static FName NAME_UTriggerInterface_OnDuplicateTrigger = FName(TEXT("OnDuplicateTrigger"));
	TScriptInterface<ITriggerInterface> ITriggerInterface::Execute_OnDuplicateTrigger(UObject* O, ULevel* TargetLeve)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnDuplicateTrigger_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnDuplicateTrigger);
		if (Func)
		{
			Parms.TargetLeve=TargetLeve;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerInterface_OnGetBoxBounds = FName(TEXT("OnGetBoxBounds"));
	bool ITriggerInterface::Execute_OnGetBoxBounds(const UObject* O, FVector& Origin, FVector& HalfBoxExtent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnGetBoxBounds_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnGetBoxBounds);
		if (Func)
		{
			Parms.Origin=Origin;
			Parms.HalfBoxExtent=HalfBoxExtent;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Origin=Parms.Origin;
			HalfBoxExtent=Parms.HalfBoxExtent;
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerInterface_OnGetTriggerTaskComponents = FName(TEXT("OnGetTriggerTaskComponents"));
	void ITriggerInterface::Execute_OnGetTriggerTaskComponents(const UObject* O, TArray<UTriggerTaskComponentBase*>& TaskComponents)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnGetTriggerTaskComponents_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnGetTriggerTaskComponents);
		if (Func)
		{
			Parms.TaskComponents=TaskComponents;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			TaskComponents=Parms.TaskComponents;
		}
	}
	static FName NAME_UTriggerInterface_OnGetUniqueRuntimeID = FName(TEXT("OnGetUniqueRuntimeID"));
	bool ITriggerInterface::Execute_OnGetUniqueRuntimeID(const UObject* O, int32& OutID)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnGetUniqueRuntimeID_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnGetUniqueRuntimeID);
		if (Func)
		{
			Parms.OutID=OutID;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			OutID=Parms.OutID;
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerInterface_OnRemoveTriggerTaskComponentByID = FName(TEXT("OnRemoveTriggerTaskComponentByID"));
	bool ITriggerInterface::Execute_OnRemoveTriggerTaskComponentByID(UObject* O, FGuid const& ComponentID, bool IncludeChildrenComponent)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerInterface::StaticClass()));
		TriggerInterface_eventOnRemoveTriggerTaskComponentByID_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerInterface_OnRemoveTriggerTaskComponentByID);
		if (Func)
		{
			Parms.ComponentID=ComponentID;
			Parms.IncludeChildrenComponent=IncludeChildrenComponent;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
