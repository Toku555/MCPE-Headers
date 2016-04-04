#pragma once
class QuartzBlockBlock{
	public:
		QuartzBlockBlock(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getDirTexture(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void ~QuartzBlockBlock();
		void ~QuartzBlockBlock();
};
