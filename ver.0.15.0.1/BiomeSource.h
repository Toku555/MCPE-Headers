#pragma once
class BiomeSource{
	public:
		BiomeSource(uint);
		BiomeSource(uint);
		BiomeSource(uint,GeneratorType);
		BiomeSource(uint,GeneratorType);
		void containsOnly(int,int,int,std::vector<int,std::allocator<int>> const&);
		void containsOnly(int,int,int,std::vector<int,std::allocator<int>> const&);
		void debugVisulizeMap(int,int,int,int,std::weak_ptr<std::vector<int,std::allocator<int>>>,std::weak_ptr<ThreadLocal<BiomeSource>>);
		void fillBiomeData(LevelChunk *,int,int);
		void fillBiomeData(LevelChunk *,int,int);
		void fillRawBiomeData(Biome **,int,int);
		void fillRawBiomeData(Biome **,int,int);
		void findValidSpawnPosition(LayerData &,int,int,BlockPos &);
		void findValidSpawnPosition(LayerData &,int,int,BlockPos &);
		void getBiome(BlockPos const&);
		void getBiome(BlockPos const&);
		void getBiome(int,int);
		void getBiome(int,int);
		void getSpawnPosition(void);
		void getSpawnPosition(void);
		void getZoomedLayer(void);
		void isValidSpawn(int);
		void isValidSpawn(int);
		void ~BiomeSource();
		void ~BiomeSource();
		void ~BiomeSource();
		void ~BiomeSource();
};
