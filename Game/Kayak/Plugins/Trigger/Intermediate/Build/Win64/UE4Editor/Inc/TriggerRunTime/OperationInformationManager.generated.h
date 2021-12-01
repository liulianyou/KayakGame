// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FOperationInfoSpace;
class UObject;
class UOperationInformationBase;
class UTriggerManager;
#ifdef TRIGGERRUNTIME_OperationInformationManager_generated_h
#error "OperationInformationManager.generated.h already included, missing '#pragma once' in OperationInformationManager.h"
#endif
#define TRIGGERRUNTIME_OperationInformationManager_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FOperationInfoSpace_Statics; \
	TRIGGERRUNTIME_API static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FOperationInfoSpace>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsOperationInfoSpaceExist); \
	DECLARE_FUNCTION(execIsOperationInfoExist); \
	DECLARE_FUNCTION(execIsOperationInfValid); \
	DECLARE_FUNCTION(execGetOperationInfos); \
	DECLARE_FUNCTION(execGetOperationOwnerByOperationInfoClass); \
	DECLARE_FUNCTION(execGetOperationOwner); \
	DECLARE_FUNCTION(execRemoveOperation); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execAddNewOperationByInstanceOperation); \
	DECLARE_FUNCTION(execAddNewOperationByClass); \
	DECLARE_FUNCTION(execGetOperationSpaces); \
	DECLARE_FUNCTION(execGetConstOperationSpaces); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execInitialzie);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsOperationInfoSpaceExist); \
	DECLARE_FUNCTION(execIsOperationInfoExist); \
	DECLARE_FUNCTION(execIsOperationInfValid); \
	DECLARE_FUNCTION(execGetOperationInfos); \
	DECLARE_FUNCTION(execGetOperationOwnerByOperationInfoClass); \
	DECLARE_FUNCTION(execGetOperationOwner); \
	DECLARE_FUNCTION(execRemoveOperation); \
	DECLARE_FUNCTION(execEmpty); \
	DECLARE_FUNCTION(execAddNewOperationByInstanceOperation); \
	DECLARE_FUNCTION(execAddNewOperationByClass); \
	DECLARE_FUNCTION(execGetOperationSpaces); \
	DECLARE_FUNCTION(execGetConstOperationSpaces); \
	DECLARE_FUNCTION(execGetTriggerManager); \
	DECLARE_FUNCTION(execInitialzie);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUOperationInformationManager(); \
	friend struct Z_Construct_UClass_UOperationInformationManager_Statics; \
public: \
	DECLARE_CLASS(UOperationInformationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UOperationInformationManager) \
	DECLARE_WITHIN(UTriggerManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_INCLASS \
private: \
	static void StaticRegisterNativesUOperationInformationManager(); \
	friend struct Z_Construct_UClass_UOperationInformationManager_Statics; \
public: \
	DECLARE_CLASS(UOperationInformationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UOperationInformationManager) \
	DECLARE_WITHIN(UTriggerManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperationInformationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperationInformationManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperationInformationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperationInformationManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperationInformationManager(UOperationInformationManager&&); \
	NO_API UOperationInformationManager(const UOperationInformationManager&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UOperationInformationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UOperationInformationManager(UOperationInformationManager&&); \
	NO_API UOperationInformationManager(const UOperationInformationManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UOperationInformationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOperationInformationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOperationInformationManager)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Operations() { return STRUCT_OFFSET(UOperationInformationManager, Operations); } \
	FORCEINLINE static uint32 __PPO__OwnerTriggerManager() { return STRUCT_OFFSET(UOperationInformationManager, OwnerTriggerManager); }


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_63_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h_66_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class OperationInformationManager."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UOperationInformationManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_Tool_OperationInformation_OperationInformationManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
