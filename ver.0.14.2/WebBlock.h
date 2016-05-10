#pragma once
class WebBlock{
	public:
		WebBlock(std::string const&,int,std::string const&);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void ~WebBlock();
		void ~WebBlock();
};
