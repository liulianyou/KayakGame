// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcessBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnPostProcessBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcessBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcessBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	static FName NAME_URespawnPostProcessBase_OnApplayPostProcess = FName(TEXT("OnApplayPostProcess"));
	void URespawnPostProcessBase::OnApplayPostProcess(APawn* OldCharacter, APawn* NewCharacter)
	{
		RespawnPostProcessBase_eventOnApplayPostProcess_Parms Parms;
		Parms.OldCharacter=OldCharacter;
		Parms.NewCharacter=NewCharacter;
		ProcessEvent(FindFunctionChecked(NAME_URespawnPostProcessBase_OnApplayPostProcess),&Parms);
	}
	void URespawnPostProcessBase::StaticRegisterNativesURespawnPostProcessBase()
	{
	}
	struct Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OldCharacter;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::NewProp_OldCharacter = { "OldCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RespawnPostProcessBase_eventOnApplayPostProcess_Parms, OldCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::NewProp_NewCharacter = { "NewCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RespawnPostProcessBase_eventOnApplayPostProcess_Parms, NewCharacter), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::NewProp_OldCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::NewProp_NewCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcessBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URespawnPostProcessBase, nullptr, "OnApplayPostProcess", nullptr, nullptr, sizeof(RespawnPostProcessBase_eventOnApplayPostProcess_Parms), Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URespawnPostProcessBase_NoRegister()
	{
		return URespawnPostProcessBase::StaticClass();
	}
	struct Z_Construct_UClass_URespawnPostProcessBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawnPostProcessBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URespawnPostProcessBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URespawnPostProcessBase_OnApplayPostProcess, "OnApplayPostProcess" }, // 4075376216
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcessBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcessBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcessBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawnPostProcessBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnPostProcessBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawnPostProcessBase_Statics::ClassParams = {
		&URespawnPostProcessBase::StaticClass,
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
		0x043010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcessBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcessBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawnPostProcessBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawnPostProcessBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawnPostProcessBase, 522646769);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URespawnPostProcessBase>()
	{
		return URespawnPostProcessBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawnPostProcessBase(Z_Construct_UClass_URespawnPostProcessBase, &URespawnPostProcessBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URespawnPostProcessBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnPostProcessBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
