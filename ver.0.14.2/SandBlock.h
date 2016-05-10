#pragma once
class SandBlock{
	public:
		SandBlock(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getDustColor(uchar);
		void getMapColor(FullBlock const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~SandBlock();
		void ~SandBlock();
};
