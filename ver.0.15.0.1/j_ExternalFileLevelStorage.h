#pragma once
namespace j{
	class ExternalFileLevelStorage{
		public:
		void readLevelData(std::string const&,LevelData &);
		void saveLevelData(std::string const&,LevelData const&);
	}
};
