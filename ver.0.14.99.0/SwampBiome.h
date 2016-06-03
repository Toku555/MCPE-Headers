#pragma once
class SwampBiome{
	public:
		SwampBiome(int);
		SwampBiome(int);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float,short);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float,short);
		void getFoliageColor(void);
		void getFoliageColor(void);
		void getGrassColor(BlockPos const&);
		void getGrassColor(BlockPos const&);
		void getRandomFlowerTypeAndData(Random &,BlockPos const&);
		void getRandomFlowerTypeAndData(Random &,BlockPos const&);
		void getTreeFeature(Random *);
		void getTreeFeature(Random *);
		void ~SwampBiome();
		void ~SwampBiome();
};
