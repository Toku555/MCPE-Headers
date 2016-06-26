#pragma once
class ChunkStorage{
	public:
		void flush(void);
		void load(Level *,int,int);
		void save(Level *,LevelChunk *);
		void saveAll(Level *,std::vector<LevelChunk *,std::allocator<LevelChunk *>> &);
		void saveEntities(Level *,LevelChunk *);
		void tick(void);
		void ~ChunkStorage();
		void ~ChunkStorage();
};
