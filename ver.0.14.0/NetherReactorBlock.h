#pragma once
class NetherReactorBlock{
	public:
		NetherReactorBlock(std::string const&,int,std::string const&,Material const&);
		void _dropItem(BlockSource &,BlockPos const&,Item *);
		void getTexture(signed char,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~NetherReactorBlock();
		void ~NetherReactorBlock();
};
