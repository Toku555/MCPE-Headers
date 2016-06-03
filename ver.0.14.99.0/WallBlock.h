#pragma once
class WallBlock{
	public:
		WallBlock(std::string const&,int,Block &);
		WallBlock(std::string const&,int,Block &);
		void buildDescriptionName(ItemInstance const&);
		void buildDescriptionName(ItemInstance const&);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void connectsTo(BlockSource &,BlockPos const&,BlockPos const&);
		void connectsTo(BlockSource &,BlockPos const&,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVariant(int);
		void getVariant(int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~WallBlock();
		void ~WallBlock();
};
