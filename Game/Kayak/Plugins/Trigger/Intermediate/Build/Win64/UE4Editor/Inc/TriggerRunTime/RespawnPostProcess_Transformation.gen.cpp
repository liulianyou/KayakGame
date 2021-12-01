// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRespawnPostProcess_Transformation() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcess_Transformation_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcess_Transformation();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_URespawnPostProcessBase();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void URespawnPostProcess_Transformation::StaticRegisterNativesURespawnPostProcess_Transformation()
	{
	}
	UClass* Z_Construct_UClass_URespawnPostProcess_Transformation_NoRegister()
	{
		return URespawnPostProcess_Transformation::StaticClass();
	}
	struct Z_Construct_UClass_URespawnPostProcess_Transformation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCustomizePosition_MetaData[];
#endif
		static void NewProp_UserCustomizePosition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UserCustomizePosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCustomizeRotation_MetaData[];
#endif
		static void NewProp_UserCustomizeRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UserCustomizeRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UserCustomizeScale_MetaData[];
#endif
		static void NewProp_UserCustomizeScale_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UserCustomizeScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URespawnPostProcessBase,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition_MetaData[] = {
		{ "Category", "RespawnPostProcess_Transformation" },
		{ "Comment", "//Flag to check weather we will use the specified position for the character position after it is spawned\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
		{ "ToolTip", "Flag to check weather we will use the specified position for the character position after it is spawned" },
	};
#endif
	void Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition_SetBit(void* Obj)
	{
		((URespawnPostProcess_Transformation*)Obj)->UserCustomizePosition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition = { "UserCustomizePosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URespawnPostProcess_Transformation), &Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Position_MetaData[] = {
		{ "Category", "RespawnPostProcess_Transformation" },
		{ "Comment", "//The character's position\n" },
		{ "EditCondition", "UserCustomizePosition" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
		{ "ToolTip", "The character's position" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawnPostProcess_Transformation, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Position_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation_MetaData[] = {
		{ "Category", "RespawnPostProcess_Transformation" },
		{ "Comment", "//Flag to check weather we will use the specified rotation for the character rotation after it is spawned\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
		{ "ToolTip", "Flag to check weather we will use the specified rotation for the character rotation after it is spawned" },
	};
#endif
	void Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation_SetBit(void* Obj)
	{
		((URespawnPostProcess_Transformation*)Obj)->UserCustomizeRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation = { "UserCustomizeRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URespawnPostProcess_Transformation), &Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "RespawnPostProcess_Transformation" },
		{ "Comment", "//The character's rotation\n" },
		{ "EditCondition", "UserCustomizeRotation" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
		{ "ToolTip", "The character's rotation" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawnPostProcess_Transformation, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale_MetaData[] = {
		{ "Category", "RespawnPostProcess_Transformation" },
		{ "Comment", "//Flag to check weather we will use the specified scale for the character scale after it is spawned\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
		{ "ToolTip", "Flag to check weather we will use the specified scale for the character scale after it is spawned" },
	};
#endif
	void Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale_SetBit(void* Obj)
	{
		((URespawnPostProcess_Transformation*)Obj)->UserCustomizeScale = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale = { "UserCustomizeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(URespawnPostProcess_Transformation), &Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale_SetBit, METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "RespawnPostProcess_Transformation" },
		{ "EditCondition", "UserCustomizeScale" },
		{ "ModuleRelativePath", "Public/TriggerTask/RespawnTask/RespawnPostProcess/RespawnPostProcess_Transformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URespawnPostProcess_Transformation, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Scale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizePosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_UserCustomizeScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::NewProp_Scale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URespawnPostProcess_Transformation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::ClassParams = {
		&URespawnPostProcess_Transformation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::PropPointers),
		0,
		0x003010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URespawnPostProcess_Transformation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URespawnPostProcess_Transformation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URespawnPostProcess_Transformation, 165765384);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<URespawnPostProcess_Transformation>()
	{
		return URespawnPostProcess_Transformation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URespawnPostProcess_Transformation(Z_Construct_UClass_URespawnPostProcess_Transformation, &URespawnPostProcess_Transformation::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("URespawnPostProcess_Transformation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URespawnPostProcess_Transformation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
