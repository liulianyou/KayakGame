#pragma once

/*
* Author:	Liulianyou
* Time:		2021/9/22
* Purpose:	This data only used to check weather the target avatars' position are in target area
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "AvatarData/AvatarInspectedDataBase.h"
#include "AvatarInTargetArea.generated.h"

class AActor;

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UAvatarInTargetArea : public UAvatarInspectedDataBase
{
	GENERATED_UCLASS_BODY()

public:

	//Override UAvatarInspectedDataBase
	virtual bool IsDataExceedExpectation_Implementation() override;
	virtual void Reset() override;
	virtual void Initialize(UCheckAvatarAttribute* Owner) override;
	//Override UAvatarInspectedDataBase

public:

	UFUNCTION()
	void OnActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
	UFUNCTION()
	void OnActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AvatarData")
	TSoftObjectPtr<AActor> TargetArea;

private:
	void FitCheckAvatarsDataToActualActors();

private:
	
	//The avatar which is valid for current
	struct FCheckedAvatar
	{
		//The avatar that need to check 
		UObject* Avatar = nullptr;

		//Flag to check weather the avatar is in target area
		bool IsInTargetArea = false;

		void Reset();
	};

	//The total avatars that need to check
	TArray<FCheckedAvatar> CheckedAvatars;

};