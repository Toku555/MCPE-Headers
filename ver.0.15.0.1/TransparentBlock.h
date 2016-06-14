#pragma once
class TransparentBlock{
	public:
		TransparentBlock(std::string const&,int,Material const&,bool);
		TransparentBlock(std::string const&,int,Material const&,bool);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void shouldRenderFace(BlockSource &,BlockPos const&,signed char,AABB const&);
		void ~TransparentBlock();
		void ~TransparentBlock();
};
