#pragma once
class NewLeafBlock{
	public:
		NewLeafBlock(std::string const&,int,std::string const&);
		void buildDescriptionName(ItemInstance const&);
		void dropExtraLoot(BlockSource &,BlockPos const&,int);
		void getCarriedTexture(signed char,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~NewLeafBlock();
		void ~NewLeafBlock();
};
