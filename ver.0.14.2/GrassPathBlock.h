#pragma once
class GrassPathBlock{
	public:
		GrassPathBlock(std::string const&,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void getTexture(signed char,int);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void ~GrassPathBlock();
		void ~GrassPathBlock();
};
