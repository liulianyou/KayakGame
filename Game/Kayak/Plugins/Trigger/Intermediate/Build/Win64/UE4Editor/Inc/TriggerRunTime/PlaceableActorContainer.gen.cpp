// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/Tool/PlaceableActorContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlaceableActorContainer() {}
// Cross Module References
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChildActorInfo();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UChildActorComponent_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_APlaceableActorContainer_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_APlaceableActorContainer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTaskComponentCategory_NoRegister();
// End Cross Module References
class UScriptStruct* FChildActorInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FChildActorInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChildActorInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ChildActorInfo"), sizeof(FChildActorInfo), Get_Z_Construct_UScriptStruct_FChildActorInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FChildActorInfo>()
{
	return FChildActorInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChildActorInfo(FChildActorInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("ChildActorInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFChildActorInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFChildActorInfo()
	{
		UScriptStruct::DeferCppStructOps<FChildActorInfo>(FName(TEXT("ChildActorInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFChildActorInfo;
	struct Z_Construct_UScriptStruct_FChildActorInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ChildActorComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChildActorInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_Actor_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorInfo, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_ChildActorComponent_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_ChildActorComponent = { "ChildActorComponent", nullptr, (EPropertyFlags)0x00140000000a0809, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChildActorInfo, ChildActorComponent), Z_Construct_UClass_UChildActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_ChildActorComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_ChildActorComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChildActorInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildActorInfo_Statics::NewProp_ChildActorComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChildActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"ChildActorInfo",
		sizeof(FChildActorInfo),
		alignof(FChildActorInfo),
		Z_Construct_UScriptStruct_FChildActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChildActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChildActorInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChildActorInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChildActorInfo"), sizeof(FChildActorInfo), Get_Z_Construct_UScriptStruct_FChildActorInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChildActorInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChildActorInfo_Hash() { return 1835625724U; }
	DEFINE_FUNCTION(APlaceableActorContainer::execGetChildActors)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActorArr);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetChildActors(Z_Param_Out_OutActorArr);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlaceableActorContainer::execPopulateChildActorAttributes)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_TargetActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PopulateChildActorAttributes_Implementation(Z_Param_Out_TargetActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlaceableActorContainer::execOnChildActorDestroyed)
	{
		P_GET_OBJECT(AActor,Z_Param_DestroyedActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChildActorDestroyed(Z_Param_DestroyedActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlaceableActorContainer::execGenerateChildActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateChildActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlaceableActorContainer::execRemoveAllChildActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllChildActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(APlaceableActorContainer::execUpdateChildActorsTransform)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateChildActorsTransform();
		P_NATIVE_END;
	}
	static FName NAME_APlaceableActorContainer_PopulateChildActorAttributes = FName(TEXT("PopulateChildActorAttributes"));
	void APlaceableActorContainer::PopulateChildActorAttributes(TArray<AActor*> const& TargetActors)
	{
		PlaceableActorContainer_eventPopulateChildActorAttributes_Parms Parms;
		Parms.TargetActors=TargetActors;
		ProcessEvent(FindFunctionChecked(NAME_APlaceableActorContainer_PopulateChildActorAttributes),&Parms);
	}
	void APlaceableActorContainer::StaticRegisterNativesAPlaceableActorContainer()
	{
		UClass* Class = APlaceableActorContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateChildActors", &APlaceableActorContainer::execGenerateChildActors },
			{ "GetChildActors", &APlaceableActorContainer::execGetChildActors },
			{ "OnChildActorDestroyed", &APlaceableActorContainer::execOnChildActorDestroyed },
			{ "PopulateChildActorAttributes", &APlaceableActorContainer::execPopulateChildActorAttributes },
			{ "RemoveAllChildActors", &APlaceableActorContainer::execRemoveAllChildActors },
			{ "UpdateChildActorsTransform", &APlaceableActorContainer::execUpdateChildActorsTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Generate the child actors according to the ChildActorComponent. Only use the component which owner is this actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* Generate the child actors according to the ChildActorComponent. Only use the component which owner is this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceableActorContainer, nullptr, "GenerateChildActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics
	{
		struct PlaceableActorContainer_eventGetChildActors_Parms
		{
			TArray<AActor*> OutActorArr;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OutActorArr_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutActorArr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::NewProp_OutActorArr_Inner = { "OutActorArr", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::NewProp_OutActorArr = { "OutActorArr", nullptr, (EPropertyFlags)0x0010000008000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceableActorContainer_eventGetChildActors_Parms, OutActorArr), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::NewProp_OutActorArr_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::NewProp_OutActorArr,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceableActorContainer, nullptr, "GetChildActors", nullptr, nullptr, sizeof(PlaceableActorContainer_eventGetChildActors_Parms), Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceableActorContainer_GetChildActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlaceableActorContainer_GetChildActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics
	{
		struct PlaceableActorContainer_eventOnChildActorDestroyed_Parms
		{
			AActor* DestroyedActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DestroyedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::NewProp_DestroyedActor = { "DestroyedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceableActorContainer_eventOnChildActorDestroyed_Parms, DestroyedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::NewProp_DestroyedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Callback when child actor is destroyed\n" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "Callback when child actor is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceableActorContainer, nullptr, "OnChildActorDestroyed", nullptr, nullptr, sizeof(PlaceableActorContainer_eventOnChildActorDestroyed_Parms), Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TargetActors;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors_Inner = { "TargetActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors = { "TargetActors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlaceableActorContainer_eventPopulateChildActorAttributes_Parms, TargetActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::NewProp_TargetActors,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Comment", "/*\n\x09* Populate the information hold in this actor to the child actors\n\x09* \n\x09* @param TargetActors The actors that need to update its attributes upon this actor\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* Populate the information hold in this actor to the child actors\n*\n* @param TargetActors The actors that need to update its attributes upon this actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceableActorContainer, nullptr, "PopulateChildActorAttributes", nullptr, nullptr, sizeof(PlaceableActorContainer_eventPopulateChildActorAttributes_Parms), Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Remove all child actors which is hold by this actor.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* Remove all child actors which is hold by this actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceableActorContainer, nullptr, "RemoveAllChildActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Make all the child actor's transform are correspond to the component\n\x09*/" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* Make all the child actor's transform are correspond to the component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlaceableActorContainer, nullptr, "UpdateChildActorsTransform", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APlaceableActorContainer_NoRegister()
	{
		return APlaceableActorContainer::StaticClass();
	}
	struct Z_Construct_UClass_APlaceableActorContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChildActorInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChildActorInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChildActorInfos;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Categories_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Categories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Categories;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlaceableActorContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APlaceableActorContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APlaceableActorContainer_GenerateChildActors, "GenerateChildActors" }, // 2864232913
		{ &Z_Construct_UFunction_APlaceableActorContainer_GetChildActors, "GetChildActors" }, // 4014050993
		{ &Z_Construct_UFunction_APlaceableActorContainer_OnChildActorDestroyed, "OnChildActorDestroyed" }, // 3679192669
		{ &Z_Construct_UFunction_APlaceableActorContainer_PopulateChildActorAttributes, "PopulateChildActorAttributes" }, // 4121298947
		{ &Z_Construct_UFunction_APlaceableActorContainer_RemoveAllChildActors, "RemoveAllChildActors" }, // 1676871672
		{ &Z_Construct_UFunction_APlaceableActorContainer_UpdateChildActorsTransform, "UpdateChildActorsTransform" }, // 3468603204
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableActorContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n* This class will still use the UE4 default ChildActorComponent, \n* but I will only use this component to get class, Transform information. and that component will only exist in the editor\n*/" },
		{ "IncludePath", "Tool/PlaceableActorContainer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* This class will still use the UE4 default ChildActorComponent,\n* but I will only use this component to get class, Transform information. and that component will only exist in the editor" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos_Inner = { "ChildActorInfos", nullptr, (EPropertyFlags)0x0000008000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FChildActorInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//The actor which is combined with this actor, or you can treat them as the child actor of the PlaceableActor\n" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "The actor which is combined with this actor, or you can treat them as the child actor of the PlaceableActor" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos = { "ChildActorInfos", nullptr, (EPropertyFlags)0x0010008000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaceableActorContainer, ChildActorInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Category" },
		{ "Comment", "/*\n\x09* These categories will be copied to the actors this container hold\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* These categories will be copied to the actors this container hold" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_Inner = { "Categories", nullptr, (EPropertyFlags)0x0002000800080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTaskComponentCategory_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Category" },
		{ "Comment", "/*\n\x09* These categories will be copied to the actors this container hold\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Tool/PlaceableActorContainer.h" },
		{ "ToolTip", "* These categories will be copied to the actors this container hold" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories = { "Categories", nullptr, (EPropertyFlags)0x0040008800000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlaceableActorContainer, Categories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlaceableActorContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_ChildActorInfos,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlaceableActorContainer_Statics::NewProp_Categories,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlaceableActorContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlaceableActorContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlaceableActorContainer_Statics::ClassParams = {
		&APlaceableActorContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APlaceableActorContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableActorContainer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlaceableActorContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlaceableActorContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlaceableActorContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlaceableActorContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlaceableActorContainer, 356270247);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<APlaceableActorContainer>()
	{
		return APlaceableActorContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlaceableActorContainer(Z_Construct_UClass_APlaceableActorContainer, &APlaceableActorContainer::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("APlaceableActorContainer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlaceableActorContainer);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(APlaceableActorContainer)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
