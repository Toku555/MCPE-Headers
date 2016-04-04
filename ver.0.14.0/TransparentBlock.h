#pragma once
class TransparentBlock{
	public:
		TransparentBlock(std::string const&,int,std::string const&,Material const&,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~TransparentBlock();
		void ~TransparentBlock();
};
