#pragma once
class PoweredRailBlock{
	public:
		PoweredRailBlock(std::string const&,int);
		void getTexture(signed char);
		void getTexture(signed char,int);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void ~PoweredRailBlock();
		void ~PoweredRailBlock();
};
