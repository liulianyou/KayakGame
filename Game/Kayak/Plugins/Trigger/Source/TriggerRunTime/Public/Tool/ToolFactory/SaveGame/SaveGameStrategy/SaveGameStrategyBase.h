#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "SaveGameStrategyBase.generated.h"

class USaveGameStrategyBase;
class USaveGameConfigBase;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSaveGameDelegate, USaveGameConfigBase*, ConfigData);

UCLASS(BlueprintType, Blueprintable, abstract, hidedropdown, Category = "TriggerRuntime|SaveSystem")
class TRIGGERRUNTIME_API USaveGameStrategyBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* Register object to this strategy so that this strategy can save this Object
	*/
	virtual void RegisterObject( UObject* Object );

	/*
	* Unregister the object form this strategy
	*/
	virtual void UnRegisterObject(UObject* Object);

	/*
	* When load new data I will use this function to preprocess the save data
	* 
	* #return the class which can process this data
	*/
	virtual TSubclassOf<USaveGameStrategyBase> PreporcessData(USaveGameConfigBase* SaveConfigData);

	/*
	* Called when the save game system want to save game
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SaveSystem")
	void OnSaveGame(USaveGameConfigBase* SaveConfigData);

	/*
	* Serialize game object
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveSystem")
	virtual void SaveGameSerialize(USaveGameConfigBase* SaveConfigData);

	/*
	* Called when the save game system want to load game
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SaveSystem")
	void OnPreLoadGame(USaveGameConfigBase* SaveConfigData);

	/*
	* Do some preparation for current deserialize
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveSystem")
	virtual void PreSaveGameDeSerialize(USaveGameConfigBase* SaveConfigData);

	/*
	* Called when the save game system is loading game
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SaveSystem")
	void OnLoadGame(USaveGameConfigBase* SaveConfigData);

	/*
	* Deserialize game object to restore it.
	* This should be the main function to do actual deserialize action
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveSystem")
	virtual void SaveGameDeSerialize(USaveGameConfigBase* SaveConfigData);

	/*
	* Called when the save game system is loading game
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "TriggerRuntime|SaveSystem")
	void OnPostLoadGame(USaveGameConfigBase* SaveConfigData);

	/*
	* Do some post procession after deserialize;
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveSystem")
	virtual void PostSaveGameDeSerialalize(USaveGameConfigBase* SaveConfigData);

public:

	/*
	* These event is executed before BP function
	*/
	UPROPERTY(BlueprintAssignable, Transient)
	FOnSaveGameDelegate OnSaveGameDelegate;
	UPROPERTY(BlueprintAssignable, Transient)
	FOnSaveGameDelegate OnPreLoadGameDelegate;
	UPROPERTY(BlueprintAssignable, Transient)
	FOnSaveGameDelegate OnLoadGameDelegate;
	UPROPERTY(BlueprintAssignable, Transient)
	FOnSaveGameDelegate OnPostLoadGameDelegate;

};