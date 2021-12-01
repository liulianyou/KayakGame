#include "Record/TriggerRecordBase.h"
#include "TriggerDefinition.h"


UTriggerRecordBase::UTriggerRecordBase(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	Filters.Empty();
}

bool FRecordInstigatorInfo::operator()(const FRecordInstigatorInfo& A, const  FRecordInstigatorInfo& B)
{
	if (A.Instigator == B.Instigator)
		return true;
	else
		return false;
}

bool operator==(const FRecordInstigatorInfo& A, const  FRecordInstigatorInfo& B)
{
	if (A.Instigator == B.Instigator)
		return true;
	else
		return false;
}


void UTriggerRecordBase::BeginDestroy()
{
	Super::BeginDestroy();
}

#if WITH_EDITOR
void UTriggerRecordBase::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	
}
#endif

void UTriggerRecordBase::Execute_Implementation(FRecordInstigatorInfo& InstigatorInfo)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement Execute in TriggerRecordBase."));
}

void UTriggerRecordBase::StartRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement StartRecord in TriggerRecordBase."));
}

void UTriggerRecordBase::EndRecord_Implementation(FRecordInstigatorInfo& InstigatorInfo, EEndRecordType EndType)
{
	UE_LOG(LogTrigger, Warning, TEXT("Please implement EndRecord in TriggerRecordBase."));
}


