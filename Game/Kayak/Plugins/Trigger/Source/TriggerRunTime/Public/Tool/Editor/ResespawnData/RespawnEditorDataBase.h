#pragma once

/*
* Author:	Liulianyou
* Time:		2021/3/30
* Purpose:	This is data is used to hold the data which the editor will use.
*			You can treat it as the immediate object between the respawn point which the editor information the designed manipulated directly and the runtime respawn data
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "GameFramework/Actor.h"

#include "Editor/TriggerEditorActorBase.h"

#include "RespawnEditorDataBase.generated.h"

class URespawnDataBase;
class ARespawnEditorPointBase;

UCLASS()
class TRIGGERRUNTIME_API ARespawnEditorDataBase : public ATriggerEditorActorBase
{
	GENERATED_UCLASS_BODY()

public:

	//Invoked after this class has been created a new instance
	virtual void InitializeData(URespawnDataBase* RespawnData) PURE_VIRTUAL(&ARespawnEditorDataBase::InitializeData, );
	virtual void ClearData(URespawnDataBase* RespawnData) PURE_VIRTUAL(&ARespawnEditorDataBase::ClearData, );

	/*
	* Used to update the information which is showed in the editor
	*/
	virtual void UpdateEditorViewInfo(URespawnDataBase* RuntimeData) PURE_VIRTUAL(&ARespawnEditorDataBase::UpdateEditorViewInfo,) ;
	virtual bool IsContainRespawnPoint(ARespawnEditorPointBase* Point) PURE_VIRTUAL(&ARespawnEditorDataBase::IsContainRespawnPoint, return false;);

public:
#if WITH_EDITOR
	virtual void ApplyEditorConfigData(ARespawnEditorPointBase* PointInfo) PURE_VIRTUAL(&ARespawnEditorDataBase::ApplyEditorConfigData, );
#endif

private:


};

