// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTriggerTreeViewObject;
#ifdef TRIGGEREDITOR_TriggerTreeEntryWidget_generated_h
#error "TriggerTreeEntryWidget.generated.h already included, missing '#pragma once' in TriggerTreeEntryWidget.h"
#endif
#define TRIGGEREDITOR_TriggerTreeEntryWidget_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_19_DELEGATE \
struct TriggerTreeEntryWidget_eventOnSelectedTrigger_Parms \
{ \
	UTriggerTreeViewObject* SelectedTreeObject; \
}; \
static inline void FOnSelectedTrigger_DelegateWrapper(const FMulticastScriptDelegate& OnSelectedTrigger, UTriggerTreeViewObject* SelectedTreeObject) \
{ \
	TriggerTreeEntryWidget_eventOnSelectedTrigger_Parms Parms; \
	Parms.SelectedTreeObject=SelectedTreeObject; \
	OnSelectedTrigger.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_SPARSE_DATA
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToggleExpansion); \
	DECLARE_FUNCTION(execIsTreeItemExpanded); \
	DECLARE_FUNCTION(execOnTriggerSelectedCall);


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToggleExpansion); \
	DECLARE_FUNCTION(execIsTreeItemExpanded); \
	DECLARE_FUNCTION(execOnTriggerSelectedCall);


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_EVENT_PARMS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_CALLBACK_WRAPPERS
#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTriggerTreeEntryWidget(); \
	friend struct Z_Construct_UClass_UTriggerTreeEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UTriggerTreeEntryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTreeEntryWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UTriggerTreeEntryWidget*>(this); }


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUTriggerTreeEntryWidget(); \
	friend struct Z_Construct_UClass_UTriggerTreeEntryWidget_Statics; \
public: \
	DECLARE_CLASS(UTriggerTreeEntryWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TriggerEditor"), NO_API) \
	DECLARE_SERIALIZER(UTriggerTreeEntryWidget) \
	virtual UObject* _getUObject() const override { return const_cast<UTriggerTreeEntryWidget*>(this); }


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTreeEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTreeEntryWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTreeEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTreeEntryWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTreeEntryWidget(UTriggerTreeEntryWidget&&); \
	NO_API UTriggerTreeEntryWidget(const UTriggerTreeEntryWidget&); \
public:


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTriggerTreeEntryWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTriggerTreeEntryWidget(UTriggerTreeEntryWidget&&); \
	NO_API UTriggerTreeEntryWidget(const UTriggerTreeEntryWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTriggerTreeEntryWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTriggerTreeEntryWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTriggerTreeEntryWidget)


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TriggerObject() { return STRUCT_OFFSET(UTriggerTreeEntryWidget, TriggerObject); }


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_14_PROLOG \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_EVENT_PARMS


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_RPC_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_INCLASS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_SPARSE_DATA \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_CALLBACK_WRAPPERS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_INCLASS_NO_PURE_DECLS \
	Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h_17_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class TriggerTreeEntryWidget."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TRIGGEREDITOR_API UClass* StaticClass<class UTriggerTreeEntryWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerEditor_Public_Widget_TriggerTreeEntryWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
