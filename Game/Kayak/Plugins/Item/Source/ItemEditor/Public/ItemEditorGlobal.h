#pragma once

/*
* Author:	Liulianyou
* Time:		2022/1/26
* Purpose:	This is the global instance for item editor.
*/

class ITEMEDITOR_API FItemEditorGlobal : public TSharedFromThis<FItemEditorGlobal>
{
public:
	
	FItemEditorGlobal(){}

public:

	void Initialize();
	void Finialize();

protected:

	void RegisterCustomizeDetailsPanel();
	void UnRegisterCustomizeDetailsPanel();
private:

};
