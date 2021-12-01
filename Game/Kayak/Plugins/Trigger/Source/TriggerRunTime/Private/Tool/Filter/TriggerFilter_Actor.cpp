#include "TriggerFilter_Actor.h"

UTriggerFilter_Actor::UTriggerFilter_Actor(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UTriggerFilter_Actor::NativePass() const
{
	AActor* Actor = GetActorData();

	if (Actor == nullptr)
		return false;

	for (auto Class : ActorClasses)
	{
		if(Class == nullptr)
			continue;
		
		if (Actor->GetClass()->IsChildOf(Class))
		{
			return true;
		}
	}

	return false;
}

void UTriggerFilter_Actor::NativeReset()
{
	Super::NativeReset();
}

AActor* UTriggerFilter_Actor::GetActorData() const
{
	return reinterpret_cast<AActor*>( GetFilterData() );
}