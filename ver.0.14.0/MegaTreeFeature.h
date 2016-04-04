#pragma once
class MegaTreeFeature{
	public:
		MegaTreeFeature(bool,int,int,int,int);
		void _calcTreeHeigth(Random &);
		void _checkIsFree(BlockSource &,BlockPos const&,int);
		void _getBaseHeight(void);
		void _getHeightInterval(void);
		void _getLeafType(void);
		void _getTrunkType(void);
		void _makeDirtFloor(BlockSource &,BlockPos const&);
		void _placeDoubleTrunkLeaves(BlockSource &,BlockPos const&,int);
		void _placeSingleTrunkLeaves(BlockSource &,BlockPos const&,int);
		void _prepareTree(BlockSource &,BlockPos const&,int);
		void place(BlockSource &,BlockPos const&,Random &);
		void ~MegaTreeFeature();
		void ~MegaTreeFeature();
};
