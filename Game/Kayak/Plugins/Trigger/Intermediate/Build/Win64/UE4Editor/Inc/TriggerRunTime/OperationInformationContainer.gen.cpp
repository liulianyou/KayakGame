// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/OperationInformationContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOperationInformationContainer() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoContainer();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoItem();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FOperationInfoContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FOperationInfoContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

class UScriptStruct* FOperationInfoContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOperationInfoContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperationInfoContainer, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OperationInfoContainer"), sizeof(FOperationInfoContainer), Get_Z_Construct_UScriptStruct_FOperationInfoContainer_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOperationInfoContainer>()
{
	return FOperationInfoContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOperationInfoContainer(FOperationInfoContainer::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OperationInfoContainer"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoContainer
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoContainer()
	{
		UScriptStruct::DeferCppStructOps<FOperationInfoContainer>(FName(TEXT("OperationInfoContainer")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoContainer;
	struct Z_Construct_UScriptStruct_FOperationInfoContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The container of the operation information which is created from TriggerOperationInfoManager\n* The last element is the immediate activation information.\n* This should only worked at TriggerEventSystemInfoBase\n*/" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationContainer.h" },
		{ "ToolTip", "* The container of the operation information which is created from TriggerOperationInfoManager\n* The last element is the immediate activation information.\n* This should only worked at TriggerEventSystemInfoBase" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperationInfoContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOperationInfoItem, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items_MetaData[] = {
		{ "Comment", "/** List of information for the target operation */" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationContainer.h" },
		{ "ToolTip", "List of information for the target operation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationInfoContainer, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "//The owner of this container it can only be set at the initialize function\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationContainer.h" },
		{ "ToolTip", "The owner of this container it can only be set at the initialize function" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationInfoContainer, Owner), Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::NewProp_Owner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"OperationInfoContainer",
		sizeof(FOperationInfoContainer),
		alignof(FOperationInfoContainer),
		Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOperationInfoContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OperationInfoContainer"), sizeof(FOperationInfoContainer), Get_Z_Construct_UScriptStruct_FOperationInfoContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOperationInfoContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOperationInfoContainer_Hash() { return 1727650851U; }

static_assert(std::is_polymorphic<FOperationInfoItem>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FOperationInfoItem cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

class UScriptStruct* FOperationInfoItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FOperationInfoItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOperationInfoItem, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("OperationInfoItem"), sizeof(FOperationInfoItem), Get_Z_Construct_UScriptStruct_FOperationInfoItem_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FOperationInfoItem>()
{
	return FOperationInfoItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOperationInfoItem(FOperationInfoItem::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("OperationInfoItem"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoItem
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoItem()
	{
		UScriptStruct::DeferCppStructOps<FOperationInfoItem>(FName(TEXT("OperationInfoItem")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFOperationInfoItem;
	struct Z_Construct_UScriptStruct_FOperationInfoItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicatedOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicatedOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoItem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "//The activation information for this task\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationContainer.h" },
		{ "ToolTip", "The activation information for this task" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOperationInfoItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_OperationOwner_MetaData[] = {
		{ "Comment", "//Who initiate this operation info\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationContainer.h" },
		{ "ToolTip", "Who initiate this operation info" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_OperationOwner = { "OperationOwner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationInfoItem, OperationOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_OperationOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_OperationOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_ReplicatedOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/OperationInformationContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_ReplicatedOperationInfo = { "ReplicatedOperationInfo", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOperationInfoItem, ReplicatedOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_ReplicatedOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_ReplicatedOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOperationInfoItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_OperationOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOperationInfoItem_Statics::NewProp_ReplicatedOperationInfo,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOperationInfoItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"OperationInfoItem",
		sizeof(FOperationInfoItem),
		alignof(FOperationInfoItem),
		Z_Construct_UScriptStruct_FOperationInfoItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOperationInfoItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOperationInfoItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OperationInfoItem"), sizeof(FOperationInfoItem), Get_Z_Construct_UScriptStruct_FOperationInfoItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOperationInfoItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOperationInfoItem_Hash() { return 3002580077U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
