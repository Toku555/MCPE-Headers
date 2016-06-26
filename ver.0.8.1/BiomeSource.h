#pragma once
class BiomeSource{
	public:
		BiomeSource(Level *);
		BiomeSource(void);
		void getBiome(ChunkPos const&);
		void getBiome(int,int);
		void getBiomeBlock(Biome **,int,int,int,int);
		void getBiomeBlock(int,int,int,int);
		void getTemperatureBlock(int,int,int,int);
		void ~BiomeSource();
		void ~BiomeSource();
};
