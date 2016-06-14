#pragma once
class ColoredBlock{
	public:
		ColoredBlock(std::string const&,int,Material const&);
		ColoredBlock(std::string const&,int,Material const&);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void getBlockDataForItemAuxValue(int);
		void getBlockDataForItemAuxValue(int);
		void getItemAuxValueForBlockData(int);
		void getMapColor(FullBlock const&);
		void getMapColor(FullBlock const&);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void ~ColoredBlock();
		void ~ColoredBlock();
};
