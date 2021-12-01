// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionEffect_OpenDoor() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EOpenAxis();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EOpenDirection();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOpenDoorInfo();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffect_OpenDoor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffect_OpenDoor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionEffectBase();
// End Cross Module References
	static UEnum* EOpenAxis_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EOpenAxis, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EOpenAxis"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EOpenAxis>()
	{
		return EOpenAxis_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenAxis(EOpenAxis_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EOpenAxis"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EOpenAxis_Hash() { return 3389550218U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EOpenAxis()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenAxis"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EOpenAxis_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOpenAxis::EOpenAxis_X", (int64)EOpenAxis::EOpenAxis_X },
				{ "EOpenAxis::EOpenAxis_Y", (int64)EOpenAxis::EOpenAxis_Y },
				{ "EOpenAxis::EOpenAxis_Z", (int64)EOpenAxis::EOpenAxis_Z },
				{ "EOpenAxis::EOpenAxis_AnyAxis", (int64)EOpenAxis::EOpenAxis_AnyAxis },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EOpenAxis_AnyAxis.DisplayName", "AnyAxis" },
				{ "EOpenAxis_AnyAxis.Name", "EOpenAxis::EOpenAxis_AnyAxis" },
				{ "EOpenAxis_X.DisplayName", "X" },
				{ "EOpenAxis_X.Name", "EOpenAxis::EOpenAxis_X" },
				{ "EOpenAxis_Y.DisplayName", "Y" },
				{ "EOpenAxis_Y.Name", "EOpenAxis::EOpenAxis_Y" },
				{ "EOpenAxis_Z.DisplayName", "Z" },
				{ "EOpenAxis_Z.Name", "EOpenAxis::EOpenAxis_Z" },
				{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EOpenAxis",
				"EOpenAxis",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOpenDirection_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EOpenDirection, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EOpenDirection"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EOpenDirection>()
	{
		return EOpenDirection_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOpenDirection(EOpenDirection_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EOpenDirection"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EOpenDirection_Hash() { return 4119223931U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EOpenDirection()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOpenDirection"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EOpenDirection_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOpenDirection::EOpenDirection_PositiveAxis", (int64)EOpenDirection::EOpenDirection_PositiveAxis },
				{ "EOpenDirection::EOpenDirection_NativeAxis", (int64)EOpenDirection::EOpenDirection_NativeAxis },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The direction to open the door\n*/" },
				{ "EOpenDirection_NativeAxis.DisplayName", "Inner" },
				{ "EOpenDirection_NativeAxis.Name", "EOpenDirection::EOpenDirection_NativeAxis" },
				{ "EOpenDirection_PositiveAxis.DisplayName", "Outer" },
				{ "EOpenDirection_PositiveAxis.Name", "EOpenDirection::EOpenDirection_PositiveAxis" },
				{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
				{ "ToolTip", "* The direction to open the door" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EOpenDirection",
				"EOpenDirection",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FOpenDoorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOpenDoorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOpenDoorInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OpenDoorInfo"), sizeof(FOpenDoorInfo), Get_Z_Construct_UScriptStruct_FOpenDoorInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOpenDoorInfo>()
{
	return FOpenDoorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOpenDoorInfo(FOpenDoorInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OpenDoorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenDoorInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenDoorInfo()
	{
		UScriptStruct::DeferCppStructOps<FOpenDoorInfo>(FName(TEXT("OpenDoorInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOpenDoorInfo;
	struct Z_Construct_UScriptStruct_FOpenDoorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Doors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Doors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Doors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAnimation_MetaData[];
#endif
		static void NewProp_UseAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAnimation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AnimClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseSequence_MetaData[];
#endif
		static void NewProp_UseSequence_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_LevelSequence;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OpenAxisType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpenAxisType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OpenAxisType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Axis;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOpenDoorInfo>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors_Inner = { "Doors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors = { "Doors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDoorInfo, Doors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "Comment", "//Flag to check weather to use the animation instance in actor\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
		{ "ToolTip", "Flag to check weather to use the animation instance in actor" },
	};
#endif
	void Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation_SetBit(void* Obj)
	{
		((FOpenDoorInfo*)Obj)->UseAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation = { "UseAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOpenDoorInfo), &Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_AnimClass_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "EditCondition", "UseAnimation" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_AnimClass = { "AnimClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDoorInfo, AnimClass), Z_Construct_UClass_UAnimInstance_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_AnimClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_AnimClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "Comment", "//Flag to check weather to use  sequence to play animation(not Actor animation which will use skeleton)\n" },
		{ "EditCondition", "UseAnimation" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
		{ "ToolTip", "Flag to check weather to use  sequence to play animation(not Actor animation which will use skeleton)" },
	};
#endif
	void Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence_SetBit(void* Obj)
	{
		((FOpenDoorInfo*)Obj)->UseSequence = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence = { "UseSequence", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOpenDoorInfo), &Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "EditCondition", "UseSequence" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDoorInfo, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_LevelSequence_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDoorInfo, Direction), Z_Construct_UEnum_TriggerRunTime_EOpenDirection, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType = { "OpenAxisType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDoorInfo, OpenAxisType), Z_Construct_UEnum_TriggerRunTime_EOpenAxis, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "OpenDoorInfo" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOpenDoorInfo, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Axis_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Doors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_AnimClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_UseSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_LevelSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_OpenAxisType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::NewProp_Axis,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"OpenDoorInfo",
		sizeof(FOpenDoorInfo),
		alignof(FOpenDoorInfo),
		Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOpenDoorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOpenDoorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OpenDoorInfo"), sizeof(FOpenDoorInfo), Get_Z_Construct_UScriptStruct_FOpenDoorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOpenDoorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOpenDoorInfo_Hash() { return 4253290212U; }
	void UInteractionEffect_OpenDoor::StaticRegisterNativesUInteractionEffect_OpenDoor()
	{
	}
	UClass* Z_Construct_UClass_UInteractionEffect_OpenDoor_NoRegister()
	{
		return UInteractionEffect_OpenDoor::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Informations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Informations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Informations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionEffectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*BlueprintType, Blueprintable*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
		{ "ToolTip", "BlueprintType, Blueprintable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations_Inner = { "Informations", nullptr, (EPropertyFlags)0x0000000000000008, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOpenDoorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations_MetaData[] = {
		{ "Category", "InteractionEffect" },
		{ "Comment", "/*\n\x09* The target door that we need to operate\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionEffect/InteractionEffect_OpenDoor.h" },
		{ "ToolTip", "* The target door that we need to operate" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations = { "Informations", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionEffect_OpenDoor, Informations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::NewProp_Informations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionEffect_OpenDoor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::ClassParams = {
		&UInteractionEffect_OpenDoor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionEffect_OpenDoor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionEffect_OpenDoor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionEffect_OpenDoor, 908848266);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionEffect_OpenDoor>()
	{
		return UInteractionEffect_OpenDoor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionEffect_OpenDoor(Z_Construct_UClass_UInteractionEffect_OpenDoor, &UInteractionEffect_OpenDoor::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionEffect_OpenDoor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionEffect_OpenDoor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
