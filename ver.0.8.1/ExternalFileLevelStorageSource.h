#pragma once
class ExternalFileLevelStorageSource{
	public:
		ExternalFileLevelStorageSource(std::string const&,std::string const&);
		void addLevelSummaryIfExists(std::vector<LevelSummary,std::allocator<LevelSummary>> &,char const*);
		void clearAll(void);
		void clearCache(void);
		void convertLevel(std::string const&,ProgressListener *);
		void deleteLevel(std::string const&);
		void getDataTagFor(std::string const&);
		void getFullPath(std::string const&);
		void getLevelList(std::vector<LevelSummary,std::allocator<LevelSummary>> &);
		void getName(void);
		void isConvertible(std::string const&);
		void isNewLevelIdAcceptable(std::string const&);
		void loadFromCache(LevelData *,std::string const&);
		void renameLevel(std::string const&,std::string const&);
		void requiresConversion(std::string const&);
		void selectLevel(std::string const&,bool);
		void storeToCache(LevelData *,std::string const&);
		void ~ExternalFileLevelStorageSource();
		void ~ExternalFileLevelStorageSource();
};
