#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/24
* Purpose:	This effect only show the UI when the player toggle the interaction task
*/
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"
#include "Blueprint/UserWidget.h"

#include "InteractionEffectBase.h"

#include "InteractionEffect_UI.generated.h"

class APawn;
class UTT_Interaction;

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FWidgetInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UUserWidget> WidgetClass;

	//Flag to check weather this widget should only have one instance in the target client
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool IsExecutive = true;
};

USTRUCT(BlueprintType)
struct TRIGGERRUNTIME_API FOpenWidgetInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient)
	UTT_Interaction* Task;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UUserWidget* Widget;
};


UCLASS(Blueprintable,BlueprintType, editinlinenew, DefaultToInstanced, Within="TT_Interaction")
class TRIGGERRUNTIME_API UInteractionEffect_UI : public UInteractionEffectBase
{
	GENERATED_UCLASS_BODY()

public:
	//Override InteractionEffectBase
	virtual void OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);
	virtual void CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle);
	virtual void ValueInInteractionRuleChanged(AActor* Causer, UInteractionRuleDataBase* Data);
	virtual void Reset( UOperationInformationBase* ResetOperation ) override;
	//Override InteractionEffectBase

	virtual void BeginDestroy() override;
public:

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps)const;

public:
	UFUNCTION()
	void WorldTearDown(UWorld* World);
private:
	FDelegateHandle TearDownHandle;

protected:

	//Open widget according current state
	virtual UUserWidget* OpenWidget(const FInteractionInfo& Info);

	virtual void CloseWidget(const FInteractionInfo& Info, EInteractionEndType EndType, bool RemoveInstance);

	//Get valid world from actor
	UWorld* GetVaildWorld(AActor* Actor);

	//Get the pawn who toggle this Interaction task to active this effect
	UFUNCTION(BlueprintCallable)
	APawn* GetInteractionPawn( AActor* Actor );

	/*
	* Check weather there is one widget bind to this task
	*/
	UUserWidget* CheckBindedWidget(AActor* Causer);

public:
	
	//All the widgets class that will be showed in the effect
	UPROPERTY(BlueprintReadWrite, EditAnywhere, export, Category = "InteractionEffect")
	TArray<FWidgetInfo> WidgetInfos;

private:

	EInteractionEndType EndInteractionType = EInteractionEndType::EInteractionEndType_Max;

	//static TMap<UTT_Interaction*, UUserWidget*> OpenedWidgets;
	
	static TArray<FOpenWidgetInfo> OpenedWidgets;
};