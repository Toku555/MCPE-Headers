#pragma once
class OldLeafBlock{
	public:
		OldLeafBlock(std::string const&,int);
		OldLeafBlock(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void dropExtraLoot(BlockSource &,BlockPos const&,int);
		void dropExtraLoot(BlockSource &,BlockPos const&,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVariant(int);
		void getVariant(int);
		void ~OldLeafBlock();
		void ~OldLeafBlock();
};
