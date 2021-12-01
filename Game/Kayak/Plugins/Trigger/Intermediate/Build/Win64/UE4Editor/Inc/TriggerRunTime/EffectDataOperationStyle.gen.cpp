// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEffectDataOperationStyle() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerEffectDataOperationStyleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataStyleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataOpenStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataOpenStyleBase();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataCloseStyleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UEffectDataCloseStyleBase();
// End Cross Module References
	void UTriggerEffectDataOperationStyleBase::StaticRegisterNativesUTriggerEffectDataOperationStyleBase()
	{
	}
	UClass* Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_NoRegister()
	{
		return UTriggerEffectDataOperationStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EffectData" },
		{ "IncludePath", "TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerEffectDataOperationStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::ClassParams = {
		&UTriggerEffectDataOperationStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerEffectDataOperationStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerEffectDataOperationStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerEffectDataOperationStyleBase, 450256903);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerEffectDataOperationStyleBase>()
	{
		return UTriggerEffectDataOperationStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerEffectDataOperationStyleBase(Z_Construct_UClass_UTriggerEffectDataOperationStyleBase, &UTriggerEffectDataOperationStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerEffectDataOperationStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerEffectDataOperationStyleBase);
	DEFINE_FUNCTION(UEffectDataStyleBase::execGetCausers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=P_THIS->GetCausers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffectDataStyleBase::execAddCausers)
	{
		P_GET_TARRAY(UObject*,Z_Param_NewCausers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCausers(Z_Param_NewCausers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEffectDataStyleBase::execAddCauser)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCauser(Z_Param_Causer);
		P_NATIVE_END;
	}
	void UEffectDataStyleBase::StaticRegisterNativesUEffectDataStyleBase()
	{
		UClass* Class = UEffectDataStyleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCauser", &UEffectDataStyleBase::execAddCauser },
			{ "AddCausers", &UEffectDataStyleBase::execAddCausers },
			{ "GetCausers", &UEffectDataStyleBase::execGetCausers },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics
	{
		struct EffectDataStyleBase_eventAddCauser_Parms
		{
			UObject* Causer;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectDataStyleBase_eventAddCauser_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::NewProp_Causer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Add new causer\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "ToolTip", "Add new causer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffectDataStyleBase, nullptr, "AddCauser", nullptr, nullptr, sizeof(EffectDataStyleBase_eventAddCauser_Parms), Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffectDataStyleBase_AddCauser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffectDataStyleBase_AddCauser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics
	{
		struct EffectDataStyleBase_eventAddCausers_Parms
		{
			TArray<UObject*> NewCausers;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCausers_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NewCausers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::NewProp_NewCausers_Inner = { "NewCausers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::NewProp_NewCausers = { "NewCausers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectDataStyleBase_eventAddCausers_Parms, NewCausers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::NewProp_NewCausers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::NewProp_NewCausers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Add new causers\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "ToolTip", "Add new causers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffectDataStyleBase, nullptr, "AddCausers", nullptr, nullptr, sizeof(EffectDataStyleBase_eventAddCausers_Parms), Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffectDataStyleBase_AddCausers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffectDataStyleBase_AddCausers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics
	{
		struct EffectDataStyleBase_eventGetCausers_Parms
		{
			TArray<UObject*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(EffectDataStyleBase_eventGetCausers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Get the causers who want to operator the effect\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "ToolTip", "* Get the causers who want to operator the effect" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEffectDataStyleBase, nullptr, "GetCausers", nullptr, nullptr, sizeof(EffectDataStyleBase_eventGetCausers_Parms), Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEffectDataStyleBase_GetCausers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEffectDataStyleBase_GetCausers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEffectDataStyleBase_NoRegister()
	{
		return UEffectDataStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UEffectDataStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffectDataStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTriggerEffectDataOperationStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEffectDataStyleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEffectDataStyleBase_AddCauser, "AddCauser" }, // 2782791572
		{ &Z_Construct_UFunction_UEffectDataStyleBase_AddCausers, "AddCausers" }, // 710222716
		{ &Z_Construct_UFunction_UEffectDataStyleBase_GetCausers, "GetCausers" }, // 2145570253
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectDataStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EffectData" },
		{ "IncludePath", "TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers_MetaData[] = {
		{ "Comment", "/*\n\x09* The targets who want to open the effect\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "ToolTip", "* The targets who want to open the effect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEffectDataStyleBase, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEffectDataStyleBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEffectDataStyleBase_Statics::NewProp_Causers,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffectDataStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffectDataStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffectDataStyleBase_Statics::ClassParams = {
		&UEffectDataStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UEffectDataStyleBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UEffectDataStyleBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEffectDataStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectDataStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffectDataStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffectDataStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffectDataStyleBase, 554001418);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UEffectDataStyleBase>()
	{
		return UEffectDataStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffectDataStyleBase(Z_Construct_UClass_UEffectDataStyleBase, &UEffectDataStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UEffectDataStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffectDataStyleBase);
	void UEffectDataOpenStyleBase::StaticRegisterNativesUEffectDataOpenStyleBase()
	{
	}
	UClass* Z_Construct_UClass_UEffectDataOpenStyleBase_NoRegister()
	{
		return UEffectDataOpenStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UEffectDataOpenStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEffectDataStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EffectData" },
		{ "Comment", "/*\n* This class defines how to open this effect data.\n*\n* Wen you define new effect data you maybe also need to define new effect data open style\n*/" },
		{ "DisplayName", "OpenStyle" },
		{ "IncludePath", "TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "ToolTip", "* This class defines how to open this effect data.\n*\n* Wen you define new effect data you maybe also need to define new effect data open style" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffectDataOpenStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::ClassParams = {
		&UEffectDataOpenStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffectDataOpenStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffectDataOpenStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffectDataOpenStyleBase, 1704167253);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UEffectDataOpenStyleBase>()
	{
		return UEffectDataOpenStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffectDataOpenStyleBase(Z_Construct_UClass_UEffectDataOpenStyleBase, &UEffectDataOpenStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UEffectDataOpenStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffectDataOpenStyleBase);
	void UEffectDataCloseStyleBase::StaticRegisterNativesUEffectDataCloseStyleBase()
	{
	}
	UClass* Z_Construct_UClass_UEffectDataCloseStyleBase_NoRegister()
	{
		return UEffectDataCloseStyleBase::StaticClass();
	}
	struct Z_Construct_UClass_UEffectDataCloseStyleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEffectDataStyleBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime|EffectData" },
		{ "Comment", "/*\n* This class defines how to close this effect data\n*\n* Wen you define new effect data you maybe also need to define new effect data close style\n*/" },
		{ "DisplayName", "OpenStyle" },
		{ "IncludePath", "TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/EffectTask/DataOperationStyle/EffectDataOperationStyle.h" },
		{ "ToolTip", "* This class defines how to close this effect data\n*\n* Wen you define new effect data you maybe also need to define new effect data close style" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEffectDataCloseStyleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::ClassParams = {
		&UEffectDataCloseStyleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEffectDataCloseStyleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEffectDataCloseStyleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEffectDataCloseStyleBase, 506360429);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UEffectDataCloseStyleBase>()
	{
		return UEffectDataCloseStyleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEffectDataCloseStyleBase(Z_Construct_UClass_UEffectDataCloseStyleBase, &UEffectDataCloseStyleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UEffectDataCloseStyleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEffectDataCloseStyleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
