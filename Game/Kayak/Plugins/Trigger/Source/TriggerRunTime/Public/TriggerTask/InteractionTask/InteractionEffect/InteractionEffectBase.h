#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/24
* Purpose:	This is the base class for the interaction task when the interaction task runs 
*			some dynamic things should be executed such as show one UI or show one particle effect
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "TriggerTask/InteractionTask/InteractionDefinition.h"
#include "TriggerDefinition.h"
#include "TriggerEffectDataBase.h"
#include "EffectDataOperationStyle.h"

#include "InteractionEffectBase.generated.h"

class UTT_Interaction;
class UInteractionRuleBase;
class UInteractionRuleDataBase;

/*
* This effect data close style is used to make TT_Interaction to tell its UIEffect how to Open itself
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|EffectData")
class TRIGGERRUNTIME_API UInteractionOpenStyle : public UEffectDataOpenStyleBase
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable)
	const FInteractionInfo& GetIneractionInfo() const { return InteractionInfo;}

	UFUNCTION(BlueprintCallable)
	void SetIneractionInfo(const FInteractionInfo& Info)  {InteractionInfo = Info;}

private:

	/*
	* The interaction information which the TT_Interaction will tell the effect data
	*/
	FInteractionInfo InteractionInfo;
};

/*
* This effect data close style is used to make TT_Interaction to tell its UIEffect how to close itself
*/
UCLASS(Blueprintable, BlueprintType, Category = "TriggerRuntime|EffectData")
class TRIGGERRUNTIME_API UInteractionCloseStyle : public UEffectDataCloseStyleBase
{
	GENERATED_UCLASS_BODY()

public:

	UFUNCTION(BlueprintCallable)
	const FInteractionInfo& GetIneractionInfo() const { return InteractionInfo;}

	UFUNCTION(BlueprintCallable)
	void SetIneractionInfo(const FInteractionInfo& Info ) { InteractionInfo = Info; }

	UFUNCTION(BlueprintCallable)
	const EInteractionEndType GetEndType() const { return EndType; }

	UFUNCTION(BlueprintCallable)
	void SetEndType(EInteractionEndType Type) {  EndType = Type; }

	UFUNCTION(BlueprintCallable)
	bool IsRemoveInstance() const { return RemoveInstance; }

	UFUNCTION(BlueprintCallable)
	void SetRemoveInstance( bool Value ) { RemoveInstance = Value; }

private:

	/*
	* The interaction information which the TT_Interaction will tell the effect data
	*/
	FInteractionInfo InteractionInfo;

	//How the TT_Interaction end interaction
	EInteractionEndType EndType;

	//Weather need to remove instance in this data, such as the created UI widget, VFX...
	bool RemoveInstance;
};


/*
* The base effect for the interaction task, all these effect should be run on the client.
* 
* The derived class must implement the below functions:
*	OpenEffect : This function is used to open this effect,
*	CloseEffect : This function is used to close this effect,
*	ValueInInteractionRuleChanged : This function used to change the effect when some status is changed in the interaction rule
*/
UCLASS(BlueprintType,Blueprintable , editinlinenew, hidedropdown, DefaultToInstanced, Within = "TT_Interaction", Category = "InteractionEffect")
class TRIGGERRUNTIME_API UInteractionEffectBase : public UTriggerEffectDataBase
{
	GENERATED_UCLASS_BODY()

public:
	//Override UObject
	virtual void PostInitProperties() override;
	//Override UObject

	//Override UEffectDataBase
	virtual void Initialize( UTriggerTaskBase* TriggerTask) override;  
	virtual void Reset( UOperationInformationBase* ResetOperation ) override;
	//Override UEffectDataBase
public:

	UFUNCTION(BlueprintImplementableEvent)
	void OnValueInInteractionRuleChanged(AActor* Causer, UInteractionRuleDataBase* Data);

	//Try to open the this effect according different status
	void TryToOpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);
	virtual void OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);
	virtual void CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle);
	//When some value is changed in the interaction rule this function should be invoked
	virtual void ValueInInteractionRuleChanged(AActor* Causer, UInteractionRuleDataBase* Data);

	/*
	* Try to check weather the interaction support is implemented for the Target object  
	* The following three functions stand for Initialize, Update(also can treat it as tick function), Finished 
	*
	* Notice: These function will not called in the base function as the base function don't contain any target object
	*/
	UFUNCTION(BlueprintCallable)
	void CheckInteractionSupportForInitialize(UObject* Target, UTriggerTaskBase* TriggerTask = nullptr);
	UFUNCTION(BlueprintCallable)
	void CheckInteractionSupportForUpdate(UObject* Target, UInteractionRuleDataBase* Data);
	UFUNCTION(BlueprintCallable)
	void CheckInteractionSurpportForEnd(UObject* Target, UTT_Interaction* Task, EInteractionEndType EndType, bool RemoveInstance);

	/*
	* As sometimes one player may toggle more than one interaction task,
	* And one of its effect is executive which means the target effect will only exist one instance for each interaction task
	* this means one effect may refer to multiply interaction task.
	* So I need to determine which is the current valid task that this effect can process or inspector to
	*
	* @param Target the actual object that this effect created
	*/
	UFUNCTION(BlueprintCallable)
	virtual UTriggerTaskBase* GetCurrentVaildInteractionTask( UObject* TargetObject );

public:

	//Check weather this effect will active on client or server or both of them
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "InteractionEffect")
	ERunType RunType;
};