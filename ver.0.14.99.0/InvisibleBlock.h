#pragma once
class InvisibleBlock{
	public:
		InvisibleBlock(std::string const&,int,Material const&);
		InvisibleBlock(std::string const&,int,Material const&);
		void clip(BlockSource &,BlockPos const&,Vec3 const&,Vec3 const&,bool,int);
		void clip(BlockSource &,BlockPos const&,Vec3 const&,Vec3 const&,bool,int);
		void ~InvisibleBlock();
		void ~InvisibleBlock();
};
