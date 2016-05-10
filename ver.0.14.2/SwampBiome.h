#pragma once
class SwampBiome{
	public:
		SwampBiome(int);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float);
		void getFoliageColor(void);
		void getGrassColor(BlockPos const&);
		void getRandomFlowerTypeAndData(Random &,BlockPos const&);
		void getTreeFeature(Random *);
		void ~SwampBiome();
		void ~SwampBiome();
};
