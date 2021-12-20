#pragma once

/*
* Author:	Liulianyou
* Time:		2021/8/16
* Purpose:	The base data which is used for the game play UI to show or inspect.
*			
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Templates/SubclassOf.h"

#include "TriggerEffectDataBase.h"

#include "UIEffectDataBase.generated.h"

class UUserWidget;
class UTriggerTaskBase;


namespace UIEffectDataBase
{
	struct FEffectWidgetInternalData
	{
		UUserWidget* UserWidget;

		UTriggerTaskBase* Task;
	};
}


/*
* The base struct to hold the data which can be used by the effect task.
* 
* 
*/
UCLASS(Blueprintable, BlueprintType, DefaultToInstanced, editinlinenew, Category = "TriggerRuntime|UIData")
class TRIGGERRUNTIME_API UUIEffectDataBase : public UTriggerEffectDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UObject
	virtual void BeginDestroy() override;
	//Override UObject
	//Override EffectDataBase
	virtual void OpenEffect(UTriggerEffectDataOperationStyleBase* OpenStyle);
	virtual void CloseEffect(UTriggerEffectDataOperationStyleBase* CloseStyle);
	virtual void GetInspectedObjects( TArray<UObject*>& InpectedObjects );
	virtual bool CanBeOpened(const TArray<UObject*>& Causers);
	virtual bool CanBeClosed(const TArray<UObject*>& Causers);
	//Override EffectDataBase


	/*
	* According each strategy this function will get one valid user widget
	*/
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	virtual UUserWidget* CreateNewWidget();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	UUserWidget* GetUserWidget() const { return UserWidget; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|UIData")
	void RemoveUserWidget();

protected:

	void RemoveInvalidWidgetFromPool();

public:

	//The target widget which this task will transfer to
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> UIClass;

	//Flag to check weather the target widget should only exist one instance through game
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "UI")
	bool IsExclusive = true;

private:

	UUserWidget* UserWidget = nullptr;

public:

	static TArray<UIEffectDataBase::FEffectWidgetInternalData> Widgets;

};
