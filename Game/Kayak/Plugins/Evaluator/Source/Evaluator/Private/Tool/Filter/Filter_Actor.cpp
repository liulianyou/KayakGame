#include "Filter_Actor.h"

UFilter_Actor::UFilter_Actor(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer)
{

}

bool UFilter_Actor::NativePass() const
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

void UFilter_Actor::NativeReset()
{
	Super::NativeReset();
}

AActor* UFilter_Actor::GetActorData() const
{
	return reinterpret_cast<AActor*>( GetFilterData() );
}