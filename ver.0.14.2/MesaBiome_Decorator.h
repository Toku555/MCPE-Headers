#pragma once
namespace MesaBiome{
	class Decorator{
		public:
		void decorateOres(BlockSource *,Random &,BlockPos const&);
		void ~Decorator();
		void ~Decorator();
		MesaBiome(int,bool,bool);
		void buildSurfaceAt(Random &,LevelChunk &,BlockPos const&,float);
		void createMutatedCopy(int);
		void generateBands(uint);
		void getBand(int,int,int);
		void getFoliageColor(void);
		void getGrassColor(BlockPos const&);
		void getTreeFeature(Random *);
		void refreshBiome(uint);
		void ~MesaBiome();
		void ~MesaBiome();
	}
};
