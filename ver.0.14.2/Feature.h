#pragma once
class Feature{
	public:
		Feature(bool);
		void _getManuallyPlaced(void);
		void _placeBlock(BlockSource &,BlockPos const&,FullBlock const&);
		void _setBlockAndData(BlockSource &,BlockPos const&,FullBlock const&);
		void ~Feature();
		void ~Feature();
};
