#pragma once
class Biome{
	public:
		Biome(void);
		void _getBiome(float,float);
		void adjustDepth(float);
		void adjustScale(float);
		void clearMobs(bool,bool,bool);
		void getBiome(float,float);
		void getCreatureProbability(void);
		void getGrassFeature(Random *);
		void getMobs(MobCategory const&);
		void getSkyColor(float);
		void getTemperature(void);
		void getTreeFeature(Random *);
		void initBiomes(void);
		void recalc(void);
		void setColor(int);
		void setLeafColor(int);
		void setName(std::string const&);
		void setSnowCovered(void);
		void setTemperatureAndDownfall(float,float);
		void teardownBiomes(void);
		void ~Biome();
		void ~Biome();
};
