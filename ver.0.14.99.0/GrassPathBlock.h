#pragma once
class GrassPathBlock{
	public:
		GrassPathBlock(std::string const&,int);
		GrassPathBlock(std::string const&,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void ~GrassPathBlock();
		void ~GrassPathBlock();
};
