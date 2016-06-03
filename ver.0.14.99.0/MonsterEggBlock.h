#pragma once
class MonsterEggBlock{
	public:
		MonsterEggBlock(std::string const&,int);
		MonsterEggBlock(std::string const&,int);
		void _getBlockIdFromData(int);
		void _spawnSilverFish(BlockSource &,BlockPos const&);
		void _spawnSilverFish(BlockSource &,BlockPos const&);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void getDataForHostBlock(int,int);
		void getDataForHostBlock(int,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void getVariant(int);
		void getVariant(int);
		void isCompatibleHostBlock(int,int);
		void isCompatibleHostBlock(int,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~MonsterEggBlock();
		void ~MonsterEggBlock();
};
