// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h"
#include "TriggerRunTime/Public/TriggerTask/AISpawnTask/TT_AISpawnBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISpawnDataBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataBase_NoRegister();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAIInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAISpawnDataBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAICreatorBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_AAIPreviewCharacter_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UAIInfoAccessorBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics
	{
		struct _Script_TriggerRunTime_eventAISapwnFinishd_Parms
		{
			UAISpawnDataBase* SpawnData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::NewProp_SpawnData = { "SpawnData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_TriggerRunTime_eventAISapwnFinishd_Parms, SpawnData), Z_Construct_UClass_UAISpawnDataBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::NewProp_SpawnData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Delegate for other module the check weather all the AI have spawned finished for one condition and after this point next category AI maybe start to spawned\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "Delegate for other module the check weather all the AI have spawned finished for one condition and after this point next category AI maybe start to spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime, nullptr, "AISapwnFinishd__DelegateSignature", nullptr, nullptr, sizeof(_Script_TriggerRunTime_eventAISapwnFinishd_Parms), Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FAIInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FAIInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIInfo, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("AIInfo"), sizeof(FAIInfo), Get_Z_Construct_UScriptStruct_FAIInfo_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FAIInfo>()
{
	return FAIInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIInfo(FAIInfo::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("AIInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFAIInfo
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFAIInfo()
	{
		UScriptStruct::DeferCppStructOps<FAIInfo>(FName(TEXT("AIInfo")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFAIInfo;
	struct Z_Construct_UScriptStruct_FAIInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControllerClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ControllerClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PawnClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BTPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BTPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_ControllerClass_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_ControllerClass = { "ControllerClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInfo, ControllerClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_ControllerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_ControllerClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_PawnClass_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInfo, PawnClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_PawnClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_PawnClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_BTPath_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_BTPath = { "BTPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInfo, BTPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_BTPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_BTPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_ControllerClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_PawnClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_BTPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIInfo_Statics::NewProp_Rotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"AIInfo",
		sizeof(FAIInfo),
		alignof(FAIInfo),
		Z_Construct_UScriptStruct_FAIInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIInfo"), sizeof(FAIInfo), Get_Z_Construct_UScriptStruct_FAIInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIInfo_Hash() { return 1394823575U; }
	DEFINE_FUNCTION(UAISpawnDataBase::execGetALLNPCIDs)
	{
		P_GET_TARRAY_REF(int32,Z_Param_Out_NPCIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetALLNPCIDs(Z_Param_Out_NPCIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execSpawnAIPostProcess)
	{
		P_GET_OBJECT(AAIController,Z_Param_Controller);
		P_GET_OBJECT(APawn,Z_Param_Pawn);
		P_GET_STRUCT_REF(FAIInfo,Z_Param_Out_AIInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAIPostProcess(Z_Param_Controller,Z_Param_Pawn,Z_Param_Out_AIInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetAIRemainedToSpawnInCurrentRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetAIRemainedToSpawnInCurrentRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetNumberOfTotalDeadAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTotalDeadAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetNumberOfTotalSpawnedAI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumberOfTotalSpawnedAI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetMaxRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetCurrentRound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentRound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetCurrentVaildAIInfoToSpawn)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_GET_TARRAY_REF(FAIInfo,Z_Param_Out_AIInfos);
		P_GET_UBOOL_REF(Z_Param_Out_BreakSpawnChain);
		P_GET_UBOOL_REF(Z_Param_Out_SkipCurrentSpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentVaildAIInfoToSpawn(Z_Param_DeltaTime,Z_Param_Out_AIInfos,Z_Param_Out_BreakSpawnChain,Z_Param_Out_SkipCurrentSpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execGetAICreator)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAICreatorBase**)Z_Param__Result=P_THIS->GetAICreator();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execCreateNewAI)
	{
		P_GET_STRUCT_REF(FAIInfo,Z_Param_Out_AIInfo);
		P_GET_OBJECT_REF(APawn,Z_Param_Out_NewPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AAIController**)Z_Param__Result=P_THIS->CreateNewAI(Z_Param_Out_AIInfo,Z_Param_Out_NewPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAISpawnDataBase::execInitData)
	{
		P_GET_OBJECT(UTriggerTaskBase,Z_Param_TaskOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitData(Z_Param_TaskOwner);
		P_NATIVE_END;
	}
	void UAISpawnDataBase::StaticRegisterNativesUAISpawnDataBase()
	{
		UClass* Class = UAISpawnDataBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateNewAI", &UAISpawnDataBase::execCreateNewAI },
			{ "GetAICreator", &UAISpawnDataBase::execGetAICreator },
			{ "GetAIRemainedToSpawnInCurrentRound", &UAISpawnDataBase::execGetAIRemainedToSpawnInCurrentRound },
			{ "GetALLNPCIDs", &UAISpawnDataBase::execGetALLNPCIDs },
			{ "GetCurrentRound", &UAISpawnDataBase::execGetCurrentRound },
			{ "GetCurrentVaildAIInfoToSpawn", &UAISpawnDataBase::execGetCurrentVaildAIInfoToSpawn },
			{ "GetMaxRound", &UAISpawnDataBase::execGetMaxRound },
			{ "GetNumberOfTotalDeadAI", &UAISpawnDataBase::execGetNumberOfTotalDeadAI },
			{ "GetNumberOfTotalSpawnedAI", &UAISpawnDataBase::execGetNumberOfTotalSpawnedAI },
			{ "InitData", &UAISpawnDataBase::execInitData },
			{ "SpawnAIPostProcess", &UAISpawnDataBase::execSpawnAIPostProcess },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics
	{
		struct AISpawnDataBase_eventCreateNewAI_Parms
		{
			FAIInfo AIInfo;
			APawn* NewPawn;
			AAIController* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_AIInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_AIInfo = { "AIInfo", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventCreateNewAI_Parms, AIInfo), Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_AIInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_AIInfo_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventCreateNewAI_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventCreateNewAI_Parms, ReturnValue), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_AIInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_NewPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Create new AI accroding to the AIInfo \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "* Create new AI accroding to the AIInfo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "CreateNewAI", nullptr, nullptr, sizeof(AISpawnDataBase_eventCreateNewAI_Parms), Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics
	{
		struct AISpawnDataBase_eventGetAICreator_Parms
		{
			UAICreatorBase* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetAICreator_Parms, ReturnValue), Z_Construct_UClass_UAICreatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetAICreator", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetAICreator_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetAICreator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetAICreator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics
	{
		struct AISpawnDataBase_eventGetAIRemainedToSpawnInCurrentRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetAIRemainedToSpawnInCurrentRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetAIRemainedToSpawnInCurrentRound", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetAIRemainedToSpawnInCurrentRound_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics
	{
		struct AISpawnDataBase_eventGetALLNPCIDs_Parms
		{
			TArray<int32> NPCIDs;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NPCIDs_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NPCIDs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::NewProp_NPCIDs_Inner = { "NPCIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::NewProp_NPCIDs = { "NPCIDs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetALLNPCIDs_Parms, NPCIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::NewProp_NPCIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::NewProp_NPCIDs,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Get All NPCIDs which is confined this data by the LD\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "Get All NPCIDs which is confined this data by the LD" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetALLNPCIDs", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetALLNPCIDs_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics
	{
		struct AISpawnDataBase_eventGetCurrentRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetCurrentRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetCurrentRound", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetCurrentRound_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics
	{
		struct AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms
		{
			float DeltaTime;
			TArray<FAIInfo> AIInfos;
			bool BreakSpawnChain;
			bool SkipCurrentSpawn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfos_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIInfos;
		static void NewProp_BreakSpawnChain_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BreakSpawnChain;
		static void NewProp_SkipCurrentSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SkipCurrentSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_AIInfos_Inner = { "AIInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_AIInfos = { "AIInfos", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms, AIInfos), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_BreakSpawnChain_SetBit(void* Obj)
	{
		((AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms*)Obj)->BreakSpawnChain = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_BreakSpawnChain = { "BreakSpawnChain", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms), &Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_BreakSpawnChain_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_SkipCurrentSpawn_SetBit(void* Obj)
	{
		((AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms*)Obj)->SkipCurrentSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_SkipCurrentSpawn = { "SkipCurrentSpawn", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms), &Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_SkipCurrentSpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_AIInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_AIInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_BreakSpawnChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::NewProp_SkipCurrentSpawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "/*\n\x09* Get the current valid AI info that will be spawned in the world\n\x09*\n\x09* @param DeltaTime\x09\x09\x09The current Tick time \n\x09* @param BreakSpawnChain\x09true means we should stop to spawn new AI\n\x09* @param SkipCurrentSpawn\x09true means make the current AIInfo valid but don't spawn any AI\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "* Get the current valid AI info that will be spawned in the world\n*\n* @param DeltaTime                      The current Tick time\n* @param BreakSpawnChain        true means we should stop to spawn new AI\n* @param SkipCurrentSpawn       true means make the current AIInfo valid but don't spawn any AI" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetCurrentVaildAIInfoToSpawn", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetCurrentVaildAIInfoToSpawn_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics
	{
		struct AISpawnDataBase_eventGetMaxRound_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetMaxRound_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetMaxRound", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetMaxRound_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics
	{
		struct AISpawnDataBase_eventGetNumberOfTotalDeadAI_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetNumberOfTotalDeadAI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetNumberOfTotalDeadAI", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetNumberOfTotalDeadAI_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics
	{
		struct AISpawnDataBase_eventGetNumberOfTotalSpawnedAI_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventGetNumberOfTotalSpawnedAI_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "GetNumberOfTotalSpawnedAI", nullptr, nullptr, sizeof(AISpawnDataBase_eventGetNumberOfTotalSpawnedAI_Parms), Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics
	{
		struct AISpawnDataBase_eventInitData_Parms
		{
			UTriggerTaskBase* TaskOwner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::NewProp_TaskOwner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventInitData_Parms, TaskOwner), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::NewProp_TaskOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::NewProp_TaskOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::NewProp_TaskOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//Initialize\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "Initialize" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "InitData", nullptr, nullptr, sizeof(AISpawnDataBase_eventInitData_Parms), Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_InitData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_InitData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics
	{
		struct AISpawnDataBase_eventSpawnAIPostProcess_Parms
		{
			AAIController* Controller;
			APawn* Pawn;
			FAIInfo AIInfo;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Pawn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AIInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventSpawnAIPostProcess_Parms, Controller), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventSpawnAIPostProcess_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::NewProp_AIInfo = { "AIInfo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AISpawnDataBase_eventSpawnAIPostProcess_Parms, AIInfo), Z_Construct_UScriptStruct_FAIInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::NewProp_Controller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::NewProp_Pawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::NewProp_AIInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime" },
		{ "Comment", "//When the AI have spawned successfully we may be want to make the AI to do something immediately\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "When the AI have spawned successfully we may be want to make the AI to do something immediately" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISpawnDataBase, nullptr, "SpawnAIPostProcess", nullptr, nullptr, sizeof(AISpawnDataBase_eventSpawnAIPostProcess_Parms), Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAISpawnDataBase_NoRegister()
	{
		return UAISpawnDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UAISpawnDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPreviewCharacters_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPreviewCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AIPreviewCharacters;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AISpawnFinished_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AISpawnFinished;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AICreator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AICreator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIInfoAccessor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIInfoAccessor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TaskOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TaskOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISpawnDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAISpawnDataBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISpawnDataBase_CreateNewAI, "CreateNewAI" }, // 2848632979
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetAICreator, "GetAICreator" }, // 1990947860
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetAIRemainedToSpawnInCurrentRound, "GetAIRemainedToSpawnInCurrentRound" }, // 864666949
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetALLNPCIDs, "GetALLNPCIDs" }, // 1401444289
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetCurrentRound, "GetCurrentRound" }, // 60426538
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetCurrentVaildAIInfoToSpawn, "GetCurrentVaildAIInfoToSpawn" }, // 1851844991
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetMaxRound, "GetMaxRound" }, // 1912701716
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalDeadAI, "GetNumberOfTotalDeadAI" }, // 115834604
		{ &Z_Construct_UFunction_UAISpawnDataBase_GetNumberOfTotalSpawnedAI, "GetNumberOfTotalSpawnedAI" }, // 2200830074
		{ &Z_Construct_UFunction_UAISpawnDataBase_InitData, "InitData" }, // 1568665543
		{ &Z_Construct_UFunction_UAISpawnDataBase_SpawnAIPostProcess, "SpawnAIPostProcess" }, // 1593295145
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "TriggerRuntime" },
		{ "IncludePath", "TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters_Inner = { "AIPreviewCharacters", nullptr, (EPropertyFlags)0x0000000800000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAIPreviewCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters = { "AIPreviewCharacters", nullptr, (EPropertyFlags)0x0040000800000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataBase, AIPreviewCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AISpawnFinished_MetaData[] = {
		{ "Category", "AI Spawn Data" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AISpawnFinished = { "AISpawnFinished", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataBase, AISpawnFinished), Z_Construct_UDelegateFunction_TriggerRunTime_AISapwnFinishd__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AISpawnFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AISpawnFinished_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AICreator_MetaData[] = {
		{ "Category", "AI Spawn Data" },
		{ "Comment", "//Defines how to create new AI\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "Defines how to create new AI" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AICreator = { "AICreator", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataBase, AICreator), Z_Construct_UClass_UAICreatorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AICreator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AICreator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIInfoAccessor_MetaData[] = {
		{ "Category", "AI Spawn Data" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIInfoAccessor = { "AIInfoAccessor", nullptr, (EPropertyFlags)0x001200000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataBase, AIInfoAccessor), Z_Construct_UClass_UAIInfoAccessorBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIInfoAccessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIInfoAccessor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_TaskOwner_MetaData[] = {
		{ "Comment", "//The owner of this data\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/AISpawnTask/AISpawnData/AISpawnDataBase.h" },
		{ "ToolTip", "The owner of this data" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISpawnDataBase, TaskOwner), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_TaskOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_TaskOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISpawnDataBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIPreviewCharacters,
#endif // WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AISpawnFinished,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AICreator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_AIInfoAccessor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISpawnDataBase_Statics::NewProp_TaskOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISpawnDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISpawnDataBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISpawnDataBase_Statics::ClassParams = {
		&UAISpawnDataBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAISpawnDataBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::PropPointers),
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAISpawnDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISpawnDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISpawnDataBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISpawnDataBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISpawnDataBase, 1987905103);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UAISpawnDataBase>()
	{
		return UAISpawnDataBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISpawnDataBase(Z_Construct_UClass_UAISpawnDataBase, &UAISpawnDataBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UAISpawnDataBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISpawnDataBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
