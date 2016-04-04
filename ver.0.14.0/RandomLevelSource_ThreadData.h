#pragma once
namespace RandomLevelSource{
	class ThreadData{
		public:
		void ThreadData(Level *);
		void _fixWaterAlongEdges(LevelChunk &,BlockSource &,BlockTickingQueue &);
		void buildSurfaces(LevelChunk *,ChunkPos const&);
		void gatherStats(void);
		void getHeights(LevelChunk *,float *,Biome **,int,int,int);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void postProcessMobsAt(BlockSource *,int,int,Random &);
		void prepareHeights(int,int,LevelChunk *);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~RandomLevelSource();
		void ~RandomLevelSource();
	}
};
