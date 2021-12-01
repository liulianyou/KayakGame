// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTagContainer;
#ifdef TRIGGEREDITOR_TriggerTagWidget_generated_h
#error "TriggerTagWidget.generated.h already included, missing '#pragma once' in TriggerTagWidget.h"
#endif
#define TRIGGEREDITOR_TriggerTagWidget_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_20_DELEGATE \
struct TriggerTagWidget_eventOnTriggerTagChanged_Parms \
{ \
	FGameplayTagContainer TriggerTags; \
}; \
static inline void FOnTriggerTagChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTriggerTagChanged, FGameplayTagContainer const& TriggerTags) \
{ \
	TriggerTagWidget_eventOnTriggerTagChanged_Parms Parms; \
	Parms.TriggerTags=TriggerTags; \
	OnTriggerTagChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_RPC_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTagWidget(); \
	friend struct Z_Construct_UClass_UTriggerTagWidget_Statics; \
public: \
	DECLARE_CLASS(UTriggerTagWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTagWidget)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTagWidget(); \
	friend struct Z_Construct_UClass_UTriggerTagWidget_Statics; \
public: \
	DECLARE_CLASS(UTriggerTagWidget, UWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTagWidget)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTagWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTagWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTagWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTagWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTagWidget(UTriggerTagWidget&&); \
	NO_API UTriggerTagWidget(const UTriggerTagWidget&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTagWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTagWidget(UTriggerTagWidget&&); \
	NO_API UTriggerTagWidget(const UTriggerTagWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTagWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTagWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTagWidget)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_PRIVATE_PROPERTY_OFFSET
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_15_PROLOG
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h_18_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTagWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGEREDITOR_API UClass* StaticClass<class UTriggerTagWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTagWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
