// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionInfoGenerationBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionGenerationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionGenerationBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionInfo();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EActorLayer();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionGenerationBase::execGetinteractionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInteractionInfo>*)Z_Param__Result=P_THIS->GetinteractionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execGetConstInteractionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInteractionInfo>*)Z_Param__Result=P_THIS->GetConstInteractionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execHasValidInteractionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasValidInteractionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execGetInteractionLayer)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EActorLayer*)Z_Param__Result=P_THIS->GetInteractionLayer_Implementation(Z_Param_Actor,Z_Param_Task);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execSetCurrentEffectInteractionInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentEffectInteractionInfo(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execGetCurrentEffectInteractionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentEffectInteractionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execFindOrAddInteractionInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_Interactor);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_PROPERTY(FStrProperty,Z_Param_InteractStage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindOrAddInteractionInfo(Z_Param_Interactor,Z_Param_Task,Z_Param_InteractStage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionGenerationBase::execRemoveInteraction)
	{
		P_GET_TARRAY(UObject*,Z_Param_interactions);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InteractionStage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveInteraction(Z_Param_interactions,Z_Param_Out_InteractionStage);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionGenerationBase_GetInteractionLayer = FName(TEXT("GetInteractionLayer"));
	EActorLayer UInteractionGenerationBase::GetInteractionLayer(AActor* Actor, UTriggerTaskBase* Task)
	{
		InteractionGenerationBase_eventGetInteractionLayer_Parms Parms;
		Parms.Actor=Actor;
		Parms.Task=Task;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionGenerationBase_GetInteractionLayer),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UInteractionGenerationBase_OnGenerateInteractionInfo = FName(TEXT("OnGenerateInteractionInfo"));
	bool UInteractionGenerationBase::OnGenerateInteractionInfo(FInteractionInfo& OutData, FString& InteractState, UTT_Interaction* Task, AActor* Actor)
	{
		InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms Parms;
		Parms.OutData=OutData;
		Parms.InteractState=InteractState;
		Parms.Task=Task;
		Parms.Actor=Actor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionGenerationBase_OnGenerateInteractionInfo),&Parms);
		OutData=Parms.OutData;
		InteractState=Parms.InteractState;
		return !!Parms.ReturnValue;
	}
	static FName NAME_UInteractionGenerationBase_OnReset = FName(TEXT("OnReset"));
	void UInteractionGenerationBase::OnReset()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractionGenerationBase_OnReset),NULL);
	}
	void UInteractionGenerationBase::StaticRegisterNativesUInteractionGenerationBase()
	{
		UClass* Class = UInteractionGenerationBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FindOrAddInteractionInfo", &UInteractionGenerationBase::execFindOrAddInteractionInfo },
			{ "GetConstInteractionInfo", &UInteractionGenerationBase::execGetConstInteractionInfo },
			{ "GetCurrentEffectInteractionInfo", &UInteractionGenerationBase::execGetCurrentEffectInteractionInfo },
			{ "GetinteractionInfo", &UInteractionGenerationBase::execGetinteractionInfo },
			{ "GetInteractionLayer", &UInteractionGenerationBase::execGetInteractionLayer },
			{ "HasValidInteractionInfo", &UInteractionGenerationBase::execHasValidInteractionInfo },
			{ "RemoveInteraction", &UInteractionGenerationBase::execRemoveInteraction },
			{ "SetCurrentEffectInteractionInfo", &UInteractionGenerationBase::execSetCurrentEffectInteractionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics
	{
		struct InteractionGenerationBase_eventFindOrAddInteractionInfo_Parms
		{
			AActor* Interactor;
			UTriggerTaskBase* Task;
			FString InteractStage;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Interactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractStage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractStage;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventFindOrAddInteractionInfo_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventFindOrAddInteractionInfo_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Task_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_InteractStage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_InteractStage = { "InteractStage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventFindOrAddInteractionInfo_Parms, InteractStage), METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_InteractStage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_InteractStage_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventFindOrAddInteractionInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Interactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_InteractStage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Find or add new Interaction Information\n\x09* \n\x09* @param Interactor who interact with this trigger.\n\x09* @param Task which trigger is interacted by the player\n\x09* @param InteractStage which stage to search the information\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "* Find or add new Interaction Information\n*\n* @param Interactor who interact with this trigger.\n* @param Task which trigger is interacted by the player\n* @param InteractStage which stage to search the information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "FindOrAddInteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventFindOrAddInteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics
	{
		struct InteractionGenerationBase_eventGetConstInteractionInfo_Parms
		{
			TArray<FInteractionInfo> ReturnValue;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventGetConstInteractionInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get interaction info which can not be modified by outer\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "* Get interaction info which can not be modified by outer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "GetConstInteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventGetConstInteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics
	{
		struct InteractionGenerationBase_eventGetCurrentEffectInteractionInfo_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventGetCurrentEffectInteractionInfo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "GetCurrentEffectInteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventGetCurrentEffectInteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics
	{
		struct InteractionGenerationBase_eventGetinteractionInfo_Parms
		{
			TArray<FInteractionInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventGetinteractionInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get reference to interaction info\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "* Get reference to interaction info" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "GetinteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventGetinteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventGetInteractionLayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventGetInteractionLayer_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventGetInteractionLayer_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_EActorLayer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Try to get the layer for the specific actor who is interact with this interaction\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "Try to get the layer for the specific actor who is interact with this interaction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "GetInteractionLayer", nullptr, nullptr, sizeof(InteractionGenerationBase_eventGetInteractionLayer_Parms), Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics
	{
		struct InteractionGenerationBase_eventHasValidInteractionInfo_Parms
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
	void Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionGenerationBase_eventHasValidInteractionInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionGenerationBase_eventHasValidInteractionInfo_Parms), &Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "/*\n\x09* Used to check weather there is valid interaction information at current generator\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "* Used to check weather there is valid interaction information at current generator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "HasValidInteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventHasValidInteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutData;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms, OutData), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_InteractState = { "InteractState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms, InteractState), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms, Task), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms), &Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_OutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_InteractState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Generate the interaction information for target interaction task.\n\x09* This rule in base class is just to check weather the actor is instigator on the interaction task\n\x09* \n\x09* #return true means the out data is valid\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "* Generate the interaction information for target interaction task.\n* This rule in base class is just to check weather the actor is instigator on the interaction task\n*\n* #return true means the out data is valid" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "OnGenerateInteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventOnGenerateInteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_OnReset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Reset this generation\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "* Reset this generation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "OnReset", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics
	{
		struct InteractionGenerationBase_eventRemoveInteraction_Parms
		{
			TArray<UObject*> interactions;
			FString InteractionStage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_interactions;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractionStage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::NewProp_interactions_Inner = { "interactions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::NewProp_interactions = { "interactions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventRemoveInteraction_Parms, interactions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::NewProp_InteractionStage = { "InteractionStage", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventRemoveInteraction_Parms, InteractionStage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::NewProp_interactions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::NewProp_interactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::NewProp_InteractionStage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Remove the interactions at the target InteractionStage\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "Remove the interactions at the target InteractionStage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "RemoveInteraction", nullptr, nullptr, sizeof(InteractionGenerationBase_eventRemoveInteraction_Parms), Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics
	{
		struct InteractionGenerationBase_eventSetCurrentEffectInteractionInfo_Parms
		{
			int32 Index;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionGenerationBase_eventSetCurrentEffectInteractionInfo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionGenerationBase, nullptr, "SetCurrentEffectInteractionInfo", nullptr, nullptr, sizeof(InteractionGenerationBase_eventSetCurrentEffectInteractionInfo_Parms), Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionGenerationBase_NoRegister()
	{
		return UInteractionGenerationBase::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionGenerationBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentEffectInteractionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentEffectInteractionInfo;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractionInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionGenerationBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionGenerationBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionGenerationBase_FindOrAddInteractionInfo, "FindOrAddInteractionInfo" }, // 982631266
		{ &Z_Construct_UFunction_UInteractionGenerationBase_GetConstInteractionInfo, "GetConstInteractionInfo" }, // 1469690741
		{ &Z_Construct_UFunction_UInteractionGenerationBase_GetCurrentEffectInteractionInfo, "GetCurrentEffectInteractionInfo" }, // 2239928009
		{ &Z_Construct_UFunction_UInteractionGenerationBase_GetinteractionInfo, "GetinteractionInfo" }, // 953042241
		{ &Z_Construct_UFunction_UInteractionGenerationBase_GetInteractionLayer, "GetInteractionLayer" }, // 2262163647
		{ &Z_Construct_UFunction_UInteractionGenerationBase_HasValidInteractionInfo, "HasValidInteractionInfo" }, // 4155580660
		{ &Z_Construct_UFunction_UInteractionGenerationBase_OnGenerateInteractionInfo, "OnGenerateInteractionInfo" }, // 28127081
		{ &Z_Construct_UFunction_UInteractionGenerationBase_OnReset, "OnReset" }, // 2930746020
		{ &Z_Construct_UFunction_UInteractionGenerationBase_RemoveInteraction, "RemoveInteraction" }, // 171812223
		{ &Z_Construct_UFunction_UInteractionGenerationBase_SetCurrentEffectInteractionInfo, "SetCurrentEffectInteractionInfo" }, // 4285248744
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionGenerationBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "InteractionGeneration" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_CurrentEffectInteractionInfo_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_CurrentEffectInteractionInfo = { "CurrentEffectInteractionInfo", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionGenerationBase, CurrentEffectInteractionInfo), METADATA_PARAMS(Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_CurrentEffectInteractionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_CurrentEffectInteractionInfo_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos_Inner = { "InteractionInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos_MetaData[] = {
		{ "Comment", "//The information for current toggled actors\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionInfoGenerator/InteractionInfoGenerationBase.h" },
		{ "ToolTip", "The information for current toggled actors" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos = { "InteractionInfos", nullptr, (EPropertyFlags)0x0010000000000020, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionGenerationBase, InteractionInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionGenerationBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_CurrentEffectInteractionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionGenerationBase_Statics::NewProp_InteractionInfos,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionGenerationBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionGenerationBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionGenerationBase_Statics::ClassParams = {
		&UInteractionGenerationBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionGenerationBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionGenerationBase_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionGenerationBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionGenerationBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionGenerationBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionGenerationBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionGenerationBase, 2615864120);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionGenerationBase>()
	{
		return UInteractionGenerationBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionGenerationBase(Z_Construct_UClass_UInteractionGenerationBase, &UInteractionGenerationBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionGenerationBase"), false, nullptr, nullptr, nullptr);

	void UInteractionGenerationBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_CurrentEffectInteractionInfo(TEXT("CurrentEffectInteractionInfo"));
		static const FName Name_InteractionInfos(TEXT("InteractionInfos"));

		const bool bIsValid = true
			&& Name_CurrentEffectInteractionInfo == ClassReps[(int32)ENetFields_Private::CurrentEffectInteractionInfo].Property->GetFName()
			&& Name_InteractionInfos == ClassReps[(int32)ENetFields_Private::InteractionInfos].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UInteractionGenerationBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionGenerationBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
