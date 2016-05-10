#pragma once
class InvisibleBlock{
	public:
		InvisibleBlock(std::string const&,int,std::string const&,Material const&);
		void clip(BlockSource &,BlockPos const&,Vec3 const&,Vec3 const&,bool,int);
		void ~InvisibleBlock();
		void ~InvisibleBlock();
};
