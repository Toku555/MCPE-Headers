#pragma once
class WoodButtonBlock{
	public:
		WoodButtonBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getTexture(signed char,int);
		void ~WoodButtonBlock();
		void ~WoodButtonBlock();
};
