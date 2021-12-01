// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_StartTaskByTaskComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskStart_StartTaskByTaskComponent() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskStartInformationBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerTaskStart_StartTaskByTaskComponent::execGetTaskComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTriggerTaskComponentBase**)Z_Param__Result=P_THIS->GetTaskComponent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerTaskStart_StartTaskByTaskComponent::execSetTaskComponent)
	{
		P_GET_OBJECT(UTriggerTaskComponentBase,Z_Param_TC);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTaskComponent(Z_Param_TC);
		P_NATIVE_END;
	}
	void UTriggerTaskStart_StartTaskByTaskComponent::StaticRegisterNativesUTriggerTaskStart_StartTaskByTaskComponent()
	{
		UClass* Class = UTriggerTaskStart_StartTaskByTaskComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTaskComponent", &UTriggerTaskStart_StartTaskByTaskComponent::execGetTaskComponent },
			{ "SetTaskComponent", &UTriggerTaskStart_StartTaskByTaskComponent::execSetTaskComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics
	{
		struct TriggerTaskStart_StartTaskByTaskComponent_eventGetTaskComponent_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_StartTaskByTaskComponent_eventGetTaskComponent_Parms, ReturnValue), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_StartTaskByTaskComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent, nullptr, "GetTaskComponent", nullptr, nullptr, sizeof(TriggerTaskStart_StartTaskByTaskComponent_eventGetTaskComponent_Parms), Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics
	{
		struct TriggerTaskStart_StartTaskByTaskComponent_eventSetTaskComponent_Parms
		{
			UTriggerTaskComponentBase* TC;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TC_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::NewProp_TC_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::NewProp_TC = { "TC", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskStart_StartTaskByTaskComponent_eventSetTaskComponent_Parms, TC), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::NewProp_TC_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::NewProp_TC_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::NewProp_TC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Override UTriggerTaskStartInformationBase\n" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_StartTaskByTaskComponent.h" },
		{ "ToolTip", "Override UTriggerTaskStartInformationBase" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent, nullptr, "SetTaskComponent", nullptr, nullptr, sizeof(TriggerTaskStart_StartTaskByTaskComponent_eventSetTaskComponent_Parms), Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_NoRegister()
	{
		return UTriggerTaskStart_StartTaskByTaskComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerTaskStartInformationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_GetTaskComponent, "GetTaskComponent" }, // 660525140
		{ &Z_Construct_UFunction_UTriggerTaskStart_StartTaskByTaskComponent_SetTaskComponent, "SetTaskComponent" }, // 2599030582
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_StartTaskByTaskComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/OperationInformation/TriggerTaskStartInformation/TriggerTaskStart_StartTaskByTaskComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerTaskStart_StartTaskByTaskComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::ClassParams = {
		&UTriggerTaskStart_StartTaskByTaskComponent::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskStart_StartTaskByTaskComponent, 929963928);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskStart_StartTaskByTaskComponent>()
	{
		return UTriggerTaskStart_StartTaskByTaskComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskStart_StartTaskByTaskComponent(Z_Construct_UClass_UTriggerTaskStart_StartTaskByTaskComponent, &UTriggerTaskStart_StartTaskByTaskComponent::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskStart_StartTaskByTaskComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskStart_StartTaskByTaskComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
