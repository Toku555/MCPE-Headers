#pragma once
class IceBlock{
	public:
		IceBlock(std::string const&,int,std::string const&,bool);
		void getResourceCount(Random &,int,int);
		void playerDestroy(Player *,BlockPos const&,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~IceBlock();
		void ~IceBlock();
};
