#pragma once
class LevelStorageSource{
	public:
		void clearCache(void);
		void getLevelList(std::vector<LevelSummary,std::allocator<LevelSummary>> &);
		void loadFromCache(LevelData *,std::string const&);
		void storeToCache(LevelData *,std::string const&);
		void ~LevelStorageSource();
		void ~LevelStorageSource();
};
