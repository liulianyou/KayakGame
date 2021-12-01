// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FTriggerTaskComponentInformation;
class UTriggerTaskStartInformationBase;
struct FTaskActivationInfo;
class AActor;
#ifdef TRIGGERRUNTIME_TriggerTaskStartInformationBase_generated_h
#error "TriggerTaskStartInformationBase.generated.h already included, missing '#pragma once' in TriggerTaskStartInformationBase.h"
#endif
#define TRIGGERRUNTIME_TriggerTaskStartInformationBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_RPC_WRAPPERS \
	virtual bool NeedWaitTargetComponentLoaded_Implementation(FTriggerTaskComponentInformation const& ComponentInfo) const; \
	virtual bool Equal_Implementation(const UTriggerTaskStartInformationBase* OtherInfo) const; \
	virtual void CopyFromActiveInfo_Implementation(FTaskActivationInfo const& ActiveInfo); \
	virtual AActor* GetToggledActor_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNeedToEvaluateStartConditions); \
	DECLARE_FUNCTION(execSetNeedToEvaluateStartConditions); \
	DECLARE_FUNCTION(execNeedWaitTargetComponentLoaded); \
	DECLARE_FUNCTION(execSetWaitRelatedComponentLoaded); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execCopyFromActiveInfo); \
	DECLARE_FUNCTION(execGetToggledActor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool NeedWaitTargetComponentLoaded_Implementation(FTriggerTaskComponentInformation const& ComponentInfo) const; \
	virtual bool Equal_Implementation(const UTriggerTaskStartInformationBase* OtherInfo) const; \
	virtual void CopyFromActiveInfo_Implementation(FTaskActivationInfo const& ActiveInfo); \
	virtual AActor* GetToggledActor_Implementation() const; \
 \
	DECLARE_FUNCTION(execGetNeedToEvaluateStartConditions); \
	DECLARE_FUNCTION(execSetNeedToEvaluateStartConditions); \
	DECLARE_FUNCTION(execNeedWaitTargetComponentLoaded); \
	DECLARE_FUNCTION(execSetWaitRelatedComponentLoaded); \
	DECLARE_FUNCTION(execEqual); \
	DECLARE_FUNCTION(execCopyFromActiveInfo); \
	DECLARE_FUNCTION(execGetToggledActor);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_EVENT_PARMS \
	struct TriggerTaskStartInformationBase_eventCopyFromActiveInfo_Parms \
	{ \
		FTaskActivationInfo ActiveInfo; \
	}; \
	struct TriggerTaskStartInformationBase_eventEqual_Parms \
	{ \
		const UTriggerTaskStartInformationBase* OtherInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskStartInformationBase_eventEqual_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerTaskStartInformationBase_eventGetToggledActor_Parms \
	{ \
		AActor* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskStartInformationBase_eventGetToggledActor_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms \
	{ \
		FTriggerTaskComponentInformation ComponentInfo; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerTaskStartInformationBase_eventNeedWaitTargetComponentLoaded_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTaskStartInformationBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskStartInformationBase, UOperationInformationBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskStartInformationBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTaskStartInformationBase(); \
	friend struct Z_Construct_UClass_UTriggerTaskStartInformationBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerTaskStartInformationBase, UOperationInformationBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTaskStartInformationBase) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskStartInformationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskStartInformationBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskStartInformationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskStartInformationBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskStartInformationBase(UTriggerTaskStartInformationBase&&); \
	NO_API UTriggerTaskStartInformationBase(const UTriggerTaskStartInformationBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTaskStartInformationBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTaskStartInformationBase(UTriggerTaskStartInformationBase&&); \
	NO_API UTriggerTaskStartInformationBase(const UTriggerTaskStartInformationBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTaskStartInformationBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTaskStartInformationBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTaskStartInformationBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WaitRelatedComponentLoaded() { return STRUCT_OFFSET(UTriggerTaskStartInformationBase, WaitRelatedComponentLoaded); } \
	FORCEINLINE static uint32 __PPO__NeedToEvaluateStartConditions() { return STRUCT_OFFSET(UTriggerTaskStartInformationBase, NeedToEvaluateStartConditions); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_26_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h_30_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTaskStartInformationBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerTaskStartInformationBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_TriggerTaskStartInformation_TriggerTaskStartInformationBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
