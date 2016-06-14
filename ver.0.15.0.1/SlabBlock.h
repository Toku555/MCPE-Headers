#pragma once
class SlabBlock{
	public:
		SlabBlock(std::string const&,int,bool,Material const&);
		SlabBlock(std::string const&,int,bool,Material const&);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getRedstoneProperty(BlockSource &,BlockPos const&);
		void getRedstoneProperty(BlockSource &,BlockPos const&);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isBottomSlab(BlockSource &,BlockPos const&);
		void isBottomSlab(int);
		void isBottomSlab(int);
		void isObstructingChests(BlockSource &,BlockPos const&);
		void isObstructingChests(BlockSource &,BlockPos const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~SlabBlock();
		void ~SlabBlock();
};
