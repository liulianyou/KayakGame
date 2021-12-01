// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/ReplicateType/ReplicateTypeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicateTypeBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UReplicateTypeBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UReplicateTypeBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UReplicateTypeBase::execGetObjectOwner)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetObjectOwner();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UReplicateTypeBase::execCanReplicate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanReplicate_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UReplicateTypeBase_BP_InitilalizeByTriggerTask = FName(TEXT("BP_InitilalizeByTriggerTask"));
	void UReplicateTypeBase::BP_InitilalizeByTriggerTask(UObject* Task)
	{
		ReplicateTypeBase_eventBP_InitilalizeByTriggerTask_Parms Parms;
		Parms.Task=Task;
		ProcessEvent(FindFunctionChecked(NAME_UReplicateTypeBase_BP_InitilalizeByTriggerTask),&Parms);
	}
	static FName NAME_UReplicateTypeBase_CanReplicate = FName(TEXT("CanReplicate"));
	bool UReplicateTypeBase::CanReplicate()
	{
		ReplicateTypeBase_eventCanReplicate_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UReplicateTypeBase_CanReplicate),&Parms);
		return !!Parms.ReturnValue;
	}
	void UReplicateTypeBase::StaticRegisterNativesUReplicateTypeBase()
	{
		UClass* Class = UReplicateTypeBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanReplicate", &UReplicateTypeBase::execCanReplicate },
			{ "GetObjectOwner", &UReplicateTypeBase::execGetObjectOwner },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicateTypeBase_eventBP_InitilalizeByTriggerTask_Parms, Task), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRunttime" },
		{ "ModuleRelativePath", "Public/Tool/ReplicateType/ReplicateTypeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicateTypeBase, nullptr, "BP_InitilalizeByTriggerTask", nullptr, nullptr, sizeof(ReplicateTypeBase_eventBP_InitilalizeByTriggerTask_Parms), Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ReplicateTypeBase_eventCanReplicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ReplicateTypeBase_eventCanReplicate_Parms), &Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/ReplicateType/ReplicateTypeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicateTypeBase, nullptr, "CanReplicate", nullptr, nullptr, sizeof(ReplicateTypeBase_eventCanReplicate_Parms), Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicateTypeBase_CanReplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicateTypeBase_CanReplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics
	{
		struct ReplicateTypeBase_eventGetObjectOwner_Parms
		{
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ReplicateTypeBase_eventGetObjectOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/ReplicateType/ReplicateTypeBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UReplicateTypeBase, nullptr, "GetObjectOwner", nullptr, nullptr, sizeof(ReplicateTypeBase_eventGetObjectOwner_Parms), Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UReplicateTypeBase_NoRegister()
	{
		return UReplicateTypeBase::StaticClass();
	}
	struct Z_Construct_UClass_UReplicateTypeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UReplicateTypeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UReplicateTypeBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UReplicateTypeBase_BP_InitilalizeByTriggerTask, "BP_InitilalizeByTriggerTask" }, // 2653128451
		{ &Z_Construct_UFunction_UReplicateTypeBase_CanReplicate, "CanReplicate" }, // 214757719
		{ &Z_Construct_UFunction_UReplicateTypeBase_GetObjectOwner, "GetObjectOwner" }, // 2731559769
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UReplicateTypeBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRunttime" },
		{ "IncludePath", "Tool/ReplicateType/ReplicateTypeBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/ReplicateType/ReplicateTypeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UReplicateTypeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UReplicateTypeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UReplicateTypeBase_Statics::ClassParams = {
		&UReplicateTypeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x003010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UReplicateTypeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UReplicateTypeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UReplicateTypeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UReplicateTypeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UReplicateTypeBase, 3900976272);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UReplicateTypeBase>()
	{
		return UReplicateTypeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UReplicateTypeBase(Z_Construct_UClass_UReplicateTypeBase, &UReplicateTypeBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UReplicateTypeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UReplicateTypeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
