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
USTRUCT(BlueprintType)
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
		if (Owner == nullptr || Property == nullptr)
			return nullptr;

		return Property->ContainerPtrToValuePtr<PropertyType>(Owner);
	}

	bool IsValid() const;

	FProperty* GetProperty() const { return Property.Get(); }

	void SetProperty( FProperty* Property );

	void SetOwner(UItemDataSnippetBase* InOwner);

	UItemDataSnippetBase* GetOwner() const;

private:

	/*
	* Which property in the data snippet
	*/
	UPROPERTY(EditAnywhere, Category = ItemDataSnippet)
	TFieldPath<FProperty> Property = nullptr;

	/*
	* which data snippet instance own this property.
	*/
	mutable UItemDataSnippetBase* Owner = nullptr;
};