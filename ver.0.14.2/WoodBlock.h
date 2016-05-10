#pragma once
class WoodBlock{
	public:
		WoodBlock(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void getWoodMaterialColor(WoodBlockType);
		void ~WoodBlock();
		void ~WoodBlock();
};
