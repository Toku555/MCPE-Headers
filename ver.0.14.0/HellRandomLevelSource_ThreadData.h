#pragma once
namespace HellRandomLevelSource{
	class ThreadData{
		public:
		void ThreadData(Level *);
		void buildSurfaces(LevelChunk *,ChunkPos const&);
		void gatherStats(void);
		void getHeights(float *,int,int,int);
		void getMobsAt(BlockSource &,EntityType,BlockPos const&);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void prepareHeights(int,int,LevelChunk *);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~HellRandomLevelSource();
		void ~HellRandomLevelSource();
	}
};
