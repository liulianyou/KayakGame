#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/26
* Purpose:	This is used to describe what is one property in the item data snippet
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "ItemDataSnippetProperty.generated.h"

class UItemDataSnippetBase;

/*
* used to describe which property in the item data snippet
*/
USTRUCT(BlueprintType, meta=(HasNativeMake="Item.ItemBlueprintLib.MakeNewItemDataSnippetProperty"))
struct ITEM_API FItemDataSnippetProperty
{
	GENERATED_BODY()

public:

	FItemDataSnippetProperty() : Property(nullptr), Owner(nullptr) {}
	explicit FItemDataSnippetProperty(FProperty* MemberProperty, UItemDataSnippetBase* DataOwner) : Property(MemberProperty), Owner(DataOwner) {}
	FItemDataSnippetProperty( const FItemDataSnippetProperty& OtherValue );
	FItemDataSnippetProperty(FItemDataSnippetProperty&& OtherValue);

	FItemDataSnippetProperty& operator =(const FItemDataSnippetProperty&);
public:

	template<class PropertyType>
	PropertyType* GetPropertyValue()
	{
		if (!IsComplete())
			return nullptr;

		return Property->ContainerPtrToValuePtr<PropertyType>(Owner);
	}

	template<class PropertyType>
	PropertyType* GetPropertyValue( UItemDataSnippetBase* DataSnippet )
	{
		if (!IsValid() || DataSnippet == nullptr || !DataSnippet->HasProperty(*this))
			return nullptr;

		return Property->ContainerPtrToValuePtr<PropertyType>(DataSnippet);
	}

	/*
	* Check weather this property info has valid FProperty
	*/
	bool IsValid() const;

	/*
	* Check weather this property info is completed
	* When this property is completed then I can use this property to access to item system directly
	*/
	bool IsComplete() const;

	FProperty* GetProperty() const { return Property.Get(); }

	void SetProperty( FProperty* Property );

	void SetOwner(UItemDataSnippetBase* InOwner);

	UItemDataSnippetBase* GetOwner() const;

private:

	/*
	* Which property in the data snippet
	*/
	UPROPERTY(EditAnywhere, Category = ItemDataSnippet, meta = (AllowPrivateAccess = true))
	TFieldPath<FProperty> Property = nullptr;

	/*
	* which data snippet instance own this property.
	*/
	UPROPERTY(BlueprintReadOnly, Category = "ItemDataSnippet", meta = (AllowPrivateAccess = true))
	UItemDataSnippetBase* Owner = nullptr;
};