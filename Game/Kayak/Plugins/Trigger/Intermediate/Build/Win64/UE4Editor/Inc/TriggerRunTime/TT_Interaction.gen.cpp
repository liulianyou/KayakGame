// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_Interaction() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleDataBase_NoRegister();
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EInteractionEndType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffectBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionGenerationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleBase_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventInteractionDataUpdate_Parms
		{
			UInteractionRuleDataBase* Data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::NewProp_Data_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventInteractionDataUpdate_Parms, Data), Z_Construct_UClass_UInteractionRuleDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::NewProp_Data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n* This delegate is used to inspect the value changed in the interaction rule data\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* This delegate is used to inspect the value changed in the interaction rule data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "InteractionDataUpdate__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventInteractionDataUpdate_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventInteractionEnd_Parms
		{
			TArray<UObject*> Causers;
			UTT_Interaction* InteractionTask;
			EInteractionEndType EndType;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventInteractionEnd_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventInteractionEnd_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventInteractionEnd_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::NewProp_EndType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "InteractionEnd__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventInteractionEnd_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetInteractionInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInteractionInfo>*)Z_Param__Result=P_THIS->GetInteractionInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetValidInteractionInfo)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_InteractState);
		P_GET_UBOOL(Z_Param_ForceCreateNew);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInteractionInfo*)Z_Param__Result=P_THIS->GetValidInteractionInfo(Z_Param_TargetActor,Z_Param_Out_InteractState,Z_Param_ForceCreateNew);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetVaildInteractionCancelTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetVaildInteractionCancelTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetVaildInteractionSuccessTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTag*)Z_Param__Result=P_THIS->GetVaildInteractionSuccessTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execAbilityTryToEndInteraction)
	{
		P_GET_STRUCT(FGameplayAbilitySpecHandle,Z_Param_Handle);
		P_GET_TARRAY(UObject*,Z_Param_Causers);
		P_GET_ENUM(EInteractionEndType,Z_Param_EndType);
		P_GET_UBOOL(Z_Param_RemoveInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AbilityTryToEndInteraction_Implementation(Z_Param_Handle,Z_Param_Causers,EInteractionEndType(Z_Param_EndType),Z_Param_RemoveInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execDoesEffectRunOnServer)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesEffectRunOnServer(Z_Param_EffectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execCloseEffect)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_GET_ENUM(EInteractionEndType,Z_Param_EndType);
		P_GET_UBOOL(Z_Param_RemoveInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CloseEffect_Implementation(Z_Param_Causer,EInteractionEndType(Z_Param_EndType),Z_Param_RemoveInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execOpenEffect)
	{
		P_GET_STRUCT(FInteractionInfo,Z_Param_InteractionInfo);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OpenEffect_Implementation(Z_Param_InteractionInfo,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execInteractionRuleDataChanged)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_GET_PROPERTY(FStrProperty,Z_Param_InteractionData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InteractionRuleDataChanged(Z_Param_Causer,Z_Param_InteractionData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetInteractionInfoGenerator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionGenerationBase**)Z_Param__Result=P_THIS->GetInteractionInfoGenerator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execSetInteractionInfoGenerator)
	{
		P_GET_OBJECT(UInteractionGenerationBase,Z_Param_Generator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionInfoGenerator(Z_Param_Generator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetInteractionEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UInteractionEffectBase*>*)Z_Param__Result=P_THIS->GetInteractionEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetInteractionEffect)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionEffectBase**)Z_Param__Result=P_THIS->GetInteractionEffect(Z_Param_EffectIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execAddInteractionEffect)
	{
		P_GET_OBJECT(UInteractionEffectBase,Z_Param_InteractionEffect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInteractionEffect(Z_Param_InteractionEffect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execGetInteractionRule)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionRuleBase**)Z_Param__Result=P_THIS->GetInteractionRule();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execSetInteractionRule)
	{
		P_GET_OBJECT(UInteractionRuleBase,Z_Param_InteractionRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInteractionRule(Z_Param_InteractionRule);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execServer_Interaction)
	{
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Interaction(Z_Param_TargetActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execAddContributor)
	{
		P_GET_OBJECT(UContributeRuleBase,Z_Param_Contributor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddContributor(Z_Param_Contributor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_Interaction::execClient_RunTask)
	{
		P_GET_STRUCT_REF(FInteractionInfo,Z_Param_Out_InteractionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RunTask(Z_Param_Out_InteractionInfo);
		P_NATIVE_END;
	}
	static FName NAME_UTT_Interaction_AbilityTryToEndInteraction = FName(TEXT("AbilityTryToEndInteraction"));
	void UTT_Interaction::AbilityTryToEndInteraction(const FGameplayAbilitySpecHandle Handle, TArray<UObject*> const& Causers, EInteractionEndType EndType, bool RemoveInstance)
	{
		TT_Interaction_eventAbilityTryToEndInteraction_Parms Parms;
		Parms.Handle=Handle;
		Parms.Causers=Causers;
		Parms.EndType=EndType;
		Parms.RemoveInstance=RemoveInstance ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTT_Interaction_AbilityTryToEndInteraction),&Parms);
	}
	static FName NAME_UTT_Interaction_CloseEffect = FName(TEXT("CloseEffect"));
	void UTT_Interaction::CloseEffect(UObject* Causer, EInteractionEndType EndType, bool RemoveInstance)
	{
		TT_Interaction_eventCloseEffect_Parms Parms;
		Parms.Causer=Causer;
		Parms.EndType=EndType;
		Parms.RemoveInstance=RemoveInstance ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTT_Interaction_CloseEffect),&Parms);
	}
	static FName NAME_UTT_Interaction_OnEndInteraction = FName(TEXT("OnEndInteraction"));
	void UTT_Interaction::OnEndInteraction(TArray<UObject*> const& Causers, EInteractionEndType EndType, bool RemoveInstance)
	{
		TT_Interaction_eventOnEndInteraction_Parms Parms;
		Parms.Causers=Causers;
		Parms.EndType=EndType;
		Parms.RemoveInstance=RemoveInstance ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTT_Interaction_OnEndInteraction),&Parms);
	}
	static FName NAME_UTT_Interaction_OnInteraction = FName(TEXT("OnInteraction"));
	void UTT_Interaction::OnInteraction(FInteractionInfo const& TargetActor)
	{
		TT_Interaction_eventOnInteraction_Parms Parms;
		Parms.TargetActor=TargetActor;
		ProcessEvent(FindFunctionChecked(NAME_UTT_Interaction_OnInteraction),&Parms);
	}
	static FName NAME_UTT_Interaction_OpenEffect = FName(TEXT("OpenEffect"));
	void UTT_Interaction::OpenEffect(FInteractionInfo const& InteractionInfo, int32 Index)
	{
		TT_Interaction_eventOpenEffect_Parms Parms;
		Parms.InteractionInfo=InteractionInfo;
		Parms.Index=Index;
		ProcessEvent(FindFunctionChecked(NAME_UTT_Interaction_OpenEffect),&Parms);
	}
	void UTT_Interaction::StaticRegisterNativesUTT_Interaction()
	{
		UClass* Class = UTT_Interaction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AbilityTryToEndInteraction", &UTT_Interaction::execAbilityTryToEndInteraction },
			{ "AddContributor", &UTT_Interaction::execAddContributor },
			{ "AddInteractionEffect", &UTT_Interaction::execAddInteractionEffect },
			{ "Client_RunTask", &UTT_Interaction::execClient_RunTask },
			{ "CloseEffect", &UTT_Interaction::execCloseEffect },
			{ "DoesEffectRunOnServer", &UTT_Interaction::execDoesEffectRunOnServer },
			{ "GetInteractionEffect", &UTT_Interaction::execGetInteractionEffect },
			{ "GetInteractionEffects", &UTT_Interaction::execGetInteractionEffects },
			{ "GetInteractionInfoGenerator", &UTT_Interaction::execGetInteractionInfoGenerator },
			{ "GetInteractionInfos", &UTT_Interaction::execGetInteractionInfos },
			{ "GetInteractionRule", &UTT_Interaction::execGetInteractionRule },
			{ "GetVaildInteractionCancelTag", &UTT_Interaction::execGetVaildInteractionCancelTag },
			{ "GetVaildInteractionSuccessTag", &UTT_Interaction::execGetVaildInteractionSuccessTag },
			{ "GetValidInteractionInfo", &UTT_Interaction::execGetValidInteractionInfo },
			{ "InteractionRuleDataChanged", &UTT_Interaction::execInteractionRuleDataChanged },
			{ "OpenEffect", &UTT_Interaction::execOpenEffect },
			{ "Server_Interaction", &UTT_Interaction::execServer_Interaction },
			{ "SetInteractionInfoGenerator", &UTT_Interaction::execSetInteractionInfoGenerator },
			{ "SetInteractionRule", &UTT_Interaction::execSetInteractionRule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static void NewProp_RemoveInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventAbilityTryToEndInteraction_Parms, Handle), Z_Construct_UScriptStruct_FGameplayAbilitySpecHandle, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventAbilityTryToEndInteraction_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventAbilityTryToEndInteraction_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_RemoveInstance_SetBit(void* Obj)
	{
		((TT_Interaction_eventAbilityTryToEndInteraction_Parms*)Obj)->RemoveInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_RemoveInstance = { "RemoveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_Interaction_eventAbilityTryToEndInteraction_Parms), &Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_RemoveInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_EndType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::NewProp_RemoveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Only invoked by the ability to EndInteraction\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Only invoked by the ability to EndInteraction" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "AbilityTryToEndInteraction", nullptr, nullptr, sizeof(TT_Interaction_eventAbilityTryToEndInteraction_Parms), Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics
	{
		struct TT_Interaction_eventAddContributor_Parms
		{
			UContributeRuleBase* Contributor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventAddContributor_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::NewProp_Contributor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Add new contributor to this interaction task to change the data in the interaction rule \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* Add new contributor to this interaction task to change the data in the interaction rule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "AddContributor", nullptr, nullptr, sizeof(TT_Interaction_eventAddContributor_Parms), Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_AddContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_AddContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics
	{
		struct TT_Interaction_eventAddInteractionEffect_Parms
		{
			UInteractionEffectBase* InteractionEffect;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionEffect;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::NewProp_InteractionEffect_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::NewProp_InteractionEffect = { "InteractionEffect", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventAddInteractionEffect_Parms, InteractionEffect), Z_Construct_UClass_UInteractionEffectBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::NewProp_InteractionEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::NewProp_InteractionEffect_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::NewProp_InteractionEffect,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "AddInteractionEffect", nullptr, nullptr, sizeof(TT_Interaction_eventAddInteractionEffect_Parms), Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics
	{
		struct TT_Interaction_eventClient_RunTask_Parms
		{
			FInteractionInfo InteractionInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::NewProp_InteractionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::NewProp_InteractionInfo = { "InteractionInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventClient_RunTask_Parms, InteractionInfo), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::NewProp_InteractionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::NewProp_InteractionInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::NewProp_InteractionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Called on the client when on the Server/Client mode\n\x09* @param\x09InteractionActor Which actor interact this task\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* Called on the client when on the Server/Client mode\n* @param        InteractionActor Which actor interact this task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "Client_RunTask", nullptr, nullptr, sizeof(TT_Interaction_eventClient_RunTask_Parms), Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_Client_RunTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_Client_RunTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static void NewProp_RemoveInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventCloseEffect_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventCloseEffect_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_RemoveInstance_SetBit(void* Obj)
	{
		((TT_Interaction_eventCloseEffect_Parms*)Obj)->RemoveInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_RemoveInstance = { "RemoveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_Interaction_eventCloseEffect_Parms), &Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_RemoveInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_EndType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::NewProp_RemoveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "CloseEffect", nullptr, nullptr, sizeof(TT_Interaction_eventCloseEffect_Parms), Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_CloseEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_CloseEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics
	{
		struct TT_Interaction_eventDoesEffectRunOnServer_Parms
		{
			int32 EffectIndex;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::NewProp_EffectIndex = { "EffectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventDoesEffectRunOnServer_Parms, EffectIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TT_Interaction_eventDoesEffectRunOnServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_Interaction_eventDoesEffectRunOnServer_Parms), &Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::NewProp_EffectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "//Function to check weather this effect need to run on server\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Function to check weather this effect need to run on server" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "DoesEffectRunOnServer", nullptr, nullptr, sizeof(TT_Interaction_eventDoesEffectRunOnServer_Parms), Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics
	{
		struct TT_Interaction_eventGetInteractionEffect_Parms
		{
			int32 EffectIndex;
			UInteractionEffectBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectIndex;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_EffectIndex = { "EffectIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetInteractionEffect_Parms, EffectIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetInteractionEffect_Parms, ReturnValue), Z_Construct_UClass_UInteractionEffectBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_EffectIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetInteractionEffect", nullptr, nullptr, sizeof(TT_Interaction_eventGetInteractionEffect_Parms), Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics
	{
		struct TT_Interaction_eventGetInteractionEffects_Parms
		{
			TArray<UInteractionEffectBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionEffectBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetInteractionEffects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetInteractionEffects", nullptr, nullptr, sizeof(TT_Interaction_eventGetInteractionEffects_Parms), Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics
	{
		struct TT_Interaction_eventGetInteractionInfoGenerator_Parms
		{
			UInteractionGenerationBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetInteractionInfoGenerator_Parms, ReturnValue), Z_Construct_UClass_UInteractionGenerationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetInteractionInfoGenerator", nullptr, nullptr, sizeof(TT_Interaction_eventGetInteractionInfoGenerator_Parms), Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics
	{
		struct TT_Interaction_eventGetInteractionInfos_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetInteractionInfos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetInteractionInfos", nullptr, nullptr, sizeof(TT_Interaction_eventGetInteractionInfos_Parms), Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics
	{
		struct TT_Interaction_eventGetInteractionRule_Parms
		{
			UInteractionRuleBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetInteractionRule_Parms, ReturnValue), Z_Construct_UClass_UInteractionRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetInteractionRule", nullptr, nullptr, sizeof(TT_Interaction_eventGetInteractionRule_Parms), Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetInteractionRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetInteractionRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics
	{
		struct TT_Interaction_eventGetVaildInteractionCancelTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetVaildInteractionCancelTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetVaildInteractionCancelTag", nullptr, nullptr, sizeof(TT_Interaction_eventGetVaildInteractionCancelTag_Parms), Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics
	{
		struct TT_Interaction_eventGetVaildInteractionSuccessTag_Parms
		{
			FGameplayTag ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetVaildInteractionSuccessTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetVaildInteractionSuccessTag", nullptr, nullptr, sizeof(TT_Interaction_eventGetVaildInteractionSuccessTag_Parms), Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics
	{
		struct TT_Interaction_eventGetValidInteractionInfo_Parms
		{
			AActor* TargetActor;
			FString InteractState;
			bool ForceCreateNew;
			FInteractionInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractState;
		static void NewProp_ForceCreateNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceCreateNew;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetValidInteractionInfo_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_InteractState = { "InteractState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetValidInteractionInfo_Parms, InteractState), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_ForceCreateNew_SetBit(void* Obj)
	{
		((TT_Interaction_eventGetValidInteractionInfo_Parms*)Obj)->ForceCreateNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_ForceCreateNew = { "ForceCreateNew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_Interaction_eventGetValidInteractionInfo_Parms), &Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_ForceCreateNew_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventGetValidInteractionInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_TargetActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_InteractState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_ForceCreateNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "/*\n\x09* Get valid Interaction information according to target actor\n\x09*\n\x09* @param ForceCreateNew\x09\x09When TargetActor is not in the InteractionInfos, weather we can create new info or not\n\x09*/" },
		{ "CPP_Default_ForceCreateNew", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* Get valid Interaction information according to target actor\n*\n* @param ForceCreateNew         When TargetActor is not in the InteractionInfos, weather we can create new info or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "GetValidInteractionInfo", nullptr, nullptr, sizeof(TT_Interaction_eventGetValidInteractionInfo_Parms), Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics
	{
		struct TT_Interaction_eventInteractionRuleDataChanged_Parms
		{
			AActor* Causer;
			FString InteractionData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InteractionData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventInteractionRuleDataChanged_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_InteractionData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_InteractionData = { "InteractionData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventInteractionRuleDataChanged_Parms, InteractionData), METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_InteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_InteractionData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::NewProp_InteractionData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "/* NetMulticast, Reliable,*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "NetMulticast, Reliable," },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "InteractionRuleDataChanged", nullptr, nullptr, sizeof(TT_Interaction_eventInteractionRuleDataChanged_Parms), Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static void NewProp_RemoveInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventOnEndInteraction_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventOnEndInteraction_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_EInteractionEndType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_RemoveInstance_SetBit(void* Obj)
	{
		((TT_Interaction_eventOnEndInteraction_Parms*)Obj)->RemoveInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_RemoveInstance = { "RemoveInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TT_Interaction_eventOnEndInteraction_Parms), &Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_RemoveInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_EndType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::NewProp_RemoveInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "//Make the BP have access to do its only end interaction things\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Make the BP have access to do its only end interaction things" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "OnEndInteraction", nullptr, nullptr, sizeof(TT_Interaction_eventOnEndInteraction_Parms), Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_OnEndInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_OnEndInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::NewProp_TargetActor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventOnInteraction_Parms, TargetActor), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::NewProp_TargetActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "/*\n\x09* Called when the task has been toggled by the target actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* Called when the task has been toggled by the target actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "OnInteraction", nullptr, nullptr, sizeof(TT_Interaction_eventOnInteraction_Parms), Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_OnInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_OnInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionInfo;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_InteractionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_InteractionInfo = { "InteractionInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventOpenEffect_Parms, InteractionInfo), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_InteractionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_InteractionInfo_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventOpenEffect_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_InteractionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "Comment", "/*\n\x09* Open the target effect which bind to this task \n\x09* @param Index\x09-1 means this function will open all effect \n\x09*/" },
		{ "CPP_Default_Index", "-1" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* Open the target effect which bind to this task\n* @param Index  -1 means this function will open all effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "OpenEffect", nullptr, nullptr, sizeof(TT_Interaction_eventOpenEffect_Parms), Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_OpenEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_OpenEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics
	{
		struct TT_Interaction_eventServer_Interaction_Parms
		{
			AActor* TargetActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventServer_Interaction_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the task has been toggled by the target actor\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Called when the task has been toggled by the target actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "Server_Interaction", nullptr, nullptr, sizeof(TT_Interaction_eventServer_Interaction_Parms), Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_Server_Interaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_Server_Interaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics
	{
		struct TT_Interaction_eventSetInteractionInfoGenerator_Parms
		{
			UInteractionGenerationBase* Generator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Generator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Generator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::NewProp_Generator_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::NewProp_Generator = { "Generator", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventSetInteractionInfoGenerator_Parms, Generator), Z_Construct_UClass_UInteractionGenerationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::NewProp_Generator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::NewProp_Generator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::NewProp_Generator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "SetInteractionInfoGenerator", nullptr, nullptr, sizeof(TT_Interaction_eventSetInteractionInfoGenerator_Parms), Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics
	{
		struct TT_Interaction_eventSetInteractionRule_Parms
		{
			UInteractionRuleBase* InteractionRule;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionRule;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::NewProp_InteractionRule_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::NewProp_InteractionRule = { "InteractionRule", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_Interaction_eventSetInteractionRule_Parms, InteractionRule), Z_Construct_UClass_UInteractionRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::NewProp_InteractionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::NewProp_InteractionRule_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::NewProp_InteractionRule,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Interaction" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_Interaction, nullptr, "SetInteractionRule", nullptr, nullptr, sizeof(TT_Interaction_eventSetInteractionRule_Parms), Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_Interaction_SetInteractionRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_Interaction_SetInteractionRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_Interaction_NoRegister()
	{
		return UTT_Interaction::StaticClass();
	}
	struct Z_Construct_UClass_UTT_Interaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEffects_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractionEffects;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionRule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionRule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionInfoGenerator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionInfoGenerator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanBeToggledByAI_MetaData[];
#endif
		static void NewProp_CanBeToggledByAI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanBeToggledByAI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionEndDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractionEndDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionDataUpdateDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_InteractionDataUpdateDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GamePlayAbilityClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GamePlayAbilityClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionSuccessGamePlayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionSuccessGamePlayTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionCancelGamePlayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionCancelGamePlayTag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastContributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastContributor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_Interaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_Interaction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_Interaction_AbilityTryToEndInteraction, "AbilityTryToEndInteraction" }, // 1039192859
		{ &Z_Construct_UFunction_UTT_Interaction_AddContributor, "AddContributor" }, // 1469916877
		{ &Z_Construct_UFunction_UTT_Interaction_AddInteractionEffect, "AddInteractionEffect" }, // 2928310542
		{ &Z_Construct_UFunction_UTT_Interaction_Client_RunTask, "Client_RunTask" }, // 977958501
		{ &Z_Construct_UFunction_UTT_Interaction_CloseEffect, "CloseEffect" }, // 1873734900
		{ &Z_Construct_UFunction_UTT_Interaction_DoesEffectRunOnServer, "DoesEffectRunOnServer" }, // 1903616927
		{ &Z_Construct_UFunction_UTT_Interaction_GetInteractionEffect, "GetInteractionEffect" }, // 325644247
		{ &Z_Construct_UFunction_UTT_Interaction_GetInteractionEffects, "GetInteractionEffects" }, // 2533525917
		{ &Z_Construct_UFunction_UTT_Interaction_GetInteractionInfoGenerator, "GetInteractionInfoGenerator" }, // 1114176806
		{ &Z_Construct_UFunction_UTT_Interaction_GetInteractionInfos, "GetInteractionInfos" }, // 1472763095
		{ &Z_Construct_UFunction_UTT_Interaction_GetInteractionRule, "GetInteractionRule" }, // 1312259678
		{ &Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionCancelTag, "GetVaildInteractionCancelTag" }, // 2453170400
		{ &Z_Construct_UFunction_UTT_Interaction_GetVaildInteractionSuccessTag, "GetVaildInteractionSuccessTag" }, // 293365695
		{ &Z_Construct_UFunction_UTT_Interaction_GetValidInteractionInfo, "GetValidInteractionInfo" }, // 3020989317
		{ &Z_Construct_UFunction_UTT_Interaction_InteractionRuleDataChanged, "InteractionRuleDataChanged" }, // 2620466548
		{ &Z_Construct_UFunction_UTT_Interaction_OnEndInteraction, "OnEndInteraction" }, // 1765130418
		{ &Z_Construct_UFunction_UTT_Interaction_OnInteraction, "OnInteraction" }, // 1024812536
		{ &Z_Construct_UFunction_UTT_Interaction_OpenEffect, "OpenEffect" }, // 3203928998
		{ &Z_Construct_UFunction_UTT_Interaction_Server_Interaction, "Server_Interaction" }, // 2224598408
		{ &Z_Construct_UFunction_UTT_Interaction_SetInteractionInfoGenerator, "SetInteractionInfoGenerator" }, // 1549456531
		{ &Z_Construct_UFunction_UTT_Interaction_SetInteractionRule, "SetInteractionRule" }, // 3301554905
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* The interaction task when the player want to interact with the scene object\n* \n* There three component in the interaction task:\n* 1): Interaction effect:\x09which is used to do some client effect such as open one UI, or open one door\n* 2): Interaction Rule:\x09\x09Which is used to do some internal game logic such as time manager or count manager, and mostly it run on the server (if have server mode).\n* 3): Contribute Rule:\x09\x09Which is used to check how the player affect the Interaction rule.\n* 4): Interaction information generator: which is used to generate the current interact information such as we want to distinguish the effect or rule for different players.\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* The interaction task when the player want to interact with the scene object\n*\n* There three component in the interaction task:\n* 1): Interaction effect:      which is used to do some client effect such as open one UI, or open one door\n* 2): Interaction Rule:                Which is used to do some internal game logic such as time manager or count manager, and mostly it run on the server (if have server mode).\n* 3): Contribute Rule:         Which is used to check how the player affect the Interaction rule.\n* 4): Interaction information generator: which is used to generate the current interact information such as we want to distinguish the effect or rule for different players." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_Inner_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_Inner = { "InteractionEffects", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionEffectBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects = { "InteractionEffects", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionRule_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionRule = { "InteractionRule", nullptr, (EPropertyFlags)0x001200000008003d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionRule), Z_Construct_UClass_UInteractionRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionRule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionRule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionInfoGenerator_MetaData[] = {
		{ "Category", "Interaction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionInfoGenerator = { "InteractionInfoGenerator", nullptr, (EPropertyFlags)0x001200000008003d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionInfoGenerator), Z_Construct_UClass_UInteractionGenerationBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionInfoGenerator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionInfoGenerator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Flag to check weather AI can toggled this Task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Flag to check weather AI can toggled this Task" },
	};
#endif
	void Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI_SetBit(void* Obj)
	{
		((UTT_Interaction*)Obj)->CanBeToggledByAI = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI = { "CanBeToggledByAI", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTT_Interaction), &Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEndDelegate_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Flag to check weather AI can toggled this Task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Flag to check weather AI can toggled this Task" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEndDelegate = { "InteractionEndDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionEndDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_InteractionEnd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEndDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEndDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionDataUpdateDelegate_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/*\n\x09* this delegate is used to inspect the value changed in the interaction rule data\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* this delegate is used to inspect the value changed in the interaction rule data" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionDataUpdateDelegate = { "InteractionDataUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080014, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionDataUpdateDelegate), Z_Construct_UDelegateFunction_TriggerRunTime_InteractionDataUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionDataUpdateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionDataUpdateDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//The name for this interaction task which can be changed by the player\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "The name for this interaction task which can be changed by the player" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, Name), METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_GamePlayAbilityClass_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/*\n\x09* The class for game play ability to hold some interaction rules for this interaction\n\x09* By default the interaction can be treated as one ability for the player so this task should bind with the GamePlayAbility\n\x09* to use the game play ability system \n\x09* The target ability should inherited from the IInteractionSupportInterface Interface\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "* The class for game play ability to hold some interaction rules for this interaction\n* By default the interaction can be treated as one ability for the player so this task should bind with the GamePlayAbility\n* to use the game play ability system\n* The target ability should inherited from the IInteractionSupportInterface Interface" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_GamePlayAbilityClass = { "GamePlayAbilityClass", nullptr, (EPropertyFlags)0x0014000000000015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, GamePlayAbilityClass), Z_Construct_UClass_UGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_GamePlayAbilityClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_GamePlayAbilityClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionSuccessGamePlayTag_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Exposed for the designer to use its own interaction success game play tag\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Exposed for the designer to use its own interaction success game play tag" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionSuccessGamePlayTag = { "InteractionSuccessGamePlayTag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionSuccessGamePlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionSuccessGamePlayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionSuccessGamePlayTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionCancelGamePlayTag_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "//Exposed for the designer to use its own interaction success game play tag\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "Exposed for the designer to use its own interaction success game play tag" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionCancelGamePlayTag = { "InteractionCancelGamePlayTag", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, InteractionCancelGamePlayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionCancelGamePlayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionCancelGamePlayTag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_Interaction_Statics::NewProp_LastContributor_MetaData[] = {
		{ "Comment", "//The immediate contributor apply to this interaction\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/TT_Interaction.h" },
		{ "ToolTip", "The immediate contributor apply to this interaction" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTT_Interaction_Statics::NewProp_LastContributor = { "LastContributor", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_Interaction, LastContributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_LastContributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::NewProp_LastContributor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_Interaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionInfoGenerator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_CanBeToggledByAI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionEndDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionDataUpdateDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_GamePlayAbilityClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionSuccessGamePlayTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_InteractionCancelGamePlayTag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_Interaction_Statics::NewProp_LastContributor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_Interaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_Interaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_Interaction_Statics::ClassParams = {
		&UTT_Interaction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_Interaction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_Interaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_Interaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_Interaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_Interaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_Interaction, 1587362003);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_Interaction>()
	{
		return UTT_Interaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_Interaction(Z_Construct_UClass_UTT_Interaction, &UTT_Interaction::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_Interaction"), false, nullptr, nullptr, nullptr);

	void UTT_Interaction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_InteractionRule(TEXT("InteractionRule"));
		static const FName Name_InteractionInfoGenerator(TEXT("InteractionInfoGenerator"));

		const bool bIsValid = true
			&& Name_InteractionRule == ClassReps[(int32)ENetFields_Private::InteractionRule].Property->GetFName()
			&& Name_InteractionInfoGenerator == ClassReps[(int32)ENetFields_Private::InteractionInfoGenerator].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTT_Interaction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_Interaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
