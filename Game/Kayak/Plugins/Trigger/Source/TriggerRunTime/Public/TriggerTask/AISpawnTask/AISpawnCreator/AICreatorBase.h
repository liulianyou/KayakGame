#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/2
* Purpose:	This creator used to define how to create the new AI according specific data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "TriggerDefinition.h"
#include "Templates/SubclassOf.h"
#include "TT_AISpawn.h"
#include "AISpawnDataBase.h"
#include "AICreatorBase.generated.h"

class UAISpawnDataBase;
class AAIController;
class APawn;


UCLASS(Blueprintable, BlueprintType, Abstract, DefaultToInstanced, editinlinenew, hidedropdown, Category = "AICreator")
class TRIGGERRUNTIME_API UAICreatorBase : public UObject
{
	GENERATED_UCLASS_BODY()

public:
	
	/*
	* Function to check weather the creator can use the NPCID to get the controller class
	*/
	UFUNCTION(BlueprintNativeEvent)
	bool CanGetControllerClassFromNPCID();

	UFUNCTION(BlueprintNativeEvent)
	void SetAIInfo(const FAIInfo& AIInfo);

	UFUNCTION(BlueprintNativeEvent)
	void SetPawnInfo(const FPawnInfo& PawnInfo);

public:

	UFUNCTION(BlueprintImplementableEvent)
	AAIController* OnCreateNewAI(APawn*& CreatedPawn );
	/*
	* Create New AI
	*/
	UFUNCTION(BlueprintCallable)
	AAIController* CreateNewAI( APawn*& CreatedPawn );

	UFUNCTION(BlueprintCallable)
	const FTransform& GetTransfrom() const { return AITransform; }

	UFUNCTION(BlueprintCallable)
	void SetTransfrom( const FTransform& Transform){ AITransform = Transform; }

protected:

	/*
	* Do something after new AI is Created
	*/
	UFUNCTION(BlueprintImplementableEvent)
	void OnPostCreator(AAIController* Controller);
	UFUNCTION(BlueprintCallable)
	virtual void PostCreator(AAIController* Controller );

	virtual AAIController* NativeCreateNewAI(APawn*& CreatedPawn);

private:
	
	//The Transform for the target AI
	FTransform AITransform;

};

UCLASS(Blueprintable, BlueprintType, meta = (DisplayName = "Created By the type ID of NPC"))
class TRIGGERRUNTIME_API UAICreatorByID : public UAICreatorBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAICreatorBase
	virtual AAIController* NativeCreateNewAI(APawn*& CreatedPawn) override;
	virtual void SetAIInfo_Implementation(const FAIInfo& AIInfo) override;
	virtual void SetPawnInfo_Implementation(const FPawnInfo& PawnInfo) override;
	virtual void PostCreator(AAIController* Controller ) override;
	//Override UAICreatorBase

public:

	UFUNCTION(BlueprintCallable)
	void SetNPCID( int NPCID );
	UFUNCTION(BlueprintCallable)
	int GetNPCID(){ return NPCID; }

	UFUNCTION(BlueprintCallable)
	void SetBehaviorCommand( const FAISpawnBehaviorCommand& LocalBehaviorCommand);
	UFUNCTION(BlueprintCallable)
	const FAISpawnBehaviorCommand& GetBehaviorCommand() const { return BehaviorCommand; }

protected:

	/*
	* Maybe sometimes when new AI Created, it should be forced to do something.
	*/
	void SetAICommand(AAIController* Controller);

private:
	
	//The class of the controller for the target AI
	int NPCID = INDEX_NONE;

	//The behavior command which should be applied when the AI is spawned
	FAISpawnBehaviorCommand BehaviorCommand;
};

UCLASS(Blueprintable, BlueprintType, Within = "AISpawnDataBase", meta = (DisplayName = "Created By AIInfo"))
class TRIGGERRUNTIME_API UAICreatorByAIInfo : public UAICreatorByID
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override AICreatorBase
	virtual bool CanGetControllerClassFromNPCID_Implementation() override;
	virtual AAIController* NativeCreateNewAI(APawn*& CreatedPawn) override;
	virtual void SetAIInfo_Implementation(const FAIInfo& AIInfo) override;
	//Override AICreatorBase

public:

	UFUNCTION(BlueprintCallable)
	FAIInfo& GetAIInfo() { return AIInfo; }

	UFUNCTION(BlueprintCallable)
	UAISpawnDataBase* GetAISpawnData();

public:

	FAIInfo AIInfo;
};

/*
* Create new AI with the ID which stands for the type of NPC
*/
UCLASS(Blueprintable, BlueprintType, Within = "TT_AISpawn", meta = (DisplayName = "Created By Instanced NPC ID"))
class TRIGGERRUNTIME_API UAICreatorByInstanceID  : public UAICreatorByID
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAICreatorBase
	virtual AAIController* NativeCreateNewAI(APawn*& CreatedPawn) override;
	//Override UAICreatorBase
};


UCLASS()
class TRIGGERRUNTIME_API UAICreatorByControllerClass : public UAICreatorByID
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAICreatorBase
	virtual AAIController* NativeCreateNewAI(APawn*& CreatedPawn) override;
	//Override UAICreatorBase

public:

	UFUNCTION(BlueprintCallable)
	void SetControllerClass(UClass* LocalControllerClass);
	UFUNCTION(BlueprintCallable)
	UClass* GetControllerClass() const { return ControllerClass; }

	UFUNCTION(BlueprintCallable)
	void SetPawnClass(UClass* LocalPawnClass);
	UFUNCTION(BlueprintCallable)
	UClass* GetPawnClass() const { return PawnClass; }

	UFUNCTION(BlueprintCallable)
	void SetBTPath(const FSoftObjectPath& LocalBTPath);
	UFUNCTION(BlueprintCallable)
	const FSoftObjectPath& GetBTPath() const { return BTPath; }

	UFUNCTION(BlueprintCallable)
	void SetAISpawnData(UAISpawnDataBase* LocalAISpawnData);
	UFUNCTION(BlueprintCallable)
	UAISpawnDataBase* GetAISpawnData() const { return AISpawnData; }

private:
	
	UClass* ControllerClass = nullptr;

	UClass* PawnClass = nullptr;

	FSoftObjectPath BTPath;

	UAISpawnDataBase* AISpawnData;

};


