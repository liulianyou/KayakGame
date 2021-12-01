// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ETriggerTaskAutomaticallyEndType : uint8;
class UOperationInformationBase;
class UTriggerTaskComponentBase;
class UTriggerTaskBase;
class UObject;
#ifdef TRIGGERRUNTIME_TriggerTaskInterface_generated_h
#error "TriggerTaskInterface.generated.h already included, missing '#pragma once' in TriggerTaskInterface.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskInterface_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_EVENT_PARMS \
	struct TriggerTaskInterface_eventOnCanBeToggled_Parms \
	{ \
		bool Result; \
	}; \
	struct TriggerTaskInterface_eventOnCanEndTaskAutomaically_Parms \
	{ \
		bool Result; \
		ETriggerTaskAutomaticallyEndType EndType; \
	}; \
	struct TriggerTaskInterface_eventOnCanTick_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskInterface_eventOnCanTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskInterface_eventOnFinished_Parms \
	{ \
		UOperationInformationBase* FinishOperationInfo; \
	}; \
	struct TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms \
	{ \
		UTriggerTaskComponentBase* TargetTaskComponent; \
		UTriggerTaskBase* Task; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskInterface_eventOnPause_Parms \
	{ \
		UOperationInformationBase* Operation; \
	}; \
	struct TriggerTaskInterface_eventOnPrepare_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskInterface_eventOnPrepare_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms \
	{ \
		UTriggerTaskComponentBase* TargetTaskComponent; \
		UTriggerTaskBase* SendTask; \
		UOperationInformationBase* StartOperationInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskInterface_eventOnReceiveTick_Parms \
	{ \
		float DeltaTime; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskInterface_eventOnReceiveTick_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskInterface_eventOnReset_Parms \
	{ \
		UOperationInformationBase* ResetOperationInfo; \
	}; \
	struct TriggerTaskInterface_eventOnResume_Parms \
	{ \
		UOperationInformationBase* Operation; \
	}; \
	struct TriggerTaskInterface_eventOnSelectedInEditor_Parms \
	{ \
		UObject* SelectedActor; \
	}; \
	struct TriggerTaskInterface_eventOnSkipped_Parms \
	{ \
		UOperationInformationBase* SkipStyle; \
	}; \
	struct TriggerTaskInterface_eventOnSleeping_Parms \
	{ \
		UOperationInformationBase* SleepOperation; \
	}; \
	struct TriggerTaskInterface_eventOnStop_Parms \
	{ \
		UOperationInformationBase* StopOperation; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UTriggerTaskInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UTriggerTaskInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UTriggerTaskInterface(UTriggerTaskInterface&&); \
	TRIGGERRUNTIME_API UTriggerTaskInterface(const UTriggerTaskInterface&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	TRIGGERRUNTIME_API UTriggerTaskInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	TRIGGERRUNTIME_API UTriggerTaskInterface(UTriggerTaskInterface&&); \
	TRIGGERRUNTIME_API UTriggerTaskInterface(const UTriggerTaskInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TRIGGERRUNTIME_API, UTriggerTaskInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTriggerTaskInterface(); \
	friend struct Z_Construct_UClass_UTriggerTaskInterface_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), TRIGGERRUNTIME_API) \
	DECLARE_SERIALIZER(UTriggerTaskInterface)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_GENERATED_UINTERFACE_BODY() \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITriggerTaskInterface() {} \
public: \
	typedef UTriggerTaskInterface UClassType; \
	typedef ITriggerTaskInterface ThisClass; \
	static void Execute_OnActive(UObject* O); \
	static void Execute_OnCanBeToggled(UObject* O, bool& Result); \
	static void Execute_OnCanEndTaskAutomaically(UObject* O, bool& Result, ETriggerTaskAutomaticallyEndType EndType); \
	static bool Execute_OnCanTick(UObject* O); \
	static void Execute_OnEnd(UObject* O); \
	static void Execute_OnFinished(UObject* O, UOperationInformationBase* FinishOperationInfo); \
	static bool Execute_OnNotifyOtherTriggerSuccessed(UObject* O, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* Task); \
	static void Execute_OnPause(UObject* O, UOperationInformationBase* Operation); \
	static void Execute_OnPostFinished(UObject* O); \
	static bool Execute_OnPrepare(UObject* O); \
	static bool Execute_OnReceiveNotifyOthers(UObject* O, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* SendTask, UOperationInformationBase* StartOperationInfo); \
	static bool Execute_OnReceiveTick(UObject* O, float DeltaTime); \
	static void Execute_OnReset(UObject* O, UOperationInformationBase* ResetOperationInfo); \
	static void Execute_OnResume(UObject* O, UOperationInformationBase* Operation); \
	static void Execute_OnSelectedInEditor(UObject* O, UObject* SelectedActor); \
	static void Execute_OnSkipped(UObject* O, UOperationInformationBase* SkipStyle); \
	static void Execute_OnSleeping(UObject* O, UOperationInformationBase* SleepOperation); \
	static void Execute_OnStop(UObject* O, UOperationInformationBase* StopOperation); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_INCLASS_IINTERFACE \
protected: \
	virtual ~ITriggerTaskInterface() {} \
public: \
	typedef UTriggerTaskInterface UClassType; \
	typedef ITriggerTaskInterface ThisClass; \
	static void Execute_OnActive(UObject* O); \
	static void Execute_OnCanBeToggled(UObject* O, bool& Result); \
	static void Execute_OnCanEndTaskAutomaically(UObject* O, bool& Result, ETriggerTaskAutomaticallyEndType EndType); \
	static bool Execute_OnCanTick(UObject* O); \
	static void Execute_OnEnd(UObject* O); \
	static void Execute_OnFinished(UObject* O, UOperationInformationBase* FinishOperationInfo); \
	static bool Execute_OnNotifyOtherTriggerSuccessed(UObject* O, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* Task); \
	static void Execute_OnPause(UObject* O, UOperationInformationBase* Operation); \
	static void Execute_OnPostFinished(UObject* O); \
	static bool Execute_OnPrepare(UObject* O); \
	static bool Execute_OnReceiveNotifyOthers(UObject* O, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* SendTask, UOperationInformationBase* StartOperationInfo); \
	static bool Execute_OnReceiveTick(UObject* O, float DeltaTime); \
	static void Execute_OnReset(UObject* O, UOperationInformationBase* ResetOperationInfo); \
	static void Execute_OnResume(UObject* O, UOperationInformationBase* Operation); \
	static void Execute_OnSelectedInEditor(UObject* O, UObject* SelectedActor); \
	static void Execute_OnSkipped(UObject* O, UOperationInformationBase* SkipStyle); \
	static void Execute_OnSleeping(UObject* O, UOperationInformationBase* SleepOperation); \
	static void Execute_OnStop(UObject* O, UOperationInformationBase* StopOperation); \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_91_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h_94_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_TriggerTaskInterface_h


#define FOREACH_ENUM_ETRIGGERTASKRESETTYPE(op) \
	op(ETriggerTaskResetType::ETriggerTaskResetType_None) \
	op(ETriggerTaskResetType::ETriggerTaskResetType_ClearData) \
	op(ETriggerTaskResetType::ETriggerTaskResetType_ResetContent) \
	op(ETriggerTaskResetType::ETriggerTaskResetType_All) \
	op(ETriggerTaskResetType::ETriggerTaskResetType_Customize) 

enum class ETriggerTaskResetType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerTaskResetType>();

#define FOREACH_ENUM_ETRIGGERTASKSTATE(op) \
	op(ETriggerTaskState::ETriggerTaskState_NotifyByOthers) \
	op(ETriggerTaskState::ETriggerTaskState_Prepare) \
	op(ETriggerTaskState::ETriggerTaskState_Active) \
	op(ETriggerTaskState::ETriggerTaskState_Skip) \
	op(ETriggerTaskState::ETriggerTaskState_Tick) \
	op(ETriggerTaskState::ETriggerTaskState_Resume) \
	op(ETriggerTaskState::ETriggerTaskState_Reset) \
	op(ETriggerTaskState::ETriggerTaskState_Finished) \
	op(ETriggerTaskState::ETriggerTaskState_Pause) \
	op(ETriggerTaskState::ETriggerTaskState_Stop) \
	op(ETriggerTaskState::ETriggerTaskState_PostFinished) \
	op(ETriggerTaskState::ETriggerTaskState_End) \
	op(ETriggerTaskState::ETriggerTaskState_Sleeping) \
	op(ETriggerTaskState::ETriggerTaskState_Max) 

enum class ETriggerTaskState : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerTaskState>();

#define FOREACH_ENUM_ETRIGGERTASKAUTOMATICALLYENDTYPE(op) \
	op(ETriggerTaskAutomaticallyEndType::ETriggerTaskAutomaticallyEndType_EndOverlap) 

enum class ETriggerTaskAutomaticallyEndType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerTaskAutomaticallyEndType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
