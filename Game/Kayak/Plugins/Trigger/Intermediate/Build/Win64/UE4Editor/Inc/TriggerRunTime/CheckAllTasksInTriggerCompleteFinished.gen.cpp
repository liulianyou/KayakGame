// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEvaluator/CheckAllTasksInTriggerCompleteFinished.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCheckAllTasksInTriggerCompleteFinished() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ANewTriggerBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UCheckAllTasksInTriggerCompleteFinished::execOnTaskStateChanged)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_Task);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTaskStateChanged(Z_Param_Task);
		P_NATIVE_END;
	}
	void UCheckAllTasksInTriggerCompleteFinished::StaticRegisterNativesUCheckAllTasksInTriggerCompleteFinished()
	{
		UClass* Class = UCheckAllTasksInTriggerCompleteFinished::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTaskStateChanged", &UCheckAllTasksInTriggerCompleteFinished::execOnTaskStateChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics
	{
		struct CheckAllTasksInTriggerCompleteFinished_eventOnTaskStateChanged_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CheckAllTasksInTriggerCompleteFinished_eventOnTaskStateChanged_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::NewProp_Task_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::NewProp_Task,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckAllTasksInTriggerCompleteFinished.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished, nullptr, "OnTaskStateChanged", nullptr, nullptr, sizeof(CheckAllTasksInTriggerCompleteFinished_eventOnTaskStateChanged_Parms), Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_NoRegister()
	{
		return UCheckAllTasksInTriggerCompleteFinished::StaticClass();
	}
	struct Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Triggers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triggers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triggers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCheckAllTasksInTriggerCompleteFinished_OnTaskStateChanged, "OnTaskStateChanged" }, // 1454926050
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Check weather all task in the target trigger have completely finished.\n*/" },
		{ "IncludePath", "TriggerEvaluator/CheckAllTasksInTriggerCompleteFinished.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckAllTasksInTriggerCompleteFinished.h" },
		{ "ToolTip", "* Check weather all task in the target trigger have completely finished." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers_Inner = { "Triggers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANewTriggerBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers_MetaData[] = {
		{ "Category", "CheckAllTasksInTriggerCompleteFinished" },
		{ "ModuleRelativePath", "Public/TriggerEvaluator/CheckAllTasksInTriggerCompleteFinished.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers = { "Triggers", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCheckAllTasksInTriggerCompleteFinished, Triggers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::NewProp_Triggers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCheckAllTasksInTriggerCompleteFinished>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::ClassParams = {
		&UCheckAllTasksInTriggerCompleteFinished::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCheckAllTasksInTriggerCompleteFinished, 2733285266);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UCheckAllTasksInTriggerCompleteFinished>()
	{
		return UCheckAllTasksInTriggerCompleteFinished::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCheckAllTasksInTriggerCompleteFinished(Z_Construct_UClass_UCheckAllTasksInTriggerCompleteFinished, &UCheckAllTasksInTriggerCompleteFinished::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UCheckAllTasksInTriggerCompleteFinished"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCheckAllTasksInTriggerCompleteFinished);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
