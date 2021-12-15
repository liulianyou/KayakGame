#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/8
* Purpose:	Customize the properties in detail's panel
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "IPropertyTypeCustomization.h"
#include "Blueprint/UserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "UObject/ScriptInterface.h"

#include "TriggerInterface.h"

#include "TriggerTaskDetailCusomize.generated.h"

class UTriggerTaskComponentBase;
class UTriggerTaskBase;
class UComboBoxString;
class UHorizontalBox;
class UTextBlock;
class UListView;
class AActor;

#define USE_UMG 1

DECLARE_MULTICAST_DELEGATE_OneParam(FNewTriggerTaskAssigned, UTriggerTaskBase* /* = NewTriggerTask*/);

UCLASS(Blueprintable, BlueprintType)
class TRIGGEREDITOR_API UTriggerTaskListItemData : public UObject
{
	GENERATED_UCLASS_BODY()

public:

	/*
	* The pending trigger task
	*/
	UPROPERTY(Transient)
	TSoftObjectPtr<UTriggerTaskBase> RootTaskToFindChildTasks = nullptr;

	/*
	* The actual trigger task for the list entry
	* If this value is not null then TriggerTaskName will be shown
	*/
	UPROPERTY(Transient)
	TSoftObjectPtr<UTriggerTaskBase> TriggerTask = nullptr;

	//If this variable is not null then the PendingTask combobox will shown to make the user to select one trigger task
	UPROPERTY(Transient)
	TSoftObjectPtr<UTriggerTaskComponentBase> TriggerTaskComponent = nullptr;

};


UCLASS(Blueprintable, BlueprintType)
class TRIGGEREDITOR_API UFTriggerTaskListEntry : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_UCLASS_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;

	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;

protected:

	UFUNCTION()
	void OnPendingTaskSelectedChange(FString SelectedItem, ESelectInfo::Type SelectionType);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UComboBoxString* PendingTask;

private:

	UPROPERTY(Transient)
	UTriggerTaskListItemData* ListData = nullptr;

};

/*
* This widget is used to maintain the Struct FTriggerTask in the details panel
*/
UCLASS(Blueprintable, BlueprintType)
class TRIGGEREDITOR_API UFTriggerTaskDetailPanelWidget : public UUserWidget
{
	GENERATED_UCLASS_BODY()

public:

	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;


public:

	void SetTriggerTask(UTriggerTaskBase* NewTriggerTask);

	void SetPropertyHandle(TSharedRef<IPropertyHandle> InPropertyHandle);

protected:

	UFUNCTION()
	void OnOpeningTriggerComponentCombox();

	UFUNCTION()
	void OnSelctedChangeInTriggerTaskComponent(FString SelectedItem, ESelectInfo::Type SelectionType);

	UFUNCTION()
	void OnOpeningTriggerWidget();

	UFUNCTION()
	void OnSelctedChangeInTriggerWidget(FString SelectedItem, ESelectInfo::Type SelectionType);

protected:

	//Get all components in the world
	void GetAllTriggers(TArray<TScriptInterface<ITriggerInterface>>& Triggers);

	//Callback when the develop click the browser button
	void BrowserTo();

	/*
	* Delegate for handling classes of objects that can be picked.
	* @param	AllowedClasses	The array of classes we allow
	*/
	void OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses);

	/*
	* Delegate for handling selection in the scene outline.
	* @param	InActor	The chosen actor
	*/
	void OnActorSelected(AActor* InActor);

	

protected:

	void UpdateTriggerWidget(UObject* NewTrigger);

	void UpdateTriggerTaskComponentWidget( UTriggerTaskComponentBase* NewComponent );

	void UpdateTriggerTaskViewlist( UTriggerTaskBase* NewTriggerTask );

protected:

	/*
	* Refresh the cashed list data when the trigger task is changed
	*/
	void UpdateCashedTriggerListData();

private:

	FString GetComponentName(UTriggerTaskComponentBase* Component);

	FString GetTriggerName( UObject* Trigger );

public:

	//This widget used to show all the triggers in the world
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UComboBoxString* TriggerWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UComboBoxString* TriggerTaskComponentWidget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UListView* TriggerTaskViewlist;

	//This will hold all the operations for the triggers
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidget))
	UHorizontalBox* TrigerHorizontal;

private:

	//The value in the trigger task struct
	TSoftObjectPtr<UTriggerTaskBase> TriggerTask = nullptr;

	UTriggerTaskComponentBase* SelctedComponent = nullptr;

	UObject* SelectedTrigger = nullptr;

	//The temp data used to set to TriggerTaskViewList
	UPROPERTY(Transient)
	TArray<UTriggerTaskListItemData*> CashedTriggerTaskListDatas;

	//The property this widget need to inspect
	TSharedPtr<IPropertyHandle> PropertyHandle;
};

