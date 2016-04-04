#pragma once
class ColoredBlock{
	public:
		ColoredBlock(std::string const&,int,Material const&);
		void buildDescriptionName(ItemInstance const&);
		void getBlockDataForItemAuxValue(int);
		void getItemAuxValueForBlockData(int);
		void getMapColor(FullBlock const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~ColoredBlock();
		void ~ColoredBlock();
};
