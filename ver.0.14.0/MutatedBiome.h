#pragma once
class MutatedBiome{
	public:
		MutatedBiome(int,Biome *);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getCreatureProbability(void);
		void getFoliageColor(void);
		void getGrassColor(BlockPos const&);
		void getTemperatureCategory(void);
		void getTreeFeature(Random *);
		void isSame(Biome *);
		void ~MutatedBiome();
		void ~MutatedBiome();
};
