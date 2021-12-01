// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TriggerTaskBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETaskInstanceType();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETaskTransferType();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskHandle();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FPendingToExecuteInfo();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FActiationInfoHandle();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfo();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FTaskActivationInfoContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UReplicateTypeBase_NoRegister();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ERunType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerManager_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskManager_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskInterface_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventTriggerTaskState_Parms
		{
			UTriggerTaskBase* Task;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventTriggerTaskState_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n* The parameter Task can be template task or relative task, you can filter it by invoke IsTemplateTask(). \n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The parameter Task can be template task or relative task, you can filter it by invoke IsTemplateTask()." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "TriggerTaskState__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventTriggerTaskState_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ETaskInstanceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETaskInstanceType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETaskInstanceType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETaskInstanceType>()
	{
		return ETaskInstanceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskInstanceType(ETaskInstanceType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETaskInstanceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETaskInstanceType_Hash() { return 1066449996U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETaskInstanceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskInstanceType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETaskInstanceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskInstanceType::ETaskInstanceType_CreateNewInstance", (int64)ETaskInstanceType::ETaskInstanceType_CreateNewInstance },
				{ "ETaskInstanceType::ETaskInstanceType_NoNewInstance", (int64)ETaskInstanceType::ETaskInstanceType_NoNewInstance },
				{ "ETaskInstanceType::ETaskInstanceType_CDO", (int64)ETaskInstanceType::ETaskInstanceType_CDO },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The instance type when new trigger task need to be activated.\n* ETaskInstanceType_NoNewInstance && ETaskInstanceType_CDO will not create new task instance\n*/" },
				{ "ETaskInstanceType_CDO.Comment", "//Just use the CDO the this task, this will ignore all configured value in the map\n" },
				{ "ETaskInstanceType_CDO.DisplayName", "Use the CDO of this task" },
				{ "ETaskInstanceType_CDO.Hidden", "" },
				{ "ETaskInstanceType_CDO.Name", "ETaskInstanceType::ETaskInstanceType_CDO" },
				{ "ETaskInstanceType_CDO.ToolTip", "Just use the CDO the this task, this will ignore all configured value in the map" },
				{ "ETaskInstanceType_CreateNewInstance.Comment", "/*\n\x09* Each time to run the target task I need to create new one to do the task content when the task is treated as template\n\x09* The template task with this flag will not do any task content instead it will notify its instanced task to do task content\n\x09*/" },
				{ "ETaskInstanceType_CreateNewInstance.DisplayName", "Create new instance from this task" },
				{ "ETaskInstanceType_CreateNewInstance.Name", "ETaskInstanceType::ETaskInstanceType_CreateNewInstance" },
				{ "ETaskInstanceType_CreateNewInstance.ToolTip", "* Each time to run the target task I need to create new one to do the task content when the task is treated as template\n* The template task with this flag will not do any task content instead it will notify its instanced task to do task content" },
				{ "ETaskInstanceType_NoNewInstance.Comment", "//I will use the instanced which is already instanced by the designer \n" },
				{ "ETaskInstanceType_NoNewInstance.DisplayName", "Use this task directly" },
				{ "ETaskInstanceType_NoNewInstance.Name", "ETaskInstanceType::ETaskInstanceType_NoNewInstance" },
				{ "ETaskInstanceType_NoNewInstance.ToolTip", "I will use the instanced which is already instanced by the designer" },
				{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
				{ "ToolTip", "* The instance type when new trigger task need to be activated.\n* ETaskInstanceType_NoNewInstance && ETaskInstanceType_CDO will not create new task instance" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETaskInstanceType",
				"ETaskInstanceType",
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
	static UEnum* ETaskTransferType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETaskTransferType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETaskTransferType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETaskTransferType>()
	{
		return ETaskTransferType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETaskTransferType(ETaskTransferType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETaskTransferType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETaskTransferType_Hash() { return 2014842916U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETaskTransferType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETaskTransferType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETaskTransferType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETaskTransferType::ETaskTransferType_None", (int64)ETaskTransferType::ETaskTransferType_None },
				{ "ETaskTransferType::ETaskTransferType_Notify", (int64)ETaskTransferType::ETaskTransferType_Notify },
				{ "ETaskTransferType::ETaskTransferType_Copy", (int64)ETaskTransferType::ETaskTransferType_Copy },
				{ "ETaskTransferType::ETaskTransferType_Move", (int64)ETaskTransferType::ETaskTransferType_Move },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ETaskTransferType_Copy.Comment", "//Will give other trigger new copy instance of this task\n" },
				{ "ETaskTransferType_Copy.DisplayName", "copy" },
				{ "ETaskTransferType_Copy.Name", "ETaskTransferType::ETaskTransferType_Copy" },
				{ "ETaskTransferType_Copy.ToolTip", "Will give other trigger new copy instance of this task" },
				{ "ETaskTransferType_Move.Comment", "//The original task will be removed form the trigger and Its content will be stored in the target trigger,\n" },
				{ "ETaskTransferType_Move.DisplayName", "Move" },
				{ "ETaskTransferType_Move.Name", "ETaskTransferType::ETaskTransferType_Move" },
				{ "ETaskTransferType_Move.ToolTip", "The original task will be removed form the trigger and Its content will be stored in the target trigger," },
				{ "ETaskTransferType_None.Comment", "//This trigger has no information to others\n" },
				{ "ETaskTransferType_None.Hidden", "" },
				{ "ETaskTransferType_None.Name", "ETaskTransferType::ETaskTransferType_None" },
				{ "ETaskTransferType_None.ToolTip", "This trigger has no information to others" },
				{ "ETaskTransferType_Notify.Comment", "//The task's owner will not change, it only notify other triggers\n" },
				{ "ETaskTransferType_Notify.DisplayName", "Notify" },
				{ "ETaskTransferType_Notify.Name", "ETaskTransferType::ETaskTransferType_Notify" },
				{ "ETaskTransferType_Notify.ToolTip", "The task's owner will not change, it only notify other triggers" },
				{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETaskTransferType",
				"ETaskTransferType",
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
class UScriptStruct* FTriggerTaskHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FTriggerTaskHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTriggerTaskHandle, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("TriggerTaskHandle"), sizeof(FTriggerTaskHandle), Get_Z_Construct_UScriptStruct_FTriggerTaskHandle_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FTriggerTaskHandle>()
{
	return FTriggerTaskHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTriggerTaskHandle(FTriggerTaskHandle::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("TriggerTaskHandle"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTaskHandle
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTaskHandle()
	{
		UScriptStruct::DeferCppStructOps<FTriggerTaskHandle>(FName(TEXT("TriggerTaskHandle")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFTriggerTaskHandle;
	struct Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* The handle to the trigger task which I can use it to stand for the target trigger task\n*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The handle to the trigger task which I can use it to stand for the target trigger task" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTriggerTaskHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerRuntime|Handle" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTriggerTaskHandle, Handle), METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::NewProp_Handle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::NewProp_Handle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"TriggerTaskHandle",
		sizeof(FTriggerTaskHandle),
		alignof(FTriggerTaskHandle),
		Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTriggerTaskHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTriggerTaskHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TriggerTaskHandle"), sizeof(FTriggerTaskHandle), Get_Z_Construct_UScriptStruct_FTriggerTaskHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTriggerTaskHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTriggerTaskHandle_Hash() { return 3183320152U; }
class UScriptStruct* FPendingToExecuteInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FPendingToExecuteInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPendingToExecuteInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("PendingToExecuteInfo"), sizeof(FPendingToExecuteInfo), Get_Z_Construct_UScriptStruct_FPendingToExecuteInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FPendingToExecuteInfo>()
{
	return FPendingToExecuteInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPendingToExecuteInfo(FPendingToExecuteInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("PendingToExecuteInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFPendingToExecuteInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFPendingToExecuteInfo()
	{
		UScriptStruct::DeferCppStructOps<FPendingToExecuteInfo>(FName(TEXT("PendingToExecuteInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFPendingToExecuteInfo;
	struct Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivationHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPendingToExecuteInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::NewProp_ActivationHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::NewProp_ActivationHandle = { "ActivationHandle", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPendingToExecuteInfo, ActivationHandle), Z_Construct_UScriptStruct_FActiationInfoHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::NewProp_ActivationHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::NewProp_ActivationHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::NewProp_ActivationHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"PendingToExecuteInfo",
		sizeof(FPendingToExecuteInfo),
		alignof(FPendingToExecuteInfo),
		Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPendingToExecuteInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPendingToExecuteInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PendingToExecuteInfo"), sizeof(FPendingToExecuteInfo), Get_Z_Construct_UScriptStruct_FPendingToExecuteInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPendingToExecuteInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPendingToExecuteInfo_Hash() { return 1710465744U; }
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventRepeatConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventRepeatConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventResumeConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventResumeConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventPauseConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventPauseConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventSkipConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventSkipConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventResetConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventResetConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventSleepConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventSleepConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventStopConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventStopConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventFinishConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventFinishConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSwitchEventStartConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwitchEventStartConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execMarkCurrentActivationInfo)
	{
		P_GET_UBOOL(Z_Param_Successed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MarkCurrentActivationInfo(Z_Param_Successed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execDebugBreak)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DebugBreak();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execResetUserData)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetUserData(Z_Param_OperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execFinializeUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinializeUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execInitializeUserData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeUserData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRemoveUserDataByInstance)
	{
		P_GET_OBJECT(UTriggerTaskExternalDataBase,Z_Param_TemplateData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUserDataByInstance(Z_Param_TemplateData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRemoveUserDataByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ExternalDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUserDataByClass(Z_Param_ExternalDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execAddNewUserDataByInstance)
	{
		P_GET_OBJECT(UTriggerTaskExternalDataBase,Z_Param_TemplateData);
		P_GET_UBOOL(Z_Param_CreateNew);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskExternalDataBase**)Z_Param__Result=P_THIS->AddNewUserDataByInstance(Z_Param_TemplateData,Z_Param_CreateNew);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execAddNewUserDataByClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ExternalDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskExternalDataBase**)Z_Param__Result=P_THIS->AddNewUserDataByClass(Z_Param_ExternalDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTargetUserData)
	{
		P_GET_OBJECT(UClass,Z_Param_ExternalDataClass);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskExternalDataBase**)Z_Param__Result=P_THIS->GetTargetUserData(Z_Param_ExternalDataClass,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execHasTargetUserDate)
	{
		P_GET_OBJECT(UClass,Z_Param_ExternalDataClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTargetUserDate(Z_Param_ExternalDataClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetUserDatas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerTaskExternalDataBase*>*)Z_Param__Result=P_THIS->GetUserDatas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetConstUserDatas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerTaskExternalDataBase*>*)Z_Param__Result=P_THIS->GetConstUserDatas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetRepeatConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRepeatConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetResetConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResetConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetResumeConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetResumeConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetPauseConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPauseConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetSleepConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSleepConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetSkipConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkipConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetStopConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStopConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetFinishConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFinishConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetStartConditions)
	{
		P_GET_OBJECT(UTriggerTaskStateSwitchBase,Z_Param_Switch);
		P_GET_UBOOL(Z_Param_CreateNewInstance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStartConditions(Z_Param_Switch,Z_Param_CreateNewInstance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execCanExecuteAutomatically)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanExecuteAutomatically();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetCurrentActiveInfoIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentActiveInfoIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetRunType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERunType*)Z_Param__Result=P_THIS->GetRunType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetCurrentTriggerTaskState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETriggerTaskState*)Z_Param__Result=P_THIS->GetCurrentTriggerTaskState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetReplicateType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UReplicateTypeBase**)Z_Param__Result=P_THIS->GetReplicateType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetCopyChildTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerTaskBase*>*)Z_Param__Result=P_THIS->GetCopyChildTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetConstChildTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerTaskBase*>*)Z_Param__Result=P_THIS->GetConstChildTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetChildTasks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTriggerTaskBase*>*)Z_Param__Result=P_THIS->GetChildTasks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetCopyTaskHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTriggerTaskHandle*)Z_Param__Result=P_THIS->GetCopyTaskHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTaskHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTriggerTaskHandle*)Z_Param__Result=P_THIS->GetTaskHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetConstTaskHandle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTriggerTaskHandle*)Z_Param__Result=P_THIS->GetConstTaskHandle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetCopyID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetCopyID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetConstID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetConstID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetPauseConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetPauseConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetRepeatConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetRepeatConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetResumeConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetResumeConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetResetConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetResetConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetSleepConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetSleepConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetSkipConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetSkipConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetStopConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetStopConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetFinishConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetFinishConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetStartConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskStateSwitchBase**)Z_Param__Result=P_THIS->GetStartConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRep_PendingToExecuteInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_PendingToExecuteInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRep_ImmediateActivationInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_ImmediateActivationInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRep_State)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_State();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRep_ActivatedCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Rep_ActivatedCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execCanReplicateExecuteCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReplicateExecuteCount_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetImmediateActivationInformation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTaskActivationInfoContainer*)Z_Param__Result=P_THIS->GetImmediateActivationInformation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execFindOrAddNewInstance)
	{
		P_GET_STRUCT_REF(FTaskActivationInfo,Z_Param_Out_ActivationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->FindOrAddNewInstance_Implementation(Z_Param_Out_ActivationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execEnterPostFinishedState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnterPostFinishedState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execCheckRunTimeType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckRunTimeType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetTemplate)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTemplate(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTemplate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskBase**)Z_Param__Result=P_THIS->GetTemplate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execIsDynamicTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDynamicTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execIsTemplateTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsTemplateTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTriggerTaskManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskManager**)Z_Param__Result=P_THIS->GetTriggerTaskManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetCurrentExecuteCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentExecuteCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTriggerState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ETriggerTaskState*)Z_Param__Result=P_THIS->GetTriggerState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execIsFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execIsCompletelyFinished)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCompletelyFinished();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execIsRunning)
	{
		P_GET_UBOOL(Z_Param_IgnorePauseState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsRunning(Z_Param_IgnorePauseState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execCanTick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanTick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execClearChildTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearChildTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execRemoveChildTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ChildTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChildTask(Z_Param_ChildTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execAddChildTask)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ChildTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChildTask(Z_Param_ChildTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetInstigator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetInstigator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSetInstigator)
	{
		P_GET_OBJECT(AActor,Z_Param_Instigator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInstigator(Z_Param_Instigator);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execTryToGetOwnerActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->TryToGetOwnerActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTriggerOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskComponentBase**)Z_Param__Result=P_THIS->GetTriggerOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execCanBeToggled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBeToggled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execGetTriggerManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerManager**)Z_Param__Result=P_THIS->GetTriggerManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execMuticast_ReceiveNotifyFromOthersComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_OtherComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_SenderTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Muticast_ReceiveNotifyFromOthersComponent_Validate(Z_Param_OtherComponent,Z_Param_SenderTask,Z_Param_StartOperationInfo))
		{
			RPC_ValidateFailed(TEXT("Muticast_ReceiveNotifyFromOthersComponent_Validate"));
			return;
		}
		P_THIS->Muticast_ReceiveNotifyFromOthersComponent_Implementation(Z_Param_OtherComponent,Z_Param_SenderTask,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execReceiveNotifyFromOthersComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_OtherComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_SenderTask);
		P_GET_OBJECT(UOperationInformationBase,Z_Param_StartOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReceiveNotifyFromOthersComponent(Z_Param_OtherComponent,Z_Param_SenderTask,Z_Param_StartOperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execNotifyOtherComponentSuccessed)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_OtherComponent);
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_ReceivedTask);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NotifyOtherComponentSuccessed(Z_Param_OtherComponent,Z_Param_ReceivedTask);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSelectedInEditor)
	{
		P_GET_OBJECT(UObject,Z_Param_SelectedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectedInEditor(Z_Param_SelectedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execTryToSleep)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Operation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToSleep(Z_Param_Operation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execTryToStop)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_Operation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TryToStop(Z_Param_Operation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execResume)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Resume(Z_Param_OperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execPause)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Pause(Z_Param_OperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execFinished)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Finished(Z_Param_OperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execSkip)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_OperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Skip(Z_Param_OperationInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execActive)
	{
		P_GET_UBOOL(Z_Param_ForceActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Active(Z_Param_ForceActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Prepare();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskBase::execReset)
	{
		P_GET_OBJECT(UOperationInformationBase,Z_Param_ResetOperationInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_ResetOperationInfo);
		P_NATIVE_END;
	}
	static FName NAME_UTriggerTaskBase_CanReplicateExecuteCount = FName(TEXT("CanReplicateExecuteCount"));
	bool UTriggerTaskBase::CanReplicateExecuteCount()
	{
		TriggerTaskBase_eventCanReplicateExecuteCount_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskBase_CanReplicateExecuteCount),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskBase_FindOrAddNewInstance = FName(TEXT("FindOrAddNewInstance"));
	UTriggerTaskBase* UTriggerTaskBase::FindOrAddNewInstance(FTaskActivationInfo& ActivationInfo)
	{
		TriggerTaskBase_eventFindOrAddNewInstance_Parms Parms;
		Parms.ActivationInfo=ActivationInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskBase_FindOrAddNewInstance),&Parms);
		ActivationInfo=Parms.ActivationInfo;
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent = FName(TEXT("Muticast_ReceiveNotifyFromOthersComponent"));
	void UTriggerTaskBase::Muticast_ReceiveNotifyFromOthersComponent(UTriggerTaskComponentBase* OtherComponent, UTriggerTaskBase* SenderTask, UOperationInformationBase* StartOperationInfo)
	{
		TriggerTaskBase_eventMuticast_ReceiveNotifyFromOthersComponent_Parms Parms;
		Parms.OtherComponent=OtherComponent;
		Parms.SenderTask=SenderTask;
		Parms.StartOperationInfo=StartOperationInfo;
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent),&Parms);
	}
	static FName NAME_UTriggerTaskBase_OnBeginPlay = FName(TEXT("OnBeginPlay"));
	void UTriggerTaskBase::OnBeginPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UTriggerTaskBase_OnBeginPlay),NULL);
	}
	void UTriggerTaskBase::StaticRegisterNativesUTriggerTaskBase()
	{
		UClass* Class = UTriggerTaskBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Active", &UTriggerTaskBase::execActive },
			{ "AddChildTask", &UTriggerTaskBase::execAddChildTask },
			{ "AddNewUserDataByClass", &UTriggerTaskBase::execAddNewUserDataByClass },
			{ "AddNewUserDataByInstance", &UTriggerTaskBase::execAddNewUserDataByInstance },
			{ "CanBeToggled", &UTriggerTaskBase::execCanBeToggled },
			{ "CanExecuteAutomatically", &UTriggerTaskBase::execCanExecuteAutomatically },
			{ "CanReplicateExecuteCount", &UTriggerTaskBase::execCanReplicateExecuteCount },
			{ "CanTick", &UTriggerTaskBase::execCanTick },
			{ "CheckRunTimeType", &UTriggerTaskBase::execCheckRunTimeType },
			{ "ClearChildTask", &UTriggerTaskBase::execClearChildTask },
			{ "DebugBreak", &UTriggerTaskBase::execDebugBreak },
			{ "EnterPostFinishedState", &UTriggerTaskBase::execEnterPostFinishedState },
			{ "FindOrAddNewInstance", &UTriggerTaskBase::execFindOrAddNewInstance },
			{ "FinializeUserData", &UTriggerTaskBase::execFinializeUserData },
			{ "Finished", &UTriggerTaskBase::execFinished },
			{ "GetChildTasks", &UTriggerTaskBase::execGetChildTasks },
			{ "GetConstChildTasks", &UTriggerTaskBase::execGetConstChildTasks },
			{ "GetConstID", &UTriggerTaskBase::execGetConstID },
			{ "GetConstTaskHandle", &UTriggerTaskBase::execGetConstTaskHandle },
			{ "GetConstUserDatas", &UTriggerTaskBase::execGetConstUserDatas },
			{ "GetCopyChildTasks", &UTriggerTaskBase::execGetCopyChildTasks },
			{ "GetCopyID", &UTriggerTaskBase::execGetCopyID },
			{ "GetCopyTaskHandle", &UTriggerTaskBase::execGetCopyTaskHandle },
			{ "GetCurrentActiveInfoIndex", &UTriggerTaskBase::execGetCurrentActiveInfoIndex },
			{ "GetCurrentExecuteCount", &UTriggerTaskBase::execGetCurrentExecuteCount },
			{ "GetCurrentTriggerTaskState", &UTriggerTaskBase::execGetCurrentTriggerTaskState },
			{ "GetFinishConditions", &UTriggerTaskBase::execGetFinishConditions },
			{ "GetID", &UTriggerTaskBase::execGetID },
			{ "GetImmediateActivationInformation", &UTriggerTaskBase::execGetImmediateActivationInformation },
			{ "GetInstigator", &UTriggerTaskBase::execGetInstigator },
			{ "GetPauseConditions", &UTriggerTaskBase::execGetPauseConditions },
			{ "GetRepeatConditions", &UTriggerTaskBase::execGetRepeatConditions },
			{ "GetReplicateType", &UTriggerTaskBase::execGetReplicateType },
			{ "GetResetConditions", &UTriggerTaskBase::execGetResetConditions },
			{ "GetResumeConditions", &UTriggerTaskBase::execGetResumeConditions },
			{ "GetRunType", &UTriggerTaskBase::execGetRunType },
			{ "GetSkipConditions", &UTriggerTaskBase::execGetSkipConditions },
			{ "GetSleepConditions", &UTriggerTaskBase::execGetSleepConditions },
			{ "GetStartConditions", &UTriggerTaskBase::execGetStartConditions },
			{ "GetStopConditions", &UTriggerTaskBase::execGetStopConditions },
			{ "GetTargetUserData", &UTriggerTaskBase::execGetTargetUserData },
			{ "GetTaskHandle", &UTriggerTaskBase::execGetTaskHandle },
			{ "GetTemplate", &UTriggerTaskBase::execGetTemplate },
			{ "GetTriggerManager", &UTriggerTaskBase::execGetTriggerManager },
			{ "GetTriggerOwner", &UTriggerTaskBase::execGetTriggerOwner },
			{ "GetTriggerState", &UTriggerTaskBase::execGetTriggerState },
			{ "GetTriggerTaskManager", &UTriggerTaskBase::execGetTriggerTaskManager },
			{ "GetUserDatas", &UTriggerTaskBase::execGetUserDatas },
			{ "HasTargetUserDate", &UTriggerTaskBase::execHasTargetUserDate },
			{ "InitializeUserData", &UTriggerTaskBase::execInitializeUserData },
			{ "IsCompletelyFinished", &UTriggerTaskBase::execIsCompletelyFinished },
			{ "IsDynamicTask", &UTriggerTaskBase::execIsDynamicTask },
			{ "IsFinished", &UTriggerTaskBase::execIsFinished },
			{ "IsRunning", &UTriggerTaskBase::execIsRunning },
			{ "IsTemplateTask", &UTriggerTaskBase::execIsTemplateTask },
			{ "MarkCurrentActivationInfo", &UTriggerTaskBase::execMarkCurrentActivationInfo },
			{ "Muticast_ReceiveNotifyFromOthersComponent", &UTriggerTaskBase::execMuticast_ReceiveNotifyFromOthersComponent },
			{ "NotifyOtherComponentSuccessed", &UTriggerTaskBase::execNotifyOtherComponentSuccessed },
			{ "Pause", &UTriggerTaskBase::execPause },
			{ "Prepare", &UTriggerTaskBase::execPrepare },
			{ "ReceiveNotifyFromOthersComponent", &UTriggerTaskBase::execReceiveNotifyFromOthersComponent },
			{ "RemoveChildTask", &UTriggerTaskBase::execRemoveChildTask },
			{ "RemoveUserDataByClass", &UTriggerTaskBase::execRemoveUserDataByClass },
			{ "RemoveUserDataByInstance", &UTriggerTaskBase::execRemoveUserDataByInstance },
			{ "Rep_ActivatedCount", &UTriggerTaskBase::execRep_ActivatedCount },
			{ "Rep_ImmediateActivationInformation", &UTriggerTaskBase::execRep_ImmediateActivationInformation },
			{ "Rep_PendingToExecuteInfo", &UTriggerTaskBase::execRep_PendingToExecuteInfo },
			{ "Rep_State", &UTriggerTaskBase::execRep_State },
			{ "Reset", &UTriggerTaskBase::execReset },
			{ "ResetUserData", &UTriggerTaskBase::execResetUserData },
			{ "Resume", &UTriggerTaskBase::execResume },
			{ "SelectedInEditor", &UTriggerTaskBase::execSelectedInEditor },
			{ "SetFinishConditions", &UTriggerTaskBase::execSetFinishConditions },
			{ "SetInstigator", &UTriggerTaskBase::execSetInstigator },
			{ "SetPauseConditions", &UTriggerTaskBase::execSetPauseConditions },
			{ "SetRepeatConditions", &UTriggerTaskBase::execSetRepeatConditions },
			{ "SetResetConditions", &UTriggerTaskBase::execSetResetConditions },
			{ "SetResumeConditions", &UTriggerTaskBase::execSetResumeConditions },
			{ "SetSkipConditions", &UTriggerTaskBase::execSetSkipConditions },
			{ "SetSleepConditions", &UTriggerTaskBase::execSetSleepConditions },
			{ "SetStartConditions", &UTriggerTaskBase::execSetStartConditions },
			{ "SetStopConditions", &UTriggerTaskBase::execSetStopConditions },
			{ "SetTemplate", &UTriggerTaskBase::execSetTemplate },
			{ "Skip", &UTriggerTaskBase::execSkip },
			{ "SwitchEventFinishConditions", &UTriggerTaskBase::execSwitchEventFinishConditions },
			{ "SwitchEventPauseConditions", &UTriggerTaskBase::execSwitchEventPauseConditions },
			{ "SwitchEventRepeatConditions", &UTriggerTaskBase::execSwitchEventRepeatConditions },
			{ "SwitchEventResetConditions", &UTriggerTaskBase::execSwitchEventResetConditions },
			{ "SwitchEventResumeConditions", &UTriggerTaskBase::execSwitchEventResumeConditions },
			{ "SwitchEventSkipConditions", &UTriggerTaskBase::execSwitchEventSkipConditions },
			{ "SwitchEventSleepConditions", &UTriggerTaskBase::execSwitchEventSleepConditions },
			{ "SwitchEventStartConditions", &UTriggerTaskBase::execSwitchEventStartConditions },
			{ "SwitchEventStopConditions", &UTriggerTaskBase::execSwitchEventStopConditions },
			{ "Tick", &UTriggerTaskBase::execTick },
			{ "TryToGetOwnerActor", &UTriggerTaskBase::execTryToGetOwnerActor },
			{ "TryToSleep", &UTriggerTaskBase::execTryToSleep },
			{ "TryToStop", &UTriggerTaskBase::execTryToStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Active_Statics
	{
		struct TriggerTaskBase_eventActive_Parms
		{
			bool ForceActive;
		};
		static void NewProp_ForceActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ForceActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::NewProp_ForceActive_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventActive_Parms*)Obj)->ForceActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::NewProp_ForceActive = { "ForceActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventActive_Parms), &Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::NewProp_ForceActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::NewProp_ForceActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* This task is in active state, has been initialized/prepared but not finished\n\x09* \n\x09* @param ActiveInfo\x09\x09who, where and how to active this task\n\x09* @param ForceActive true means it will active this task without check any other conditions and active this task directly\n\x09*/" },
		{ "CPP_Default_ForceActive", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* This task is in active state, has been initialized/prepared but not finished\n*\n* @param ActiveInfo             who, where and how to active this task\n* @param ForceActive true means it will active this task without check any other conditions and active this task directly" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Active", nullptr, nullptr, sizeof(TriggerTaskBase_eventActive_Parms), Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Active()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Active_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics
	{
		struct TriggerTaskBase_eventAddChildTask_Parms
		{
			UTriggerTaskBase* ChildTask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::NewProp_ChildTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventAddChildTask_Parms, ChildTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::NewProp_ChildTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::NewProp_ChildTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "AddChildTask", nullptr, nullptr, sizeof(TriggerTaskBase_eventAddChildTask_Parms), Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_AddChildTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_AddChildTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics
	{
		struct TriggerTaskBase_eventAddNewUserDataByClass_Parms
		{
			TSubclassOf<UTriggerTaskExternalDataBase>  ExternalDataClass;
			UTriggerTaskExternalDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExternalDataClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ExternalDataClass = { "ExternalDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventAddNewUserDataByClass_Parms, ExternalDataClass), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventAddNewUserDataByClass_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ExternalDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "Comment", "//Try to add user data according to the data type, this will create new data to this task.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Try to add user data according to the data type, this will create new data to this task." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "AddNewUserDataByClass", nullptr, nullptr, sizeof(TriggerTaskBase_eventAddNewUserDataByClass_Parms), Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics
	{
		struct TriggerTaskBase_eventAddNewUserDataByInstance_Parms
		{
			UTriggerTaskExternalDataBase* TemplateData;
			bool CreateNew;
			UTriggerTaskExternalDataBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateData;
		static void NewProp_CreateNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNew;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_TemplateData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_TemplateData = { "TemplateData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventAddNewUserDataByInstance_Parms, TemplateData), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_TemplateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_TemplateData_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_CreateNew_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventAddNewUserDataByInstance_Parms*)Obj)->CreateNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_CreateNew = { "CreateNew", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventAddNewUserDataByInstance_Parms), &Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_CreateNew_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventAddNewUserDataByInstance_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_TemplateData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_CreateNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "Comment", "//Try to add user data according to template data, and it will create new data according to parameter CreateNew\n" },
		{ "CPP_Default_CreateNew", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Try to add user data according to template data, and it will create new data according to parameter CreateNew" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "AddNewUserDataByInstance", nullptr, nullptr, sizeof(TriggerTaskBase_eventAddNewUserDataByInstance_Parms), Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics
	{
		struct TriggerTaskBase_eventCanBeToggled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventCanBeToggled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventCanBeToggled_Parms), &Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "//Check weather this task can be toggled\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Check weather this task can be toggled" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "CanBeToggled", nullptr, nullptr, sizeof(TriggerTaskBase_eventCanBeToggled_Parms), Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics
	{
		struct TriggerTaskBase_eventCanExecuteAutomatically_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventCanExecuteAutomatically_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventCanExecuteAutomatically_Parms), &Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "CanExecuteAutomatically", nullptr, nullptr, sizeof(TriggerTaskBase_eventCanExecuteAutomatically_Parms), Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventCanReplicateExecuteCount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventCanReplicateExecuteCount_Parms), &Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Check weather the execute count can be replicated to client.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Check weather the execute count can be replicated to client." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "CanReplicateExecuteCount", nullptr, nullptr, sizeof(TriggerTaskBase_eventCanReplicateExecuteCount_Parms), Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics
	{
		struct TriggerTaskBase_eventCanTick_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventCanTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventCanTick_Parms), &Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* This is the final implementation to check weather this task can use the tick function \n\x09* The difference between the member CanEverTick and CanTick() is CanTick can ditinguish the server and client,\n\x09* And it can support customize tick condition\n\x09* CanEverTick is just one property of condition to check tick, it is a simple way to control tick \n\x09*\n\x09* Notice:\x09Try to make the OnCanTick in the BP is the final result of the Tick we should make sure the function in the base class should \n \x09*\x09\x09\x09""be processed after the derived class\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* This is the final implementation to check weather this task can use the tick function\n* The difference between the member CanEverTick and CanTick() is CanTick can ditinguish the server and client,\n* And it can support customize tick condition\n* CanEverTick is just one property of condition to check tick, it is a simple way to control tick\n*\n* Notice:       Try to make the OnCanTick in the BP is the final result of the Tick we should make sure the function in the base class should\n*                       be processed after the derived class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "CanTick", nullptr, nullptr, sizeof(TriggerTaskBase_eventCanTick_Parms), Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_CanTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_CanTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics
	{
		struct TriggerTaskBase_eventCheckRunTimeType_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventCheckRunTimeType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventCheckRunTimeType_Parms), &Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Check the run type of this task weather it is match for current net role\n\x09* #return true means the run type of this task is match for current net role\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Check the run type of this task weather it is match for current net role\n* #return true means the run type of this task is match for current net role" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "CheckRunTimeType", nullptr, nullptr, sizeof(TriggerTaskBase_eventCheckRunTimeType_Parms), Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "ClearChildTask", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_DebugBreak_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_DebugBreak_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Just used to debug the call stack in native codes\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Just used to debug the call stack in native codes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_DebugBreak_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "DebugBreak", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_DebugBreak_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_DebugBreak_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_DebugBreak()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_DebugBreak_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Enter the post finish state regard of the original state.\n\x09* Please tack care to use as it may be cause some external information.\n\x09* If should be invoked after Finish state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Enter the post finish state regard of the original state.\n* Please tack care to use as it may be cause some external information.\n* If should be invoked after Finish state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "EnterPostFinishedState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActivationInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ActivationInfo = { "ActivationInfo", nullptr, (EPropertyFlags)0x0010008000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventFindOrAddNewInstance_Parms, ActivationInfo), Z_Construct_UScriptStruct_FTaskActivationInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventFindOrAddNewInstance_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ActivationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Try to get valid instance task form the instanced task pool, if there is no valid instance task then just create new one\n\x09* \n\x09* @param ActivationInfo the target activated instanced task pool\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Try to get valid instance task form the instanced task pool, if there is no valid instance task then just create new one\n*\n* @param ActivationInfo the target activated instanced task pool" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "FindOrAddNewInstance", nullptr, nullptr, sizeof(TriggerTaskBase_eventFindOrAddNewInstance_Parms), Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "FinializeUserData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics
	{
		struct TriggerTaskBase_eventFinished_Parms
		{
			UOperationInformationBase* OperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::NewProp_OperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::NewProp_OperationInfo = { "OperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventFinished_Parms, OperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::NewProp_OperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::NewProp_OperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::NewProp_OperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* When this task have finished immediately this function will be invoked\n\x09* \n\x09* @param OperationInfo the information to identify this operation\n\x09*/" },
		{ "CPP_Default_OperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* When this task have finished immediately this function will be invoked\n*\n* @param OperationInfo the information to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Finished", nullptr, nullptr, sizeof(TriggerTaskBase_eventFinished_Parms), Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Finished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Finished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics
	{
		struct TriggerTaskBase_eventGetChildTasks_Parms
		{
			TArray<UTriggerTaskBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetChildTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetChildTasks", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetChildTasks_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics
	{
		struct TriggerTaskBase_eventGetConstChildTasks_Parms
		{
			TArray<UTriggerTaskBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetConstChildTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetConstChildTasks", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetConstChildTasks_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics
	{
		struct TriggerTaskBase_eventGetConstID_Parms
		{
			FGuid ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetConstID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetConstID", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetConstID_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetConstID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetConstID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics
	{
		struct TriggerTaskBase_eventGetConstTaskHandle_Parms
		{
			FTriggerTaskHandle ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetConstTaskHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriggerTaskHandle, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetConstTaskHandle", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetConstTaskHandle_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics
	{
		struct TriggerTaskBase_eventGetConstUserDatas_Parms
		{
			TArray<UTriggerTaskExternalDataBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetConstUserDatas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetConstUserDatas", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetConstUserDatas_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics
	{
		struct TriggerTaskBase_eventGetCopyChildTasks_Parms
		{
			TArray<UTriggerTaskBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetCopyChildTasks_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetCopyChildTasks", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetCopyChildTasks_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics
	{
		struct TriggerTaskBase_eventGetCopyID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetCopyID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetCopyID", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetCopyID_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetCopyID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetCopyID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics
	{
		struct TriggerTaskBase_eventGetCopyTaskHandle_Parms
		{
			FTriggerTaskHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetCopyTaskHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriggerTaskHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetCopyTaskHandle", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetCopyTaskHandle_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics
	{
		struct TriggerTaskBase_eventGetCurrentActiveInfoIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetCurrentActiveInfoIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetCurrentActiveInfoIndex", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetCurrentActiveInfoIndex_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics
	{
		struct TriggerTaskBase_eventGetCurrentExecuteCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetCurrentExecuteCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get the execute count of current task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Get the execute count of current task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetCurrentExecuteCount", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetCurrentExecuteCount_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics
	{
		struct TriggerTaskBase_eventGetCurrentTriggerTaskState_Parms
		{
			ETriggerTaskState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetCurrentTriggerTaskState_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetCurrentTriggerTaskState", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetCurrentTriggerTaskState_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics
	{
		struct TriggerTaskBase_eventGetFinishConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetFinishConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetFinishConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetFinishConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics
	{
		struct TriggerTaskBase_eventGetID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetID", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetID_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics
	{
		struct TriggerTaskBase_eventGetImmediateActivationInformation_Parms
		{
			FTaskActivationInfoContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetImmediateActivationInformation_Parms, ReturnValue), Z_Construct_UScriptStruct_FTaskActivationInfoContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get the immediate information for activate, this can be changed when the this task is activated by different ways\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Get the immediate information for activate, this can be changed when the this task is activated by different ways" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetImmediateActivationInformation", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetImmediateActivationInformation_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics
	{
		struct TriggerTaskBase_eventGetInstigator_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetInstigator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Instigator is the owner actor which own this task, it maybe not the same as GetOwner() of this object\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Instigator is the owner actor which own this task, it maybe not the same as GetOwner() of this object" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetInstigator", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetInstigator_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics
	{
		struct TriggerTaskBase_eventGetPauseConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetPauseConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetPauseConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetPauseConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics
	{
		struct TriggerTaskBase_eventGetRepeatConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetRepeatConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetRepeatConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetRepeatConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics
	{
		struct TriggerTaskBase_eventGetReplicateType_Parms
		{
			UReplicateTypeBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetReplicateType_Parms, ReturnValue), Z_Construct_UClass_UReplicateTypeBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetReplicateType", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetReplicateType_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics
	{
		struct TriggerTaskBase_eventGetResetConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetResetConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetResetConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetResetConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics
	{
		struct TriggerTaskBase_eventGetResumeConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetResumeConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetResumeConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetResumeConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics
	{
		struct TriggerTaskBase_eventGetRunType_Parms
		{
			ERunType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetRunType_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_ERunType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetRunType", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetRunType_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetRunType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetRunType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics
	{
		struct TriggerTaskBase_eventGetSkipConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetSkipConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetSkipConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetSkipConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics
	{
		struct TriggerTaskBase_eventGetSleepConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetSleepConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetSleepConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetSleepConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics
	{
		struct TriggerTaskBase_eventGetStartConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetStartConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetStartConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetStartConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics
	{
		struct TriggerTaskBase_eventGetStopConditions_Parms
		{
			UTriggerTaskStateSwitchBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetStopConditions_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetStopConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetStopConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics
	{
		struct TriggerTaskBase_eventGetTargetUserData_Parms
		{
			TSubclassOf<UTriggerTaskExternalDataBase>  ExternalDataClass;
			int32 Index;
			UTriggerTaskExternalDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExternalDataClass;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ExternalDataClass = { "ExternalDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTargetUserData_Parms, ExternalDataClass), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTargetUserData_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTargetUserData_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ExternalDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "Comment", "/*\n\x09* Get the target user data which has the specific class type\n\x09* \n\x09* @param ExternalDataClass the type of target user data\n\x09* @param Index if the number of user data with the external data type more then one then this index will specify the data\n\x09* \n\x09* #return this can return null.\n\x09*/" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Get the target user data which has the specific class type\n*\n* @param ExternalDataClass the type of target user data\n* @param Index if the number of user data with the external data type more then one then this index will specify the data\n*\n* #return this can return null." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTargetUserData", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTargetUserData_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics
	{
		struct TriggerTaskBase_eventGetTaskHandle_Parms
		{
			FTriggerTaskHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTaskHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FTriggerTaskHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTaskHandle", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTaskHandle_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics
	{
		struct TriggerTaskBase_eventGetTemplate_Parms
		{
			UTriggerTaskBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTemplate_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTemplate", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTemplate_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics
	{
		struct TriggerTaskBase_eventGetTriggerManager_Parms
		{
			UTriggerManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTriggerManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTriggerManager", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTriggerManager_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics
	{
		struct TriggerTaskBase_eventGetTriggerOwner_Parms
		{
			UTriggerTaskComponentBase* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTriggerOwner_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTriggerOwner", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTriggerOwner_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics
	{
		struct TriggerTaskBase_eventGetTriggerState_Parms
		{
			ETriggerTaskState ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTriggerState_Parms, ReturnValue), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTriggerState", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTriggerState_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics
	{
		struct TriggerTaskBase_eventGetTriggerTaskManager_Parms
		{
			UTriggerTaskManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetTriggerTaskManager_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetTriggerTaskManager", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetTriggerTaskManager_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics
	{
		struct TriggerTaskBase_eventGetUserDatas_Parms
		{
			TArray<UTriggerTaskExternalDataBase*> ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventGetUserDatas_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "GetUserDatas", nullptr, nullptr, sizeof(TriggerTaskBase_eventGetUserDatas_Parms), Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics
	{
		struct TriggerTaskBase_eventHasTargetUserDate_Parms
		{
			TSubclassOf<UTriggerTaskExternalDataBase>  ExternalDataClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExternalDataClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::NewProp_ExternalDataClass = { "ExternalDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventHasTargetUserDate_Parms, ExternalDataClass), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventHasTargetUserDate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventHasTargetUserDate_Parms), &Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::NewProp_ExternalDataClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "Comment", "//Try to check weather this task contain the target user data with the specific class\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Try to check weather this task contain the target user data with the specific class" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "HasTargetUserDate", nullptr, nullptr, sizeof(TriggerTaskBase_eventHasTargetUserDate_Parms), Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "InitializeUserData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics
	{
		struct TriggerTaskBase_eventIsCompletelyFinished_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventIsCompletelyFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventIsCompletelyFinished_Parms), &Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Check weather all the task include the child task in the chain have finished\n\x09* */" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Check weather all the task include the child task in the chain have finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "IsCompletelyFinished", nullptr, nullptr, sizeof(TriggerTaskBase_eventIsCompletelyFinished_Parms), Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics
	{
		struct TriggerTaskBase_eventIsDynamicTask_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventIsDynamicTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventIsDynamicTask_Parms), &Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Flag to check weather this task is created at runtime dynamically\n\x09*\n\x09* Dynamic means this task is not instanced in the editor mode and it is created at runtime.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Flag to check weather this task is created at runtime dynamically\n*\n* Dynamic means this task is not instanced in the editor mode and it is created at runtime." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "IsDynamicTask", nullptr, nullptr, sizeof(TriggerTaskBase_eventIsDynamicTask_Parms), Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics
	{
		struct TriggerTaskBase_eventIsFinished_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventIsFinished_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventIsFinished_Parms), &Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Check weather this task have finished, maybe the child task have not finished\n\x09* */" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Check weather this task have finished, maybe the child task have not finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "IsFinished", nullptr, nullptr, sizeof(TriggerTaskBase_eventIsFinished_Parms), Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_IsFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_IsFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics
	{
		struct TriggerTaskBase_eventIsRunning_Parms
		{
			bool IgnorePauseState;
			bool ReturnValue;
		};
		static void NewProp_IgnorePauseState_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IgnorePauseState;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_IgnorePauseState_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventIsRunning_Parms*)Obj)->IgnorePauseState = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_IgnorePauseState = { "IgnorePauseState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventIsRunning_Parms), &Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_IgnorePauseState_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventIsRunning_Parms), &Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_IgnorePauseState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Check weather this task is running.\n\x09* \n\x09* @param IgnorePauseState true means when we pause this task this function will return false even if the original state is in active;\n\x09* */" },
		{ "CPP_Default_IgnorePauseState", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Check weather this task is running.\n*\n* @param IgnorePauseState true means when we pause this task this function will return false even if the original state is in active;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "IsRunning", nullptr, nullptr, sizeof(TriggerTaskBase_eventIsRunning_Parms), Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_IsRunning()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_IsRunning_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics
	{
		struct TriggerTaskBase_eventIsTemplateTask_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventIsTemplateTask_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventIsTemplateTask_Parms), &Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Flag to check weather this task is just used as template which will be used to create new instance.\n\x09*\n\x09* a template task will not run any content except Instance type is specify to ETaskInstanceType_NoNewInstance\n\x09*\n\x09* This member should be intrinsic attribute, so it should be changed any more after it has been set\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Flag to check weather this task is just used as template which will be used to create new instance.\n*\n* a template task will not run any content except Instance type is specify to ETaskInstanceType_NoNewInstance\n*\n* This member should be intrinsic attribute, so it should be changed any more after it has been set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "IsTemplateTask", nullptr, nullptr, sizeof(TriggerTaskBase_eventIsTemplateTask_Parms), Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics
	{
		struct TriggerTaskBase_eventMarkCurrentActivationInfo_Parms
		{
			bool Successed;
		};
		static void NewProp_Successed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Successed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::NewProp_Successed_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventMarkCurrentActivationInfo_Parms*)Obj)->Successed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::NewProp_Successed = { "Successed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventMarkCurrentActivationInfo_Parms), &Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::NewProp_Successed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::NewProp_Successed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Mark current activation information successful or failed\n\x09* \n\x09* @param Successed true means current activation information successful, vices verse\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Mark current activation information successful or failed\n*\n* @param Successed true means current activation information successful, vices verse" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "MarkCurrentActivationInfo", nullptr, nullptr, sizeof(TriggerTaskBase_eventMarkCurrentActivationInfo_Parms), Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventMuticast_ReceiveNotifyFromOthersComponent_Parms, OtherComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask = { "SenderTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventMuticast_ReceiveNotifyFromOthersComponent_Parms, SenderTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventMuticast_ReceiveNotifyFromOthersComponent_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* NetMuticast when the server notify the client task to run\n\x09*\n\x09* Notice: As it is the NetMutlicast function I must make sure the parameter is net serialized \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* NetMuticast when the server notify the client task to run\n*\n* Notice: As it is the NetMutlicast function I must make sure the parameter is net serialized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Muticast_ReceiveNotifyFromOthersComponent", nullptr, nullptr, sizeof(TriggerTaskBase_eventMuticast_ReceiveNotifyFromOthersComponent_Parms), Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics
	{
		struct TriggerTaskBase_eventNotifyOtherComponentSuccessed_Parms
		{
			UTriggerTaskComponentBase* OtherComponent;
			UTriggerTaskBase* ReceivedTask;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceivedTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReceivedTask;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventNotifyOtherComponentSuccessed_Parms, OtherComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReceivedTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReceivedTask = { "ReceivedTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventNotifyOtherComponentSuccessed_Parms, ReceivedTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReceivedTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReceivedTask_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventNotifyOtherComponentSuccessed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventNotifyOtherComponentSuccessed_Parms), &Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReceivedTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* When some other receive information form this task successfully, we should do some actions here\n\x09*\n\x09* @param ReceivedTask\x09the task which receive the notification from this task\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* When some other receive information form this task successfully, we should do some actions here\n*\n* @param ReceivedTask   the task which receive the notification from this task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "NotifyOtherComponentSuccessed", nullptr, nullptr, sizeof(TriggerTaskBase_eventNotifyOtherComponentSuccessed_Parms), Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "BeginPlay" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "OnBeginPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics
	{
		struct TriggerTaskBase_eventPause_Parms
		{
			UOperationInformationBase* OperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::NewProp_OperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::NewProp_OperationInfo = { "OperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventPause_Parms, OperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::NewProp_OperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::NewProp_OperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::NewProp_OperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* Pause this task\n\x09* \n\x09* @param OperationInfo the information to identify this operation\n\x09*/" },
		{ "CPP_Default_OperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Pause this task\n*\n* @param OperationInfo the information to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Pause", nullptr, nullptr, sizeof(TriggerTaskBase_eventPause_Parms), Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Pause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Pause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics
	{
		struct TriggerTaskBase_eventPrepare_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventPrepare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventPrepare_Parms), &Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "//Prepare to execute this task, this function should be execute once in this task one execution life\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Prepare to execute this task, this function should be execute once in this task one execution life" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Prepare", nullptr, nullptr, sizeof(TriggerTaskBase_eventPrepare_Parms), Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Prepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Prepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics
	{
		struct TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms
		{
			UTriggerTaskComponentBase* OtherComponent;
			UTriggerTaskBase* SenderTask;
			UOperationInformationBase* StartOperationInfo;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SenderTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SenderTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms, OtherComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask = { "SenderTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms, SenderTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms), &Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_SenderTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* Invoked When this task receive information from other task,\n\x09* Most time you can treat it as awake function\n\x09*\n\x09* @param OtherComponent The component which send this notify, most time it is the SendTask's owner\n\x09* @param SenderTask\x09\x09The notification which is send by, This value maybe null if this task is invoked by the component\n\x09* @param ExternalData\x09The external data which the sender task will not storage that this task will process\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Invoked When this task receive information from other task,\n* Most time you can treat it as awake function\n*\n* @param OtherComponent The component which send this notify, most time it is the SendTask's owner\n* @param SenderTask             The notification which is send by, This value maybe null if this task is invoked by the component\n* @param ExternalData   The external data which the sender task will not storage that this task will process" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "ReceiveNotifyFromOthersComponent", nullptr, nullptr, sizeof(TriggerTaskBase_eventReceiveNotifyFromOthersComponent_Parms), Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics
	{
		struct TriggerTaskBase_eventRemoveChildTask_Parms
		{
			UTriggerTaskBase* ChildTask;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::NewProp_ChildTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventRemoveChildTask_Parms, ChildTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::NewProp_ChildTask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::NewProp_ChildTask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "RemoveChildTask", nullptr, nullptr, sizeof(TriggerTaskBase_eventRemoveChildTask_Parms), Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics
	{
		struct TriggerTaskBase_eventRemoveUserDataByClass_Parms
		{
			TSubclassOf<UTriggerTaskExternalDataBase>  ExternalDataClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ExternalDataClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::NewProp_ExternalDataClass = { "ExternalDataClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventRemoveUserDataByClass_Parms, ExternalDataClass), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::NewProp_ExternalDataClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "Comment", "//Remove all user data which the specific data type\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Remove all user data which the specific data type" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "RemoveUserDataByClass", nullptr, nullptr, sizeof(TriggerTaskBase_eventRemoveUserDataByClass_Parms), Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics
	{
		struct TriggerTaskBase_eventRemoveUserDataByInstance_Parms
		{
			UTriggerTaskExternalDataBase* TemplateData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TemplateData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TemplateData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::NewProp_TemplateData_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::NewProp_TemplateData = { "TemplateData", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventRemoveUserDataByInstance_Parms, TemplateData), Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::NewProp_TemplateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::NewProp_TemplateData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::NewProp_TemplateData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "Comment", "//Remove the specific data\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Remove the specific data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "RemoveUserDataByInstance", nullptr, nullptr, sizeof(TriggerTaskBase_eventRemoveUserDataByInstance_Parms), Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Rep_ActivatedCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Rep_ImmediateActivationInformation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Rep_PendingToExecuteInfo", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Rep_State_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Rep_State_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Rep_State_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Rep_State", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Rep_State_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Rep_State_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Rep_State()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Rep_State_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics
	{
		struct TriggerTaskBase_eventReset_Parms
		{
			UOperationInformationBase* ResetOperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::NewProp_ResetOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::NewProp_ResetOperationInfo = { "ResetOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventReset_Parms, ResetOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::NewProp_ResetOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::NewProp_ResetOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::NewProp_ResetOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* Called when the task reset\n\x09*\n\x09* @param ResetOperationInfo the operation which apply to this task, if null means this task should be forced to reset all\n\x09*/" },
		{ "CPP_Default_ResetOperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Called when the task reset\n*\n* @param ResetOperationInfo the operation which apply to this task, if null means this task should be forced to reset all" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Reset", nullptr, nullptr, sizeof(TriggerTaskBase_eventReset_Parms), Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics
	{
		struct TriggerTaskBase_eventResetUserData_Parms
		{
			UOperationInformationBase* OperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::NewProp_OperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::NewProp_OperationInfo = { "OperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventResetUserData_Parms, OperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::NewProp_OperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::NewProp_OperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::NewProp_OperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UserData" },
		{ "CPP_Default_OperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "ResetUserData", nullptr, nullptr, sizeof(TriggerTaskBase_eventResetUserData_Parms), Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_ResetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_ResetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics
	{
		struct TriggerTaskBase_eventResume_Parms
		{
			UOperationInformationBase* OperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::NewProp_OperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::NewProp_OperationInfo = { "OperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventResume_Parms, OperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::NewProp_OperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::NewProp_OperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::NewProp_OperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* Resume this task\n\x09* \n\x09* @paralm OperationInfo the information to identify this operation\n\x09*/" },
		{ "CPP_Default_OperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Resume this task\n*\n* @paralm OperationInfo the information to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Resume", nullptr, nullptr, sizeof(TriggerTaskBase_eventResume_Parms), Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Resume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Resume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics
	{
		struct TriggerTaskBase_eventSelectedInEditor_Parms
		{
			UObject* SelectedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSelectedInEditor_Parms, SelectedActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::NewProp_SelectedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "//When the owner of this task is selected in the editor, we should show some debug information for designer\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "When the owner of this task is selected in the editor, we should show some debug information for designer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SelectedInEditor", nullptr, nullptr, sizeof(TriggerTaskBase_eventSelectedInEditor_Parms), Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics
	{
		struct TriggerTaskBase_eventSetFinishConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetFinishConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetFinishConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetFinishConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetFinishConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetFinishConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics
	{
		struct TriggerTaskBase_eventSetInstigator_Parms
		{
			AActor* Instigator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetInstigator_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::NewProp_Instigator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Set the Instigator of this task\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Set the Instigator of this task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetInstigator", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetInstigator_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetInstigator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetInstigator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics
	{
		struct TriggerTaskBase_eventSetPauseConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetPauseConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetPauseConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetPauseConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetPauseConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetPauseConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics
	{
		struct TriggerTaskBase_eventSetRepeatConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetRepeatConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetRepeatConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetRepeatConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetRepeatConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetRepeatConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics
	{
		struct TriggerTaskBase_eventSetResetConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetResetConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetResetConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetResetConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetResetConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetResetConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics
	{
		struct TriggerTaskBase_eventSetResumeConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetResumeConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetResumeConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetResumeConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetResumeConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetResumeConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics
	{
		struct TriggerTaskBase_eventSetSkipConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetSkipConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetSkipConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetSkipConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetSkipConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetSkipConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics
	{
		struct TriggerTaskBase_eventSetSleepConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetSleepConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetSleepConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetSleepConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetSleepConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetSleepConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics
	{
		struct TriggerTaskBase_eventSetStartConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetStartConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetStartConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetStartConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetStartConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetStartConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics
	{
		struct TriggerTaskBase_eventSetStopConditions_Parms
		{
			UTriggerTaskStateSwitchBase* Switch;
			bool CreateNewInstance;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Switch_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Switch;
		static void NewProp_CreateNewInstance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CreateNewInstance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_Switch_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetStopConditions_Parms, Switch), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_Switch_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_Switch_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_CreateNewInstance_SetBit(void* Obj)
	{
		((TriggerTaskBase_eventSetStopConditions_Parms*)Obj)->CreateNewInstance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_CreateNewInstance = { "CreateNewInstance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskBase_eventSetStopConditions_Parms), &Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_CreateNewInstance_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_Switch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::NewProp_CreateNewInstance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "CPP_Default_CreateNewInstance", "false" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetStopConditions", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetStopConditions_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics
	{
		struct TriggerTaskBase_eventSetTemplate_Parms
		{
			UTriggerTaskBase* value;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::NewProp_value_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSetTemplate_Parms, value), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::NewProp_value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SetTemplate", nullptr, nullptr, sizeof(TriggerTaskBase_eventSetTemplate_Parms), Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SetTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SetTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics
	{
		struct TriggerTaskBase_eventSkip_Parms
		{
			UOperationInformationBase* OperationInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::NewProp_OperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::NewProp_OperationInfo = { "OperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventSkip_Parms, OperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::NewProp_OperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::NewProp_OperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::NewProp_OperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* Try to skip running content of this task\n\x09* \n\x09* @param OperationInfo the information to identify this operation\n\x09*/" },
		{ "CPP_Default_OperationInfo", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Try to skip running content of this task\n*\n* @param OperationInfo the information to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Skip", nullptr, nullptr, sizeof(TriggerTaskBase_eventSkip_Parms), Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Skip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Skip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventFinishConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventPauseConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventRepeatConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventResetConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventResumeConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventSkipConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventSleepConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//The hock function in the time manager when we want to run this task but the specific conditions are not meet.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "The hock function in the time manager when we want to run this task but the specific conditions are not meet." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventStartConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "SwitchEventStopConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics
	{
		struct TriggerTaskBase_eventTick_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//All task should not tick itself, it should be controlled by the component,\n//So I don't use the tick function in the UObject to avoid tick automatically\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "All task should not tick itself, it should be controlled by the component,\nSo I don't use the tick function in the UObject to avoid tick automatically" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "Tick", nullptr, nullptr, sizeof(TriggerTaskBase_eventTick_Parms), Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics
	{
		struct TriggerTaskBase_eventTryToGetOwnerActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventTryToGetOwnerActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Try to get the owner actor if this task has\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Try to get the owner actor if this task has" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "TryToGetOwnerActor", nullptr, nullptr, sizeof(TriggerTaskBase_eventTryToGetOwnerActor_Parms), Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics
	{
		struct TriggerTaskBase_eventTryToSleep_Parms
		{
			UOperationInformationBase* Operation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventTryToSleep_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "//Try to make the this task go int sleep status\n" },
		{ "CPP_Default_Operation", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Try to make the this task go int sleep status" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "TryToSleep", nullptr, nullptr, sizeof(TriggerTaskBase_eventTryToSleep_Parms), Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_TryToSleep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_TryToSleep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics
	{
		struct TriggerTaskBase_eventTryToStop_Parms
		{
			UOperationInformationBase* Operation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskBase_eventTryToStop_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|Task" },
		{ "Comment", "/*\n\x09* Stop this task, this is not the same as the Finished() as finished is the state of this task\n\x09* but stop is the command of the task which can be used by other object\n\x09* If other object stop this task, this task should reset all its data, and it will not go into the finish state.\n\x09*\n\x09* @param Cause\x09  Who want to stop this task\n\x09*/" },
		{ "CPP_Default_Operation", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Stop this task, this is not the same as the Finished() as finished is the state of this task\n* but stop is the command of the task which can be used by other object\n* If other object stop this task, this task should reset all its data, and it will not go into the finish state.\n*\n* @param Cause    Who want to stop this task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskBase, nullptr, "TryToStop", nullptr, nullptr, sizeof(TriggerTaskBase_eventTryToStop_Parms), Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskBase_TryToStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskBase_TryToStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister()
	{
		return UTriggerTaskBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StartEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrepareEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PrepareEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ActiveEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SkipEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TickEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TickEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResumeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ResetEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FinishedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PauseEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_StopEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostFinishedEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PostFinishedEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EndEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SleepingEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerOwner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LastState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LastState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChildTask_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParentTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParentTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasBeenRegisted_MetaData[];
#endif
		static void NewProp_HasBeenRegisted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasBeenRegisted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanEverTick_MetaData[];
#endif
		static void NewProp_CanEverTick_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanEverTick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExecuteAutomatically_MetaData[];
#endif
		static void NewProp_ExecuteAutomatically_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ExecuteAutomatically;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldBeSaved_MetaData[];
#endif
		static void NewProp_ShouldBeSaved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldBeSaved;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TransferType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransferType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_TransferType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_RunType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_RunType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InstanceType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InstanceType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleepConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkipConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResumeConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResumeConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RepeatConditions_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RepeatConditions;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDatas_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UserDatas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserDatas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UserDatas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplicateType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReplicateType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TaskHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorOwner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatedCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ActivatedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImmediateActivationInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ImmediateActivationInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PendingToExecuteInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PendingToExecuteInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskBase_Active, "Active" }, // 3904789309
		{ &Z_Construct_UFunction_UTriggerTaskBase_AddChildTask, "AddChildTask" }, // 3099387163
		{ &Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByClass, "AddNewUserDataByClass" }, // 2768370912
		{ &Z_Construct_UFunction_UTriggerTaskBase_AddNewUserDataByInstance, "AddNewUserDataByInstance" }, // 1269156134
		{ &Z_Construct_UFunction_UTriggerTaskBase_CanBeToggled, "CanBeToggled" }, // 1843726833
		{ &Z_Construct_UFunction_UTriggerTaskBase_CanExecuteAutomatically, "CanExecuteAutomatically" }, // 274308957
		{ &Z_Construct_UFunction_UTriggerTaskBase_CanReplicateExecuteCount, "CanReplicateExecuteCount" }, // 2152698
		{ &Z_Construct_UFunction_UTriggerTaskBase_CanTick, "CanTick" }, // 1654209133
		{ &Z_Construct_UFunction_UTriggerTaskBase_CheckRunTimeType, "CheckRunTimeType" }, // 1058679646
		{ &Z_Construct_UFunction_UTriggerTaskBase_ClearChildTask, "ClearChildTask" }, // 1042208379
		{ &Z_Construct_UFunction_UTriggerTaskBase_DebugBreak, "DebugBreak" }, // 490797053
		{ &Z_Construct_UFunction_UTriggerTaskBase_EnterPostFinishedState, "EnterPostFinishedState" }, // 3261055341
		{ &Z_Construct_UFunction_UTriggerTaskBase_FindOrAddNewInstance, "FindOrAddNewInstance" }, // 4198442229
		{ &Z_Construct_UFunction_UTriggerTaskBase_FinializeUserData, "FinializeUserData" }, // 149331737
		{ &Z_Construct_UFunction_UTriggerTaskBase_Finished, "Finished" }, // 2584275523
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetChildTasks, "GetChildTasks" }, // 1418547654
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetConstChildTasks, "GetConstChildTasks" }, // 2711785382
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetConstID, "GetConstID" }, // 1596951944
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetConstTaskHandle, "GetConstTaskHandle" }, // 1311213437
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetConstUserDatas, "GetConstUserDatas" }, // 511740589
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetCopyChildTasks, "GetCopyChildTasks" }, // 363227531
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetCopyID, "GetCopyID" }, // 3887226274
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetCopyTaskHandle, "GetCopyTaskHandle" }, // 1486796118
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetCurrentActiveInfoIndex, "GetCurrentActiveInfoIndex" }, // 3639337047
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetCurrentExecuteCount, "GetCurrentExecuteCount" }, // 959853151
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetCurrentTriggerTaskState, "GetCurrentTriggerTaskState" }, // 1526886658
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetFinishConditions, "GetFinishConditions" }, // 733392899
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetID, "GetID" }, // 3078074283
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetImmediateActivationInformation, "GetImmediateActivationInformation" }, // 2668308714
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetInstigator, "GetInstigator" }, // 1110436145
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetPauseConditions, "GetPauseConditions" }, // 1730618242
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetRepeatConditions, "GetRepeatConditions" }, // 1765240222
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetReplicateType, "GetReplicateType" }, // 3742728889
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetResetConditions, "GetResetConditions" }, // 572469771
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetResumeConditions, "GetResumeConditions" }, // 756223648
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetRunType, "GetRunType" }, // 756247497
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetSkipConditions, "GetSkipConditions" }, // 731125326
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetSleepConditions, "GetSleepConditions" }, // 401999741
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetStartConditions, "GetStartConditions" }, // 4076502339
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetStopConditions, "GetStopConditions" }, // 375576068
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTargetUserData, "GetTargetUserData" }, // 3331883269
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTaskHandle, "GetTaskHandle" }, // 2789362780
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTemplate, "GetTemplate" }, // 2256223449
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTriggerManager, "GetTriggerManager" }, // 1554732589
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTriggerOwner, "GetTriggerOwner" }, // 2934513963
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTriggerState, "GetTriggerState" }, // 2315941875
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetTriggerTaskManager, "GetTriggerTaskManager" }, // 3993215310
		{ &Z_Construct_UFunction_UTriggerTaskBase_GetUserDatas, "GetUserDatas" }, // 1187124579
		{ &Z_Construct_UFunction_UTriggerTaskBase_HasTargetUserDate, "HasTargetUserDate" }, // 83418831
		{ &Z_Construct_UFunction_UTriggerTaskBase_InitializeUserData, "InitializeUserData" }, // 159057185
		{ &Z_Construct_UFunction_UTriggerTaskBase_IsCompletelyFinished, "IsCompletelyFinished" }, // 2633803242
		{ &Z_Construct_UFunction_UTriggerTaskBase_IsDynamicTask, "IsDynamicTask" }, // 4157616246
		{ &Z_Construct_UFunction_UTriggerTaskBase_IsFinished, "IsFinished" }, // 1657277896
		{ &Z_Construct_UFunction_UTriggerTaskBase_IsRunning, "IsRunning" }, // 1560551858
		{ &Z_Construct_UFunction_UTriggerTaskBase_IsTemplateTask, "IsTemplateTask" }, // 3264323176
		{ &Z_Construct_UFunction_UTriggerTaskBase_MarkCurrentActivationInfo, "MarkCurrentActivationInfo" }, // 231761454
		{ &Z_Construct_UFunction_UTriggerTaskBase_Muticast_ReceiveNotifyFromOthersComponent, "Muticast_ReceiveNotifyFromOthersComponent" }, // 3472459969
		{ &Z_Construct_UFunction_UTriggerTaskBase_NotifyOtherComponentSuccessed, "NotifyOtherComponentSuccessed" }, // 2951756945
		{ &Z_Construct_UFunction_UTriggerTaskBase_OnBeginPlay, "OnBeginPlay" }, // 244525618
		{ &Z_Construct_UFunction_UTriggerTaskBase_Pause, "Pause" }, // 2638250299
		{ &Z_Construct_UFunction_UTriggerTaskBase_Prepare, "Prepare" }, // 454848870
		{ &Z_Construct_UFunction_UTriggerTaskBase_ReceiveNotifyFromOthersComponent, "ReceiveNotifyFromOthersComponent" }, // 100469145
		{ &Z_Construct_UFunction_UTriggerTaskBase_RemoveChildTask, "RemoveChildTask" }, // 3172553228
		{ &Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByClass, "RemoveUserDataByClass" }, // 770477512
		{ &Z_Construct_UFunction_UTriggerTaskBase_RemoveUserDataByInstance, "RemoveUserDataByInstance" }, // 2379423520
		{ &Z_Construct_UFunction_UTriggerTaskBase_Rep_ActivatedCount, "Rep_ActivatedCount" }, // 2097646401
		{ &Z_Construct_UFunction_UTriggerTaskBase_Rep_ImmediateActivationInformation, "Rep_ImmediateActivationInformation" }, // 2831021277
		{ &Z_Construct_UFunction_UTriggerTaskBase_Rep_PendingToExecuteInfo, "Rep_PendingToExecuteInfo" }, // 345371465
		{ &Z_Construct_UFunction_UTriggerTaskBase_Rep_State, "Rep_State" }, // 2478185719
		{ &Z_Construct_UFunction_UTriggerTaskBase_Reset, "Reset" }, // 2508334499
		{ &Z_Construct_UFunction_UTriggerTaskBase_ResetUserData, "ResetUserData" }, // 2895289726
		{ &Z_Construct_UFunction_UTriggerTaskBase_Resume, "Resume" }, // 4063050818
		{ &Z_Construct_UFunction_UTriggerTaskBase_SelectedInEditor, "SelectedInEditor" }, // 2978334815
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetFinishConditions, "SetFinishConditions" }, // 4216853894
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetInstigator, "SetInstigator" }, // 4075044806
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetPauseConditions, "SetPauseConditions" }, // 1882367443
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetRepeatConditions, "SetRepeatConditions" }, // 2319286616
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetResetConditions, "SetResetConditions" }, // 2908856739
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetResumeConditions, "SetResumeConditions" }, // 3899409323
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetSkipConditions, "SetSkipConditions" }, // 2161206250
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetSleepConditions, "SetSleepConditions" }, // 4264815010
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetStartConditions, "SetStartConditions" }, // 2164891675
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetStopConditions, "SetStopConditions" }, // 2986177251
		{ &Z_Construct_UFunction_UTriggerTaskBase_SetTemplate, "SetTemplate" }, // 2662621387
		{ &Z_Construct_UFunction_UTriggerTaskBase_Skip, "Skip" }, // 201675817
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventFinishConditions, "SwitchEventFinishConditions" }, // 523699157
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventPauseConditions, "SwitchEventPauseConditions" }, // 700974978
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventRepeatConditions, "SwitchEventRepeatConditions" }, // 24339143
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResetConditions, "SwitchEventResetConditions" }, // 228640503
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventResumeConditions, "SwitchEventResumeConditions" }, // 3600181215
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSkipConditions, "SwitchEventSkipConditions" }, // 2606840598
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventSleepConditions, "SwitchEventSleepConditions" }, // 1796799639
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStartConditions, "SwitchEventStartConditions" }, // 2394497377
		{ &Z_Construct_UFunction_UTriggerTaskBase_SwitchEventStopConditions, "SwitchEventStopConditions" }, // 3399324332
		{ &Z_Construct_UFunction_UTriggerTaskBase_Tick, "Tick" }, // 2655843618
		{ &Z_Construct_UFunction_UTriggerTaskBase_TryToGetOwnerActor, "TryToGetOwnerActor" }, // 1869729246
		{ &Z_Construct_UFunction_UTriggerTaskBase_TryToSleep, "TryToSleep" }, // 1511743523
		{ &Z_Construct_UFunction_UTriggerTaskBase_TryToStop, "TryToStop" }, // 568946452
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|Task" },
		{ "IncludePath", "TriggerTask/TriggerTaskBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartEvent = { "StartEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, StartEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PrepareEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PrepareEvent = { "PrepareEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, PrepareEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PrepareEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PrepareEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActiveEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActiveEvent = { "ActiveEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ActiveEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActiveEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActiveEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipEvent = { "SkipEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, SkipEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TickEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TickEvent = { "TickEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, TickEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TickEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TickEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeEvent = { "ResumeEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ResumeEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetEvent = { "ResetEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ResetEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishedEvent = { "FinishedEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, FinishedEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseEvent = { "PauseEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, PauseEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopEvent = { "StopEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, StopEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PostFinishedEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PostFinishedEvent = { "PostFinishedEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, PostFinishedEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PostFinishedEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PostFinishedEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_EndEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_EndEvent = { "EndEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, EndEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_EndEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_EndEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepingEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepingEvent = { "SleepingEvent", nullptr, (EPropertyFlags)0x0010000010082000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, SleepingEvent), Z_Construct_UDelegateFunction_TriggerRunTime_TriggerTaskState__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepingEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TriggerOwner_MetaData[] = {
		{ "Comment", "//The owner of this trigger, if this task don't need to instance, there value should be null\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "The owner of this trigger, if this task don't need to instance, there value should be null" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TriggerOwner = { "TriggerOwner", nullptr, (EPropertyFlags)0x0010000000082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, TriggerOwner), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TriggerOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TriggerOwner_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State = { "State", "Rep_State", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, State), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState = { "LastState", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, LastState), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_Inner_MetaData[] = {
		{ "Category", "Child Tasks" },
		{ "Comment", "//When this task is finished it will try to run its child task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "When this task is finished it will try to run its child task" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_Inner = { "ChildTask", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_MetaData[] = {
		{ "Category", "Child Tasks" },
		{ "Comment", "//When this task is finished it will try to run its child task\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "When this task is finished it will try to run its child task" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask = { "ChildTask", nullptr, (EPropertyFlags)0x001000800000001d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ChildTask), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ParentTask_MetaData[] = {
		{ "Comment", "/*\n\x09* The parent task which will always run before this task, Each task only have one parent task, but may be have more than one child\n\x09* This is different form the PreRequest as the prerequisite may not a task it maybe some condition\n\x09* When Parent Task is null and all child task have finished we should notify the owner of this task to notify the child component to run its tasks\n\x09* */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The parent task which will always run before this task, Each task only have one parent task, but may be have more than one child\n* This is different form the PreRequest as the prerequisite may not a task it maybe some condition\n* When Parent Task is null and all child task have finished we should notify the owner of this task to notify the child component to run its tasks" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ParentTask = { "ParentTask", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ParentTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ParentTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ParentTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted_SetBit(void* Obj)
	{
		((UTriggerTaskBase*)Obj)->HasBeenRegisted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted = { "HasBeenRegisted", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskBase), &Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Flag to check weather this task can use the tick function\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Flag to check weather this task can use the tick function" },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick_SetBit(void* Obj)
	{
		((UTriggerTaskBase*)Obj)->CanEverTick = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick = { "CanEverTick", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskBase), &Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Flag to check weather this task can be executed automatically without any other conditions\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Flag to check weather this task can be executed automatically without any other conditions" },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically_SetBit(void* Obj)
	{
		((UTriggerTaskBase*)Obj)->ExecuteAutomatically = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically = { "ExecuteAutomatically", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskBase), &Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Flag to check weather the states of this task should be saved to another files, so that it can be resumed when next execute\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Flag to check weather the states of this task should be saved to another files, so that it can be resumed when next execute" },
	};
#endif
	void Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved_SetBit(void* Obj)
	{
		((UTriggerTaskBase*)Obj)->ShouldBeSaved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved = { "ShouldBeSaved", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTriggerTaskBase), &Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The transfer style of this task when some information need transfer to other triggers\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "The transfer style of this task when some information need transfer to other triggers" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType = { "TransferType", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, TransferType), Z_Construct_UEnum_TriggerRunTime_ETaskTransferType, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Determine where this task will run\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Determine where this task will run" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType = { "RunType", nullptr, (EPropertyFlags)0x0010040000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, RunType), Z_Construct_UEnum_TriggerRunTime_ERunType, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Determine how to run this task when this task is prepare to run\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Determine how to run this task when this task is prepare to run" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType = { "InstanceType", nullptr, (EPropertyFlags)0x0010040000010015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, InstanceType), Z_Construct_UEnum_TriggerRunTime_ETaskInstanceType, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check how to active this task\n\x09* \n\x09* if one of the conditions is valid then go to START state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check how to active this task\n*\n* if one of the conditions is valid then go to START state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartConditions = { "StartConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, StartConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check how to active this task\n\x09* \n\x09* if one of the conditions is valid then go to FINISH state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check how to active this task\n*\n* if one of the conditions is valid then go to FINISH state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishConditions = { "FinishConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, FinishConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to stop this task\n\x09* \n\x09* if one of the conditions is valid then go to STOP state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to stop this task\n*\n* if one of the conditions is valid then go to STOP state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopConditions = { "StopConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, StopConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to make this task sleep\n\x09*\n\x09* if one of the conditions is valid then go to SLEEP state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to make this task sleep\n*\n* if one of the conditions is valid then go to SLEEP state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepConditions = { "SleepConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, SleepConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to RESET this task\n\x09*\n\x09* if one of the conditions is valid then go to RESET state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to RESET this task\n*\n* if one of the conditions is valid then go to RESET state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetConditions = { "ResetConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ResetConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to SKIP this task\n\x09*\n\x09* if one of the conditions is valid then go to SKIP state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to SKIP this task\n*\n* if one of the conditions is valid then go to SKIP state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipConditions = { "SkipConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, SkipConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to PAUSE this task\n\x09*\n\x09* if one of the conditions is valid then go to PAUSE state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to PAUSE this task\n*\n* if one of the conditions is valid then go to PAUSE state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseConditions = { "PauseConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, PauseConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to RESUME this task\n\x09*\n\x09* if one of the conditions is valid then go to RESUME state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to RESUME this task\n*\n* if one of the conditions is valid then go to RESUME state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeConditions = { "ResumeConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ResumeConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RepeatConditions_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "RuntimeCondition" },
		{ "Comment", "/*\n\x09* The condition to check when to REPEAT this task\n\x09*\n\x09* if one of the conditions is valid then go to REPEAT state directly\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The condition to check when to REPEAT this task\n*\n* if one of the conditions is valid then go to REPEAT state directly" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RepeatConditions = { "RepeatConditions", nullptr, (EPropertyFlags)0x004000000008080d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, RepeatConditions), Z_Construct_UClass_UTriggerTaskStateSwitchBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RepeatConditions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RepeatConditions_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserDatas" },
		{ "Comment", "/*\n\x09* All the data which are used to support the external requirements.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* All the data which are used to support the external requirements." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_Inner = { "UserDatas", nullptr, (EPropertyFlags)0x0002000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskExternalDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UserDatas" },
		{ "Comment", "/*\n\x09* All the data which are used to support the external requirements.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* All the data which are used to support the external requirements." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas = { "UserDatas", nullptr, (EPropertyFlags)0x004004800000003d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, UserDatas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ReplicateType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The type for other object which want to replicate this task as its subObject\n\x09* This member should be used by its outer which regard it as its subobject and want to replicate subobjects\n\x09* If this value is not set already then the default replicate style is UReplicate_Yes.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The type for other object which want to replicate this task as its subObject\n* This member should be used by its outer which regard it as its subobject and want to replicate subobjects\n* If this value is not set already then the default replicate style is UReplicate_Yes." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ReplicateType = { "ReplicateType", nullptr, (EPropertyFlags)0x004204000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ReplicateType), Z_Construct_UClass_UReplicateTypeBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ReplicateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ReplicateType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The static identification for trigger task, each trigger task have different ID, This ID can be used off line.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The static identification for trigger task, each trigger task have different ID, This ID can be used off line." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0040000001000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TaskHandle_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* The handle for this task, it should be initialized when this task is crated for the first time.\n\x09* this is the runtime identification for this task, so different environment may crate different task handle.\n\x09* The handle will contain base intrinsic attribute for the task\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The handle for this task, it should be initialized when this task is crated for the first time.\n* this is the runtime identification for this task, so different environment may crate different task handle.\n* The handle will contain base intrinsic attribute for the task" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TaskHandle = { "TaskHandle", nullptr, (EPropertyFlags)0x0040000000002034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, TaskHandle), Z_Construct_UScriptStruct_FTriggerTaskHandle, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TaskHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TaskHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstigatorOwner_MetaData[] = {
		{ "Comment", "/*\n\x09* Who created this task or this task belong to who.\n\x09* This value can be nullptr as this task is deployed by the world or system\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* Who created this task or this task belong to who.\n* This value can be nullptr as this task is deployed by the world or system" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstigatorOwner = { "InstigatorOwner", nullptr, (EPropertyFlags)0x0040000001000020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, InstigatorOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstigatorOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstigatorOwner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActivatedCount_MetaData[] = {
		{ "Comment", "/*BlueprintReadOnly, Transient, Category = \"TriggerRuntime\"*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "BlueprintReadOnly, Transient, Category = \"TriggerRuntime\"" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActivatedCount = { "ActivatedCount", "Rep_ActivatedCount", (EPropertyFlags)0x0040000101002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ActivatedCount), METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActivatedCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActivatedCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ImmediateActivationInformation_MetaData[] = {
		{ "Comment", "/*\n\x09* The activation information for this task, this container will hold who and where and how to active this task\n\x09* I don't put this in to the trigger task component as the component only store the shared data between different tasks, but each task should its only activation information\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "* The activation information for this task, this container will hold who and where and how to active this task\n* I don't put this in to the trigger task component as the component only store the shared data between different tasks, but each task should its only activation information" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ImmediateActivationInformation = { "ImmediateActivationInformation", "Rep_ImmediateActivationInformation", (EPropertyFlags)0x0040008100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, ImmediateActivationInformation), Z_Construct_UScriptStruct_FTaskActivationInfoContainer, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ImmediateActivationInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ImmediateActivationInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PendingToExecuteInfo_MetaData[] = {
		{ "Comment", "//Flag to check weather this task is pending to execute in client\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskBase.h" },
		{ "ToolTip", "Flag to check weather this task is pending to execute in client" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PendingToExecuteInfo = { "PendingToExecuteInfo", "Rep_PendingToExecuteInfo", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTriggerTaskBase, PendingToExecuteInfo), Z_Construct_UScriptStruct_FPendingToExecuteInfo, METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PendingToExecuteInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PendingToExecuteInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTriggerTaskBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PrepareEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActiveEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TickEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PostFinishedEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_EndEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepingEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TriggerOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_LastState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ChildTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ParentTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_HasBeenRegisted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_CanEverTick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ExecuteAutomatically,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ShouldBeSaved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TransferType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RunType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstanceType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StartConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_FinishConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_StopConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SleepConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResetConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_SkipConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PauseConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ResumeConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_RepeatConditions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_UserDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ReplicateType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_TaskHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_InstigatorOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ActivatedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_ImmediateActivationInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTriggerTaskBase_Statics::NewProp_PendingToExecuteInfo,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UTriggerTaskBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTriggerTaskInterface_NoRegister, (int32)VTABLE_OFFSET(UTriggerTaskBase, ITriggerTaskInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskBase_Statics::ClassParams = {
		&UTriggerTaskBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTriggerTaskBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x04B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskBase, 619386653);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskBase>()
	{
		return UTriggerTaskBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskBase(Z_Construct_UClass_UTriggerTaskBase, &UTriggerTaskBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskBase"), false, nullptr, nullptr, nullptr);

	void UTriggerTaskBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_TriggerOwner(TEXT("TriggerOwner"));
		static const FName Name_State(TEXT("State"));
		static const FName Name_LastState(TEXT("LastState"));
		static const FName Name_UserDatas(TEXT("UserDatas"));
		static const FName Name_ID(TEXT("ID"));
		static const FName Name_TaskHandle(TEXT("TaskHandle"));
		static const FName Name_InstigatorOwner(TEXT("InstigatorOwner"));
		static const FName Name_ActivatedCount(TEXT("ActivatedCount"));
		static const FName Name_ImmediateActivationInformation(TEXT("ImmediateActivationInformation"));
		static const FName Name_PendingToExecuteInfo(TEXT("PendingToExecuteInfo"));

		const bool bIsValid = true
			&& Name_TriggerOwner == ClassReps[(int32)ENetFields_Private::TriggerOwner].Property->GetFName()
			&& Name_State == ClassReps[(int32)ENetFields_Private::State].Property->GetFName()
			&& Name_LastState == ClassReps[(int32)ENetFields_Private::LastState].Property->GetFName()
			&& Name_UserDatas == ClassReps[(int32)ENetFields_Private::UserDatas].Property->GetFName()
			&& Name_ID == ClassReps[(int32)ENetFields_Private::ID].Property->GetFName()
			&& Name_TaskHandle == ClassReps[(int32)ENetFields_Private::TaskHandle].Property->GetFName()
			&& Name_InstigatorOwner == ClassReps[(int32)ENetFields_Private::InstigatorOwner].Property->GetFName()
			&& Name_ActivatedCount == ClassReps[(int32)ENetFields_Private::ActivatedCount].Property->GetFName()
			&& Name_ImmediateActivationInformation == ClassReps[(int32)ENetFields_Private::ImmediateActivationInformation].Property->GetFName()
			&& Name_PendingToExecuteInfo == ClassReps[(int32)ENetFields_Private::PendingToExecuteInfo].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTriggerTaskBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskBase);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTriggerTaskBase)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
