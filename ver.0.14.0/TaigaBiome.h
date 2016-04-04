#pragma once
class TaigaBiome{
	public:
		TaigaBiome(int,int);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getGrassFeature(Random *);
		void getTreeFeature(Random *);
		void ~TaigaBiome();
		void ~TaigaBiome();
};
