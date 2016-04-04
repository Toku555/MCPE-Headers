#pragma once
class FenceBlock{
	public:
		FenceBlock(std::string const&,int,std::string const&,Material const&);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void connectsTo(BlockSource &,BlockPos const&,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void ~FenceBlock();
		void ~FenceBlock();
};
