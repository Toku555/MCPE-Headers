#pragma once
class WallBlock{
	public:
		WallBlock(std::string const&,int,Block &);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void connectsTo(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~WallBlock();
		void ~WallBlock();
};
