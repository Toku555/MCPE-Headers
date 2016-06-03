#pragma once
namespace j{
	class ExternalFileLevelStorageSource{
		public:
		void addLevelSummaryIfExists(std::vector<LevelSummary,std::allocator<LevelSummary>> &,std::string const&);
	}
};
