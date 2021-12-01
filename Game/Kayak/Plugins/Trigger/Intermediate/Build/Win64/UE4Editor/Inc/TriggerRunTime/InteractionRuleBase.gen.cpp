// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h"
#include "TriggerRunTime/Public/TriggerTask/InteractionTask/TT_Interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionRuleBase() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_EContributeType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionDataMap();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleDataBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UInteractionRuleBase();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UContributeRuleBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTT_Interaction_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* EContributeType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_EContributeType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("EContributeType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<EContributeType>()
	{
		return EContributeType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EContributeType(EContributeType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("EContributeType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_EContributeType_Hash() { return 4083161977U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_EContributeType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EContributeType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_EContributeType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EContributeType::EContributeType_Start", (int64)EContributeType::EContributeType_Start },
				{ "EContributeType::EContributeType_RemoveActor", (int64)EContributeType::EContributeType_RemoveActor },
				{ "EContributeType::EContributeType_RemoveContribution", (int64)EContributeType::EContributeType_RemoveContribution },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EContributeType_RemoveActor.DisplayName", "Remove Actor" },
				{ "EContributeType_RemoveActor.Name", "EContributeType::EContributeType_RemoveActor" },
				{ "EContributeType_RemoveContribution.DisplayName", "RemoveContribution" },
				{ "EContributeType_RemoveContribution.Name", "EContributeType::EContributeType_RemoveContribution" },
				{ "EContributeType_Start.DisplayName", "Start Contribution" },
				{ "EContributeType_Start.Name", "EContributeType::EContributeType_Start" },
				{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"EContributeType",
				"EContributeType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FInteractionDataMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern TRIGGERRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FInteractionDataMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionDataMap, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("InteractionDataMap"), sizeof(FInteractionDataMap), Get_Z_Construct_UScriptStruct_FInteractionDataMap_Hash());
	}
	return Singleton;
}
template<> TRIGGERRUNTIME_API UScriptStruct* StaticStruct<FInteractionDataMap>()
{
	return FInteractionDataMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionDataMap(FInteractionDataMap::StaticStruct, TEXT("/Script/TriggerRunTime"), TEXT("InteractionDataMap"), false, nullptr, nullptr);
static struct FScriptStruct_TriggerRunTime_StaticRegisterNativesFInteractionDataMap
{
	FScriptStruct_TriggerRunTime_StaticRegisterNativesFInteractionDataMap()
	{
		UScriptStruct::DeferCppStructOps<FInteractionDataMap>(FName(TEXT("InteractionDataMap")));
	}
} ScriptStruct_TriggerRunTime_StaticRegisterNativesFInteractionDataMap;
	struct Z_Construct_UScriptStruct_FInteractionDataMap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionDataMap_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionDataMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Actor_MetaData[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionDataMap, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Data_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionDataMap, Data), Z_Construct_UClass_UInteractionRuleDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionDataMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionDataMap_Statics::NewProp_Data,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionDataMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
		nullptr,
		&NewStructOps,
		"InteractionDataMap",
		sizeof(FInteractionDataMap),
		alignof(FInteractionDataMap),
		Z_Construct_UScriptStruct_FInteractionDataMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionDataMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionDataMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionDataMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionDataMap"), sizeof(FInteractionDataMap), Get_Z_Construct_UScriptStruct_FInteractionDataMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionDataMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionDataMap_Hash() { return 2659928964U; }
	DEFINE_FUNCTION(UInteractionRuleBase::execGetContributors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UContributeRuleBase*>*)Z_Param__Result=P_THIS->GetContributors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execGetInteractionRuleData)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInteractionRuleDataBase**)Z_Param__Result=P_THIS->GetInteractionRuleData(Z_Param_Causer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execGetActualInteractionRuleData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FInteractionDataMap>*)Z_Param__Result=P_THIS->GetActualInteractionRuleData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Tick(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execGetOwnerTask)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTT_Interaction**)Z_Param__Result=P_THIS->GetOwnerTask();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execSetOwnerTask)
	{
		P_GET_OBJECT(UTT_Interaction,Z_Param_Owner);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOwnerTask(Z_Param_Owner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execIsMeetAllCondition)
	{
		P_GET_OBJECT(AActor,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMeetAllCondition(Z_Param_Causer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execReset)
	{
		P_GET_OBJECT(UObject,Z_Param_Causer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reset(Z_Param_Causer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execRemoveContributorsBelongToTargetCausers)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_Causers);
		P_GET_UBOOL(Z_Param_RemoveContributedEffort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveContributorsBelongToTargetCausers(Z_Param_Out_Causers,Z_Param_RemoveContributedEffort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execRemoveContributor)
	{
		P_GET_OBJECT(UContributeRuleBase,Z_Param_Contributor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_RemovedHistroyContributorCount);
		P_GET_UBOOL(Z_Param_RemoveContributedEffort);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveContributor(Z_Param_Contributor,Z_Param_Out_RemovedHistroyContributorCount,Z_Param_RemoveContributedEffort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execAddContributor)
	{
		P_GET_OBJECT(UContributeRuleBase,Z_Param_Contributor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddContributor(Z_Param_Contributor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionRuleBase::execCanAddNewContributor)
	{
		P_GET_OBJECT(UContributeRuleBase,Z_Param_Contributor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanAddNewContributor_Implementation(Z_Param_Contributor);
		P_NATIVE_END;
	}
	static FName NAME_UInteractionRuleBase_CanAddNewContributor = FName(TEXT("CanAddNewContributor"));
	bool UInteractionRuleBase::CanAddNewContributor(UContributeRuleBase* Contributor)
	{
		InteractionRuleBase_eventCanAddNewContributor_Parms Parms;
		Parms.Contributor=Contributor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionRuleBase_CanAddNewContributor),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UInteractionRuleBase_OnApplayContributeExecutonResult = FName(TEXT("OnApplayContributeExecutonResult"));
	void UInteractionRuleBase::OnApplayContributeExecutonResult(UContributeRuleBase* Contributor, float DeltaTime)
	{
		InteractionRuleBase_eventOnApplayContributeExecutonResult_Parms Parms;
		Parms.Contributor=Contributor;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionRuleBase_OnApplayContributeExecutonResult),&Parms);
	}
	static FName NAME_UInteractionRuleBase_OnCanBeAddedToContributorHidtory = FName(TEXT("OnCanBeAddedToContributorHidtory"));
	void UInteractionRuleBase::OnCanBeAddedToContributorHidtory(bool& CanbeAdded, UContributeRuleBase* Contributor)
	{
		InteractionRuleBase_eventOnCanBeAddedToContributorHidtory_Parms Parms;
		Parms.CanbeAdded=CanbeAdded ? true : false;
		Parms.Contributor=Contributor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionRuleBase_OnCanBeAddedToContributorHidtory),&Parms);
		CanbeAdded=Parms.CanbeAdded;
	}
	static FName NAME_UInteractionRuleBase_OnCanBeAddedToContributors = FName(TEXT("OnCanBeAddedToContributors"));
	void UInteractionRuleBase::OnCanBeAddedToContributors(bool& CanbeAdded, UContributeRuleBase* Contributor)
	{
		InteractionRuleBase_eventOnCanBeAddedToContributors_Parms Parms;
		Parms.CanbeAdded=CanbeAdded ? true : false;
		Parms.Contributor=Contributor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionRuleBase_OnCanBeAddedToContributors),&Parms);
		CanbeAdded=Parms.CanbeAdded;
	}
	static FName NAME_UInteractionRuleBase_OnCanTickContributor = FName(TEXT("OnCanTickContributor"));
	bool UInteractionRuleBase::OnCanTickContributor()
	{
		InteractionRuleBase_eventOnCanTickContributor_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionRuleBase_OnCanTickContributor),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UInteractionRuleBase_OnPreProcessWhenAdded = FName(TEXT("OnPreProcessWhenAdded"));
	void UInteractionRuleBase::OnPreProcessWhenAdded(UContributeRuleBase* Contributor)
	{
		InteractionRuleBase_eventOnPreProcessWhenAdded_Parms Parms;
		Parms.Contributor=Contributor;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionRuleBase_OnPreProcessWhenAdded),&Parms);
	}
	void UInteractionRuleBase::StaticRegisterNativesUInteractionRuleBase()
	{
		UClass* Class = UInteractionRuleBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddContributor", &UInteractionRuleBase::execAddContributor },
			{ "CanAddNewContributor", &UInteractionRuleBase::execCanAddNewContributor },
			{ "GetActualInteractionRuleData", &UInteractionRuleBase::execGetActualInteractionRuleData },
			{ "GetContributors", &UInteractionRuleBase::execGetContributors },
			{ "GetInteractionRuleData", &UInteractionRuleBase::execGetInteractionRuleData },
			{ "GetOwnerTask", &UInteractionRuleBase::execGetOwnerTask },
			{ "IsMeetAllCondition", &UInteractionRuleBase::execIsMeetAllCondition },
			{ "RemoveContributor", &UInteractionRuleBase::execRemoveContributor },
			{ "RemoveContributorsBelongToTargetCausers", &UInteractionRuleBase::execRemoveContributorsBelongToTargetCausers },
			{ "Reset", &UInteractionRuleBase::execReset },
			{ "SetOwnerTask", &UInteractionRuleBase::execSetOwnerTask },
			{ "Tick", &UInteractionRuleBase::execTick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics
	{
		struct InteractionRuleBase_eventAddContributor_Parms
		{
			UContributeRuleBase* Contributor;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventAddContributor_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::NewProp_Contributor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "AddContributor", nullptr, nullptr, sizeof(InteractionRuleBase_eventAddContributor_Parms), Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_AddContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_AddContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventCanAddNewContributor_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_Contributor_MetaData)) };
	void Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventCanAddNewContributor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventCanAddNewContributor_Parms), &Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//When new contributor is added to this rule, check weather this contributor can be add to this rule\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "When new contributor is added to this rule, check weather this contributor can be add to this rule" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "CanAddNewContributor", nullptr, nullptr, sizeof(InteractionRuleBase_eventCanAddNewContributor_Parms), Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics
	{
		struct InteractionRuleBase_eventGetActualInteractionRuleData_Parms
		{
			TArray<FInteractionDataMap> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractionDataMap, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventGetActualInteractionRuleData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|InteractionRule" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "GetActualInteractionRuleData", nullptr, nullptr, sizeof(InteractionRuleBase_eventGetActualInteractionRuleData_Parms), Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics
	{
		struct InteractionRuleBase_eventGetContributors_Parms
		{
			TArray<UContributeRuleBase*> ReturnValue;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x001000800800058a, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventGetContributors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|InteractionRule" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "GetContributors", nullptr, nullptr, sizeof(InteractionRuleBase_eventGetContributors_Parms), Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_GetContributors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_GetContributors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics
	{
		struct InteractionRuleBase_eventGetInteractionRuleData_Parms
		{
			AActor* Causer;
			UInteractionRuleDataBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventGetInteractionRuleData_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventGetInteractionRuleData_Parms, ReturnValue), Z_Construct_UClass_UInteractionRuleDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|InteractionRule" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "GetInteractionRuleData", nullptr, nullptr, sizeof(InteractionRuleBase_eventGetInteractionRuleData_Parms), Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics
	{
		struct InteractionRuleBase_eventGetOwnerTask_Parms
		{
			UTT_Interaction* ReturnValue;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventGetOwnerTask_Parms, ReturnValue), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "GetOwnerTask", nullptr, nullptr, sizeof(InteractionRuleBase_eventGetOwnerTask_Parms), Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics
	{
		struct InteractionRuleBase_eventIsMeetAllCondition_Parms
		{
			AActor* Causer;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causer;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventIsMeetAllCondition_Parms, Causer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventIsMeetAllCondition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventIsMeetAllCondition_Parms), &Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::NewProp_Causer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Check weather all the condition have meet, true means the target interaction is finished \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "Check weather all the condition have meet, true means the target interaction is finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "IsMeetAllCondition", nullptr, nullptr, sizeof(InteractionRuleBase_eventIsMeetAllCondition_Parms), Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventOnApplayContributeExecutonResult_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventOnApplayContributeExecutonResult_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "OnApplayContributeExecutonResult", nullptr, nullptr, sizeof(InteractionRuleBase_eventOnApplayContributeExecutonResult_Parms), Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics
	{
		static void NewProp_CanbeAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanbeAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_CanbeAdded_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventOnCanBeAddedToContributorHidtory_Parms*)Obj)->CanbeAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_CanbeAdded = { "CanbeAdded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventOnCanBeAddedToContributorHidtory_Parms), &Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_CanbeAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventOnCanBeAddedToContributorHidtory_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_CanbeAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::NewProp_Contributor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Function to check weather the target contributor can be added to contributor History\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "* Function to check weather the target contributor can be added to contributor History" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "OnCanBeAddedToContributorHidtory", nullptr, nullptr, sizeof(InteractionRuleBase_eventOnCanBeAddedToContributorHidtory_Parms), Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics
	{
		static void NewProp_CanbeAdded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanbeAdded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_CanbeAdded_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventOnCanBeAddedToContributors_Parms*)Obj)->CanbeAdded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_CanbeAdded = { "CanbeAdded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventOnCanBeAddedToContributors_Parms), &Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_CanbeAdded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventOnCanBeAddedToContributors_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_CanbeAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::NewProp_Contributor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Function to check weather the target contributor can be added to contributors \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "* Function to check weather the target contributor can be added to contributors" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "OnCanBeAddedToContributors", nullptr, nullptr, sizeof(InteractionRuleBase_eventOnCanBeAddedToContributors_Parms), Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventOnCanTickContributor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventOnCanTickContributor_Parms), &Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "OnCanTickContributor", nullptr, nullptr, sizeof(InteractionRuleBase_eventOnCanTickContributor_Parms), Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventOnPreProcessWhenAdded_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::NewProp_Contributor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//before I add new contributor to the pool I need do some preprocess\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "before I add new contributor to the pool I need do some preprocess" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "OnPreProcessWhenAdded", nullptr, nullptr, sizeof(InteractionRuleBase_eventOnPreProcessWhenAdded_Parms), Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics
	{
		struct InteractionRuleBase_eventRemoveContributor_Parms
		{
			UContributeRuleBase* Contributor;
			int32 RemovedHistroyContributorCount;
			bool RemoveContributedEffort;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributor;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_RemovedHistroyContributorCount;
		static void NewProp_RemoveContributedEffort_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveContributedEffort;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_Contributor_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_Contributor = { "Contributor", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventRemoveContributor_Parms, Contributor), Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_Contributor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_Contributor_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_RemovedHistroyContributorCount = { "RemovedHistroyContributorCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventRemoveContributor_Parms, RemovedHistroyContributorCount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_RemoveContributedEffort_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventRemoveContributor_Parms*)Obj)->RemoveContributedEffort = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_RemoveContributedEffort = { "RemoveContributedEffort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventRemoveContributor_Parms), &Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_RemoveContributedEffort_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventRemoveContributor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_Contributor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_RemovedHistroyContributorCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_RemoveContributedEffort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09*@param RemoveContributedEffort flag to check weather we need to remove the effort have contributed by the target causer\n\x09*#return the number of the contributor have been removed\n\x09*/" },
		{ "CPP_Default_RemoveContributedEffort", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "*@param RemoveContributedEffort flag to check weather we need to remove the effort have contributed by the target causer\n*#return the number of the contributor have been removed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "RemoveContributor", nullptr, nullptr, sizeof(InteractionRuleBase_eventRemoveContributor_Parms), Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics
	{
		struct InteractionRuleBase_eventRemoveContributorsBelongToTargetCausers_Parms
		{
			TArray<UObject*> Causers;
			bool RemoveContributedEffort;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Causers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Causers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Causers;
		static void NewProp_RemoveContributedEffort_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RemoveContributedEffort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers_Inner = { "Causers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers = { "Causers", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventRemoveContributorsBelongToTargetCausers_Parms, Causers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers_MetaData)) };
	void Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_RemoveContributedEffort_SetBit(void* Obj)
	{
		((InteractionRuleBase_eventRemoveContributorsBelongToTargetCausers_Parms*)Obj)->RemoveContributedEffort = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_RemoveContributedEffort = { "RemoveContributedEffort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionRuleBase_eventRemoveContributorsBelongToTargetCausers_Parms), &Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_RemoveContributedEffort_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_Causers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::NewProp_RemoveContributedEffort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Remove the contributors which is belong to the causers\n\x09* \n\x09* @param RemoveContributedEffort flag to check weather we need to remove the effort have contributed by the target causer\n\x09*/" },
		{ "CPP_Default_RemoveContributedEffort", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "* Remove the contributors which is belong to the causers\n*\n* @param RemoveContributedEffort flag to check weather we need to remove the effort have contributed by the target causer" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "RemoveContributorsBelongToTargetCausers", nullptr, nullptr, sizeof(InteractionRuleBase_eventRemoveContributorsBelongToTargetCausers_Parms), Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics
	{
		struct InteractionRuleBase_eventReset_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::NewProp_Causer = { "Causer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventReset_Parms, Causer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::NewProp_Causer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Reset its local variables\n" },
		{ "CPP_Default_Causer", "None" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "Reset its local variables" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "Reset", nullptr, nullptr, sizeof(InteractionRuleBase_eventReset_Parms), Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_Reset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_Reset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics
	{
		struct InteractionRuleBase_eventSetOwnerTask_Parms
		{
			UTT_Interaction* Owner;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::NewProp_Owner_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventSetOwnerTask_Parms, Owner), Z_Construct_UClass_UTT_Interaction_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::NewProp_Owner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "SetOwnerTask", nullptr, nullptr, sizeof(InteractionRuleBase_eventSetOwnerTask_Parms), Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics
	{
		struct InteractionRuleBase_eventTick_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionRuleBase_eventTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::Function_MetaDataParams[] = {
		{ "Category", "TriggerRuntime|InteractionRule" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionRuleBase, nullptr, "Tick", nullptr, nullptr, sizeof(InteractionRuleBase_eventTick_Parms), Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionRuleBase_Tick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionRuleBase_Tick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionRuleBase_NoRegister()
	{
		return UInteractionRuleBase::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionRuleBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanCooperate_MetaData[];
#endif
		static void NewProp_CanCooperate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanCooperate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionData;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Contributors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Contributors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Contributors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ContributionHistory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContributionHistory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ContributionHistory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActualInteractionDataMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActualInteractionDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActualInteractionDataMap;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionRuleBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionRuleBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionRuleBase_AddContributor, "AddContributor" }, // 2052811421
		{ &Z_Construct_UFunction_UInteractionRuleBase_CanAddNewContributor, "CanAddNewContributor" }, // 3266575080
		{ &Z_Construct_UFunction_UInteractionRuleBase_GetActualInteractionRuleData, "GetActualInteractionRuleData" }, // 492204667
		{ &Z_Construct_UFunction_UInteractionRuleBase_GetContributors, "GetContributors" }, // 2157993450
		{ &Z_Construct_UFunction_UInteractionRuleBase_GetInteractionRuleData, "GetInteractionRuleData" }, // 3480410886
		{ &Z_Construct_UFunction_UInteractionRuleBase_GetOwnerTask, "GetOwnerTask" }, // 3839436502
		{ &Z_Construct_UFunction_UInteractionRuleBase_IsMeetAllCondition, "IsMeetAllCondition" }, // 1033513061
		{ &Z_Construct_UFunction_UInteractionRuleBase_OnApplayContributeExecutonResult, "OnApplayContributeExecutonResult" }, // 1715066732
		{ &Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributorHidtory, "OnCanBeAddedToContributorHidtory" }, // 1187177028
		{ &Z_Construct_UFunction_UInteractionRuleBase_OnCanBeAddedToContributors, "OnCanBeAddedToContributors" }, // 2480956871
		{ &Z_Construct_UFunction_UInteractionRuleBase_OnCanTickContributor, "OnCanTickContributor" }, // 4251014481
		{ &Z_Construct_UFunction_UInteractionRuleBase_OnPreProcessWhenAdded, "OnPreProcessWhenAdded" }, // 1306633611
		{ &Z_Construct_UFunction_UInteractionRuleBase_RemoveContributor, "RemoveContributor" }, // 273570501
		{ &Z_Construct_UFunction_UInteractionRuleBase_RemoveContributorsBelongToTargetCausers, "RemoveContributorsBelongToTargetCausers" }, // 1058631400
		{ &Z_Construct_UFunction_UInteractionRuleBase_Reset, "Reset" }, // 2240234235
		{ &Z_Construct_UFunction_UInteractionRuleBase_SetOwnerTask, "SetOwnerTask" }, // 702727368
		{ &Z_Construct_UFunction_UInteractionRuleBase_Tick, "Tick" }, // 3750032824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/*\n* Base rule for the interaction\n*/" },
		{ "IncludePath", "TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "* Base rule for the interaction" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate_MetaData[] = {
		{ "Category", "InteractionRuleBase" },
		{ "Comment", "/*, Category = \"InteractionRule\", meta = (DisplayAfter = CanToggledByMutiActors, EditCondition = CanToggledByMutiActors)*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", ", Category = \"InteractionRule\", meta = (DisplayAfter = CanToggledByMutiActors, EditCondition = CanToggledByMutiActors)" },
	};
#endif
	void Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate_SetBit(void* Obj)
	{
		((UInteractionRuleBase*)Obj)->CanCooperate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate = { "CanCooperate", nullptr, (EPropertyFlags)0x001000000000001d, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UInteractionRuleBase), &Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_InteractionData_MetaData[] = {
		{ "Category", "InteractionRuleBase" },
		{ "Comment", "//The core data that this rule will try to effect, and this is just used for template for new interaction rule\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "The core data that this rule will try to effect, and this is just used for template for new interaction rule" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_InteractionData = { "InteractionData", nullptr, (EPropertyFlags)0x002008000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleBase, InteractionData), Z_Construct_UClass_UInteractionRuleDataBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_InteractionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_InteractionData_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors_Inner = { "Contributors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors_MetaData[] = {
		{ "Comment", "//Contributors that will be executed in the tick function\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "Contributors that will be executed in the tick function" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors = { "Contributors", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleBase, Contributors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory_Inner = { "ContributionHistory", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UContributeRuleBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory_MetaData[] = {
		{ "Comment", "/*\n\x09* The history for the contribution; \n\x09* the difference between Contributors and ContributionHistory is ContributionHistory is the superset of the Contributors.\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "* The history for the contribution;\n* the difference between Contributors and ContributionHistory is ContributionHistory is the superset of the Contributors." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory = { "ContributionHistory", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleBase, ContributionHistory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap_Inner = { "ActualInteractionDataMap", nullptr, (EPropertyFlags)0x0000008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInteractionDataMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap_MetaData[] = {
		{ "Comment", "//The actual rule data instance that this interaction rule will effect\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/InteractionTask/InteractionRule/InteractionRuleBase.h" },
		{ "ToolTip", "The actual rule data instance that this interaction rule will effect" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap = { "ActualInteractionDataMap", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionRuleBase, ActualInteractionDataMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionRuleBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_CanCooperate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_InteractionData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_Contributors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ContributionHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionRuleBase_Statics::NewProp_ActualInteractionDataMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionRuleBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionRuleBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionRuleBase_Statics::ClassParams = {
		&UInteractionRuleBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionRuleBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::PropPointers),
		0,
		0x04B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionRuleBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionRuleBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionRuleBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionRuleBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionRuleBase, 2548870742);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UInteractionRuleBase>()
	{
		return UInteractionRuleBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionRuleBase(Z_Construct_UClass_UInteractionRuleBase, &UInteractionRuleBase::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UInteractionRuleBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionRuleBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
