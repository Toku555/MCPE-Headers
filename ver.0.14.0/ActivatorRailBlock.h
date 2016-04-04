#pragma once
class ActivatorRailBlock{
	public:
		ActivatorRailBlock(std::string const&,int);
		void getTexture(signed char,int);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void ~ActivatorRailBlock();
		void ~ActivatorRailBlock();
};
