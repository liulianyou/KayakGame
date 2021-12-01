// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskBase;
class UOperationInformationBase;
class UTriggerTaskExternalDataBase;
class UTriggerTaskStateSwitchBase;
enum class ERunType : uint8;
enum class ETriggerTaskState : uint8;
class UReplicateTypeBase;
struct FTriggerTaskHandle;
struct FGuid;
struct FTaskActivationInfoContainer;
struct FTaskActivationInfo;
class UTriggerTaskManager;
class AActor;
class UTriggerTaskComponentBase;
class UTriggerManager;
class UObject;
#ifdef TRIGGERRUNTIME_TriggerTaskBase_generated_h
#error "TriggerTaskBase.generated.h already included, missing '#pragma once' in TriggerTaskBase.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_123_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__Handle() { return STRUCT_OFFSET(FTriggerTaskHandle, Handle); }


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FTriggerTaskHandle>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_108_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FPendingToExecuteInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_185_DELEGATE \
struct _Script_TriggerRunTime_eventTriggerTaskState_Parms \
{ \
	UTriggerTaskBase* Task; \
}; \
static inline void FTriggerTaskState_DelegateWrapper(const FMulticastScriptDelegate& TriggerTaskState, UTriggerTaskBase* Task) \
{ \
	_Script_TriggerRunTime_eventTriggerTaskState_Parms Parms; \
	Parms.Task=Task; \
	TriggerTaskState.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_RPC_WRAPPERS \
	virtual bool CanReplicateExecuteCount_Implementation(); \
	virtual UTriggerTaskBase* FindOrAddNewInstance_Implementation(FTaskActivationInfo& ActivationInfo); \
	virtual bool Muticast_ReceiveNotifyFromOthersComponent_Validate(UTriggerTaskComponentBase* , UTriggerTaskBase* , UOperationInformationBase* ); \
	virtual void Muticast_ReceiveNotifyFromOthersComponent_Implementation(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo); \
 \
	DECLARE_FUNCTION(execSwitchEventRepeatConditions); \
	DECLARE_FUNCTION(execSwitchEventResumeConditions); \
	DECLARE_FUNCTION(execSwitchEventPauseConditions); \
	DECLARE_FUNCTION(execSwitchEventSkipConditions); \
	DECLARE_FUNCTION(execSwitchEventResetConditions); \
	DECLARE_FUNCTION(execSwitchEventSleepConditions); \
	DECLARE_FUNCTION(execSwitchEventStopConditions); \
	DECLARE_FUNCTION(execSwitchEventFinishConditions); \
	DECLARE_FUNCTION(execSwitchEventStartConditions); \
	DECLARE_FUNCTION(execMarkCurrentActivationInfo); \
	DECLARE_FUNCTION(execDebugBreak); \
	DECLARE_FUNCTION(execResetUserData); \
	DECLARE_FUNCTION(execFinializeUserData); \
	DECLARE_FUNCTION(execInitializeUserData); \
	DECLARE_FUNCTION(execRemoveUserDataByInstance); \
	DECLARE_FUNCTION(execRemoveUserDataByClass); \
	DECLARE_FUNCTION(execAddNewUserDataByInstance); \
	DECLARE_FUNCTION(execAddNewUserDataByClass); \
	DECLARE_FUNCTION(execGetTargetUserData); \
	DECLARE_FUNCTION(execHasTargetUserDate); \
	DECLARE_FUNCTION(execGetUserDatas); \
	DECLARE_FUNCTION(execGetConstUserDatas); \
	DECLARE_FUNCTION(execSetRepeatConditions); \
	DECLARE_FUNCTION(execSetResetConditions); \
	DECLARE_FUNCTION(execSetResumeConditions); \
	DECLARE_FUNCTION(execSetPauseConditions); \
	DECLARE_FUNCTION(execSetSleepConditions); \
	DECLARE_FUNCTION(execSetSkipConditions); \
	DECLARE_FUNCTION(execSetStopConditions); \
	DECLARE_FUNCTION(execSetFinishConditions); \
	DECLARE_FUNCTION(execSetStartConditions); \
	DECLARE_FUNCTION(execCanExecuteAutomatically); \
	DECLARE_FUNCTION(execGetCurrentActiveInfoIndex); \
	DECLARE_FUNCTION(execGetRunType); \
	DECLARE_FUNCTION(execGetCurrentTriggerTaskState); \
	DECLARE_FUNCTION(execGetReplicateType); \
	DECLARE_FUNCTION(execGetCopyChildTasks); \
	DECLARE_FUNCTION(execGetConstChildTasks); \
	DECLARE_FUNCTION(execGetChildTasks); \
	DECLARE_FUNCTION(execGetCopyTaskHandle); \
	DECLARE_FUNCTION(execGetTaskHandle); \
	DECLARE_FUNCTION(execGetConstTaskHandle); \
	DECLARE_FUNCTION(execGetCopyID); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetConstID); \
	DECLARE_FUNCTION(execGetPauseConditions); \
	DECLARE_FUNCTION(execGetRepeatConditions); \
	DECLARE_FUNCTION(execGetResumeConditions); \
	DECLARE_FUNCTION(execGetResetConditions); \
	DECLARE_FUNCTION(execGetSleepConditions); \
	DECLARE_FUNCTION(execGetSkipConditions); \
	DECLARE_FUNCTION(execGetStopConditions); \
	DECLARE_FUNCTION(execGetFinishConditions); \
	DECLARE_FUNCTION(execGetStartConditions); \
	DECLARE_FUNCTION(execRep_PendingToExecuteInfo); \
	DECLARE_FUNCTION(execRep_ImmediateActivationInformation); \
	DECLARE_FUNCTION(execRep_State); \
	DECLARE_FUNCTION(execRep_ActivatedCount); \
	DECLARE_FUNCTION(execCanReplicateExecuteCount); \
	DECLARE_FUNCTION(execGetImmediateActivationInformation); \
	DECLARE_FUNCTION(execFindOrAddNewInstance); \
	DECLARE_FUNCTION(execEnterPostFinishedState); \
	DECLARE_FUNCTION(execCheckRunTimeType); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execGetTemplate); \
	DECLARE_FUNCTION(execIsDynamicTask); \
	DECLARE_FUNCTION(execIsTemplateTask); \
	DECLARE_FUNCTION(execGetTriggerTaskManager); \
	DECLARE_FUNCTION(execGetCurrentExecuteCount); \
	DECLARE_FUNCTION(execGetTriggerState); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsCompletelyFinished); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execCanTick); \
	DECLARE_FUNCTION(execClearChildTask); \
	DECLARE_FUNCTION(execRemoveChildTask); \
	DECLARE_FUNCTION(execAddChildTask); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execSetInstigator); \
	DECLARE_FUNCTION(execTryToGetOwnerActor); \
	DECLARE_FUNCTION(execGetTriggerOwner); \
	DECLARE_FUNCTION(execCanBeToggled); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execMuticast_ReceiveNotifyFromOthersComponent); \
	DECLARE_FUNCTION(execReceiveNotifyFromOthersComponent); \
	DECLARE_FUNCTION(execNotifyOtherComponentSuccessed); \
	DECLARE_FUNCTION(execSelectedInEditor); \
	DECLARE_FUNCTION(execTryToSleep); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execTryToStop); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execFinished); \
	DECLARE_FUNCTION(execSkip); \
	DECLARE_FUNCTION(execActive); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execReset);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool CanReplicateExecuteCount_Implementation(); \
	virtual UTriggerTaskBase* FindOrAddNewInstance_Implementation(FTaskActivationInfo& ActivationInfo); \
	virtual bool Muticast_ReceiveNotifyFromOthersComponent_Validate(UTriggerTaskComponentBase* , UTriggerTaskBase* , UOperationInformationBase* ); \
	virtual void Muticast_ReceiveNotifyFromOthersComponent_Implementation(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo); \
 \
	DECLARE_FUNCTION(execSwitchEventRepeatConditions); \
	DECLARE_FUNCTION(execSwitchEventResumeConditions); \
	DECLARE_FUNCTION(execSwitchEventPauseConditions); \
	DECLARE_FUNCTION(execSwitchEventSkipConditions); \
	DECLARE_FUNCTION(execSwitchEventResetConditions); \
	DECLARE_FUNCTION(execSwitchEventSleepConditions); \
	DECLARE_FUNCTION(execSwitchEventStopConditions); \
	DECLARE_FUNCTION(execSwitchEventFinishConditions); \
	DECLARE_FUNCTION(execSwitchEventStartConditions); \
	DECLARE_FUNCTION(execMarkCurrentActivationInfo); \
	DECLARE_FUNCTION(execDebugBreak); \
	DECLARE_FUNCTION(execResetUserData); \
	DECLARE_FUNCTION(execFinializeUserData); \
	DECLARE_FUNCTION(execInitializeUserData); \
	DECLARE_FUNCTION(execRemoveUserDataByInstance); \
	DECLARE_FUNCTION(execRemoveUserDataByClass); \
	DECLARE_FUNCTION(execAddNewUserDataByInstance); \
	DECLARE_FUNCTION(execAddNewUserDataByClass); \
	DECLARE_FUNCTION(execGetTargetUserData); \
	DECLARE_FUNCTION(execHasTargetUserDate); \
	DECLARE_FUNCTION(execGetUserDatas); \
	DECLARE_FUNCTION(execGetConstUserDatas); \
	DECLARE_FUNCTION(execSetRepeatConditions); \
	DECLARE_FUNCTION(execSetResetConditions); \
	DECLARE_FUNCTION(execSetResumeConditions); \
	DECLARE_FUNCTION(execSetPauseConditions); \
	DECLARE_FUNCTION(execSetSleepConditions); \
	DECLARE_FUNCTION(execSetSkipConditions); \
	DECLARE_FUNCTION(execSetStopConditions); \
	DECLARE_FUNCTION(execSetFinishConditions); \
	DECLARE_FUNCTION(execSetStartConditions); \
	DECLARE_FUNCTION(execCanExecuteAutomatically); \
	DECLARE_FUNCTION(execGetCurrentActiveInfoIndex); \
	DECLARE_FUNCTION(execGetRunType); \
	DECLARE_FUNCTION(execGetCurrentTriggerTaskState); \
	DECLARE_FUNCTION(execGetReplicateType); \
	DECLARE_FUNCTION(execGetCopyChildTasks); \
	DECLARE_FUNCTION(execGetConstChildTasks); \
	DECLARE_FUNCTION(execGetChildTasks); \
	DECLARE_FUNCTION(execGetCopyTaskHandle); \
	DECLARE_FUNCTION(execGetTaskHandle); \
	DECLARE_FUNCTION(execGetConstTaskHandle); \
	DECLARE_FUNCTION(execGetCopyID); \
	DECLARE_FUNCTION(execGetID); \
	DECLARE_FUNCTION(execGetConstID); \
	DECLARE_FUNCTION(execGetPauseConditions); \
	DECLARE_FUNCTION(execGetRepeatConditions); \
	DECLARE_FUNCTION(execGetResumeConditions); \
	DECLARE_FUNCTION(execGetResetConditions); \
	DECLARE_FUNCTION(execGetSleepConditions); \
	DECLARE_FUNCTION(execGetSkipConditions); \
	DECLARE_FUNCTION(execGetStopConditions); \
	DECLARE_FUNCTION(execGetFinishConditions); \
	DECLARE_FUNCTION(execGetStartConditions); \
	DECLARE_FUNCTION(execRep_PendingToExecuteInfo); \
	DECLARE_FUNCTION(execRep_ImmediateActivationInformation); \
	DECLARE_FUNCTION(execRep_State); \
	DECLARE_FUNCTION(execRep_ActivatedCount); \
	DECLARE_FUNCTION(execCanReplicateExecuteCount); \
	DECLARE_FUNCTION(execGetImmediateActivationInformation); \
	DECLARE_FUNCTION(execFindOrAddNewInstance); \
	DECLARE_FUNCTION(execEnterPostFinishedState); \
	DECLARE_FUNCTION(execCheckRunTimeType); \
	DECLARE_FUNCTION(execSetTemplate); \
	DECLARE_FUNCTION(execGetTemplate); \
	DECLARE_FUNCTION(execIsDynamicTask); \
	DECLARE_FUNCTION(execIsTemplateTask); \
	DECLARE_FUNCTION(execGetTriggerTaskManager); \
	DECLARE_FUNCTION(execGetCurrentExecuteCount); \
	DECLARE_FUNCTION(execGetTriggerState); \
	DECLARE_FUNCTION(execIsFinished); \
	DECLARE_FUNCTION(execIsCompletelyFinished); \
	DECLARE_FUNCTION(execIsRunning); \
	DECLARE_FUNCTION(execCanTick); \
	DECLARE_FUNCTION(execClearChildTask); \
	DECLARE_FUNCTION(execRemoveChildTask); \
	DECLARE_FUNCTION(execAddChildTask); \
	DECLARE_FUNCTION(execGetInstigator); \
	DECLARE_FUNCTION(execSetInstigator); \
	DECLARE_FUNCTION(execTryToGetOwnerActor); \
	DECLARE_FUNCTION(execGetTriggerOwner); \
	DECLARE_FUNCTION(execCanBeToggled); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execMuticast_ReceiveNotifyFromOthersComponent); \
	DECLARE_FUNCTION(execReceiveNotifyFromOthersComponent); \
	DECLARE_FUNCTION(execNotifyOtherComponentSuccessed); \
	DECLARE_FUNCTION(execSelectedInEditor); \
	DECLARE_FUNCTION(execTryToSleep); \
	DECLARE_FUNCTION(execTick); \
	DECLARE_FUNCTION(execTryToStop); \
	DECLARE_FUNCTION(execResume); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execFinished); \
	DECLARE_FUNCTION(execSkip); \
	DECLARE_FUNCTION(execActive); \
	DECLARE_FUNCTION(execPrepare); \
	DECLARE_FUNCTION(execReset);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_EVENT_PARMS \
	struct TriggerTaskBase_eventCanReplicateExecuteCount_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskBase_eventCanReplicateExecuteCount_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskBase_eventFindOrAddNewInstance_Parms \
	{ \
		FTaskActivationInfo ActivationInfo; \
		UTriggerTaskBase* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskBase_eventFindOrAddNewInstance_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TriggerTaskBase_eventMuticast_ReceiveNotifyFromOthersComponent_Parms \
	{ \
		UTriggerTaskComponentBase* OtherComponent; \
		UTriggerTaskBase* SenderTask; \
		UOperationInformationBase* StartOperationInfo; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UTriggerTaskBase, NO_API)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskBase) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTriggerTaskBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TriggerOwner=NETFIELD_REP_START, \
		State, \
		LastState, \
		UserDatas, \
		ID, \
		TaskHandle, \
		InstigatorOwner, \
		ActivatedCount, \
		ImmediateActivationInformation, \
		PendingToExecuteInfo, \
		NETFIELD_REP_END=PendingToExecuteInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTriggerTaskBase) \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskBase) \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_ARCHIVESERIALIZER \
	virtual UObject* _getUObject() const override { return const_cast<UTriggerTaskBase*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		TriggerOwner=NETFIELD_REP_START, \
		State, \
		LastState, \
		UserDatas, \
		ID, \
		TaskHandle, \
		InstigatorOwner, \
		ActivatedCount, \
		ImmediateActivationInformation, \
		PendingToExecuteInfo, \
		NETFIELD_REP_END=PendingToExecuteInfo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTriggerTaskBase) \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskBase(UTriggerTaskBase&&); \
	NO_API UTriggerTaskBase(const UTriggerTaskBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskBase(UTriggerTaskBase&&); \
	NO_API UTriggerTaskBase(const UTriggerTaskBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__StartConditions() { return STRUCT_OFFSET(UTriggerTaskBase, StartConditions); } \
	FORCEINLINE static uint32 __PPO__FinishConditions() { return STRUCT_OFFSET(UTriggerTaskBase, FinishConditions); } \
	FORCEINLINE static uint32 __PPO__StopConditions() { return STRUCT_OFFSET(UTriggerTaskBase, StopConditions); } \
	FORCEINLINE static uint32 __PPO__SleepConditions() { return STRUCT_OFFSET(UTriggerTaskBase, SleepConditions); } \
	FORCEINLINE static uint32 __PPO__ResetConditions() { return STRUCT_OFFSET(UTriggerTaskBase, ResetConditions); } \
	FORCEINLINE static uint32 __PPO__SkipConditions() { return STRUCT_OFFSET(UTriggerTaskBase, SkipConditions); } \
	FORCEINLINE static uint32 __PPO__PauseConditions() { return STRUCT_OFFSET(UTriggerTaskBase, PauseConditions); } \
	FORCEINLINE static uint32 __PPO__ResumeConditions() { return STRUCT_OFFSET(UTriggerTaskBase, ResumeConditions); } \
	FORCEINLINE static uint32 __PPO__RepeatConditions() { return STRUCT_OFFSET(UTriggerTaskBase, RepeatConditions); } \
	FORCEINLINE static uint32 __PPO__UserDatas() { return STRUCT_OFFSET(UTriggerTaskBase, UserDatas); } \
	FORCEINLINE static uint32 __PPO__ReplicateType() { return STRUCT_OFFSET(UTriggerTaskBase, ReplicateType); } \
	FORCEINLINE static uint32 __PPO__ID() { return STRUCT_OFFSET(UTriggerTaskBase, ID); } \
	FORCEINLINE static uint32 __PPO__TaskHandle() { return STRUCT_OFFSET(UTriggerTaskBase, TaskHandle); } \
	FORCEINLINE static uint32 __PPO__InstigatorOwner() { return STRUCT_OFFSET(UTriggerTaskBase, InstigatorOwner); } \
	FORCEINLINE static uint32 __PPO__ActivatedCount() { return STRUCT_OFFSET(UTriggerTaskBase, ActivatedCount); } \
	FORCEINLINE static uint32 __PPO__ImmediateActivationInformation() { return STRUCT_OFFSET(UTriggerTaskBase, ImmediateActivationInformation); } \
	FORCEINLINE static uint32 __PPO__PendingToExecuteInfo() { return STRUCT_OFFSET(UTriggerTaskBase, PendingToExecuteInfo); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_187_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h_190_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskBase_h


#define FOREACH_ENUM_ETASKINSTANCETYPE(op) \
	op(ETaskInstanceType::ETaskInstanceType_CreateNewInstance) \
	op(ETaskInstanceType::ETaskInstanceType_NoNewInstance) \
	op(ETaskInstanceType::ETaskInstanceType_CDO) 

enum class ETaskInstanceType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETaskInstanceType>();

#define FOREACH_ENUM_ETASKTRANSFERTYPE(op) \
	op(ETaskTransferType::ETaskTransferType_None) \
	op(ETaskTransferType::ETaskTransferType_Notify) \
	op(ETaskTransferType::ETaskTransferType_Copy) \
	op(ETaskTransferType::ETaskTransferType_Move) 

enum class ETaskTransferType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETaskTransferType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
