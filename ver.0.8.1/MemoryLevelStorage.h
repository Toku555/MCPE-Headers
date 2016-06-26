#pragma once
class MemoryLevelStorage{
	public:
		void closeAll(void);
		void createChunkStorage(Dimension *);
		void prepareLevel(Level *);
		void saveLevelData(LevelData &,std::vector<Player *,std::allocator<Player *>> *);
		void ~MemoryLevelStorage();
		void ~MemoryLevelStorage();
};
