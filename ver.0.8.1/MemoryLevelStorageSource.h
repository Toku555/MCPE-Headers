#pragma once
class MemoryLevelStorageSource{
	public:
		void clearAll(void);
		void convertLevel(std::string const&,ProgressListener *);
		void deleteLevel(std::string const&);
		void getDataTagFor(std::string const&);
		void getName(void);
		void isConvertible(std::string const&);
		void isNewLevelIdAcceptable(std::string const&);
		void renameLevel(std::string const&,std::string const&);
		void requiresConversion(std::string const&);
		void selectLevel(std::string const&,bool);
		void ~MemoryLevelStorageSource();
		void ~MemoryLevelStorageSource();
};
