#pragma once
class HellRandomLevelSource{
	public:
		HellRandomLevelSource(Level *,Dimension *,uint);
		HellRandomLevelSource(Level *,Dimension *,uint);
		void buildSurfaces(LevelChunk *,ChunkPos const&);
		void buildSurfaces(LevelChunk *,ChunkPos const&);
		void gatherStats(void);
		void getHeights(float *,int,int,int);
		void getHeights(float *,int,int,int);
		void getMobsAt(BlockSource &,EntityType,BlockPos const&);
		void getMobsAt(BlockSource &,EntityType,BlockPos const&);
		void loadChunk(LevelChunk &);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void postProcess(ChunkViewSource &);
		void prepareHeights(int,int,LevelChunk *);
		void prepareHeights(int,int,LevelChunk *);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~HellRandomLevelSource();
		void ~HellRandomLevelSource();
		void ~HellRandomLevelSource();
		void ~HellRandomLevelSource();
};
