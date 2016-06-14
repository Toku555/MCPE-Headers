#pragma once
class TaigaBiome{
	public:
		TaigaBiome(int,int);
		TaigaBiome(int,int);
		TaigaBiome(int,int);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float,short);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float,short);
		void createMutatedCopy(int);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getGrassFeature(Random *);
		void getGrassFeature(Random *);
		void getTreeFeature(Random *);
		void getTreeFeature(Random *);
		void ~TaigaBiome();
		void ~TaigaBiome();
};
