#pragma once
class OldLeafBlock{
	public:
		OldLeafBlock(std::string const&,int,std::string const&);
		void buildDescriptionName(ItemInstance const&);
		void dropExtraLoot(BlockSource &,BlockPos const&,int);
		void getCarriedTexture(signed char,int);
		void getColor(BlockSource &,BlockPos const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~OldLeafBlock();
		void ~OldLeafBlock();
};
