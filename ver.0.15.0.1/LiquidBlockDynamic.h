#pragma once
class LiquidBlockDynamic{
	public:
		LiquidBlockDynamic(std::string const&,int,Material const&);
		LiquidBlockDynamic(std::string const&,int,Material const&);
		void _canSpreadTo(BlockSource &,BlockPos const&);
		void _getHighest(BlockSource &,BlockPos const&,int);
		void _getSlopeDistance(BlockSource &,BlockPos const&,int,int);
		void _getSlopeDistance(BlockSource &,BlockPos const&,int,int);
		void _getSpread(BlockSource &,BlockPos const&);
		void _getSpread(BlockSource &,BlockPos const&);
		void _isWaterBlocking(BlockSource &,BlockPos const&);
		void _setStatic(BlockSource &,BlockPos const&);
		void _spread(BlockSource &,BlockPos const&,int);
		void _spread(BlockSource &,BlockPos const&,int);
		void _trySpreadTo(BlockSource &,BlockPos const&,int);
		void _trySpreadTo(BlockSource &,BlockPos const&,int);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~LiquidBlockDynamic();
		void ~LiquidBlockDynamic();
};
