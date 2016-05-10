#pragma once
class SlabBlock{
	public:
		SlabBlock(std::string const&,int,std::string const&,bool,Material const&);
		void canBeSilkTouched(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getRedstoneProperty(BlockSource &,BlockPos const&);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void isBottomSlab(BlockSource &,BlockPos const&);
		void isBottomSlab(int);
		void isObstructingChests(BlockSource &,BlockPos const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~SlabBlock();
		void ~SlabBlock();
};
