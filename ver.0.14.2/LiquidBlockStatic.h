#pragma once
class LiquidBlockStatic{
	public:
		LiquidBlockStatic(std::string const&,int,BlockID,Material const&,std::string const&,std::string const&);
		void _isFlammable(BlockSource &,BlockPos const&);
		void _setDynamic(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~LiquidBlockStatic();
		void ~LiquidBlockStatic();
};
