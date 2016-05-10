#pragma once
class ExtremeHillsBiome{
	public:
		ExtremeHillsBiome(int,bool);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getTreeFeature(Random *);
		void setMutated(Biome *);
		void ~ExtremeHillsBiome();
		void ~ExtremeHillsBiome();
};
