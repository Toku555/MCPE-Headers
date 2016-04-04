#pragma once
class FixedBiomeSource{
	public:
		FixedBiomeSource(uint,int);
		void containsOnly(int,int,int,std::vector<int,std::allocator<int>> const&);
		void fillBiomeData(LevelChunk *,int,int);
		void fillRawBiomeData(Biome **,int,int);
		void findValidSpawnPosition(LayerData &,int,int,BlockPos &);
		void getBiome(BlockPos const&);
		void getBiome(int,int);
		void getSpawnPosition(void);
		void isValidSpawn(int);
		void ~FixedBiomeSource();
		void ~FixedBiomeSource();
};
