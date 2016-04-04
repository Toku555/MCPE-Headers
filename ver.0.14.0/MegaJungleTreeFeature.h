#pragma once
class MegaJungleTreeFeature{
	public:
		MegaJungleTreeFeature(bool,int,int,int,int);
		void _createCrown(BlockSource &,BlockPos const&,int);
		void _placeVine(BlockSource &,BlockPos const&,Random &,int);
		void _placeVines(BlockSource &,BlockPos const&,Random &,int,int,int);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~MegaJungleTreeFeature();
		void ~MegaJungleTreeFeature();
};
