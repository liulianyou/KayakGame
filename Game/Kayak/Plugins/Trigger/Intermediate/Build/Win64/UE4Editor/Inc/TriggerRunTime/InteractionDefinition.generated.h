// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TRIGGERRUNTIME_InteractionDefinition_generated_h
#error "InteractionDefinition.generated.h already included, missing '#pragma once' in InteractionDefinition.h"
#endif
#define TRIGGERRUNTIME_InteractionDefinition_generated_h

#define Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionDefinition_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInteractionInfo_Statics; \
	static class UScriptStruct* StaticStruct();


template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<struct FInteractionInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Kayak_Plugins_Trigger_Source_TriggerRunTime_Public_TriggerTask_InteractionTask_InteractionDefinition_h


#define FOREACH_ENUM_EACTORLAYER(op) \
	op(EActorLayer::EActorLayer_Insignator) \
	op(EActorLayer::EActorLayer_DefaultSlot) 

enum class EActorLayer : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EActorLayer>();

#define FOREACH_ENUM_EINTERACTIONTYPE(op) \
	op(EInteractionType::EInteractionType_Blood) \
	op(EInteractionType::EInteractionType_Armor) \
	op(EInteractionType::EInteractionType_Bullet) \
	op(EInteractionType::EInteractionType_Grenade) 

enum class EInteractionType : uint8;
template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EInteractionType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
