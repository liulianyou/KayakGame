#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/22
* Purpose:	All data used in item data or item runtime data should contain the combination of different data snippet
*			The data snippet is the atomic data unit
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Engine/EngineTypes.h"

#include "ItemDataSnippetBase.generated.h"

class UItemDataBase;
class UItemRuntimeDataBase;
class UDataAppliedRuleBase;

/*
* This is the snippet of used in the data
* Each item data and runtime data will be the combination of some data snippets
* The snippet data will define when and how to apply the data to the target object from item runtime data.
* The snippet data will define how to generate the actual default value form resources
*/
UCLASS(Blueprintable, BlueprintType, Abstract, Category = "Item|SnippetData")
class ITEM_API UItemDataSnippetBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override UObject
	virtual void BeginDestroy() override;
	/*
	* Override the GetWorld function so that the BP can use the functions which can only used in the Actor BP
	*/
	virtual UWorld* GetWorld() const override;

#pragma  region NetworkSupport
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const;
	virtual bool IsNameStableForNetworking() const override;
	virtual bool IsSupportedForNetworking() const { return true; }
	virtual int32 GetFunctionCallspace(UFunction* Function, FFrame* Stack) override;
	virtual bool CallRemoteFunction(UFunction* Function, void* Parms, struct FOutParmRec* OutParms, FFrame* Stack) override;
	virtual void PreNetReceive() override;
	virtual void PostNetReceive() override;
	//Override UObject

	//Replicate the sub objects in this item runtime data 
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags);
#pragma  endregion NetworkSupport

public:
	
	UFUNCTION(BlueprintImplementableEvent, Category = "SnippetNata", meta=(DisplayName = "Activate"))
	void OnActivate();
	//Active this snippet data which only invoked by the item runtime data
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	virtual void Activate();

	UFUNCTION(BlueprintImplementableEvent, Category = "SnippetNata", meta = (DisplayName = "Activate"))
	void OnDeactivate();
	//Deactive this snippet data which only invoked by the item runtime data
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	virtual void Deactivate();

	UFUNCTION(BlueprintImplementableEvent, Category = "SnippetNata", meta = (DisplayName = "Initialized"))
	void OnInitialized();
	/*
	* Initialize this data snippet.
	* This function will only worked on the server.
	* After this data initialized all the property in this data will be treated valid
	*/
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	virtual void Initialized();

public:

	/*
	* Set/Get the item data owner of this snippet data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "SnippetNata", meta = (DisplayName = "SetItemDataOwner"))
	void OnSetItemDataOwner(UItemDataBase* ItemRuntimeData);
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	virtual void SetItemDataOwner(UItemDataBase* ItemData);
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	UItemDataBase* GetItemDataOwner() const { return ItemDataOwner; }

	/*
	* Set/Get the item runtime data owner of this snippet data
	*/
	UFUNCTION(BlueprintImplementableEvent, Category = "SnippetNata", meta = (DisplayName = "SetItemRuntimeDataOwner"))
	void OnSetItemRuntimeDataOwner(UItemRuntimeDataBase* ItemRuntimeData);
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	void SetItemRuntimeDataOwner(UItemRuntimeDataBase* ItemRuntimeData);
	UFUNCTION(BlueprintCallable, Category = "SnippetNata")
	UItemRuntimeDataBase* GetItemRuntimeDataOwner() const { return RuntimeDataOwner; }

	/*
	* As the data apply rule only exist on the server, the return value can be none on the client
	*/
	UFUNCTION(BlueprintCallable, Category="SnippetNata")
	UDataAppliedRuleBase* GetDataApplyRule() const { return DataApplyRuleInstance; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool IsDataPrepared() const { return !!bDataPrepared; }

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	void MarkDataPrepared();

	UFUNCTION(BlueprintCallable, Category = "ItemRuntimeData")
	bool HasAuthority() const;

protected:

	UFUNCTION()
	virtual void OnRep_RuntimeDataOwner(UItemRuntimeDataBase* OldValue);

public:

	//Define how to apply this snippet to the target in runtime data
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SnippetData")
	TSubclassOf<UDataAppliedRuleBase> DataApplyRule;

private:

	//The instance of the data apply rule which only exist on the server
	UPROPERTY(Transient)
	UDataAppliedRuleBase* DataApplyRuleInstance = nullptr;

	UPROPERTY(ReplicatedUsing = OnRep_RuntimeDataOwner)
	UItemRuntimeDataBase* RuntimeDataOwner;

	/*
	* The item data owner of this snippet data
	* On the client this value should be nullptr
	*/
	UPROPERTY(Transient)
	UItemDataBase* ItemDataOwner = nullptr;

private:

	/*
	* Flag to inspect weather this runtime data can be used by the item owner
	* When this data is created on the server and replicated to the client,
	* maybe some of the properties have not been replicated due to the network limitation.
	* I need to generated weather all the properties have been assigned valid value.
	*/
	uint32 bDataPrepared : 1;

	/*
	* Flag to check weather this data is net addressed
	* As default the net addressable is only worked when the
	*	1:)Object From package, such as map
	*	2:)CDO or default SubObject
	* I need use this member to add external way to set this data is addressable
	*/
	uint32 bNetAddressable : 1;

	/*
	* Flag to make this data snippet only be initialized once
	*/
	uint32 bInitialized : 1;

};

#define ITEMPROPERYREPNOTIFY(ClassType, PropertyType, PropertyName, OldValue )\
	if(GetItemRuntimeDataOwner() == nullptr || GetItemRuntimeDataOwner()->GetComponentOwner() == nullptr)\
		return;\
	struct FProperyChangedScope\
	{\
		FProperyChangedScope(UItemComponentBase* _ItemComponent, UItemDataSnippetBase* _DataSnippet, const FString& _PropertyName)\
			: ItemComponent(_ItemComponent)\
			, DataSnippet(_DataSnippet)\
			, PropertyName(_PropertyName)\
		{}\
		~FProperyChangedScope()\
		{\
			if (ItemComponent == nullptr)\
				return;\
			ItemComponent->ItemRuntimeDataPostChanged.Broadcast(DataSnippet, PropertyName);\
		}\
	private:\
		UItemComponentBase*& ItemComponent;\
		UItemDataSnippetBase* DataSnippet;\
		const FString& PropertyName;\
	} PropertyChangeScope(GetItemRuntimeDataOwner()->GetComponentOwner(), this, GET_MEMBER_NAME_CHECKED(ClassType, PropertyName).ToString());\
	TGuardValue<PropertyType>(PropertyName, OldValue);\
	GetItemRuntimeDataOwner()->GetComponentOwner()->ItemRuntimeDataPreChanged.Broadcast(this, GET_MEMBER_NAME_CHECKED(ClassType, PropertyName).ToString());



