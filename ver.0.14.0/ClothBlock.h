#pragma once
class ClothBlock{
	public:
		ClothBlock(std::string const&,int);
		ClothBlock(std::string const&,int,int);
		void getBlockDataForItemAuxValue(int);
		void getMapColor(FullBlock const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~ClothBlock();
		void ~ClothBlock();
};
