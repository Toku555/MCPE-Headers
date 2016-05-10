#pragma once
class BushBlock{
	public:
		BushBlock(std::string const&,int,std::string const&,Material const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void checkAlive(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void growCrops(BlockSource &,BlockPos const&);
		void mayPlaceOn(Block const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~BushBlock();
		void ~BushBlock();
};
