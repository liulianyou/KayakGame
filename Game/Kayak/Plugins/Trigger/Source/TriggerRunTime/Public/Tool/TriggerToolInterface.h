#pragma once

/*
* Author:	Liulianyou
* Time:		2020/8/14
* Purpose:	This is the base class for any of the classes in the trigger exclude the FactoryManager class.
*			So that I can make the class hierarchy not confused
*/

#include "CoreMinimal.h"

/*
* Marco to generate the class base information such as class name
* Each class derived form the TriggerToolInterface should contain this marco：ClassInfo(ClassType, ParentClass)
*/
#define ClassInfo(ClassName, SuperClass, ...)	\
public:	\
struct ClassInfoStruct##ClassName	\
{	\
	static const char* GetClassName()	\
	{\
		return #ClassName;\
	}\
};\
virtual const char* GetClassName()\
{\
	return ClassInfoStruct##ClassName::GetClassName();	\
}\
static const char* StaticClassName()\
{\
	return ClassInfoStruct##ClassName::GetClassName();\
}\
typedef SuperClass Super;

class TRIGGERRUNTIME_API TriggerToolInterface
{
public:

	ClassInfo(TriggerToolInterface,TriggerToolInterface);

	virtual ~TriggerToolInterface(){};

	virtual void InitlalizeTriggerTool() = 0;

};



