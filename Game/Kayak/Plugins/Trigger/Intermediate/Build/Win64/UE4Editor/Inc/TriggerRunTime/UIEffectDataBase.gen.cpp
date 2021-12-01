// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIEffectDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UUIEffectDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UUIEffectDataBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEffectDataBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UUIEffectDataBase::execRemoveUserWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUserWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIEffectDataBase::execGetUserWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->GetUserWidget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIEffectDataBase::execCreateNewWidget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUserWidget**)Z_Param__Result=P_THIS->CreateNewWidget();
		P_NATIVE_END;
	}
	void UUIEffectDataBase::StaticRegisterNativesUUIEffectDataBase()
	{
		UClass* Class = UUIEffectDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewWidget", &UUIEffectDataBase::execCreateNewWidget },
			{ "GetUserWidget", &UUIEffectDataBase::execGetUserWidget },
			{ "RemoveUserWidget", &UUIEffectDataBase::execRemoveUserWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics
	{
		struct UIEffectDataBase_eventCreateNewWidget_Parms
		{
			UUserWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIEffectDataBase_eventCreateNewWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UIData" },
		{ "Comment", "/*\n\x09* According each strategy this function will get one valid user widget\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
		{ "ToolTip", "* According each strategy this function will get one valid user widget" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIEffectDataBase, nullptr, "CreateNewWidget", nullptr, nullptr, sizeof(UIEffectDataBase_eventCreateNewWidget_Parms), Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics
	{
		struct UIEffectDataBase_eventGetUserWidget_Parms
		{
			UUserWidget* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIEffectDataBase_eventGetUserWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UIData" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIEffectDataBase, nullptr, "GetUserWidget", nullptr, nullptr, sizeof(UIEffectDataBase_eventGetUserWidget_Parms), Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|UIData" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIEffectDataBase, nullptr, "RemoveUserWidget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUIEffectDataBase_NoRegister()
	{
		return UUIEffectDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UUIEffectDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UIClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsExclusive_MetaData[];
#endif
		static void NewProp_IsExclusive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsExclusive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIEffectDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerEffectDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIEffectDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIEffectDataBase_CreateNewWidget, "CreateNewWidget" }, // 1189168522
		{ &Z_Construct_UFunction_UUIEffectDataBase_GetUserWidget, "GetUserWidget" }, // 2585142135
		{ &Z_Construct_UFunction_UUIEffectDataBase_RemoveUserWidget, "RemoveUserWidget" }, // 2585760010
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIEffectDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|UIData" },
		{ "Comment", "/*\n* The base struct to hold the data which can be used by the effect task.\n* \n* \n*/" },
		{ "IncludePath", "TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
		{ "ToolTip", "* The base struct to hold the data which can be used by the effect task." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_UIClass_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "//The target widget which this task will transfer to\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
		{ "ToolTip", "The target widget which this task will transfer to" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_UIClass = { "UIClass", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUIEffectDataBase, UIClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_UIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_UIClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive_MetaData[] = {
		{ "Category", "UI" },
		{ "Comment", "//Flag to check weather the target widget should only exist one instance through game\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/UI/UIData/UIEffectDataBase.h" },
		{ "ToolTip", "Flag to check weather the target widget should only exist one instance through game" },
	};
#endif
	void Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive_SetBit(void* Obj)
	{
		((UUIEffectDataBase*)Obj)->IsExclusive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive = { "IsExclusive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUIEffectDataBase), &Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIEffectDataBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_UIClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIEffectDataBase_Statics::NewProp_IsExclusive,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIEffectDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIEffectDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUIEffectDataBase_Statics::ClassParams = {
		&UUIEffectDataBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIEffectDataBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIEffectDataBase_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIEffectDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIEffectDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIEffectDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUIEffectDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUIEffectDataBase, 3390601039);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UUIEffectDataBase>()
	{
		return UUIEffectDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUIEffectDataBase(Z_Construct_UClass_UUIEffectDataBase, &UUIEffectDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UUIEffectDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIEffectDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
