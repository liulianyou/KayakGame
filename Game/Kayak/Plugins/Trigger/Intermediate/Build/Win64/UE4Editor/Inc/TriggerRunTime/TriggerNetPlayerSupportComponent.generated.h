// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTT_LevelSequence;
struct FFrameTime;
class APlayerController;
struct FTriggerTaskRuntimeInfo;
class UTriggerTaskBase;
class UObject;
struct FTransform;
class UTT_Interaction;
class AActor;
struct FInteractionInfo;
#ifdef TRIGGERRUNTIME_TriggerNetPlayerSupportComponent_generated_h
#error "TriggerNetPlayerSupportComponent.generated.h already included, missing '#pragma once' in TriggerNetPlayerSupportComponent.h"
#endif
#define TRIGGERRUNTIME_TriggerNetPlayerSupportComponent_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_RPC_WRAPPERS \
	virtual void Client_SyncSequenceProgress_Implementation(UTT_LevelSequence* LevelSequence, FFrameTime const& CurFFrameTime); \
	virtual void Server_SyncSequenceProgress_Implementation(UTT_LevelSequence* LevelSequence); \
	virtual void Server_BPGameOver_Implementation(TArray<APlayerController*> const& GameOverPlayers, const FString& URL); \
	virtual void Server_InvokeServerTask_Implementation(FTriggerTaskRuntimeInfo const& RuntimeInfo); \
	virtual void Server_CloseEffect_Implementation(UTriggerTaskBase* Task, TArray<UObject*> const& Causers, int32 EffectDataIndex); \
	virtual void Server_OpenEffect_Implementation(UTriggerTaskBase* Task, TArray<UObject*> const& Causers, int32 EffectDataIndex); \
	virtual void Multicast_ChangeTranfrom_Implementation(bool InUsePosition, bool InUseRotation, bool InUseSize, FTransform Transform); \
	virtual void Client_CommitAddInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Client_CommitCancleInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, int32 RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Server_CommitAddInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Server_CommitCancleInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, int32 RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Client_RunInteractionTask_Implementation(UTT_Interaction* InteractionTask, FInteractionInfo const& InteractionInfo); \
	virtual void Server_Interaction_Implementation(UTT_Interaction* InteractionTask, AActor* TargetActor); \
 \
	DECLARE_FUNCTION(execClient_SyncSequenceProgress); \
	DECLARE_FUNCTION(execServer_SyncSequenceProgress); \
	DECLARE_FUNCTION(execServer_BPGameOver); \
	DECLARE_FUNCTION(execServer_InvokeServerTask); \
	DECLARE_FUNCTION(execServer_CloseEffect); \
	DECLARE_FUNCTION(execServer_OpenEffect); \
	DECLARE_FUNCTION(execMulticast_ChangeTranfrom); \
	DECLARE_FUNCTION(execClient_CommitAddInteraction); \
	DECLARE_FUNCTION(execClient_CommitCancleInteraction); \
	DECLARE_FUNCTION(execServer_CommitAddInteraction); \
	DECLARE_FUNCTION(execServer_CommitCancleInteraction); \
	DECLARE_FUNCTION(execClient_RunInteractionTask); \
	DECLARE_FUNCTION(execServer_Interaction);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_SyncSequenceProgress_Implementation(UTT_LevelSequence* LevelSequence, FFrameTime const& CurFFrameTime); \
	virtual void Server_SyncSequenceProgress_Implementation(UTT_LevelSequence* LevelSequence); \
	virtual void Server_BPGameOver_Implementation(TArray<APlayerController*> const& GameOverPlayers, const FString& URL); \
	virtual void Server_InvokeServerTask_Implementation(FTriggerTaskRuntimeInfo const& RuntimeInfo); \
	virtual void Server_CloseEffect_Implementation(UTriggerTaskBase* Task, TArray<UObject*> const& Causers, int32 EffectDataIndex); \
	virtual void Server_OpenEffect_Implementation(UTriggerTaskBase* Task, TArray<UObject*> const& Causers, int32 EffectDataIndex); \
	virtual void Multicast_ChangeTranfrom_Implementation(bool InUsePosition, bool InUseRotation, bool InUseSize, FTransform Transform); \
	virtual void Client_CommitAddInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Client_CommitCancleInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, int32 RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Server_CommitAddInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Server_CommitCancleInteraction_Implementation(UTT_Interaction* InteractionTask, AActor* Contributor, int32 RemoveCount, bool CanEverTick, float TickGradual, bool CanExecutedImmediately, bool NeedToCheckGameplayAbility); \
	virtual void Client_RunInteractionTask_Implementation(UTT_Interaction* InteractionTask, FInteractionInfo const& InteractionInfo); \
	virtual void Server_Interaction_Implementation(UTT_Interaction* InteractionTask, AActor* TargetActor); \
 \
	DECLARE_FUNCTION(execClient_SyncSequenceProgress); \
	DECLARE_FUNCTION(execServer_SyncSequenceProgress); \
	DECLARE_FUNCTION(execServer_BPGameOver); \
	DECLARE_FUNCTION(execServer_InvokeServerTask); \
	DECLARE_FUNCTION(execServer_CloseEffect); \
	DECLARE_FUNCTION(execServer_OpenEffect); \
	DECLARE_FUNCTION(execMulticast_ChangeTranfrom); \
	DECLARE_FUNCTION(execClient_CommitAddInteraction); \
	DECLARE_FUNCTION(execClient_CommitCancleInteraction); \
	DECLARE_FUNCTION(execServer_CommitAddInteraction); \
	DECLARE_FUNCTION(execServer_CommitCancleInteraction); \
	DECLARE_FUNCTION(execClient_RunInteractionTask); \
	DECLARE_FUNCTION(execServer_Interaction);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_EVENT_PARMS \
	struct TriggerNetPlayerSupportComponent_eventClient_CommitAddInteraction_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		AActor* Contributor; \
		bool CanEverTick; \
		float TickGradual; \
		bool CanExecutedImmediately; \
		bool NeedToCheckGameplayAbility; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventClient_CommitCancleInteraction_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		AActor* Contributor; \
		int32 RemoveCount; \
		bool CanEverTick; \
		float TickGradual; \
		bool CanExecutedImmediately; \
		bool NeedToCheckGameplayAbility; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventClient_RunInteractionTask_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		FInteractionInfo InteractionInfo; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventClient_SyncSequenceProgress_Parms \
	{ \
		UTT_LevelSequence* LevelSequence; \
		FFrameTime CurFFrameTime; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventMulticast_ChangeTranfrom_Parms \
	{ \
		bool InUsePosition; \
		bool InUseRotation; \
		bool InUseSize; \
		FTransform Transform; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_BPGameOver_Parms \
	{ \
		TArray<APlayerController*> GameOverPlayers; \
		FString URL; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_CloseEffect_Parms \
	{ \
		UTriggerTaskBase* Task; \
		TArray<UObject*> Causers; \
		int32 EffectDataIndex; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_CommitAddInteraction_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		AActor* Contributor; \
		bool CanEverTick; \
		float TickGradual; \
		bool CanExecutedImmediately; \
		bool NeedToCheckGameplayAbility; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_CommitCancleInteraction_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		AActor* Contributor; \
		int32 RemoveCount; \
		bool CanEverTick; \
		float TickGradual; \
		bool CanExecutedImmediately; \
		bool NeedToCheckGameplayAbility; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_Interaction_Parms \
	{ \
		UTT_Interaction* InteractionTask; \
		AActor* TargetActor; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_InvokeServerTask_Parms \
	{ \
		FTriggerTaskRuntimeInfo RuntimeInfo; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_OpenEffect_Parms \
	{ \
		UTriggerTaskBase* Task; \
		TArray<UObject*> Causers; \
		int32 EffectDataIndex; \
	}; \
	struct TriggerNetPlayerSupportComponent_eventServer_SyncSequenceProgress_Parms \
	{ \
		UTT_LevelSequence* LevelSequence; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerNetPlayerSupportComponent(); \
	friend struct Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerNetPlayerSupportComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerNetPlayerSupportComponent) \
	DECLARE_WITHIN(AController)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerNetPlayerSupportComponent(); \
	friend struct Z_Construct_UClass_UTriggerNetPlayerSupportComponent_Statics; \
public: \
	DECLARE_CLASS(UTriggerNetPlayerSupportComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerNetPlayerSupportComponent) \
	DECLARE_WITHIN(AController)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerNetPlayerSupportComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerNetPlayerSupportComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerNetPlayerSupportComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerNetPlayerSupportComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerNetPlayerSupportComponent(UTriggerNetPlayerSupportComponent&&); \
	NO_API UTriggerNetPlayerSupportComponent(const UTriggerNetPlayerSupportComponent&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerNetPlayerSupportComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerNetPlayerSupportComponent(UTriggerNetPlayerSupportComponent&&); \
	NO_API UTriggerNetPlayerSupportComponent(const UTriggerNetPlayerSupportComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerNetPlayerSupportComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerNetPlayerSupportComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerNetPlayerSupportComponent)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_28_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h_31_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerNetPlayerSupportComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerNetPlayerSupportComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTaskComponent_TriggerNetPlayerSupportComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
