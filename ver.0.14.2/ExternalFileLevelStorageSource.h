#pragma once
class ExternalFileLevelStorageSource{
	public:
		ExternalFileLevelStorageSource(std::string const&);
		void _getFullPath(std::string const&);
		void _getFullPath(std::string const&);
		void clearAll(void);
		void convertLevel(std::string const&,ProgressListener *);
		void copyLevelFromFilePath(std::string const&);
		void createLevelStorage(std::string const&);
		void deleteLevel(std::string const&);
		void getBasePath(void);
		void getLevelData(std::string const&);
		void getName(void);
		void isConvertible(std::string const&);
		void isNewLevelIdAcceptable(std::string const&);
		void renameLevel(std::string const&,std::string const&);
		void requiresConversion(std::string const&);
		void setLevelData(std::string const&,LevelData const&);
		void ~ExternalFileLevelStorageSource();
		void ~ExternalFileLevelStorageSource();
};
