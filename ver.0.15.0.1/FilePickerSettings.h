#pragma once
class FilePickerSettings{
	public:
		FilePickerSettings(FilePickerSettings const&);
		FilePickerSettings(FilePickerSettings const&);
		FilePickerSettings(void);
		FilePickerSettings(void);
		void addFileDescription(std::string const&,std::string const&,bool);
		void addFileDescription(std::string const&,std::string const&,bool);
		void getDefaultFileDescription(void);
		void getDefaultFileName(void);
		void getFileDescriptions(void);
		void getPickerTitle(void);
		void getPickerType(void);
		void setDefaultFileName(std::string const&);
		void setDefaultFileName(std::string const&);
		void setPickerTitle(std::string);
		void setPickerTitle(std::string);
		void setPickerType(FilePickerSettings::PickerType);
		void setPickerType(FilePickerSettings::PickerType);
		void ~FilePickerSettings();
		void ~FilePickerSettings();
};
