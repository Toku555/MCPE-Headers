#pragma once
class StoneSlabBlock{
	public:
		StoneSlabBlock(std::string const&,int,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getResource(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char);
		void getTexture(signed char,int);
		void ~StoneSlabBlock();
		void ~StoneSlabBlock();
};
