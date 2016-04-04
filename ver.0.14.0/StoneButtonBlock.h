#pragma once
class StoneButtonBlock{
	public:
		StoneButtonBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getTexture(signed char,int);
		void ~StoneButtonBlock();
		void ~StoneButtonBlock();
};
