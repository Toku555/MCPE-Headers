#pragma once
class MegaPineTreeFeature{
	public:
		MegaPineTreeFeature(bool,bool);
		MegaPineTreeFeature(bool,bool);
		void _placePodzolAt(BlockSource &,BlockPos const&);
		void _placePodzolAt(BlockSource &,BlockPos const&);
		void _placePodzolCircle(BlockSource &,BlockPos const&);
		void _placePodzolCircle(BlockSource &,BlockPos const&);
		void createCrown(BlockSource &,BlockPos const&,int,Random &);
		void place(BlockSource &,BlockPos const&,Random &);
		void place(BlockSource &,BlockPos const&,Random &);
		void postPlaceTree(BlockSource &,Random &,BlockPos const&);
		void ~MegaPineTreeFeature();
		void ~MegaPineTreeFeature();
};
