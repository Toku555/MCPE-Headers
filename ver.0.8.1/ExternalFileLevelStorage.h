#pragma once
class ExternalFileLevelStorage{
	public:
		ExternalFileLevelStorage(std::string const&,std::string const&);
		void closeAll(void);
		void createChunkStorage(Dimension *);
		void flush(void);
		void load(Level *,int,int);
		void load(Player *);
		void loadEntities(Level *,LevelChunk *);
		void prepareLevel(Level *);
		void readLevelData(std::string const&,LevelData &);
		void readPlayerData(std::string const&,LevelData &);
		void save(Level *,LevelChunk *);
		void save(Player *);
		void saveAll(Level *,std::vector<LevelChunk *,std::allocator<LevelChunk *>> &);
		void saveEntities(Level *,LevelChunk *);
		void saveGame(Level *);
		void saveLevelData(LevelData &,std::vector<Player *,std::allocator<Player *>> *);
		void saveLevelData(std::string const&,LevelData &,std::vector<Player *,std::allocator<Player *>> *);
		void savePendingUnsavedChunks(int);
		void tick(void);
		void writeLevelData(std::string const&,LevelData &,std::vector<Player *,std::allocator<Player *>> const*);
		void ~ExternalFileLevelStorage();
		void ~ExternalFileLevelStorage();
};
