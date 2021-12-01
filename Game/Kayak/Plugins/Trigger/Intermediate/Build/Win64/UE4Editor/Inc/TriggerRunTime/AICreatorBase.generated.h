// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AAIController;
struct FTransform;
class APawn;
struct FPawnInfo;
struct FAIInfo;
struct FAISpawnBehaviorCommand;
class UAISpawnDataBase;
struct FSoftObjectPath;
class UObject;
#ifdef TRIGGERRUNTIME_AICreatorBase_generated_h
#error "AICreatorBase.generated.h already included, missing '#pragma once' in AICreatorBase.h"
#endif
#define TRIGGERRUNTIME_AICreatorBase_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_RPC_WRAPPERS \
	virtual void SetPawnInfo_Implementation(FPawnInfo const& PawnInfo); \
	virtual void SetAIInfo_Implementation(FAIInfo const& AIInfo); \
	virtual bool CanGetControllerClassFromNPCID_Implementation(); \
 \
	DECLARE_FUNCTION(execPostCreator); \
	DECLARE_FUNCTION(execSetTransfrom); \
	DECLARE_FUNCTION(execGetTransfrom); \
	DECLARE_FUNCTION(execCreateNewAI); \
	DECLARE_FUNCTION(execSetPawnInfo); \
	DECLARE_FUNCTION(execSetAIInfo); \
	DECLARE_FUNCTION(execCanGetControllerClassFromNPCID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetPawnInfo_Implementation(FPawnInfo const& PawnInfo); \
	virtual void SetAIInfo_Implementation(FAIInfo const& AIInfo); \
	virtual bool CanGetControllerClassFromNPCID_Implementation(); \
 \
	DECLARE_FUNCTION(execPostCreator); \
	DECLARE_FUNCTION(execSetTransfrom); \
	DECLARE_FUNCTION(execGetTransfrom); \
	DECLARE_FUNCTION(execCreateNewAI); \
	DECLARE_FUNCTION(execSetPawnInfo); \
	DECLARE_FUNCTION(execSetAIInfo); \
	DECLARE_FUNCTION(execCanGetControllerClassFromNPCID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_EVENT_PARMS \
	struct AICreatorBase_eventCanGetControllerClassFromNPCID_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AICreatorBase_eventCanGetControllerClassFromNPCID_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct AICreatorBase_eventOnCreateNewAI_Parms \
	{ \
		APawn* CreatedPawn; \
		AAIController* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		AICreatorBase_eventOnCreateNewAI_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct AICreatorBase_eventOnPostCreator_Parms \
	{ \
		AAIController* Controller; \
	}; \
	struct AICreatorBase_eventSetAIInfo_Parms \
	{ \
		FAIInfo AIInfo; \
	}; \
	struct AICreatorBase_eventSetPawnInfo_Parms \
	{ \
		FPawnInfo PawnInfo; \
	};


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICreatorBase(); \
	friend struct Z_Construct_UClass_UAICreatorBase_Statics; \
public: \
	DECLARE_CLASS(UAICreatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUAICreatorBase(); \
	friend struct Z_Construct_UClass_UAICreatorBase_Statics; \
public: \
	DECLARE_CLASS(UAICreatorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorBase(UAICreatorBase&&); \
	NO_API UAICreatorBase(const UAICreatorBase&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorBase(UAICreatorBase&&); \
	NO_API UAICreatorBase(const UAICreatorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_22_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_25_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AICreatorBase."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAICreatorBase>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetBehaviorCommand); \
	DECLARE_FUNCTION(execSetBehaviorCommand); \
	DECLARE_FUNCTION(execGetNPCID); \
	DECLARE_FUNCTION(execSetNPCID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetBehaviorCommand); \
	DECLARE_FUNCTION(execSetBehaviorCommand); \
	DECLARE_FUNCTION(execGetNPCID); \
	DECLARE_FUNCTION(execSetNPCID);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICreatorByID(); \
	friend struct Z_Construct_UClass_UAICreatorByID_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByID, UAICreatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByID)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUAICreatorByID(); \
	friend struct Z_Construct_UClass_UAICreatorByID_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByID, UAICreatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByID)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByID) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByID); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByID(UAICreatorByID&&); \
	NO_API UAICreatorByID(const UAICreatorByID&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByID(UAICreatorByID&&); \
	NO_API UAICreatorByID(const UAICreatorByID&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByID); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByID)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_76_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AICreatorByID."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAICreatorByID>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAISpawnData); \
	DECLARE_FUNCTION(execGetAIInfo);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAISpawnData); \
	DECLARE_FUNCTION(execGetAIInfo);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICreatorByAIInfo(); \
	friend struct Z_Construct_UClass_UAICreatorByAIInfo_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByAIInfo, UAICreatorByID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByAIInfo) \
	DECLARE_WITHIN(UAISpawnDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_INCLASS \
private: \
	static void StaticRegisterNativesUAICreatorByAIInfo(); \
	friend struct Z_Construct_UClass_UAICreatorByAIInfo_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByAIInfo, UAICreatorByID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByAIInfo) \
	DECLARE_WITHIN(UAISpawnDataBase)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByAIInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByAIInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByAIInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByAIInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByAIInfo(UAICreatorByAIInfo&&); \
	NO_API UAICreatorByAIInfo(const UAICreatorByAIInfo&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByAIInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByAIInfo(UAICreatorByAIInfo&&); \
	NO_API UAICreatorByAIInfo(const UAICreatorByAIInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByAIInfo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByAIInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByAIInfo)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_118_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_121_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AICreatorByAIInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAICreatorByAIInfo>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICreatorByInstanceID(); \
	friend struct Z_Construct_UClass_UAICreatorByInstanceID_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByInstanceID, UAICreatorByID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByInstanceID) \
	DECLARE_WITHIN(UTT_AISpawn)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_INCLASS \
private: \
	static void StaticRegisterNativesUAICreatorByInstanceID(); \
	friend struct Z_Construct_UClass_UAICreatorByInstanceID_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByInstanceID, UAICreatorByID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByInstanceID) \
	DECLARE_WITHIN(UTT_AISpawn)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByInstanceID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByInstanceID) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByInstanceID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByInstanceID); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByInstanceID(UAICreatorByInstanceID&&); \
	NO_API UAICreatorByInstanceID(const UAICreatorByInstanceID&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByInstanceID(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByInstanceID(UAICreatorByInstanceID&&); \
	NO_API UAICreatorByInstanceID(const UAICreatorByInstanceID&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByInstanceID); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByInstanceID); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByInstanceID)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_147_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_150_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AICreatorByInstanceID."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAICreatorByInstanceID>();

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAISpawnData); \
	DECLARE_FUNCTION(execSetAISpawnData); \
	DECLARE_FUNCTION(execGetBTPath); \
	DECLARE_FUNCTION(execSetBTPath); \
	DECLARE_FUNCTION(execGetPawnClass); \
	DECLARE_FUNCTION(execSetPawnClass); \
	DECLARE_FUNCTION(execGetControllerClass); \
	DECLARE_FUNCTION(execSetControllerClass);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAISpawnData); \
	DECLARE_FUNCTION(execSetAISpawnData); \
	DECLARE_FUNCTION(execGetBTPath); \
	DECLARE_FUNCTION(execSetBTPath); \
	DECLARE_FUNCTION(execGetPawnClass); \
	DECLARE_FUNCTION(execSetPawnClass); \
	DECLARE_FUNCTION(execGetControllerClass); \
	DECLARE_FUNCTION(execSetControllerClass);


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAICreatorByControllerClass(); \
	friend struct Z_Construct_UClass_UAICreatorByControllerClass_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByControllerClass, UAICreatorByID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByControllerClass)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_INCLASS \
private: \
	static void StaticRegisterNativesUAICreatorByControllerClass(); \
	friend struct Z_Construct_UClass_UAICreatorByControllerClass_Statics; \
public: \
	DECLARE_CLASS(UAICreatorByControllerClass, UAICreatorByID, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerRunTime"), NO_API) \
	DECLARE_SERIALIZER(UAICreatorByControllerClass)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByControllerClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByControllerClass) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByControllerClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByControllerClass); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByControllerClass(UAICreatorByControllerClass&&); \
	NO_API UAICreatorByControllerClass(const UAICreatorByControllerClass&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAICreatorByControllerClass(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAICreatorByControllerClass(UAICreatorByControllerClass&&); \
	NO_API UAICreatorByControllerClass(const UAICreatorByControllerClass&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAICreatorByControllerClass); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAICreatorByControllerClass); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAICreatorByControllerClass)


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_160_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h_163_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AICreatorByControllerClass."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGERRUNTIME_API UClass* StaticClass<class UAICreatorByControllerClass>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_AISpawnTask_AISpawnCreator_AICreatorBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
