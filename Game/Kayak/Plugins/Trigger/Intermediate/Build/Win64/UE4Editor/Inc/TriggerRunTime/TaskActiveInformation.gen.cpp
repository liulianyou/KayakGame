// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TaskActiveInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTaskActiveInformation() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfoContainer();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FActiationInfoHandle();
// End Cross Module References

static_assert(std::is_polymorphic<FTaskActivationInfoContainer>() == std::is_polymorphic<FFastArraySerializer>(), "USTRUCT FTaskActivationInfoContainer cannot be polymorphic unless super FFastArraySerializer is polymorphic");

class UScriptStruct* FTaskActivationInfoContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskActivationInfoContainer, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TaskActivationInfoContainer"), sizeof(FTaskActivationInfoContainer), Get_Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTaskActivationInfoContainer>()
{
	return FTaskActivationInfoContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskActivationInfoContainer(FTaskActivationInfoContainer::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TaskActivationInfoContainer"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskActivationInfoContainer
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskActivationInfoContainer()
	{
		UScriptStruct::DeferCppStructOps<FTaskActivationInfoContainer>(FName(TEXT("TaskActivationInfoContainer")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskActivationInfoContainer;
	struct Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The container of the activation information for the target trigger task.\n* The last element is the immediate activation information.\n*/" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "* The container of the activation information for the target trigger task.\n* The last element is the immediate activation information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskActivationInfoContainer>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTaskActivationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items_MetaData[] = {
		{ "Comment", "/** List of information for activation */" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "List of information for activation" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfoContainer, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_TaskOwner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfoContainer, TaskOwner), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_TaskOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_TaskOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::NewProp_TaskOwner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"TaskActivationInfoContainer",
		sizeof(FTaskActivationInfoContainer),
		alignof(FTaskActivationInfoContainer),
		Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfoContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskActivationInfoContainer"), sizeof(FTaskActivationInfoContainer), Get_Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskActivationInfoContainer_Hash() { return 2203323585U; }

static_assert(std::is_polymorphic<FTaskActivationInfo>() == std::is_polymorphic<FFastArraySerializerItem>(), "USTRUCT FTaskActivationInfo cannot be polymorphic unless super FFastArraySerializerItem is polymorphic");

class UScriptStruct* FTaskActivationInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTaskActivationInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTaskActivationInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TaskActivationInfo"), sizeof(FTaskActivationInfo), Get_Z_Construct_UScriptStruct_FTaskActivationInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTaskActivationInfo>()
{
	return FTaskActivationInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTaskActivationInfo(FTaskActivationInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TaskActivationInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskActivationInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskActivationInfo()
	{
		UScriptStruct::DeferCppStructOps<FTaskActivationInfo>(FName(TEXT("TaskActivationInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTaskActivationInfo;
	struct Z_Construct_UScriptStruct_FTaskActivationInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherTaskComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherTaskComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProcessedExternalData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProcessedExternalData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnerTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSuccessed_MetaData[];
#endif
		static void NewProp_ActiveSuccessed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ActiveSuccessed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RepliactedRunningTask_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepliactedRunningTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RepliactedRunningTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UnRepliactedRunningTask_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnRepliactedRunningTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UnRepliactedRunningTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//The activation information for this task\n" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "The activation information for this task" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTaskActivationInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTaskComponent_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The task component which invoke this task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "The task component which invoke this task" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTaskComponent = { "OtherTaskComponent", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, OtherTaskComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTaskComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTaskComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTask_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The actual task in the other task component to invoke this task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "The actual task in the other task component to invoke this task" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTask = { "OtherTask", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, OtherTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ProcessedExternalData_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The external data which this task will process when it start\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "The external data which this task will process when it start" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ProcessedExternalData = { "ProcessedExternalData", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, ProcessedExternalData), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ProcessedExternalData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ProcessedExternalData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OwnerTask_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The task which own this info, this variable should never be none\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "The task which own this info, this variable should never be none" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OwnerTask = { "OwnerTask", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, OwnerTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OwnerTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OwnerTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Flag to check weather this active information has activated the target task successfully\n\x09* As I will store all activate information who toggle the trigger task. part of the toggle is invalid so I use this flag to distinguish them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "* Flag to check weather this active information has activated the target task successfully\n* As I will store all activate information who toggle the trigger task. part of the toggle is invalid so I use this flag to distinguish them." },
	};
#endif
	void Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed_SetBit(void* Obj)
	{
		((FTaskActivationInfo*)Obj)->ActiveSuccessed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed = { "ActiveSuccessed", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTaskActivationInfo), &Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask_Inner = { "RepliactedRunningTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask_MetaData[] = {
		{ "Comment", "/*\n\x09* The task which is the actual task which will be used to run the content of this task\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
		{ "ToolTip", "* The task which is the actual task which will be used to run the content of this task" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask = { "RepliactedRunningTask", nullptr, (EPropertyFlags)0x0010008000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, RepliactedRunningTask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, Handle), Z_Construct_UScriptStruct_FActiationInfoHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask_Inner = { "UnRepliactedRunningTask", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask = { "UnRepliactedRunningTask", nullptr, (EPropertyFlags)0x0010008080000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTaskActivationInfo, UnRepliactedRunningTask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTaskComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OtherTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ProcessedExternalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_OwnerTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_ActiveSuccessed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_RepliactedRunningTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_Handle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::NewProp_UnRepliactedRunningTask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"TaskActivationInfo",
		sizeof(FTaskActivationInfo),
		alignof(FTaskActivationInfo),
		Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTaskActivationInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TaskActivationInfo"), sizeof(FTaskActivationInfo), Get_Z_Construct_UScriptStruct_FTaskActivationInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTaskActivationInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTaskActivationInfo_Hash() { return 384795706U; }
class UScriptStruct* FActiationInfoHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FActiationInfoHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActiationInfoHandle, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ActiationInfoHandle"), sizeof(FActiationInfoHandle), Get_Z_Construct_UScriptStruct_FActiationInfoHandle_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FActiationInfoHandle>()
{
	return FActiationInfoHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActiationInfoHandle(FActiationInfoHandle::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ActiationInfoHandle"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFActiationInfoHandle
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFActiationInfoHandle()
	{
		UScriptStruct::DeferCppStructOps<FActiationInfoHandle>(FName(TEXT("ActiationInfoHandle")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFActiationInfoHandle;
	struct Z_Construct_UScriptStruct_FActiationInfoHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActiationInfoHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/TaskActiveInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActiationInfoHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ActiationInfoHandle",
		sizeof(FActiationInfoHandle),
		alignof(FActiationInfoHandle),
		Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActiationInfoHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActiationInfoHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActiationInfoHandle"), sizeof(FActiationInfoHandle), Get_Z_Construct_UScriptStruct_FActiationInfoHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActiationInfoHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActiationInfoHandle_Hash() { return 742710148U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
