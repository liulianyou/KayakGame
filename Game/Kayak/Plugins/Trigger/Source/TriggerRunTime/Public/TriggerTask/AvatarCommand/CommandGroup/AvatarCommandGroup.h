#pragma once

/*
* Author:	Liulianyou
* Time:		2021/12/7
* Purpose:	This group of commands will make all commands execute at the same time
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"

#include "AvatarCommandGroupBase.h"

#include "AvatarCommandGroup.generated.h"

UCLASS(Blueprintable, BlueprintType)
class TRIGGERRUNTIME_API UAvatarCommandGroup : public UAvatarCommandGroupBase
{
	GENERATED_UCLASS_BODY()

public:
	
	//Override AvatarCommandGroupBase
	virtual void Initialize(UObject* ObjectOwner) override;
	virtual void GetAllCommandDatas(TArray<UAvatarCommandDataBase*>& CommandDatas) override;
	virtual void ExecuteCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand = nullptr) override;
	virtual void StopCommands(const TArray<UObject*>& Targets, UAvatarCommandDataBase* AvatarCommand = nullptr) override;
	virtual bool IsAllCommandFinished_Implementation() override;
	//Override AvatarCommandGroupBase

public:

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced, Category = "Command")
	TArray<UAvatarCommandDataBase*> Commands;
};
