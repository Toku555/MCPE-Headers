#pragma once
class RoofTreeFeature{
	public:
		RoofTreeFeature(bool);
		void _placeLeafAt(BlockSource &,BlockPos const&);
		void _placeLeafs(BlockSource &,BlockPos const&,BlockPos const&,Random &);
		void _placeVine(BlockSource &,BlockPos const&,Random &,int);
		void _placeVines(BlockSource &,BlockPos const&,Random &,bool,int,int);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~RoofTreeFeature();
		void ~RoofTreeFeature();
};
