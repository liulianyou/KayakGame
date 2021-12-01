// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerOctreeControllerBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerOctreeControllerBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerOctreeControllerBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerOctreeControllerBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UTriggerOctreeControllerBase::execGetAllTriggerComponentsByID)
	{
		P_GET_TARRAY_REF(UTriggerTaskComponentBase*,Z_Param_Out_OutComponents);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_ID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTriggerComponentsByID(Z_Param_Out_OutComponents,Z_Param_Out_ID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerOctreeControllerBase::execGetAllTriggerTasksInSideBox)
	{
		P_GET_TARRAY_REF(UTriggerTaskBase*,Z_Param_Out_TriggerTasks);
		P_GET_STRUCT(FVector,Z_Param_Original);
		P_GET_STRUCT(FVector,Z_Param_BoxExtend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTriggerTasksInSideBox(Z_Param_Out_TriggerTasks,Z_Param_Original,Z_Param_BoxExtend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTriggerOctreeControllerBase::execGetAllTriggersInsideBox)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_TriggerDatas);
		P_GET_STRUCT(FVector,Z_Param_Original);
		P_GET_STRUCT(FVector,Z_Param_BoxExtend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetAllTriggersInsideBox(Z_Param_Out_TriggerDatas,Z_Param_Original,Z_Param_BoxExtend);
		P_NATIVE_END;
	}
	void UTriggerOctreeControllerBase::StaticRegisterNativesUTriggerOctreeControllerBase()
	{
		UClass* Class = UTriggerOctreeControllerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAllTriggerComponentsByID", &UTriggerOctreeControllerBase::execGetAllTriggerComponentsByID },
			{ "GetAllTriggersInsideBox", &UTriggerOctreeControllerBase::execGetAllTriggersInsideBox },
			{ "GetAllTriggerTasksInSideBox", &UTriggerOctreeControllerBase::execGetAllTriggerTasksInSideBox },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics
	{
		struct TriggerOctreeControllerBase_eventGetAllTriggerComponentsByID_Parms
		{
			TArray<UTriggerTaskComponentBase*> OutComponents;
			FGuid ID;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutComponents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutComponents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents_Inner = { "OutComponents", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents = { "OutComponents", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggerComponentsByID_Parms, OutComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggerComponentsByID_Parms, ID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_OutComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Find all trigger task components with the target unique ID.\n\x09* Notice: When you run on the editor or split screen mode then the same ID maybe have several components which is stands for the Server, Client, Editor.\n\x09*\x09\x09  So when you want to use these components you maybe need to check weather the components is at the same world of the invoker, or some any other filters\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerOctreeControllerBase.h" },
		{ "ToolTip", "* Find all trigger task components with the target unique ID.\n* Notice: When you run on the editor or split screen mode then the same ID maybe have several components which is stands for the Server, Client, Editor.\n*                 So when you want to use these components you maybe need to check weather the components is at the same world of the invoker, or some any other filters" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerOctreeControllerBase, nullptr, "GetAllTriggerComponentsByID", nullptr, nullptr, sizeof(TriggerOctreeControllerBase_eventGetAllTriggerComponentsByID_Parms), Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics
	{
		struct TriggerOctreeControllerBase_eventGetAllTriggersInsideBox_Parms
		{
			TArray<UObject*> TriggerDatas;
			FVector Original;
			FVector BoxExtend;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerDatas_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerDatas;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Original;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_TriggerDatas_Inner = { "TriggerDatas", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_TriggerDatas = { "TriggerDatas", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggersInsideBox_Parms, TriggerDatas), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_Original = { "Original", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggersInsideBox_Parms, Original), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_BoxExtend = { "BoxExtend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggersInsideBox_Parms, BoxExtend), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_TriggerDatas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_TriggerDatas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_Original,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::NewProp_BoxExtend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get all Triggers which is inside the target box\n\x09* \n\x09* @param Original\x09the origin of the box, World coordinate\n\x09* @param BoxExtend\x09the extend of the box, World coordinate\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerOctreeControllerBase.h" },
		{ "ToolTip", "* Get all Triggers which is inside the target box\n*\n* @param Original       the origin of the box, World coordinate\n* @param BoxExtend      the extend of the box, World coordinate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerOctreeControllerBase, nullptr, "GetAllTriggersInsideBox", nullptr, nullptr, sizeof(TriggerOctreeControllerBase_eventGetAllTriggersInsideBox_Parms), Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics
	{
		struct TriggerOctreeControllerBase_eventGetAllTriggerTasksInSideBox_Parms
		{
			TArray<UTriggerTaskBase*> TriggerTasks;
			FVector Original;
			FVector BoxExtend;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerTasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerTasks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TriggerTasks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Original;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoxExtend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks_Inner = { "TriggerTasks", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks = { "TriggerTasks", nullptr, (EPropertyFlags)0x0010008008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggerTasksInSideBox_Parms, TriggerTasks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_Original = { "Original", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggerTasksInSideBox_Parms, Original), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_BoxExtend = { "BoxExtend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerOctreeControllerBase_eventGetAllTriggerTasksInSideBox_Parms, BoxExtend), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_TriggerTasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_Original,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::NewProp_BoxExtend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get all tasks in target box.\n\x09* \n\x09* @param Original\x09the origin of the box, World coordinate\n\x09* @param BoxExtend\x09the extend of the box, World coordinate\n\x09* \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerOctreeControllerBase.h" },
		{ "ToolTip", "* Get all tasks in target box.\n*\n* @param Original       the origin of the box, World coordinate\n* @param BoxExtend      the extend of the box, World coordinate" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerOctreeControllerBase, nullptr, "GetAllTriggerTasksInSideBox", nullptr, nullptr, sizeof(TriggerOctreeControllerBase_eventGetAllTriggerTasksInSideBox_Parms), Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerOctreeControllerBase_NoRegister()
	{
		return UTriggerOctreeControllerBase::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerOctreeControllerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerComponentsByID, "GetAllTriggerComponentsByID" }, // 3297007263
		{ &Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggersInsideBox, "GetAllTriggersInsideBox" }, // 270132605
		{ &Z_Construct_UFunction_UTriggerOctreeControllerBase_GetAllTriggerTasksInSideBox, "GetAllTriggerTasksInSideBox" }, // 4221630480
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Base class to control the Octree of trigger, I will use it as one usage for the TriggerOctree\n" },
		{ "IncludePath", "TriggerOctreeControllerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerOctreeControllerBase.h" },
		{ "ToolTip", "Base class to control the Octree of trigger, I will use it as one usage for the TriggerOctree" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTriggerOctreeControllerBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::ClassParams = {
		&UTriggerOctreeControllerBase::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerOctreeControllerBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerOctreeControllerBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerOctreeControllerBase, 3741872790);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerOctreeControllerBase>()
	{
		return UTriggerOctreeControllerBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerOctreeControllerBase(Z_Construct_UClass_UTriggerOctreeControllerBase, &UTriggerOctreeControllerBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerOctreeControllerBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerOctreeControllerBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
