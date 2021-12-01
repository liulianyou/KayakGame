// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h"
#include "Engine/Classes/GameFramework/Controller.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerNetPlayerSupportComponent() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerNetPlayerSupportComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerNetPlayerSupportComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_LevelSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execClient_SyncSequenceProgress)
	{
		P_GET_OBJECT(UTT_LevelSequence,Z_Param_LevelSequence);
		P_GET_STRUCT(FFrameTime,Z_Param_CurFFrameTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SyncSequenceProgress_Implementation(Z_Param_LevelSequence,Z_Param_CurFFrameTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_SyncSequenceProgress)
	{
		P_GET_OBJECT(UTT_LevelSequence,Z_Param_LevelSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SyncSequenceProgress_Implementation(Z_Param_LevelSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_BPGameOver)
	{
		P_GET_TARRAY(APlayerController*,Z_Param_GameOverPlayers);
		P_GET_PROPERTY(FStrProperty,Z_Param_URL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_BPGameOver_Implementation(Z_Param_GameOverPlayers,Z_Param_URL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_InvokeServerTask)
	{
		P_GET_STRUCT(FTriggerTaskRuntimeInfo,Z_Param_RuntimeInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_InvokeServerTask_Implementation(Z_Param_RuntimeInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_CloseEffect)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_TARRAY(UObject*,Z_Param_Causers);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CloseEffect_Implementation(Z_Param_Task,Z_Param_Causers,Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_OpenEffect)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_GET_TARRAY(UObject*,Z_Param_Causers);
		P_GET_PROPERTY(FIntProperty,Z_Param_EffectDataIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_OpenEffect_Implementation(Z_Param_Task,Z_Param_Causers,Z_Param_EffectDataIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execMulticast_ChangeTranfrom)
	{
		P_GET_UBOOL(Z_Param_InUsePosition);
		P_GET_UBOOL(Z_Param_InUseRotation);
		P_GET_UBOOL(Z_Param_InUseSize);
		P_GET_STRUCT(FTransform,Z_Param_Transform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_ChangeTranfrom_Implementation(Z_Param_InUsePosition,Z_Param_InUseRotation,Z_Param_InUseSize,Z_Param_Transform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execClient_CommitAddInteraction)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_InteractionTask);
		P_GET_OBJECT(AActor,Z_Param_Contributor);
		P_GET_UBOOL(Z_Param_CanEverTick);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickGradual);
		P_GET_UBOOL(Z_Param_CanExecutedImmediately);
		P_GET_UBOOL(Z_Param_NeedToCheckGameplayAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_CommitAddInteraction_Implementation(Z_Param_InteractionTask,Z_Param_Contributor,Z_Param_CanEverTick,Z_Param_TickGradual,Z_Param_CanExecutedImmediately,Z_Param_NeedToCheckGameplayAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execClient_CommitCancleInteraction)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_InteractionTask);
		P_GET_OBJECT(AActor,Z_Param_Contributor);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveCount);
		P_GET_UBOOL(Z_Param_CanEverTick);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickGradual);
		P_GET_UBOOL(Z_Param_CanExecutedImmediately);
		P_GET_UBOOL(Z_Param_NeedToCheckGameplayAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_CommitCancleInteraction_Implementation(Z_Param_InteractionTask,Z_Param_Contributor,Z_Param_RemoveCount,Z_Param_CanEverTick,Z_Param_TickGradual,Z_Param_CanExecutedImmediately,Z_Param_NeedToCheckGameplayAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_CommitAddInteraction)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_InteractionTask);
		P_GET_OBJECT(AActor,Z_Param_Contributor);
		P_GET_UBOOL(Z_Param_CanEverTick);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickGradual);
		P_GET_UBOOL(Z_Param_CanExecutedImmediately);
		P_GET_UBOOL(Z_Param_NeedToCheckGameplayAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CommitAddInteraction_Implementation(Z_Param_InteractionTask,Z_Param_Contributor,Z_Param_CanEverTick,Z_Param_TickGradual,Z_Param_CanExecutedImmediately,Z_Param_NeedToCheckGameplayAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_CommitCancleInteraction)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_InteractionTask);
		P_GET_OBJECT(AActor,Z_Param_Contributor);
		P_GET_PROPERTY(FIntProperty,Z_Param_RemoveCount);
		P_GET_UBOOL(Z_Param_CanEverTick);
		P_GET_PROPERTY(FFloatProperty,Z_Param_TickGradual);
		P_GET_UBOOL(Z_Param_CanExecutedImmediately);
		P_GET_UBOOL(Z_Param_NeedToCheckGameplayAbility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_CommitCancleInteraction_Implementation(Z_Param_InteractionTask,Z_Param_Contributor,Z_Param_RemoveCount,Z_Param_CanEverTick,Z_Param_TickGradual,Z_Param_CanExecutedImmediately,Z_Param_NeedToCheckGameplayAbility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execClient_RunInteractionTask)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_InteractionTask);
		P_GET_STRUCT(FInteractionInfo,Z_Param_InteractionInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RunInteractionTask_Implementation(Z_Param_InteractionTask,Z_Param_InteractionInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerNetPlayerSupportComponent::execServer_Interaction)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_InteractionTask);
		P_GET_OBJECT(AActor,Z_Param_TargetActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_Interaction_Implementation(Z_Param_InteractionTask,Z_Param_TargetActor);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction = FName(TEXT("Client_CommitAddInteraction"));
	void UTriggerNetPlayerSupportComponent::Client_CommitAddInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
	{
		TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms Parms;
		Parms.InteractionTask=InteractionTask;
		Parms.Contributor=Contributor;
		Parms.CanEverTick=CanEverTick ? true : false;
		Parms.TickGradual=TickGradual;
		Parms.CanExecutedImmediately=CanExecutedImmediately ? true : false;
		Parms.NeedToCheckGameplayAbility=NeedToCheckGameplayAbility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction = FName(TEXT("Client_CommitCancleInteraction"));
	void UTriggerNetPlayerSupportComponent::Client_CommitCancleInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, int32 RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
	{
		TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms Parms;
		Parms.InteractionTask=InteractionTask;
		Parms.Contributor=Contributor;
		Parms.RemoveCount=RemoveCount;
		Parms.CanEverTick=CanEverTick ? true : false;
		Parms.TickGradual=TickGradual;
		Parms.CanExecutedImmediately=CanExecutedImmediately ? true : false;
		Parms.NeedToCheckGameplayAbility=NeedToCheckGameplayAbility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask = FName(TEXT("Client_RunInteractionTask"));
	void UTriggerNetPlayerSupportComponent::Client_RunInteractionTask(UTT_Interaction* InteractionTask, FInteractionInfo const& InteractionInfo)
	{
		TriggerNetPlayerSupportComponent_eventClient_RunInteractionTask_Parms Parms;
		Parms.InteractionTask=InteractionTask;
		Parms.InteractionInfo=InteractionInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress = FName(TEXT("Client_SyncSequenceProgress"));
	void UTriggerNetPlayerSupportComponent::Client_SyncSequenceProgress(UTT_LevelSequence* LevelSequence, FFrameTime const& CurFFrameTime)
	{
		TriggerNetPlayerSupportComponent_eventClient_SyncSequenceProgress_Parms Parms;
		Parms.LevelSequence=LevelSequence;
		Parms.CurFFrameTime=CurFFrameTime;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom = FName(TEXT("Multicast_ChangeTranfrom"));
	void UTriggerNetPlayerSupportComponent::Multicast_ChangeTranfrom(bool InUsePosition, bool InUseRotation, bool InUseSize, FTransform Transform)
	{
		TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms Parms;
		Parms.InUsePosition=InUsePosition ? true : false;
		Parms.InUseRotation=InUseRotation ? true : false;
		Parms.InUseSize=InUseSize ? true : false;
		Parms.Transform=Transform;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_BPGameOver = FName(TEXT("Server_BPGameOver"));
	void UTriggerNetPlayerSupportComponent::Server_BPGameOver(TArray<APlayerController*> const& GameOverPlayers, const FString& URL)
	{
		TriggerNetPlayerSupportComponent_eventServer_BPGameOver_Parms Parms;
		Parms.GameOverPlayers=GameOverPlayers;
		Parms.URL=URL;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_BPGameOver),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_CloseEffect = FName(TEXT("Server_CloseEffect"));
	void UTriggerNetPlayerSupportComponent::Server_CloseEffect(UTriggerTaskBase* Task, TArray<UObject*> const& Causers, int32 EffectDataIndex)
	{
		TriggerNetPlayerSupportComponent_eventServer_CloseEffect_Parms Parms;
		Parms.Task=Task;
		Parms.Causers=Causers;
		Parms.EffectDataIndex=EffectDataIndex;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_CloseEffect),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction = FName(TEXT("Server_CommitAddInteraction"));
	void UTriggerNetPlayerSupportComponent::Server_CommitAddInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
	{
		TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms Parms;
		Parms.InteractionTask=InteractionTask;
		Parms.Contributor=Contributor;
		Parms.CanEverTick=CanEverTick ? true : false;
		Parms.TickGradual=TickGradual;
		Parms.CanExecutedImmediately=CanExecutedImmediately ? true : false;
		Parms.NeedToCheckGameplayAbility=NeedToCheckGameplayAbility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction = FName(TEXT("Server_CommitCancleInteraction"));
	void UTriggerNetPlayerSupportComponent::Server_CommitCancleInteraction(UTT_Interaction* InteractionTask, AActor* Contributor, int32 RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility)
	{
		TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms Parms;
		Parms.InteractionTask=InteractionTask;
		Parms.Contributor=Contributor;
		Parms.RemoveCount=RemoveCount;
		Parms.CanEverTick=CanEverTick ? true : false;
		Parms.TickGradual=TickGradual;
		Parms.CanExecutedImmediately=CanExecutedImmediately ? true : false;
		Parms.NeedToCheckGameplayAbility=NeedToCheckGameplayAbility ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_Interaction = FName(TEXT("Server_Interaction"));
	void UTriggerNetPlayerSupportComponent::Server_Interaction(UTT_Interaction* InteractionTask, AActor* TargetActor)
	{
		TriggerNetPlayerSupportComponent_eventServer_Interaction_Parms Parms;
		Parms.InteractionTask=InteractionTask;
		Parms.TargetActor=TargetActor;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_Interaction),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask = FName(TEXT("Server_InvokeServerTask"));
	void UTriggerNetPlayerSupportComponent::Server_InvokeServerTask(FTriggerTaskRuntimeInfo const& RuntimeInfo)
	{
		TriggerNetPlayerSupportComponent_eventServer_InvokeServerTask_Parms Parms;
		Parms.RuntimeInfo=RuntimeInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_OpenEffect = FName(TEXT("Server_OpenEffect"));
	void UTriggerNetPlayerSupportComponent::Server_OpenEffect(UTriggerTaskBase* Task, TArray<UObject*> const& Causers, int32 EffectDataIndex)
	{
		TriggerNetPlayerSupportComponent_eventServer_OpenEffect_Parms Parms;
		Parms.Task=Task;
		Parms.Causers=Causers;
		Parms.EffectDataIndex=EffectDataIndex;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_OpenEffect),&Parms);
	}
	static FName NAME_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress = FName(TEXT("Server_SyncSequenceProgress"));
	void UTriggerNetPlayerSupportComponent::Server_SyncSequenceProgress(UTT_LevelSequence* LevelSequence)
	{
		TriggerNetPlayerSupportComponent_eventServer_SyncSequenceProgress_Parms Parms;
		Parms.LevelSequence=LevelSequence;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress),&Parms);
	}
	void UTriggerNetPlayerSupportComponent::StaticRegisterNativesUTriggerNetPlayerSupportComponent()
	{
		UClass* Class = UTriggerNetPlayerSupportComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Client_CommitAddInteraction", &UTriggerNetPlayerSupportComponent::execClient_CommitAddInteraction },
			{ "Client_CommitCancleInteraction", &UTriggerNetPlayerSupportComponent::execClient_CommitCancleInteraction },
			{ "Client_RunInteractionTask", &UTriggerNetPlayerSupportComponent::execClient_RunInteractionTask },
			{ "Client_SyncSequenceProgress", &UTriggerNetPlayerSupportComponent::execClient_SyncSequenceProgress },
			{ "Multicast_ChangeTranfrom", &UTriggerNetPlayerSupportComponent::execMulticast_ChangeTranfrom },
			{ "Server_BPGameOver", &UTriggerNetPlayerSupportComponent::execServer_BPGameOver },
			{ "Server_CloseEffect", &UTriggerNetPlayerSupportComponent::execServer_CloseEffect },
			{ "Server_CommitAddInteraction", &UTriggerNetPlayerSupportComponent::execServer_CommitAddInteraction },
			{ "Server_CommitCancleInteraction", &UTriggerNetPlayerSupportComponent::execServer_CommitCancleInteraction },
			{ "Server_Interaction", &UTriggerNetPlayerSupportComponent::execServer_Interaction },
			{ "Server_InvokeServerTask", &UTriggerNetPlayerSupportComponent::execServer_InvokeServerTask },
			{ "Server_OpenEffect", &UTriggerNetPlayerSupportComponent::execServer_OpenEffect },
			{ "Server_SyncSequenceProgress", &UTriggerNetPlayerSupportComponent::execServer_SyncSequenceProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradual;
		static void NewProp_CanExecutedImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedImmediately;
		static void NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGameplayAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_TickGradual = { "TickGradual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms, TickGradual), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms*)Obj)->CanExecutedImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately = { "CanExecutedImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms*)Obj)->NeedToCheckGameplayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility = { "NeedToCheckGameplayAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_TickGradual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Commit command for the interaction task FOR CLIENT\n\x09*\n\x09* @param CanEverTick\x09""Flag to check weather this command will execute in the tick function of the Interaction rule\n\x09* @param TickGradual\x09the gradual between the immediate two execution of this command\n\x09* @param CanExecuteImmediately\x09\x09""Flag to check weather this command will execute immediately without waiting the next tick\n\x09*/" },
		{ "CPP_Default_CanEverTick", "false" },
		{ "CPP_Default_CanExecutedImmediately", "true" },
		{ "CPP_Default_NeedToCheckGameplayAbility", "true" },
		{ "CPP_Default_TickGradual", "0.000000" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* Commit command for the interaction task FOR CLIENT\n*\n* @param CanEverTick    Flag to check weather this command will execute in the tick function of the Interaction rule\n* @param TickGradual    the gradual between the immediate two execution of this command\n* @param CanExecuteImmediately          Flag to check weather this command will execute immediately without waiting the next tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Client_CommitAddInteraction", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RemoveCount;
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradual;
		static void NewProp_CanExecutedImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedImmediately;
		static void NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGameplayAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_RemoveCount = { "RemoveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms, RemoveCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_TickGradual = { "TickGradual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms, TickGradual), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms*)Obj)->CanExecutedImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately = { "CanExecutedImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms*)Obj)->NeedToCheckGameplayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility = { "NeedToCheckGameplayAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_RemoveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_TickGradual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Commit command for the interaction task FOR CLIENT\n\x09*\n\x09* @param RemoveCount\x09the number that this command will remove the last contributions belong to  Contributor\n\x09* @param CanEverTick\x09""Flag to check weather this command will execute in the tick function of the Interaction rule\n\x09* @param TickGradual\x09the gradual between the immediate two execution of this command\n\x09* @param CanExecuteImmediately\x09\x09""Flag to check weather this command will execute immediately without waiting the next tick\n\x09*/" },
		{ "CPP_Default_CanEverTick", "false" },
		{ "CPP_Default_CanExecutedImmediately", "true" },
		{ "CPP_Default_NeedToCheckGameplayAbility", "false" },
		{ "CPP_Default_RemoveCount", "1" },
		{ "CPP_Default_TickGradual", "0.000000" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* Commit command for the interaction task FOR CLIENT\n*\n* @param RemoveCount    the number that this command will remove the last contributions belong to  Contributor\n* @param CanEverTick    Flag to check weather this command will execute in the tick function of the Interaction rule\n* @param TickGradual    the gradual between the immediate two execution of this command\n* @param CanExecuteImmediately          Flag to check weather this command will execute immediately without waiting the next tick" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Client_CommitCancleInteraction", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_RunInteractionTask_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionInfo = { "InteractionInfo", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_RunInteractionTask_Parms, InteractionInfo), Z_Construct_UScriptStruct_FInteractionInfo, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::NewProp_InteractionInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//When the server have run the interaction task, the server will notify the client to run the Interaction task\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "When the server have run the interaction task, the server will notify the client to run the Interaction task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Client_RunInteractionTask", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventClient_RunInteractionTask_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurFFrameTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurFFrameTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_SyncSequenceProgress_Parms, LevelSequence), Z_Construct_UClass_UTT_LevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_CurFFrameTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_CurFFrameTime = { "CurFFrameTime", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventClient_SyncSequenceProgress_Parms, CurFFrameTime), Z_Construct_UScriptStruct_FFrameTime, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_CurFFrameTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_CurFFrameTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::NewProp_CurFFrameTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Client_SyncSequenceProgress", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventClient_SyncSequenceProgress_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics
	{
		static void NewProp_InUsePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InUsePosition;
		static void NewProp_InUseRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InUseRotation;
		static void NewProp_InUseSize_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InUseSize;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUsePosition_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms*)Obj)->InUsePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUsePosition = { "InUsePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUsePosition_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseRotation_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms*)Obj)->InUseRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseRotation = { "InUseRotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseRotation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseSize_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms*)Obj)->InUseSize = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseSize = { "InUseSize", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUsePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_InUseSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When we change the character's transformation we should notify other player that we change \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* When we change the character's transformation we should notify other player that we change" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Multicast_ChangeTranfrom", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00824CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameOverPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameOverPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers_Inner = { "GameOverPlayers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers = { "GameOverPlayers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_BPGameOver_Parms, GameOverPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_BPGameOver_Parms, URL), METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_GameOverPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::NewProp_URL,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_BPGameOver", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_BPGameOver_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CloseEffect_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CloseEffect_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CloseEffect_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::NewProp_EffectDataIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Invoke server to close effect\n\x09*\n\x09* @param Task which task need to open effect\n\x09* @param Causers who rise up this command\n\x09* @param EffectDataIndex the index of the data in the effect task should be closed, INDEX_NONE means all data should be closed\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* Invoke server to close effect\n*\n* @param Task which task need to open effect\n* @param Causers who rise up this command\n* @param EffectDataIndex the index of the data in the effect task should be closed, INDEX_NONE means all data should be closed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_CloseEffect", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_CloseEffect_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradual;
		static void NewProp_CanExecutedImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedImmediately;
		static void NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGameplayAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_TickGradual = { "TickGradual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms, TickGradual), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms*)Obj)->CanExecutedImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately = { "CanExecutedImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms*)Obj)->NeedToCheckGameplayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility = { "NeedToCheckGameplayAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_TickGradual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_CanExecutedImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::NewProp_NeedToCheckGameplayAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Commit command for the interaction task\n\x09*\n\x09* @param CanEverTick\x09""Flag to check weather this command will execute in the tick function of the Interaction rule\n\x09* @param TickGradual\x09the gradual between the immediate two execution of this command\n\x09* @param CanExecuteImmediately\x09\x09""Flag to check weather this command will execute immediately without waiting the next tick\n\x09* @param NeedToCheckGameplayAbility\x09""Flag to check weather this command need to check the game play ability to do some external implementations\n\x09*/" },
		{ "CPP_Default_CanEverTick", "false" },
		{ "CPP_Default_CanExecutedImmediately", "true" },
		{ "CPP_Default_NeedToCheckGameplayAbility", "true" },
		{ "CPP_Default_TickGradual", "0.000000" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* Commit command for the interaction task\n*\n* @param CanEverTick    Flag to check weather this command will execute in the tick function of the Interaction rule\n* @param TickGradual    the gradual between the immediate two execution of this command\n* @param CanExecuteImmediately          Flag to check weather this command will execute immediately without waiting the next tick\n* @param NeedToCheckGameplayAbility     Flag to check weather this command need to check the game play ability to do some external implementations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_CommitAddInteraction", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RemoveCount;
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TickGradual;
		static void NewProp_CanExecutedImmediately_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanExecutedImmediately;
		static void NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NeedToCheckGameplayAbility;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms, Contributor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_RemoveCount = { "RemoveCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms, RemoveCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_TickGradual = { "TickGradual", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms, TickGradual), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms*)Obj)->CanExecutedImmediately = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately = { "CanExecutedImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit(void* Obj)
	{
		((TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms*)Obj)->NeedToCheckGameplayAbility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility = { "NeedToCheckGameplayAbility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms), &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_RemoveCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_TickGradual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_CanExecutedImmediately,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::NewProp_NeedToCheckGameplayAbility,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Commit command for the interaction task\n\x09* \n\x09* @param RemoveCount\x09the number that this command will remove the last contributions belong to  Contributor\n\x09* @param CanEverTick\x09""Flag to check weather this command will execute in the tick function of the Interaction rule\n\x09* @param TickGradual\x09the gradual between the immediate two execution of this command\n\x09* @param CanExecuteImmediately\x09\x09""Flag to check weather this command will execute immediately without waiting the next tick \n\x09* @param NeedToCheckGameplayAbility\x09""Flag to check weather this command need to check the game play ability to do some external implementations\n\x09*/" },
		{ "CPP_Default_CanEverTick", "false" },
		{ "CPP_Default_CanExecutedImmediately", "true" },
		{ "CPP_Default_NeedToCheckGameplayAbility", "false" },
		{ "CPP_Default_RemoveCount", "1" },
		{ "CPP_Default_TickGradual", "0.000000" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* Commit command for the interaction task\n*\n* @param RemoveCount    the number that this command will remove the last contributions belong to  Contributor\n* @param CanEverTick    Flag to check weather this command will execute in the tick function of the Interaction rule\n* @param TickGradual    the gradual between the immediate two execution of this command\n* @param CanExecuteImmediately          Flag to check weather this command will execute immediately without waiting the next tick\n* @param NeedToCheckGameplayAbility     Flag to check weather this command need to check the game play ability to do some external implementations" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_CommitCancleInteraction", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionTask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_InteractionTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_InteractionTask = { "InteractionTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_Interaction_Parms, InteractionTask), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_InteractionTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_InteractionTask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_Interaction_Parms, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_InteractionTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::NewProp_TargetActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Invoked when the player touch something and want to notify the server to run this interaction task\n" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "Invoked when the player touch something and want to notify the server to run this interaction task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_Interaction", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_Interaction_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RuntimeInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RuntimeInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::NewProp_RuntimeInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::NewProp_RuntimeInfo = { "RuntimeInfo", nullptr, (EPropertyFlags)0x0010008008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_InvokeServerTask_Parms, RuntimeInfo), Z_Construct_UScriptStruct_FTriggerTaskRuntimeInfo, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::NewProp_RuntimeInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::NewProp_RuntimeInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::NewProp_RuntimeInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* RPC function for the trigger to invoke the task which will run on the server \n\x09* As sometimes the target trigger which own this component have not been loaded then I need load them first and then invoke them.\n\x09* I need to use the ID not the hard point to run the target component\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* RPC function for the trigger to invoke the task which will run on the server\n* As sometimes the target trigger which own this component have not been loaded then I need load them first and then invoke them.\n* I need to use the ID not the hard point to run the target component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_InvokeServerTask", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_InvokeServerTask_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EffectDataIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_OpenEffect_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_OpenEffect_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_EffectDataIndex = { "EffectDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_OpenEffect_Parms, EffectDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::NewProp_EffectDataIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Invoke server to open effect\n\x09* \n\x09* @param Task which task need to open effect\n\x09* @param Causers who rise up this command\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "* Invoke server to open effect\n*\n* @param Task which task need to open effect\n* @param Causers who rise up this command" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_OpenEffect", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_OpenEffect_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerNetPlayerSupportComponent_eventServer_SyncSequenceProgress_Parms, LevelSequence), Z_Construct_UClass_UTT_LevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::NewProp_LevelSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::NewProp_LevelSequence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerNetPlayerSupportComponent, nullptr, "Server_SyncSequenceProgress", nullptr, nullptr, sizeof(TriggerNetPlayerSupportComponent_eventServer_SyncSequenceProgress_Parms), Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerNetPlayerSupportComponent_NoRegister()
	{
		return UTriggerNetPlayerSupportComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitAddInteraction, "Client_CommitAddInteraction" }, // 3866970687
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_CommitCancleInteraction, "Client_CommitCancleInteraction" }, // 1928125300
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_RunInteractionTask, "Client_RunInteractionTask" }, // 1701336824
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Client_SyncSequenceProgress, "Client_SyncSequenceProgress" }, // 3481060639
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Multicast_ChangeTranfrom, "Multicast_ChangeTranfrom" }, // 1973492416
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_BPGameOver, "Server_BPGameOver" }, // 3698793827
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CloseEffect, "Server_CloseEffect" }, // 3786212092
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitAddInteraction, "Server_CommitAddInteraction" }, // 2491801123
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_CommitCancleInteraction, "Server_CommitCancleInteraction" }, // 2552408111
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_Interaction, "Server_Interaction" }, // 1389836503
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_InvokeServerTask, "Server_InvokeServerTask" }, // 390060189
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_OpenEffect, "Server_OpenEffect" }, // 2668109187
		{ &Z_Construct_UFunction_UTriggerNetPlayerSupportComponent_Server_SyncSequenceProgress, "Server_SyncSequenceProgress" }, // 2481831936
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * All the functions that only need to use RPC(Server/Client) should put in class\n * When you use Trigger plugin you should make sure your any your player controller contain this Object.\n */" },
		{ "IncludePath", "TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ModuleRelativePath", "Public/TriggerTaskComponent/TriggerNetPlayerSupportComponent.h" },
		{ "ToolTip", "All the functions that only need to use RPC(Server/Client) should put in class\nWhen you use Trigger plugin you should make sure your any your player controller contain this Object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerNetPlayerSupportComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::ClassParams = {
		&UTriggerNetPlayerSupportComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerNetPlayerSupportComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerNetPlayerSupportComponent, 2071935865);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerNetPlayerSupportComponent>()
	{
		return UTriggerNetPlayerSupportComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerNetPlayerSupportComponent(Z_Construct_UClass_UTriggerNetPlayerSupportComponent, &UTriggerNetPlayerSupportComponent::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerNetPlayerSupportComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerNetPlayerSupportComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
