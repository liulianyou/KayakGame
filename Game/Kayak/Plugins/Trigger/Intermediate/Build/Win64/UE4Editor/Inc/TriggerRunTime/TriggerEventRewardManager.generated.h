// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTaskBase;
struct FRewardData;
class UTriggerEventRewardDataBase;
class UTriggerTaskManager;
#ifdef TRIGGERRUNTIME_TriggerEventRewardManager_generated_h
#error "TriggerEventRewardManager.generated.h already included, missing '#pragma once' in TriggerEventRewardManager.h"
#endif
#define TRIGGERRUNTIME_TriggerEventRewardManager_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_17_DELEGATE \
struct _Script_TriggerRunTime_eventRequestRewardDelegate_Parms \
{ \
	FString RewardID; \
}; \
static inline void FRequestRewardDelegate_DelegateWrapper(const FMulticastScriptDelegate& RequestRewardDelegate, const FString& RewardID) \
{ \
	_Script_TriggerRunTime_eventRequestRewardDelegate_Parms Parms; \
	Parms.RewardID=RewardID; \
	RequestRewardDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_RPC_WRAPPERS \
	virtual void AcceptReward_Implementation(const FString& RewardID, TArray<FRewardData> const& RewardDatas); \
	virtual void RequestReward_Implementation(UTriggerEventRewardDataBase* RewardData); \
	virtual bool TryToGenerateRewardID_Implementation(UTriggerEventRewardDataBase* TargetData, FString& ID); \
 \
	DECLARE_FUNCTION(execOnTaskUnRegisterEvent); \
	DECLARE_FUNCTION(execOnTaskRegisterEvent); \
	DECLARE_FUNCTION(execAcceptReward); \
	DECLARE_FUNCTION(execRequestReward); \
	DECLARE_FUNCTION(execAddNewMaxRewardID); \
	DECLARE_FUNCTION(execGetTheMaxRewardIDByRewardData); \
	DECLARE_FUNCTION(execGetTriggerTaskManager); \
	DECLARE_FUNCTION(execTryToGenerateRewardID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AcceptReward_Implementation(const FString& RewardID, TArray<FRewardData> const& RewardDatas); \
	virtual void RequestReward_Implementation(UTriggerEventRewardDataBase* RewardData); \
	virtual bool TryToGenerateRewardID_Implementation(UTriggerEventRewardDataBase* TargetData, FString& ID); \
 \
	DECLARE_FUNCTION(execOnTaskUnRegisterEvent); \
	DECLARE_FUNCTION(execOnTaskRegisterEvent); \
	DECLARE_FUNCTION(execAcceptReward); \
	DECLARE_FUNCTION(execRequestReward); \
	DECLARE_FUNCTION(execAddNewMaxRewardID); \
	DECLARE_FUNCTION(execGetTheMaxRewardIDByRewardData); \
	DECLARE_FUNCTION(execGetTriggerTaskManager); \
	DECLARE_FUNCTION(execTryToGenerateRewardID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_EVENT_PARMS \
	struct TriggerEventRewardManager_eventAcceptReward_Parms \
	{ \
		FString RewardID; \
		TArray<FRewardData> RewardDatas; \
	}; \
	struct TriggerEventRewardManager_eventOnInitialize_Parms \
	{ \
		UTriggerTaskManager* OwnerManager; \
	}; \
	struct TriggerEventRewardManager_eventRequestReward_Parms \
	{ \
		UTriggerEventRewardDataBase* RewardData; \
	}; \
	struct TriggerEventRewardManager_eventTryToGenerateRewardID_Parms \
	{ \
		UTriggerEventRewardDataBase* TargetData; \
		FString ID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventRewardManager_eventTryToGenerateRewardID_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerEventRewardManager(); \
	friend struct Z_Construct_UClass_UTriggerEventRewardManager_Statics; \
public: \
	DECLARE_CLASS(UTriggerEventRewardManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEventRewardManager) \
	DECLARE_WITHIN(UTriggerTaskManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerEventRewardManager(); \
	friend struct Z_Construct_UClass_UTriggerEventRewardManager_Statics; \
public: \
	DECLARE_CLASS(UTriggerEventRewardManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEventRewardManager) \
	DECLARE_WITHIN(UTriggerTaskManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEventRewardManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEventRewardManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEventRewardManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEventRewardManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEventRewardManager(UTriggerEventRewardManager&&); \
	NO_API UTriggerEventRewardManager(const UTriggerEventRewardManager&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEventRewardManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEventRewardManager(UTriggerEventRewardManager&&); \
	NO_API UTriggerEventRewardManager(const UTriggerEventRewardManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEventRewardManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEventRewardManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEventRewardManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__RewardDataClass() { return STRUCT_OFFSET(UTriggerEventRewardManager, RewardDataClass); } \
	FORCEINLINE static uint32 __PPO__RemoveDifferentDataType() { return STRUCT_OFFSET(UTriggerEventRewardManager, RemoveDifferentDataType); } \
	FORCEINLINE static uint32 __PPO__CheckExactDataType() { return STRUCT_OFFSET(UTriggerEventRewardManager, CheckExactDataType); } \
	FORCEINLINE static uint32 __PPO__TaskManager() { return STRUCT_OFFSET(UTriggerEventRewardManager, TaskManager); } \
	FORCEINLINE static uint32 __PPO__RequestRewardDelegate() { return STRUCT_OFFSET(UTriggerEventRewardManager, RequestRewardDelegate); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_33_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h_36_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerEventRewardManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerEventRewardManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
