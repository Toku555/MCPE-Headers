#pragma once
class MultiTextureBlock{
	public:
		MultiTextureBlock(std::string const&,int,std::string,Material const&);
		void buildDescriptionName(ItemInstance const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~MultiTextureBlock();
		void ~MultiTextureBlock();
};
