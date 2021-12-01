// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TT_SetActorVisibilityAndCollision.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTT_SetActorVisibilityAndCollision() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EVisibleType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FActorInformation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSAV_ActorInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FSAV_ComponentInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_SetActorVisibilityAndCollision();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
// End Cross Module References
	static UEnum* EVisibleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EVisibleType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EVisibleType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EVisibleType>()
	{
		return EVisibleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVisibleType(EVisibleType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EVisibleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EVisibleType_Hash() { return 4177356463U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EVisibleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVisibleType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EVisibleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVisibleType::EVisibleType_VisibleAndCollision", (int64)EVisibleType::EVisibleType_VisibleAndCollision },
				{ "EVisibleType::EVisibleType_VisibleButNoCollision", (int64)EVisibleType::EVisibleType_VisibleButNoCollision },
				{ "EVisibleType::EVisibleType_InvisibleButCollision", (int64)EVisibleType::EVisibleType_InvisibleButCollision },
				{ "EVisibleType::EVisibleType_InvisibleAndNoCollision", (int64)EVisibleType::EVisibleType_InvisibleAndNoCollision },
				{ "EVisibleType::EVisibleType_Max", (int64)EVisibleType::EVisibleType_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EVisibleType_InvisibleAndNoCollision.DisplayName", "Invisible And No Collision" },
				{ "EVisibleType_InvisibleAndNoCollision.Name", "EVisibleType::EVisibleType_InvisibleAndNoCollision" },
				{ "EVisibleType_InvisibleButCollision.DisplayName", "Invisible But Collision" },
				{ "EVisibleType_InvisibleButCollision.Name", "EVisibleType::EVisibleType_InvisibleButCollision" },
				{ "EVisibleType_Max.Hidden", "" },
				{ "EVisibleType_Max.Name", "EVisibleType::EVisibleType_Max" },
				{ "EVisibleType_VisibleAndCollision.DisplayName", "Visible And Collision" },
				{ "EVisibleType_VisibleAndCollision.Name", "EVisibleType::EVisibleType_VisibleAndCollision" },
				{ "EVisibleType_VisibleButNoCollision.DisplayName", "Visible But No Collision" },
				{ "EVisibleType_VisibleButNoCollision.Name", "EVisibleType::EVisibleType_VisibleButNoCollision" },
				{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EVisibleType",
				"EVisibleType",
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
class UScriptStruct* FActorInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FActorInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInformation, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ActorInformation"), sizeof(FActorInformation), Get_Z_Construct_UScriptStruct_FActorInformation_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FActorInformation>()
{
	return FActorInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorInformation(FActorInformation::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ActorInformation"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFActorInformation
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFActorInformation()
	{
		UScriptStruct::DeferCppStructOps<FActorInformation>(FName(TEXT("ActorInformation")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFActorInformation;
	struct Z_Construct_UScriptStruct_FActorInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FindFromActorInfos_MetaData[];
#endif
		static void NewProp_FindFromActorInfos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FindFromActorInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorInformation, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos_SetBit(void* Obj)
	{
		((FActorInformation*)Obj)->FindFromActorInfos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos = { "FindFromActorInfos", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorInformation), &Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInformation_Statics::NewProp_FindFromActorInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ActorInformation",
		sizeof(FActorInformation),
		alignof(FActorInformation),
		Z_Construct_UScriptStruct_FActorInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorInformation"), sizeof(FActorInformation), Get_Z_Construct_UScriptStruct_FActorInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorInformation_Hash() { return 4184508376U; }
class UScriptStruct* FSAV_ActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSAV_ActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAV_ActorInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SAV_ActorInfo"), sizeof(FSAV_ActorInfo), Get_Z_Construct_UScriptStruct_FSAV_ActorInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSAV_ActorInfo>()
{
	return FSAV_ActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAV_ActorInfo(FSAV_ActorInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SAV_ActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSAV_ActorInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSAV_ActorInfo()
	{
		UScriptStruct::DeferCppStructOps<FSAV_ActorInfo>(FName(TEXT("SAV_ActorInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSAV_ActorInfo;
	struct Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VisibleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessComponent_MetaData[];
#endif
		static void NewProp_ProcessComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ProcessComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ComponentInfos;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAV_ActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAV_ActorInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_Actor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType = { "VisibleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAV_ActorInfo, VisibleType), Z_Construct_UEnum_TriggerRunTime_EVisibleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent_SetBit(void* Obj)
	{
		((FSAV_ActorInfo*)Obj)->ProcessComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent = { "ProcessComponent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSAV_ActorInfo), &Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos_Inner = { "ComponentInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSAV_ComponentInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "EditCondition", "ProcessComponent" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos = { "ComponentInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAV_ActorInfo, ComponentInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_VisibleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ProcessComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::NewProp_ComponentInfos,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SAV_ActorInfo",
		sizeof(FSAV_ActorInfo),
		alignof(FSAV_ActorInfo),
		Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAV_ActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAV_ActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAV_ActorInfo"), sizeof(FSAV_ActorInfo), Get_Z_Construct_UScriptStruct_FSAV_ActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAV_ActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAV_ActorInfo_Hash() { return 2027687245U; }
class UScriptStruct* FSAV_ComponentInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FSAV_ComponentInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAV_ComponentInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("SAV_ComponentInfo"), sizeof(FSAV_ComponentInfo), Get_Z_Construct_UScriptStruct_FSAV_ComponentInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FSAV_ComponentInfo>()
{
	return FSAV_ComponentInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSAV_ComponentInfo(FSAV_ComponentInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("SAV_ComponentInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFSAV_ComponentInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFSAV_ComponentInfo()
	{
		UScriptStruct::DeferCppStructOps<FSAV_ComponentInfo>(FName(TEXT("SAV_ComponentInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFSAV_ComponentInfo;
	struct Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideVisibleType_MetaData[];
#endif
		static void NewProp_OverrideVisibleType_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OverrideVisibleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_VisibleType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_VisibleType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAV_ComponentInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType_SetBit(void* Obj)
	{
		((FSAV_ComponentInfo*)Obj)->OverrideVisibleType = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType = { "OverrideVisibleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSAV_ComponentInfo), &Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "EditCondition", "OverrideVisibleType" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType = { "VisibleType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAV_ComponentInfo, VisibleType), Z_Construct_UEnum_TriggerRunTime_EVisibleType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_ComponentClass_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSAV_ComponentInfo, ComponentClass), Z_Construct_UClass_UPrimitiveComponent_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_ComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_ComponentClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_OverrideVisibleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_VisibleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::NewProp_ComponentClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"SAV_ComponentInfo",
		sizeof(FSAV_ComponentInfo),
		alignof(FSAV_ComponentInfo),
		Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSAV_ComponentInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSAV_ComponentInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SAV_ComponentInfo"), sizeof(FSAV_ComponentInfo), Get_Z_Construct_UScriptStruct_FSAV_ComponentInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSAV_ComponentInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSAV_ComponentInfo_Hash() { return 409906182U; }
	DEFINE_FUNCTION(UTT_SetActorVisibilityAndCollision::execDestroyedActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DestroyedActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_SetActorVisibilityAndCollision::execRep_ReplicatedActorInformations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_ReplicatedActorInformations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTT_SetActorVisibilityAndCollision::execMutiCast_SetVisibleAndCollision)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MutiCast_SetVisibleAndCollision_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision = FName(TEXT("MutiCast_SetVisibleAndCollision"));
	void UTT_SetActorVisibilityAndCollision::MutiCast_SetVisibleAndCollision()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision),NULL);
	}
	void UTT_SetActorVisibilityAndCollision::StaticRegisterNativesUTT_SetActorVisibilityAndCollision()
	{
		UClass* Class = UTT_SetActorVisibilityAndCollision::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyedActor", &UTT_SetActorVisibilityAndCollision::execDestroyedActor },
			{ "MutiCast_SetVisibleAndCollision", &UTT_SetActorVisibilityAndCollision::execMutiCast_SetVisibleAndCollision },
			{ "Rep_ReplicatedActorInformations", &UTT_SetActorVisibilityAndCollision::execRep_ReplicatedActorInformations },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics
	{
		struct TT_SetActorVisibilityAndCollision_eventDestroyedActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TT_SetActorVisibilityAndCollision_eventDestroyedActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_SetActorVisibilityAndCollision, nullptr, "DestroyedActor", nullptr, nullptr, sizeof(TT_SetActorVisibilityAndCollision_eventDestroyedActor_Parms), Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//UFUNCTION(NetMulticast, Reliable)\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
		{ "ToolTip", "UFUNCTION(NetMulticast, Reliable)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_SetActorVisibilityAndCollision, nullptr, "MutiCast_SetVisibleAndCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTT_SetActorVisibilityAndCollision, nullptr, "Rep_ReplicatedActorInformations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_NoRegister()
	{
		return UTT_SetActorVisibilityAndCollision::StaticClass();
	}
	struct Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActorInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorInfos;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReplicatedActorInformations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedActorInformations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReplicatedActorInformations;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_DestroyedActor, "DestroyedActor" }, // 2888247738
		{ &Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_MutiCast_SetVisibleAndCollision, "MutiCast_SetVisibleAndCollision" }, // 3729277907
		{ &Z_Construct_UFunction_UTT_SetActorVisibilityAndCollision_Rep_ReplicatedActorInformations, "Rep_ReplicatedActorInformations" }, // 4147517726
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/TT_SetActorVisibilityAndCollision.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos_Inner = { "ActorInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSAV_ActorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos_MetaData[] = {
		{ "Category", "TriggerRunTime" },
		{ "Comment", "//Store all informations about visibility and collision of Actor\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
		{ "ToolTip", "Store all informations about visibility and collision of Actor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos = { "ActorInfos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_SetActorVisibilityAndCollision, ActorInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations_Inner = { "ReplicatedActorInformations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorInformation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations_MetaData[] = {
		{ "Category", "TT_SetActorVisibilityAndCollision" },
		{ "ModuleRelativePath", "Public/TriggerTask/TT_SetActorVisibilityAndCollision.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations = { "ReplicatedActorInformations", "Rep_ReplicatedActorInformations", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTT_SetActorVisibilityAndCollision, ReplicatedActorInformations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ActorInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::NewProp_ReplicatedActorInformations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTT_SetActorVisibilityAndCollision>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::ClassParams = {
		&UTT_SetActorVisibilityAndCollision::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTT_SetActorVisibilityAndCollision()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTT_SetActorVisibilityAndCollision_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTT_SetActorVisibilityAndCollision, 1533511691);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTT_SetActorVisibilityAndCollision>()
	{
		return UTT_SetActorVisibilityAndCollision::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTT_SetActorVisibilityAndCollision(Z_Construct_UClass_UTT_SetActorVisibilityAndCollision, &UTT_SetActorVisibilityAndCollision::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTT_SetActorVisibilityAndCollision"), false, nullptr, nullptr, nullptr);

	void UTT_SetActorVisibilityAndCollision::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ReplicatedActorInformations(TEXT("ReplicatedActorInformations"));

		const bool bIsValid = true
			&& Name_ReplicatedActorInformations == ClassReps[(int32)ENetFields_Private::ReplicatedActorInformations].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTT_SetActorVisibilityAndCollision"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTT_SetActorVisibilityAndCollision);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTT_SetActorVisibilityAndCollision)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
