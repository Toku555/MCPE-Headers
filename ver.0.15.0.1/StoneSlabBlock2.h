#pragma once
class StoneSlabBlock2{
	public:
		StoneSlabBlock2(std::string const&,int,bool);
		StoneSlabBlock2(std::string const&,int,bool);
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
		void ~StoneSlabBlock2();
		void ~StoneSlabBlock2();
};
