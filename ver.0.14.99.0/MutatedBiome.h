#pragma once
class MutatedBiome{
	public:
		MutatedBiome(int,Biome *);
		MutatedBiome(int,Biome *);
		MutatedBiome(int,Biome *);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float,short);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float,short);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getCreatureProbability(void);
		void getCreatureProbability(void);
		void getFoliageColor(void);
		void getFoliageColor(void);
		void getGrassColor(BlockPos const&);
		void getGrassColor(BlockPos const&);
		void getTemperatureCategory(void);
		void getTemperatureCategory(void);
		void getTreeFeature(Random *);
		void getTreeFeature(Random *);
		void isSame(Biome *);
		void isSame(Biome *);
		void ~MutatedBiome();
		void ~MutatedBiome();
};
