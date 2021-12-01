#pragma once

/*
* Author:		Liulianyou
* Time:			2021/4/20
* Purpose:		The base information which is used to hold the head info which is in the save data
* 
*/

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Misc/EngineVersion.h"
#include "Serialization/CustomVersion.h"
#include "Serialization/Archive.h"

#include "TriggerSaveGameHeadInfoBase.generated.h"

/*
* Customize system information which can be confined outside.
*/
UCLASS(BlueprintType, editinlinenew, Category = "TriggerRuntime|SaveGame")
class TRIGGERRUNTIME_API USaveGameSystemInfoBase : public UObject
{
	GENERATED_UCLASS_BODY()

protected:

	/*
	*  The version for save game system.
	* If you want new save game version pleas add new enumerations in this type
	*/
	struct FTriggerSaveGameVersion
	{
		enum Type
		{
			InitialVersion = 1,
			// serializing custom versions into the save game data to handle that type of version
			AddedCustomVersions = 2,

			// -----<new versions can be added above this line>-------------------------------------------------
			VersionPlusOne,
			LatestVersion = VersionPlusOne - 1
		};
	};

public:

	/*
	* Hold all set and get function for the member which will be exposed for BP.
	* Some struct may not exposed to the BP so it need some UFunction to set its value
	*/
#pragma region SET_GET_FUNCTION
	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SetFileTypeTag(int InFileTypeTag) { FileTypeTag = InFileTypeTag; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	int GetFileTypeTag() { return FileTypeTag; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SetSaveGameVersion(int InSaveGameVersion) { SaveGameVersion  = InSaveGameVersion; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	int GetSaveGameVersion() { return SaveGameVersion; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SetPackageFileUE4Version(int InPackageFileUE4Version) { PackageFileUE4Version  = InPackageFileUE4Version;}

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	int GetPackageFileUE4Version() { return PackageFileUE4Version; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SetSavedEngineVersion(int InMajor, int InMinor, int InPatch, int InChangelist, const FString& InBranch);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void GetSavedEngineVersion(int& InMajor, int& InMinor, int& InPatch, int& InChangelist, FString& InBranch);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SetCustomVersionFormat(int InCustomVersionFormat) { CustomVersionFormat = InCustomVersionFormat;}

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	int GetCustomVersionFormat() { return CustomVersionFormat; }

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void SetCustomVersions(FGuid CustomKey, int Version, FName FriendlyName);

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void GetCustomVersions(TArray<FGuid>& Keys, TArray<int>& Versions, TArray<int>& ReferenceCounts);

#pragma endregion SET_GET_FUNCTION

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	void Empty();

	UFUNCTION(BlueprintCallable, Category = "TriggerRuntime|SaveGame")
	bool IsEmpty() const;

	//Read head information to the target archive
	virtual void ReadHeadInfo(FArchive& MemoryReader);

	//Write the head info to archive data
	virtual void WriteHeadInfo(FArchive& MemoryWriter);

public:

	// write file type tag. identifies this file type and indicates it's using proper version
	// since older UE4 versions did not version this data.
	int32 FileTypeTag;

	//The version of save game system
	int32 SaveGameVersion;

	//The engine and UE4 version information
	int32 PackageFileUE4Version;
	FEngineVersion SavedEngineVersion;

	//custom version data
	int32 CustomVersionFormat;
	FCustomVersionContainer CustomVersions;

private:
	static const int UE4_SAVEGAME_FILE_TYPE_TAG = 0x53415647;		// "sAvG"
};