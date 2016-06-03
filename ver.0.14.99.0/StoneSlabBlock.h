#pragma once
class StoneSlabBlock{
	public:
		StoneSlabBlock(std::string const&,int,bool);
		StoneSlabBlock(std::string const&,int,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVariant(int);
		void getVariant(int);
		void ~StoneSlabBlock();
		void ~StoneSlabBlock();
};