/*
* Customize all trigger tasks properties showed in the details panel
* These trigger task should not create new instance, it should refer to existed tasks in the world
*/
class FTriggerTaskDetailCustomize : public IPropertyTypeCustomization
{
public:

	FTriggerTaskDetailCustomize();
	~FTriggerTaskDetailCustomize();
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	// IPropertyTypeCustomization interface
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> InPropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	// End of IPropertyTypeCustomization interface



#if USE_UMG

public:

	TSharedRef<SWidget> CrateTriggerTaskDetailsPanel(TSharedRef<IPropertyHandle> InPropertyHandle);

private:

	UFTriggerTaskDetailPanelWidget* TriggerTaskWidget = nullptr;

#else
public:

	/*
	* Clean up this data to avoid crash
	*/
	void CleanUp();

	//Get the actual widget chain for the target value
	TSharedRef<SWidget> GetCustomizedTaskComponentWidget();

	//Create the task widget recursively which will end by the end task  
	TSharedRef<SWidget> CreateTaskWidgetRecursively(TSharedRef<SWidget> ParentWidget, UTriggerTaskBase* EndTask);

	//Create one widget which will show the trigger task component
	TSharedRef<SWidget>CreateTaskComponentWidget();
	//Create one widget which is represent for the task
	TSharedRef<SWidget> CreateCustomizedTaskWidget(TSharedPtr<SWidget> ParentWidget, FString WidgetName = TEXT("None"));

protected:

	//Callback when the develop click the browser button
	void BrowserTo();

	/*
	* Delegate for handling classes of objects that can be picked.
	* @param	AllowedClasses	The array of classes we allow
	*/
	void OnGetAllowedClasses(TArray<const UClass*>& AllowedClasses);

	/*
	* Delegate for handling selection in the scene outliner.
	* @param	InActor	The chosen actor
	*/
	void OnActorSelected(AActor* InActor);

	/*The icon for Triggers who own the trigger task component*/
	const FSlateBrush* GetTriggerTaskComponentDisplayValueIcon()const;

	FText GetTriggerTaskComponentDisplayValueAsString() const;

	//Get the icon for Tasks
	const FSlateBrush* GetTaskDisplayValueIcon()const;
	FText GetTaskDisplayValueAsString() const;

	TSharedRef<SWidget> GenerateTriggerTaskComponentPicker();
	TSharedRef<SWidget> GenerateTaskPicker();
	//Callback when  combo button opened
	void OnComboButtonOpen();

	//Called when the player click the first button 
	void OnTaskComponentClicked(UTriggerTaskComponentBase* Component);

	TSharedRef<ITableRow> OnGenerateTriggerTaskComponentRow(UTriggerTaskComponentBase* Component, const TSharedRef<STableViewBase>& OwnerTable);
	void OnTriggerTaskComponentSelectedChanged(UTriggerTaskComponentBase* Component, ESelectInfo::Type SelectInfo);

	TSharedRef<ITableRow> OnGenerateTaskRow(UTriggerTaskBase* Task, const TSharedRef<STableViewBase>& OwnerTable);
	void OnTaskSelectedChanged(UTriggerTaskBase* Task, ESelectInfo::Type SelectInfo);

protected:

	int GetTaskWidgetIndex(UTriggerTaskBase* FindTask);

	/*
	* Get the final task form the target task
	*/
	int GetTaskWidgetIndexInternal(UTriggerTaskBase* FindTask, UTriggerTaskBase* TargetTask, int index = -1);

	//When trigger task component is changed we should regenerate the task widget
	void RegeneratedTaskWidget();

private:
	TSharedPtr<IPropertyHandle> PropertyHandle;

	//The root widget for the task
	TSharedPtr<SWidget> TaskComponentWidget;

	//The widget for the task in the trigger component or the child task for the specific task
	TArray<TSharedPtr<SWidget>> TaskWidgets;

	//The text widget for the task in the trigger component or the child task for the specific task
	TArray<TSharedPtr<SWidget>> TaskTextWidgets;

	//The combo buttons for the task in the trigger component or the child task for the specific task
	TArray<TSharedPtr<SWidget>> ComboButtons;

	TSharedPtr<SWidget> TaskComponentTextWidget;

	TSharedPtr<SWidget> ComponentListViewWidget;

private:
	int CurrentSlectedComponentIndex = 0;

	//The tasks that we process
	TArray<UTriggerTaskBase*> TaskChain;
	//The index that we click the combo button
	int CurrentTryToChangedTaskIndex = -1;
private:
	//Cash all trigger task components
	TArray<UTriggerTaskComponentBase*> Components;
#endif
};



