#pragma once
class WaterlilyBlock{
	public:
		WaterlilyBlock(std::string const&,int);
		WaterlilyBlock(std::string const&,int);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getColor(int);
		void mayPlaceOn(Block const&);
		void mayPlaceOn(Block const&);
		void ~WaterlilyBlock();
		void ~WaterlilyBlock();
};
