#pragma once
class TallGrassFeature{
	public:
		TallGrassFeature(BlockID,uchar);
		void place(BlockSource &,BlockPos const&,Random &);
		void place(BlockSource &,BlockPos const&,Random &,int,int);
		void ~TallGrassFeature();
		void ~TallGrassFeature();
};
