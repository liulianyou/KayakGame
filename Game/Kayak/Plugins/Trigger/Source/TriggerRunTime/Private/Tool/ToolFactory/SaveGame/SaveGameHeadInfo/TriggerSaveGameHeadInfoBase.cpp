#include "SaveGame/SaveGameHeadInfo/TriggerSaveGameHeadInfoBase.h"

const int USaveGameSystemInfoBase::UE4_SAVEGAME_FILE_TYPE_TAG;

USaveGameSystemInfoBase::USaveGameSystemInfoBase(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
	, FileTypeTag(UE4_SAVEGAME_FILE_TYPE_TAG)
	, SaveGameVersion(FTriggerSaveGameVersion::LatestVersion)
	, PackageFileUE4Version(GPackageFileUE4Version)
	, SavedEngineVersion(FEngineVersion::Current())
	, CustomVersionFormat(static_cast<int32>(ECustomVersionSerializationFormat::Latest))
	, CustomVersions(FCurrentCustomVersions::GetAll())
{}

void USaveGameSystemInfoBase::Empty()
{
	FileTypeTag = 0;
	SaveGameVersion = 0;
	PackageFileUE4Version = 0;
	SavedEngineVersion.Empty();
	CustomVersionFormat = (int32)ECustomVersionSerializationFormat::Unknown;
	CustomVersions.Empty();
}

bool USaveGameSystemInfoBase::IsEmpty() const
{
	return (FileTypeTag == 0);
}

void USaveGameSystemInfoBase::ReadHeadInfo(FArchive& MemoryReader)
{
	Empty();

	MemoryReader << FileTypeTag;

	if (FileTypeTag != UE4_SAVEGAME_FILE_TYPE_TAG)
	{
		// this is an old saved game, back up the file pointer to the beginning and assume version 1
		MemoryReader.Seek(0);
		SaveGameVersion = FTriggerSaveGameVersion::InitialVersion;

		// Note for 4.8 and beyond: if you get a crash loading a pre-4.8 version of your save game file and 
		// you don't want to delete it, try uncommenting these lines and changing them to use the version 
		// information from your previous build. Then load and resave your save game file.
		//MemoryReader.SetUE4Ver(MyPreviousUE4Version);				// @see GPackageFileUE4Version
		//MemoryReader.SetEngineVer(MyPreviousEngineVersion);		// @see FEngineVersion::Current()
	}
	else
	{
		// Read version for this file format
		MemoryReader << SaveGameVersion;

		// Read engine and UE4 version information
		MemoryReader << PackageFileUE4Version;

		MemoryReader << SavedEngineVersion;

		MemoryReader.SetUE4Ver(PackageFileUE4Version);
		MemoryReader.SetEngineVer(SavedEngineVersion);

		if (SaveGameVersion >= FTriggerSaveGameVersion::AddedCustomVersions)
		{
			MemoryReader << CustomVersionFormat;

			CustomVersions.Serialize(MemoryReader, static_cast<ECustomVersionSerializationFormat::Type>(CustomVersionFormat));
			MemoryReader.SetCustomVersions(CustomVersions);
		}
	}
}

void USaveGameSystemInfoBase::WriteHeadInfo(FArchive& MemoryWriter)
{
	// write file type tag. identifies this file type and indicates it's using proper version
	// since older UE4 versions did not version this data.
	MemoryWriter << FileTypeTag;

	// Write version for this file format
	MemoryWriter << SaveGameVersion;

	// Write out engine and UE4 version information
	MemoryWriter << PackageFileUE4Version;
	MemoryWriter << SavedEngineVersion;

	// Write out custom version data
	MemoryWriter << CustomVersionFormat;
	CustomVersions.Serialize(MemoryWriter, static_cast<ECustomVersionSerializationFormat::Type>(CustomVersionFormat));

	// Write the class name so we know what class to load to
	//MemoryWriter << SaveGameClassName;
}



void USaveGameSystemInfoBase::SetSavedEngineVersion(int InMajor, int InMinor, int InPatch, int InChangelist, const FString& InBranch)
{
	SavedEngineVersion.Set(InMajor, InMinor, InPatch, InChangelist, InBranch);
}

void USaveGameSystemInfoBase::GetSavedEngineVersion(int& InMajor, int& InMinor, int& InPatch, int& InChangelist, FString& InBranch)
{
	InMajor = SavedEngineVersion.GetMajor();
	InMinor = SavedEngineVersion.GetMinor();
	InPatch = SavedEngineVersion.GetPatch();
	InChangelist = SavedEngineVersion.GetChangelist();
	InBranch = SavedEngineVersion.GetBranch();
}

void USaveGameSystemInfoBase::SetCustomVersions(FGuid CustomKey, int Version, FName FriendlyName)
{
	CustomVersions.SetVersion(CustomKey, Version, FriendlyName);
}

void USaveGameSystemInfoBase::GetCustomVersions(TArray<FGuid>& Keys, TArray<int>& Versions, TArray<int>& ReferenceCounts)
{
	const FCustomVersionArray& AllVersions = CustomVersions.GetAllVersions();

	Keys.Empty();
	Versions.Empty();
	ReferenceCounts.Empty();

	for (int i = 0; i < AllVersions.Num(); i++)
	{
		Keys.Add(AllVersions[i].Key);
		Versions.Add(AllVersions[i].Version);
		ReferenceCounts.Add(AllVersions[i].ReferenceCount);
	}
}