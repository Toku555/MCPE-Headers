#pragma once
class RedstoneBlock{
	public:
		RedstoneBlock(std::string const&,int,std::string const&);
		void isRedstoneBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void ~RedstoneBlock();
		void ~RedstoneBlock();
};
