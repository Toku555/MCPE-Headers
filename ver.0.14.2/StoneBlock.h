#pragma once
class StoneBlock{
	public:
		StoneBlock(std::string const&,int,std::string const&);
		void buildDescriptionName(ItemInstance const&);
		void getResource(Random &,int,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~StoneBlock();
		void ~StoneBlock();
};
