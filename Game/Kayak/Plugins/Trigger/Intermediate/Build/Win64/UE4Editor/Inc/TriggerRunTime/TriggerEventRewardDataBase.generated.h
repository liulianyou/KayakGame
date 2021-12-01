// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRewardData;
#ifdef TRIGGERRUNTIME_TriggerEventRewardDataBase_generated_h
#error "TriggerEventRewardDataBase.generated.h already included, missing '#pragma once' in TriggerEventRewardDataBase.h"
#endif
#define TRIGGERRUNTIME_TriggerEventRewardDataBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_43_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRewardData_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FRewardData>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRewardItem_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FRewardItem>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_RPC_WRAPPERS \
	virtual void AcceptReward_Implementation(TArray<FRewardData> const& RewardDatas); \
	virtual void RequestReward_Implementation(); \
	virtual bool IsValidRewardID_Implementation(const FString& ID) const; \
	virtual FString GenerateNextID_Implementation(const FString& ID) const; \
	virtual bool IsLarger_Implementation(const FString& ID) const; \
	virtual void SetRewardID_Implementation(const FString& NewID); \
	virtual FString GetRewardIDFromStrings_Implementation(TArray<FString> const& Strings) const; \
	virtual FString GetRewardID_Implementation() const; \
 \
	DECLARE_FUNCTION(execAcceptReward); \
	DECLARE_FUNCTION(execRequestReward); \
	DECLARE_FUNCTION(execIsValidRewardID); \
	DECLARE_FUNCTION(execGenerateNextID); \
	DECLARE_FUNCTION(execIsLarger); \
	DECLARE_FUNCTION(execSetRewardID); \
	DECLARE_FUNCTION(execGetRewardIDFromStrings); \
	DECLARE_FUNCTION(execGetRewardID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void AcceptReward_Implementation(TArray<FRewardData> const& RewardDatas); \
	virtual void RequestReward_Implementation(); \
	virtual bool IsValidRewardID_Implementation(const FString& ID) const; \
	virtual FString GenerateNextID_Implementation(const FString& ID) const; \
	virtual bool IsLarger_Implementation(const FString& ID) const; \
	virtual void SetRewardID_Implementation(const FString& NewID); \
	virtual FString GetRewardIDFromStrings_Implementation(TArray<FString> const& Strings) const; \
	virtual FString GetRewardID_Implementation() const; \
 \
	DECLARE_FUNCTION(execAcceptReward); \
	DECLARE_FUNCTION(execRequestReward); \
	DECLARE_FUNCTION(execIsValidRewardID); \
	DECLARE_FUNCTION(execGenerateNextID); \
	DECLARE_FUNCTION(execIsLarger); \
	DECLARE_FUNCTION(execSetRewardID); \
	DECLARE_FUNCTION(execGetRewardIDFromStrings); \
	DECLARE_FUNCTION(execGetRewardID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_EVENT_PARMS \
	struct TriggerEventRewardDataBase_eventAcceptReward_Parms \
	{ \
		TArray<FRewardData> RewardDatas; \
	}; \
	struct TriggerEventRewardDataBase_eventGenerateNextID_Parms \
	{ \
		FString ID; \
		FString ReturnValue; \
	}; \
	struct TriggerEventRewardDataBase_eventGetRewardID_Parms \
	{ \
		FString ReturnValue; \
	}; \
	struct TriggerEventRewardDataBase_eventGetRewardIDFromStrings_Parms \
	{ \
		TArray<FString> Strings; \
		FString ReturnValue; \
	}; \
	struct TriggerEventRewardDataBase_eventIsLarger_Parms \
	{ \
		FString ID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventRewardDataBase_eventIsLarger_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerEventRewardDataBase_eventIsValidRewardID_Parms \
	{ \
		FString ID; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		TriggerEventRewardDataBase_eventIsValidRewardID_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct TriggerEventRewardDataBase_eventSetRewardID_Parms \
	{ \
		FString NewID; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerEventRewardDataBase(); \
	friend struct Z_Construct_UClass_UTriggerEventRewardDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerEventRewardDataBase, UTriggerTaskExternalDataBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEventRewardDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerEventRewardDataBase(); \
	friend struct Z_Construct_UClass_UTriggerEventRewardDataBase_Statics; \
public: \
	DECLARE_CLASS(UTriggerEventRewardDataBase, UTriggerTaskExternalDataBase, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UTriggerEventRewardDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEventRewardDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEventRewardDataBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEventRewardDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEventRewardDataBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEventRewardDataBase(UTriggerEventRewardDataBase&&); \
	NO_API UTriggerEventRewardDataBase(const UTriggerEventRewardDataBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerEventRewardDataBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerEventRewardDataBase(UTriggerEventRewardDataBase&&); \
	NO_API UTriggerEventRewardDataBase(const UTriggerEventRewardDataBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerEventRewardDataBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerEventRewardDataBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerEventRewardDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_58_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h_61_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerEventRewardDataBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UTriggerEventRewardDataBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_TriggerExternalData_TriggerEventReward_TriggerEventRewardDataBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
