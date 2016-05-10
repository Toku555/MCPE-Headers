#pragma once
class ExternalFileLevelStorage{
	public:
		void getImportantFiles(void);
		void makeReadableLevelnameFile(std::string const&,std::string const&);
		void readLevelData(std::string const&,LevelData &);
		void saveLevelData(std::string const&,LevelData const&);
		void writeLevelData(std::string const&,LevelData const&);
};
