#pragma once
class RandomLevelSource{
	public:
		RandomLevelSource(Level *,Dimension *,uint,bool);
		RandomLevelSource(Level *,Dimension *,uint,bool);
		void _fixWaterAlongEdges(LevelChunk &,BlockSource &,BlockTickingQueue &);
		void _fixWaterAlongEdges(LevelChunk &,BlockSource &,BlockTickingQueue &);
		void buildSurfaces(LevelChunk *,ChunkPos const&);
		void buildSurfaces(LevelChunk *,ChunkPos const&);
		void gatherStats(void);
		void getHeights(float *,Biome **,int,int,int);
		void getHeights(float *,Biome **,int,int,int);
		void loadChunk(LevelChunk &);
		void loadChunk(LevelChunk &);
		void postProcess(ChunkViewSource &);
		void postProcess(ChunkViewSource &);
		void postProcessMobsAt(BlockSource *,int,int,Random &);
		void postProcessMobsAt(BlockSource *,int,int,Random &);
		void prepareHeights(int,int,LevelChunk *);
		void prepareHeights(int,int,LevelChunk *);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void requestChunk(ChunkPos const&,ChunkSource::LoadMode);
		void ~RandomLevelSource();
		void ~RandomLevelSource();
		void ~RandomLevelSource();
		void ~RandomLevelSource();
};
