#pragma once
class IceBlock{
	public:
		IceBlock(std::string const&,int,bool);
		IceBlock(std::string const&,int,bool);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void playerDestroy(Player *,BlockPos const&,int);
		void playerDestroy(Player *,BlockPos const&,int);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~IceBlock();
		void ~IceBlock();
};
