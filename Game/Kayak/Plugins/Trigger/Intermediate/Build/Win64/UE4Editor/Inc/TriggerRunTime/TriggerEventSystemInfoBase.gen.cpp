// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerEventSystemInfoBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerEventSystemInfoBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FOperationInfoContainer();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
// End Cross Module References
	DEFINE_FUNCTION(ATriggerEventSystemInfoBase::execOnRep_TriggerTags)
	{
		P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TriggerTags(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerEventSystemInfoBase::execOnRep_OperationContainer)
	{
		P_GET_STRUCT_REF(FOperationInfoContainer,Z_Param_Out_OldValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_OperationContainer(Z_Param_Out_OldValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerEventSystemInfoBase::execGetTriggerTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetTriggerTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATriggerEventSystemInfoBase::execGetOperationContainer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FOperationInfoContainer*)Z_Param__Result=P_THIS->GetOperationContainer();
		P_NATIVE_END;
	}
	void ATriggerEventSystemInfoBase::StaticRegisterNativesATriggerEventSystemInfoBase()
	{
		UClass* Class = ATriggerEventSystemInfoBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOperationContainer", &ATriggerEventSystemInfoBase::execGetOperationContainer },
			{ "GetTriggerTags", &ATriggerEventSystemInfoBase::execGetTriggerTags },
			{ "OnRep_OperationContainer", &ATriggerEventSystemInfoBase::execOnRep_OperationContainer },
			{ "OnRep_TriggerTags", &ATriggerEventSystemInfoBase::execOnRep_TriggerTags },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics
	{
		struct TriggerEventSystemInfoBase_eventGetOperationContainer_Parms
		{
			FOperationInfoContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventSystemInfoBase_eventGetOperationContainer_Parms, ReturnValue), Z_Construct_UScriptStruct_FOperationInfoContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SystemInfo" },
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerEventSystemInfoBase, nullptr, "GetOperationContainer", nullptr, nullptr, sizeof(TriggerEventSystemInfoBase_eventGetOperationContainer_Parms), Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics
	{
		struct TriggerEventSystemInfoBase_eventGetTriggerTags_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventSystemInfoBase_eventGetTriggerTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|SystemInfo" },
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerEventSystemInfoBase, nullptr, "GetTriggerTags", nullptr, nullptr, sizeof(TriggerEventSystemInfoBase_eventGetTriggerTags_Parms), Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics
	{
		struct TriggerEventSystemInfoBase_eventOnRep_OperationContainer_Parms
		{
			FOperationInfoContainer OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventSystemInfoBase_eventOnRep_OperationContainer_Parms, OldValue), Z_Construct_UScriptStruct_FOperationInfoContainer, METADATA_PARAMS(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerEventSystemInfoBase, nullptr, "OnRep_OperationContainer", nullptr, nullptr, sizeof(TriggerEventSystemInfoBase_eventOnRep_OperationContainer_Parms), Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics
	{
		struct TriggerEventSystemInfoBase_eventOnRep_TriggerTags_Parms
		{
			FGameplayTagContainer OldValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OldValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OldValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::NewProp_OldValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::NewProp_OldValue = { "OldValue", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerEventSystemInfoBase_eventOnRep_TriggerTags_Parms, OldValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::NewProp_OldValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::NewProp_OldValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::NewProp_OldValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATriggerEventSystemInfoBase, nullptr, "OnRep_TriggerTags", nullptr, nullptr, sizeof(TriggerEventSystemInfoBase_eventOnRep_TriggerTags_Parms), Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase_NoRegister()
	{
		return ATriggerEventSystemInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OperationContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OperationContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TriggerTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetOperationContainer, "GetOperationContainer" }, // 310967829
		{ &Z_Construct_UFunction_ATriggerEventSystemInfoBase_GetTriggerTags, "GetTriggerTags" }, // 121079092
		{ &Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_OperationContainer, "OnRep_OperationContainer" }, // 3124349466
		{ &Z_Construct_UFunction_ATriggerEventSystemInfoBase_OnRep_TriggerTags, "OnRep_TriggerTags" }, // 3975576199
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* One game instance should only exist one TriggerEventSystemInfo at one time\n*/" },
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TriggerEventSystemInfoBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "* One game instance should only exist one TriggerEventSystemInfo at one time" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_OperationContainer_MetaData[] = {
		{ "Comment", "/*\n\x09* The operation informations which will be replicated\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
		{ "ToolTip", "* The operation informations which will be replicated" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_OperationContainer = { "OperationContainer", "OnRep_OperationContainer", (EPropertyFlags)0x0040008100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerEventSystemInfoBase, OperationContainer), Z_Construct_UScriptStruct_FOperationInfoContainer, METADATA_PARAMS(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_OperationContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_OperationContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_TriggerTags_MetaData[] = {
		{ "Comment", "/*\n\x09* The tags that is created by the trigger task when they run at specific state\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerEventSystemInfoBase.h" },
		{ "ToolTip", "* The tags that is created by the trigger task when they run at specific state" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_TriggerTags = { "TriggerTags", "OnRep_TriggerTags", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATriggerEventSystemInfoBase, TriggerTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_TriggerTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_TriggerTags_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_OperationContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::NewProp_TriggerTags,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerEventSystemInfoBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::ClassParams = {
		&ATriggerEventSystemInfoBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::PropPointers),
		0,
		0x049000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerEventSystemInfoBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATriggerEventSystemInfoBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATriggerEventSystemInfoBase, 19282077);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<ATriggerEventSystemInfoBase>()
	{
		return ATriggerEventSystemInfoBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATriggerEventSystemInfoBase(Z_Construct_UClass_ATriggerEventSystemInfoBase, &ATriggerEventSystemInfoBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("ATriggerEventSystemInfoBase"), false, nullptr, nullptr, nullptr);

	void ATriggerEventSystemInfoBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_OperationContainer(TEXT("OperationContainer"));
		static const FName Name_TriggerTags(TEXT("TriggerTags"));

		const bool bIsValid = true
			&& Name_OperationContainer == ClassReps[(int32)ENetFields_Private::OperationContainer].Property->GetFName()
			&& Name_TriggerTags == ClassReps[(int32)ENetFields_Private::TriggerTags].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ATriggerEventSystemInfoBase"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerEventSystemInfoBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
