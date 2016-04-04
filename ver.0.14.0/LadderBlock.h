#pragma once
class LadderBlock{
	public:
		LadderBlock(std::string const&,int,std::string const&);
		void canBeSilkTouched(void);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isWaterBlocking(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void ~LadderBlock();
		void ~LadderBlock();
};
