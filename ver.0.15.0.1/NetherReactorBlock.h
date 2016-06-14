#pragma once
class NetherReactorBlock{
	public:
		NetherReactorBlock(std::string const&,int,Material const&);
		NetherReactorBlock(std::string const&,int,Material const&);
		void _dropItem(BlockSource &,BlockPos const&,Item *);
		void _dropItem(BlockSource &,BlockPos const&,Item *);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~NetherReactorBlock();
		void ~NetherReactorBlock();
};
