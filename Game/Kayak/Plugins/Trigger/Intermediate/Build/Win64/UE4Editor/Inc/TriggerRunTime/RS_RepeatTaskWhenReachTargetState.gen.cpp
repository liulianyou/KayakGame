// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRS_RepeatTaskWhenReachTargetState() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerResetStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
	void URS_RepeatTaskWhenReachTargetStateImmediately::StaticRegisterNativesURS_RepeatTaskWhenReachTargetStateImmediately()
	{
	}
	UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_NoRegister()
	{
		return URS_RepeatTaskWhenReachTargetStateImmediately::StaticClass();
	}
	struct Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ResetType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ResetType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizeResetStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizeResetStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "RepeatImmediatly" },
		{ "IncludePath", "Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "/*\n\x09* The reset type to reset the target task before repeat target task\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
		{ "ToolTip", "* The reset type to reset the target task before repeat target task" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType = { "ResetType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URS_RepeatTaskWhenReachTargetStateImmediately, ResetType), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType, METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_CustomizeResetStyle_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "/*\n\x09* This only work when the ResetType is ETriggerTaskResetType::ETriggerTaskResetType_Customize.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
		{ "ToolTip", "* This only work when the ResetType is ETriggerTaskResetType::ETriggerTaskResetType_Customize." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_CustomizeResetStyle = { "CustomizeResetStyle", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URS_RepeatTaskWhenReachTargetStateImmediately, CustomizeResetStyle), Z_Construct_UClass_UTriggerResetStyleBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_CustomizeResetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_CustomizeResetStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_ResetType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::NewProp_CustomizeResetStyle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URS_RepeatTaskWhenReachTargetStateImmediately>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::ClassParams = {
		&URS_RepeatTaskWhenReachTargetStateImmediately::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URS_RepeatTaskWhenReachTargetStateImmediately, 1073539844);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URS_RepeatTaskWhenReachTargetStateImmediately>()
	{
		return URS_RepeatTaskWhenReachTargetStateImmediately::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URS_RepeatTaskWhenReachTargetStateImmediately(Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateImmediately, &URS_RepeatTaskWhenReachTargetStateImmediately::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URS_RepeatTaskWhenReachTargetStateImmediately"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URS_RepeatTaskWhenReachTargetStateImmediately);
	DEFINE_FUNCTION(URS_RepeatTaskUntilCompleteFinished::execTaskPostFinishedCallback)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TaskPostFinishedCallback(Z_Param_Task);
		P_NATIVE_END;
	}
	void URS_RepeatTaskUntilCompleteFinished::StaticRegisterNativesURS_RepeatTaskUntilCompleteFinished()
	{
		UClass* Class = URS_RepeatTaskUntilCompleteFinished::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TaskPostFinishedCallback", &URS_RepeatTaskUntilCompleteFinished::execTaskPostFinishedCallback },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics
	{
		struct RS_RepeatTaskUntilCompleteFinished_eventTaskPostFinishedCallback_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RS_RepeatTaskUntilCompleteFinished_eventTaskPostFinishedCallback_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished, nullptr, "TaskPostFinishedCallback", nullptr, nullptr, sizeof(RS_RepeatTaskUntilCompleteFinished_eventTaskPostFinishedCallback_Parms), Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_NoRegister()
	{
		return URS_RepeatTaskUntilCompleteFinished::StaticClass();
	}
	struct Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanStacked_MetaData[];
#endif
		static void NewProp_CanStacked_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanStacked;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URS_RepeatTaskWhenReachTargetStateBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URS_RepeatTaskUntilCompleteFinished_TaskPostFinishedCallback, "TaskPostFinishedCallback" }, // 864225151
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "RepeatWhenTaskFinished" },
		{ "IncludePath", "Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked_MetaData[] = {
		{ "Category", "TriggerTaskRepeatCondition" },
		{ "Comment", "/*\n\x09* Flag to check weather the repeat command will be stacked.\n\x09* If the one task do not finish and another repeat command is send then this command will be stacked if this value is true,\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/TriggerTaskStyle/RepeatStyle/RS_RepeatTaskWhenReachTargetState.h" },
		{ "ToolTip", "* Flag to check weather the repeat command will be stacked.\n* If the one task do not finish and another repeat command is send then this command will be stacked if this value is true," },
	};
#endif
	void Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked_SetBit(void* Obj)
	{
		((URS_RepeatTaskUntilCompleteFinished*)Obj)->CanStacked = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked = { "CanStacked", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URS_RepeatTaskUntilCompleteFinished), &Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked_SetBit, METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::NewProp_CanStacked,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URS_RepeatTaskUntilCompleteFinished>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::ClassParams = {
		&URS_RepeatTaskUntilCompleteFinished::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URS_RepeatTaskUntilCompleteFinished, 2404070342);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URS_RepeatTaskUntilCompleteFinished>()
	{
		return URS_RepeatTaskUntilCompleteFinished::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URS_RepeatTaskUntilCompleteFinished(Z_Construct_UClass_URS_RepeatTaskUntilCompleteFinished, &URS_RepeatTaskUntilCompleteFinished::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URS_RepeatTaskUntilCompleteFinished"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URS_RepeatTaskUntilCompleteFinished);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
