#pragma once
class ChunkCache{
	public:
		void create(int,int);
		void gatherStats(void);
		void getChunk(int,int);
		void getMobsAt(MobCategory const&,int,int,int);
		void hasChunk(int,int);
		void postProcess(ChunkSource *,int,int);
		void saveAll(bool);
		void shouldSave(void);
		void tick(void);
		void ~ChunkCache();
		void ~ChunkCache();
};
