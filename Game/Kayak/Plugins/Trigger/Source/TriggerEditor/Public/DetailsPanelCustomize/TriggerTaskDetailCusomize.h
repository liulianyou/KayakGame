#pragma once

/*
* Author:	Liulianyou
* Time:		2020/9/8
* Purpose:	Customize the properties in detail's panel 
*/

#include "CoreMinimal.h"
#include "IPropertyTypeCustomization.h"
#include "Templates/SharedPointer.h"
#include "TriggerTaskComponent/TriggerTaskComponentBase.h"
#include "Widgets/Views/SListView.h"

class UTriggerTaskBase;

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

public:

	/*
	* Clean up this data to avoid crash
	*/
	void CleanUp();

	//Get the actual widget chain for the target value
	TSharedRef<SWidget> GetCustomizedTaskComponentWidget();

	//Create the task widget recursively which will end by the end task  
	TSharedRef<SWidget> CreateTaskWidgetRecursively(TSharedRef<SWidget> ParentWidget,UTriggerTaskBase* EndTask );

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
	void OnTaskComponentClicked( UTriggerTaskComponentBase* Component);

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

};



