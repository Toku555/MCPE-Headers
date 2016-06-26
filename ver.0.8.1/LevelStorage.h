#pragma once
class LevelStorage{
	public:
		void load(Player *);
		void loadEntities(Level *,LevelChunk *);
		void save(Player *);
		void saveGame(Level *);
		void saveLevelData(LevelData &);
		void ~LevelStorage();
		void ~LevelStorage();
};
