// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TriggerRunTime/Public/TriggerTask/TriggerTaskInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerTaskInterface() {}
// Cross Module References
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType();
	UPackage* Z_Construct_UPackage__Script_TriggerRunTime();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState();
	TRIGGERRUNTIME_API UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskInterface_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UOperationInformationBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister();
	TRIGGERRUNTIME_API UClass* Z_Construct_UClass_UTriggerTaskBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
	static UEnum* ETriggerTaskResetType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETriggerTaskResetType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerTaskResetType>()
	{
		return ETriggerTaskResetType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriggerTaskResetType(ETriggerTaskResetType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETriggerTaskResetType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType_Hash() { return 3570123785U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriggerTaskResetType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETriggerTaskResetType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriggerTaskResetType::ETriggerTaskResetType_None", (int64)ETriggerTaskResetType::ETriggerTaskResetType_None },
				{ "ETriggerTaskResetType::ETriggerTaskResetType_ClearData", (int64)ETriggerTaskResetType::ETriggerTaskResetType_ClearData },
				{ "ETriggerTaskResetType::ETriggerTaskResetType_ResetContent", (int64)ETriggerTaskResetType::ETriggerTaskResetType_ResetContent },
				{ "ETriggerTaskResetType::ETriggerTaskResetType_All", (int64)ETriggerTaskResetType::ETriggerTaskResetType_All },
				{ "ETriggerTaskResetType::ETriggerTaskResetType_Customize", (int64)ETriggerTaskResetType::ETriggerTaskResetType_Customize },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ETriggerTaskResetType_All.Comment", "//This should make this ask as original and all effect it created should be reverted\n" },
				{ "ETriggerTaskResetType_All.DisplayName", "Reset all" },
				{ "ETriggerTaskResetType_All.Name", "ETriggerTaskResetType::ETriggerTaskResetType_All" },
				{ "ETriggerTaskResetType_All.ToolTip", "This should make this ask as original and all effect it created should be reverted" },
				{ "ETriggerTaskResetType_ClearData.Comment", "//Only reset the data which created or changed at runtime\n" },
				{ "ETriggerTaskResetType_ClearData.DisplayName", "Clear Data" },
				{ "ETriggerTaskResetType_ClearData.Name", "ETriggerTaskResetType::ETriggerTaskResetType_ClearData" },
				{ "ETriggerTaskResetType_ClearData.ToolTip", "Only reset the data which created or changed at runtime" },
				{ "ETriggerTaskResetType_Customize.Comment", "/*\n\x09* If the reset type is specified to this type, I will use the confined reset style, This type will not block any other type.\n\x09* When you implement Reset function and do not distinguish the type, and you specify the parameter of Reset with this type.\n\x09* All your code in reset and the customized object code will be executed\n\x09*/" },
				{ "ETriggerTaskResetType_Customize.DisplayName", "Customzied" },
				{ "ETriggerTaskResetType_Customize.Name", "ETriggerTaskResetType::ETriggerTaskResetType_Customize" },
				{ "ETriggerTaskResetType_Customize.ToolTip", "* If the reset type is specified to this type, I will use the confined reset style, This type will not block any other type.\n* When you implement Reset function and do not distinguish the type, and you specify the parameter of Reset with this type.\n* All your code in reset and the customized object code will be executed" },
				{ "ETriggerTaskResetType_None.DisplayName", "Do not reset" },
				{ "ETriggerTaskResetType_None.Name", "ETriggerTaskResetType::ETriggerTaskResetType_None" },
				{ "ETriggerTaskResetType_ResetContent.Comment", "//Only reset the effect this task created, but keep the runtime data.\n" },
				{ "ETriggerTaskResetType_ResetContent.DisplayName", "Revert Effect" },
				{ "ETriggerTaskResetType_ResetContent.Name", "ETriggerTaskResetType::ETriggerTaskResetType_ResetContent" },
				{ "ETriggerTaskResetType_ResetContent.ToolTip", "Only reset the effect this task created, but keep the runtime data." },
				{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETriggerTaskResetType",
				"ETriggerTaskResetType",
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
	static UEnum* ETriggerTaskState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETriggerTaskState"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerTaskState>()
	{
		return ETriggerTaskState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriggerTaskState(ETriggerTaskState_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETriggerTaskState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState_Hash() { return 4019556684U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriggerTaskState"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETriggerTaskState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriggerTaskState::ETriggerTaskState_NotifyByOthers", (int64)ETriggerTaskState::ETriggerTaskState_NotifyByOthers },
				{ "ETriggerTaskState::ETriggerTaskState_Prepare", (int64)ETriggerTaskState::ETriggerTaskState_Prepare },
				{ "ETriggerTaskState::ETriggerTaskState_Active", (int64)ETriggerTaskState::ETriggerTaskState_Active },
				{ "ETriggerTaskState::ETriggerTaskState_Skip", (int64)ETriggerTaskState::ETriggerTaskState_Skip },
				{ "ETriggerTaskState::ETriggerTaskState_Tick", (int64)ETriggerTaskState::ETriggerTaskState_Tick },
				{ "ETriggerTaskState::ETriggerTaskState_Resume", (int64)ETriggerTaskState::ETriggerTaskState_Resume },
				{ "ETriggerTaskState::ETriggerTaskState_Reset", (int64)ETriggerTaskState::ETriggerTaskState_Reset },
				{ "ETriggerTaskState::ETriggerTaskState_Finished", (int64)ETriggerTaskState::ETriggerTaskState_Finished },
				{ "ETriggerTaskState::ETriggerTaskState_Pause", (int64)ETriggerTaskState::ETriggerTaskState_Pause },
				{ "ETriggerTaskState::ETriggerTaskState_Stop", (int64)ETriggerTaskState::ETriggerTaskState_Stop },
				{ "ETriggerTaskState::ETriggerTaskState_PostFinished", (int64)ETriggerTaskState::ETriggerTaskState_PostFinished },
				{ "ETriggerTaskState::ETriggerTaskState_End", (int64)ETriggerTaskState::ETriggerTaskState_End },
				{ "ETriggerTaskState::ETriggerTaskState_Sleeping", (int64)ETriggerTaskState::ETriggerTaskState_Sleeping },
				{ "ETriggerTaskState::ETriggerTaskState_Max", (int64)ETriggerTaskState::ETriggerTaskState_Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/*\n* The state of the trigger task.\n* \n* If you change any element of the enumeration you should also change the UTriggerTaskBase::StateEvent\n*/" },
				{ "ETriggerTaskState_Active.DisplayName", "Active" },
				{ "ETriggerTaskState_Active.Name", "ETriggerTaskState::ETriggerTaskState_Active" },
				{ "ETriggerTaskState_End.Comment", "/*\n\x09* The end state is just used to mark all node of code have been executed.\n\x09* The end state do not mean this task is destroyed, and the task can still start again.\n\x09*/" },
				{ "ETriggerTaskState_End.hidden", "" },
				{ "ETriggerTaskState_End.Name", "ETriggerTaskState::ETriggerTaskState_End" },
				{ "ETriggerTaskState_End.ToolTip", "* The end state is just used to mark all node of code have been executed.\n* The end state do not mean this task is destroyed, and the task can still start again." },
				{ "ETriggerTaskState_Finished.DisplayName", "Finished" },
				{ "ETriggerTaskState_Finished.Name", "ETriggerTaskState::ETriggerTaskState_Finished" },
				{ "ETriggerTaskState_Max.Comment", "//The default initialize value for state, which means this task have never processed, you can treat it as this task is out trigger scene\n" },
				{ "ETriggerTaskState_Max.hidden", "" },
				{ "ETriggerTaskState_Max.Name", "ETriggerTaskState::ETriggerTaskState_Max" },
				{ "ETriggerTaskState_Max.ToolTip", "The default initialize value for state, which means this task have never processed, you can treat it as this task is out trigger scene" },
				{ "ETriggerTaskState_NotifyByOthers.Comment", "//Start means this task is notified by the other object and try to do its confined content.\n" },
				{ "ETriggerTaskState_NotifyByOthers.DisplayName", "Start" },
				{ "ETriggerTaskState_NotifyByOthers.Name", "ETriggerTaskState::ETriggerTaskState_NotifyByOthers" },
				{ "ETriggerTaskState_NotifyByOthers.ToolTip", "Start means this task is notified by the other object and try to do its confined content." },
				{ "ETriggerTaskState_Pause.Comment", "//Pause means all the data in the task will not reset to default\n" },
				{ "ETriggerTaskState_Pause.DisplayName", "Pause" },
				{ "ETriggerTaskState_Pause.Name", "ETriggerTaskState::ETriggerTaskState_Pause" },
				{ "ETriggerTaskState_Pause.ToolTip", "Pause means all the data in the task will not reset to default" },
				{ "ETriggerTaskState_PostFinished.DisplayName", "PostFinished" },
				{ "ETriggerTaskState_PostFinished.Name", "ETriggerTaskState::ETriggerTaskState_PostFinished" },
				{ "ETriggerTaskState_Prepare.Comment", "//This state usually used to prepare its local content so that the this task can active correctly\n" },
				{ "ETriggerTaskState_Prepare.DisplayName", "Prepare" },
				{ "ETriggerTaskState_Prepare.Name", "ETriggerTaskState::ETriggerTaskState_Prepare" },
				{ "ETriggerTaskState_Prepare.ToolTip", "This state usually used to prepare its local content so that the this task can active correctly" },
				{ "ETriggerTaskState_Reset.Comment", "//Reset status means this task's data is clear, and it is ready to prepare to active.\n//By default This task is not running at this state as its description\n" },
				{ "ETriggerTaskState_Reset.DisplayName", "Reset" },
				{ "ETriggerTaskState_Reset.Name", "ETriggerTaskState::ETriggerTaskState_Reset" },
				{ "ETriggerTaskState_Reset.ToolTip", "Reset status means this task's data is clear, and it is ready to prepare to active.\nBy default This task is not running at this state as its description" },
				{ "ETriggerTaskState_Resume.DisplayName", "Resume" },
				{ "ETriggerTaskState_Resume.Name", "ETriggerTaskState::ETriggerTaskState_Resume" },
				{ "ETriggerTaskState_Skip.Comment", "//When in this state means all running content will skipped, the finial skip style should be defined by SkipStyle object\n" },
				{ "ETriggerTaskState_Skip.DisplayName", "Skip" },
				{ "ETriggerTaskState_Skip.Name", "ETriggerTaskState::ETriggerTaskState_Skip" },
				{ "ETriggerTaskState_Skip.ToolTip", "When in this state means all running content will skipped, the finial skip style should be defined by SkipStyle object" },
				{ "ETriggerTaskState_Sleeping.Comment", "//Sleeping means this task can be reactive again, The data have to reset to default\n" },
				{ "ETriggerTaskState_Sleeping.DisplayName", "Sleeping" },
				{ "ETriggerTaskState_Sleeping.Name", "ETriggerTaskState::ETriggerTaskState_Sleeping" },
				{ "ETriggerTaskState_Sleeping.ToolTip", "Sleeping means this task can be reactive again, The data have to reset to default" },
				{ "ETriggerTaskState_Stop.Comment", "/*\n\x09* Stop means this task can no way to reactive again\n\x09* By default a task is stopped by other object, I assume this task do not run completely, so the task will not be finished as some goals have not reached.\n\x09* when other object try to stop this task, this task only reset it according its own attribute and goal.\n\x09*/" },
				{ "ETriggerTaskState_Stop.DisplayName", "Stop" },
				{ "ETriggerTaskState_Stop.Name", "ETriggerTaskState::ETriggerTaskState_Stop" },
				{ "ETriggerTaskState_Stop.ToolTip", "* Stop means this task can no way to reactive again\n* By default a task is stopped by other object, I assume this task do not run completely, so the task will not be finished as some goals have not reached.\n* when other object try to stop this task, this task only reset it according its own attribute and goal." },
				{ "ETriggerTaskState_Tick.DisplayName", "Tick" },
				{ "ETriggerTaskState_Tick.Name", "ETriggerTaskState::ETriggerTaskState_Tick" },
				{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
				{ "ToolTip", "* The state of the trigger task.\n*\n* If you change any element of the enumeration you should also change the UTriggerTaskBase::StateEvent" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETriggerTaskState",
				"ETriggerTaskState",
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
	static UEnum* ETriggerTaskAutomaticallyEndType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType, Z_Construct_UPackage__Script_TriggerRunTime(), TEXT("ETriggerTaskAutomaticallyEndType"));
		}
		return Singleton;
	}
	template<> TRIGGERRUNTIME_API UEnum* StaticEnum<ETriggerTaskAutomaticallyEndType>()
	{
		return ETriggerTaskAutomaticallyEndType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETriggerTaskAutomaticallyEndType(ETriggerTaskAutomaticallyEndType_StaticEnum, TEXT("/Script/TriggerRunTime"), TEXT("ETriggerTaskAutomaticallyEndType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType_Hash() { return 2339861388U; }
	UEnum* Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_TriggerRunTime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETriggerTaskAutomaticallyEndType"), 0, Get_Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETriggerTaskAutomaticallyEndType::ETriggerTaskAutomaticallyEndType_EndOverlap", (int64)ETriggerTaskAutomaticallyEndType::ETriggerTaskAutomaticallyEndType_EndOverlap },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ETriggerTaskAutomaticallyEndType_EndOverlap.\"EndOverlap\"", "" },
				{ "ETriggerTaskAutomaticallyEndType_EndOverlap.Comment", "//This only worked when the target trigger is a scene trigger which have collision box\n" },
				{ "ETriggerTaskAutomaticallyEndType_EndOverlap.Name", "ETriggerTaskAutomaticallyEndType::ETriggerTaskAutomaticallyEndType_EndOverlap" },
				{ "ETriggerTaskAutomaticallyEndType_EndOverlap.ToolTip", "This only worked when the target trigger is a scene trigger which have collision box" },
				{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_TriggerRunTime,
				nullptr,
				"ETriggerTaskAutomaticallyEndType",
				"ETriggerTaskAutomaticallyEndType",
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
	void ITriggerTaskInterface::OnActive()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnActive instead.");
	}
	void ITriggerTaskInterface::OnCanBeToggled(bool& Result)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCanBeToggled instead.");
	}
	void ITriggerTaskInterface::OnCanEndTaskAutomaically(bool& Result, ETriggerTaskAutomaticallyEndType EndType)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCanEndTaskAutomaically instead.");
	}
	bool ITriggerTaskInterface::OnCanTick()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnCanTick instead.");
		TriggerTaskInterface_eventOnCanTick_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITriggerTaskInterface::OnEnd()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnEnd instead.");
	}
	void ITriggerTaskInterface::OnFinished(UOperationInformationBase* FinishOperationInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnFinished instead.");
	}
	bool ITriggerTaskInterface::OnNotifyOtherTriggerSuccessed(UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* Task)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnNotifyOtherTriggerSuccessed instead.");
		TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITriggerTaskInterface::OnPause(UOperationInformationBase* Operation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPause instead.");
	}
	void ITriggerTaskInterface::OnPostFinished()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPostFinished instead.");
	}
	bool ITriggerTaskInterface::OnPrepare()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPrepare instead.");
		TriggerTaskInterface_eventOnPrepare_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITriggerTaskInterface::OnReceiveNotifyOthers(UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* SendTask, UOperationInformationBase* StartOperationInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReceiveNotifyOthers instead.");
		TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms Parms;
		return Parms.ReturnValue;
	}
	bool ITriggerTaskInterface::OnReceiveTick(float DeltaTime)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReceiveTick instead.");
		TriggerTaskInterface_eventOnReceiveTick_Parms Parms;
		return Parms.ReturnValue;
	}
	void ITriggerTaskInterface::OnReset(UOperationInformationBase* ResetOperationInfo)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnReset instead.");
	}
	void ITriggerTaskInterface::OnResume(UOperationInformationBase* Operation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnResume instead.");
	}
	void ITriggerTaskInterface::OnSelectedInEditor(UObject* SelectedActor)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSelectedInEditor instead.");
	}
	void ITriggerTaskInterface::OnSkipped(UOperationInformationBase* SkipStyle)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSkipped instead.");
	}
	void ITriggerTaskInterface::OnSleeping(UOperationInformationBase* SleepOperation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnSleeping instead.");
	}
	void ITriggerTaskInterface::OnStop(UOperationInformationBase* StopOperation)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnStop instead.");
	}
	void UTriggerTaskInterface::StaticRegisterNativesUTriggerTaskInterface()
	{
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnActive_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnActive_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when this task start to run.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Called when this task start to run." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnActive", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics
	{
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnCanBeToggled_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnCanBeToggled_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::NewProp_Result,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* @param Toggled this is the return value, you should change it in this function\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* @param Toggled this is the return value, you should change it in this function" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnCanBeToggled", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnCanBeToggled_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics
	{
		static void NewProp_Result_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EndType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EndType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnCanEndTaskAutomaically_Parms*)Obj)->Result = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnCanEndTaskAutomaically_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_EndType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_EndType = { "EndType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnCanEndTaskAutomaically_Parms, EndType), Z_Construct_UEnum_TriggerRunTime_ETriggerTaskAutomaticallyEndType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_EndType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::NewProp_EndType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When something happed weather this task can end automatically \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* When something happed weather this task can end automatically" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnCanEndTaskAutomaically", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnCanEndTaskAutomaically_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnCanTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnCanTick_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* This is one way for BP to check weather current task can tick.\n\x09* The difference between the member CanEverTick and CanTick() is CanTick can ditinguish the server and client,\n\x09* And it can support customize tick condition\n\x09* CanEverTick is just one property of condition to check tick, it is a simple way to control tick.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* This is one way for BP to check weather current task can tick.\n* The difference between the member CanEverTick and CanTick() is CanTick can ditinguish the server and client,\n* And it can support customize tick condition\n* CanEverTick is just one property of condition to check tick, it is a simple way to control tick." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnCanTick", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnCanTick_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnEnd_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Invoked when all content in this task have been executed.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Invoked when all content in this task have been executed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FinishOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FinishOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::NewProp_FinishOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::NewProp_FinishOperationInfo = { "FinishOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnFinished_Parms, FinishOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::NewProp_FinishOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::NewProp_FinishOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::NewProp_FinishOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when this task finished\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Called when this task finished" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnFinished", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnFinished_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTaskComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTaskComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Task_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Task;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_TargetTaskComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_TargetTaskComponent = { "TargetTaskComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms, TargetTaskComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_TargetTaskComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_TargetTaskComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_Task_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms, Task), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_Task_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_Task_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_TargetTaskComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_Task,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* When some other receive information form this task successfully, we should do some actions here\n\x09*\n\x09* @param ReceivedTask\x09the task which receive the notification from this task\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* When some other receive information form this task successfully, we should do some actions here\n*\n* @param ReceivedTask   the task which receive the notification from this task" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnNotifyOtherTriggerSuccessed", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnPause_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when the task has been paused\n//@param Operation\x09the information to hold all data to identify this operation\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Called when the task has been paused\n@param Operation       the information to hold all data to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnPause", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnPause_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnPause()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnPause_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//At this state the task will notify other module to notify them to do something\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "At this state the task will notify other module to notify them to do something" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnPostFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnPrepare_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnPrepare_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called before active, and mostly used to do some preparation actions.\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Called before active, and mostly used to do some preparation actions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnPrepare", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnPrepare_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetTaskComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetTaskComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SendTask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SendTask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartOperationInfo;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_TargetTaskComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_TargetTaskComponent = { "TargetTaskComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms, TargetTaskComponent), Z_Construct_UClass_UTriggerTaskComponentBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_TargetTaskComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_TargetTaskComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_SendTask_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_SendTask = { "SendTask", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms, SendTask), Z_Construct_UClass_UTriggerTaskBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_SendTask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_SendTask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_StartOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_StartOperationInfo = { "StartOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms, StartOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_StartOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_StartOperationInfo_MetaData)) };
	void Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_TargetTaskComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_SendTask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_StartOperationInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Invoked When this task receive information from other task\n\x09*\n\x09* @param SenderTask\x09\x09the notification which is send by\n\x09* @param ExternalData\x09The external data which the send task will not storage.\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* Invoked When this task receive information from other task\n*\n* @param SenderTask             the notification which is send by\n* @param ExternalData   The external data which the send task will not storage." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnReceiveNotifyOthers", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TriggerTaskInterface_eventOnReceiveTick_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(TriggerTaskInterface_eventOnReceiveTick_Parms), &Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Tick function to \n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Tick function to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnReceiveTick", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnReceiveTick_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResetOperationInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ResetOperationInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::NewProp_ResetOperationInfo_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::NewProp_ResetOperationInfo = { "ResetOperationInfo", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnReset_Parms, ResetOperationInfo), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::NewProp_ResetOperationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::NewProp_ResetOperationInfo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::NewProp_ResetOperationInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Comment", "/*\n\x09* Called when the task reset\n\x09* \n\x09* @param Operation\x09  the information to hold all data to identify this operation\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* Called when the task reset\n*\n* @param Operation        the information to hold all data to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnReset", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnReset_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnReset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnReset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Operation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::NewProp_Operation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::NewProp_Operation = { "Operation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnResume_Parms, Operation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::NewProp_Operation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::NewProp_Operation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::NewProp_Operation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called when we resume the task to the target state\n//@param Operation\x09the information to hold all data to identify this operation\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Called when we resume the task to the target state\n@param Operation       the information to hold all data to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnResume", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnResume_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnResume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnResume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::NewProp_SelectedActor = { "SelectedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnSelectedInEditor_Parms, SelectedActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::NewProp_SelectedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//Called by BP when the owner of this task is selected in the editor\n" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "Called by BP when the owner of this task is selected in the editor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnSelectedInEditor", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnSelectedInEditor_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkipStyle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::NewProp_SkipStyle_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::NewProp_SkipStyle = { "SkipStyle", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnSkipped_Parms, SkipStyle), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::NewProp_SkipStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::NewProp_SkipStyle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::NewProp_SkipStyle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Called when we need to skip the running content for the task\n\x09* \n\x09* @paran SkipStyle the style how to skip this running content\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* Called when we need to skip the running content for the task\n*\n* @paran SkipStyle the style how to skip this running content" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnSkipped", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnSkipped_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SleepOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SleepOperation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::NewProp_SleepOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::NewProp_SleepOperation = { "SleepOperation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnSleeping_Parms, SleepOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::NewProp_SleepOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::NewProp_SleepOperation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::NewProp_SleepOperation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Called when the task form other states into sleeping\n\x09* \n\x09* @param Operation \n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* Called when the task form other states into sleeping\n*\n* @param Operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnSleeping", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnSleeping_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StopOperation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::NewProp_StopOperation_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::NewProp_StopOperation = { "StopOperation", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TriggerTaskInterface_eventOnStop_Parms, StopOperation), Z_Construct_UClass_UOperationInformationBase_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::NewProp_StopOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::NewProp_StopOperation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::NewProp_StopOperation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09* Stop this task, this is not the same as the Finished() as finished is the state of this task\n\x09* but stop is the command of the task which can be used by other object\n\x09* If other object stop this task, this task should reset all its data, and it will not go into the finish state.\n\x09*\n\x09* @param Operation\x09  the information to hold all data to identify this operation\n\x09*/" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
		{ "ToolTip", "* Stop this task, this is not the same as the Finished() as finished is the state of this task\n* but stop is the command of the task which can be used by other object\n* If other object stop this task, this task should reset all its data, and it will not go into the finish state.\n*\n* @param Operation        the information to hold all data to identify this operation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTriggerTaskInterface, nullptr, "OnStop", nullptr, nullptr, sizeof(TriggerTaskInterface_eventOnStop_Parms), Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTriggerTaskInterface_OnStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTriggerTaskInterface_OnStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTriggerTaskInterface_NoRegister()
	{
		return UTriggerTaskInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTriggerTaskInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTriggerTaskInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TriggerRunTime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTriggerTaskInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnActive, "OnActive" }, // 4264314766
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnCanBeToggled, "OnCanBeToggled" }, // 1906271652
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnCanEndTaskAutomaically, "OnCanEndTaskAutomaically" }, // 3096532086
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnCanTick, "OnCanTick" }, // 3997350609
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnEnd, "OnEnd" }, // 1749888599
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnFinished, "OnFinished" }, // 349166939
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed, "OnNotifyOtherTriggerSuccessed" }, // 949239895
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnPause, "OnPause" }, // 1107256689
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnPostFinished, "OnPostFinished" }, // 3331184494
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnPrepare, "OnPrepare" }, // 1190663940
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveNotifyOthers, "OnReceiveNotifyOthers" }, // 2650422346
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnReceiveTick, "OnReceiveTick" }, // 1299416922
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnReset, "OnReset" }, // 2757975982
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnResume, "OnResume" }, // 3063012269
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnSelectedInEditor, "OnSelectedInEditor" }, // 3237742449
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnSkipped, "OnSkipped" }, // 76153944
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnSleeping, "OnSleeping" }, // 3443383926
		{ &Z_Construct_UFunction_UTriggerTaskInterface_OnStop, "OnStop" }, // 173651705
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTriggerTaskInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Trigger|Task" },
		{ "ModuleRelativePath", "Public/TriggerTask/TriggerTaskInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTriggerTaskInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITriggerTaskInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTriggerTaskInterface_Statics::ClassParams = {
		&UTriggerTaskInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTriggerTaskInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTriggerTaskInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTriggerTaskInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTriggerTaskInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTriggerTaskInterface, 4219316334);
	template<> TRIGGERRUNTIME_API UClass* StaticClass<UTriggerTaskInterface>()
	{
		return UTriggerTaskInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTriggerTaskInterface(Z_Construct_UClass_UTriggerTaskInterface, &UTriggerTaskInterface::StaticClass, TEXT("/Script/TriggerRunTime"), TEXT("UTriggerTaskInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTriggerTaskInterface);
	static FName NAME_UTriggerTaskInterface_OnActive = FName(TEXT("OnActive"));
	void ITriggerTaskInterface::Execute_OnActive(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnActive);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnCanBeToggled = FName(TEXT("OnCanBeToggled"));
	void ITriggerTaskInterface::Execute_OnCanBeToggled(UObject* O, bool& Result)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnCanBeToggled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnCanBeToggled);
		if (Func)
		{
			Parms.Result=Result;
			O->ProcessEvent(Func, &Parms);
			Result=Parms.Result;
		}
	}
	static FName NAME_UTriggerTaskInterface_OnCanEndTaskAutomaically = FName(TEXT("OnCanEndTaskAutomaically"));
	void ITriggerTaskInterface::Execute_OnCanEndTaskAutomaically(UObject* O, bool& Result, ETriggerTaskAutomaticallyEndType EndType)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnCanEndTaskAutomaically_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnCanEndTaskAutomaically);
		if (Func)
		{
			Parms.Result=Result;
			Parms.EndType=EndType;
			O->ProcessEvent(Func, &Parms);
			Result=Parms.Result;
		}
	}
	static FName NAME_UTriggerTaskInterface_OnCanTick = FName(TEXT("OnCanTick"));
	bool ITriggerTaskInterface::Execute_OnCanTick(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnCanTick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnCanTick);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskInterface_OnEnd = FName(TEXT("OnEnd"));
	void ITriggerTaskInterface::Execute_OnEnd(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnEnd);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnFinished = FName(TEXT("OnFinished"));
	void ITriggerTaskInterface::Execute_OnFinished(UObject* O, UOperationInformationBase* FinishOperationInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnFinished_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnFinished);
		if (Func)
		{
			Parms.FinishOperationInfo=FinishOperationInfo;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed = FName(TEXT("OnNotifyOtherTriggerSuccessed"));
	bool ITriggerTaskInterface::Execute_OnNotifyOtherTriggerSuccessed(UObject* O, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* Task)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnNotifyOtherTriggerSuccessed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnNotifyOtherTriggerSuccessed);
		if (Func)
		{
			Parms.TargetTaskComponent=TargetTaskComponent;
			Parms.Task=Task;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskInterface_OnPause = FName(TEXT("OnPause"));
	void ITriggerTaskInterface::Execute_OnPause(UObject* O, UOperationInformationBase* Operation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnPause_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnPause);
		if (Func)
		{
			Parms.Operation=Operation;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnPostFinished = FName(TEXT("OnPostFinished"));
	void ITriggerTaskInterface::Execute_OnPostFinished(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnPostFinished);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnPrepare = FName(TEXT("OnPrepare"));
	bool ITriggerTaskInterface::Execute_OnPrepare(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnPrepare_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnPrepare);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskInterface_OnReceiveNotifyOthers = FName(TEXT("OnReceiveNotifyOthers"));
	bool ITriggerTaskInterface::Execute_OnReceiveNotifyOthers(UObject* O, UTriggerTaskComponentBase* TargetTaskComponent, UTriggerTaskBase* SendTask, UOperationInformationBase* StartOperationInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnReceiveNotifyOthers_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnReceiveNotifyOthers);
		if (Func)
		{
			Parms.TargetTaskComponent=TargetTaskComponent;
			Parms.SendTask=SendTask;
			Parms.StartOperationInfo=StartOperationInfo;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskInterface_OnReceiveTick = FName(TEXT("OnReceiveTick"));
	bool ITriggerTaskInterface::Execute_OnReceiveTick(UObject* O, float DeltaTime)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnReceiveTick_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnReceiveTick);
		if (Func)
		{
			Parms.DeltaTime=DeltaTime;
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UTriggerTaskInterface_OnReset = FName(TEXT("OnReset"));
	void ITriggerTaskInterface::Execute_OnReset(UObject* O, UOperationInformationBase* ResetOperationInfo)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnReset_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnReset);
		if (Func)
		{
			Parms.ResetOperationInfo=ResetOperationInfo;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnResume = FName(TEXT("OnResume"));
	void ITriggerTaskInterface::Execute_OnResume(UObject* O, UOperationInformationBase* Operation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnResume_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnResume);
		if (Func)
		{
			Parms.Operation=Operation;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnSelectedInEditor = FName(TEXT("OnSelectedInEditor"));
	void ITriggerTaskInterface::Execute_OnSelectedInEditor(UObject* O, UObject* SelectedActor)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnSelectedInEditor_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnSelectedInEditor);
		if (Func)
		{
			Parms.SelectedActor=SelectedActor;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnSkipped = FName(TEXT("OnSkipped"));
	void ITriggerTaskInterface::Execute_OnSkipped(UObject* O, UOperationInformationBase* SkipStyle)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnSkipped_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnSkipped);
		if (Func)
		{
			Parms.SkipStyle=SkipStyle;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnSleeping = FName(TEXT("OnSleeping"));
	void ITriggerTaskInterface::Execute_OnSleeping(UObject* O, UOperationInformationBase* SleepOperation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnSleeping_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnSleeping);
		if (Func)
		{
			Parms.SleepOperation=SleepOperation;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_UTriggerTaskInterface_OnStop = FName(TEXT("OnStop"));
	void ITriggerTaskInterface::Execute_OnStop(UObject* O, UOperationInformationBase* StopOperation)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UTriggerTaskInterface::StaticClass()));
		TriggerTaskInterface_eventOnStop_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UTriggerTaskInterface_OnStop);
		if (Func)
		{
			Parms.StopOperation=StopOperation;
			O->ProcessEvent(Func, &Parms);
		}
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
