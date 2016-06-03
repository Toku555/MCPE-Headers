#pragma once
namespace j{
	class ExternalFileLevelStorage{
		public:
		void readLevelData(std::string const&,LevelData &);
		void writeLevelData(std::string const&,LevelData const&);
	}
};
