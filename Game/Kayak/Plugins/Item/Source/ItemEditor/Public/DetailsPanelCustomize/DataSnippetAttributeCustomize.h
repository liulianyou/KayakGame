#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/26
* Purpose:	This is used to customize the struct FIteDataSnippetProperty in the details panel
*/

#include "IPropertyTypeCustomization.h"


class ITEMEDITOR_API FItemDataSnippetAttributeCustomize : public IPropertyTypeCustomization
{
public:

	FItemDataSnippetAttributeCustomize();
	~FItemDataSnippetAttributeCustomize();
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IPropertyTypeCustomization> MakeInstance();

	// IPropertyTypeCustomization interface
	virtual void CustomizeHeader(TSharedRef<IPropertyHandle> InPropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	virtual void CustomizeChildren(TSharedRef<IPropertyHandle> InPropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils) override;
	// End of IPropertyTypeCustomization interface

};
