#pragma once
class PodzolBlock{
	public:
		PodzolBlock(std::string const&,int);
		void buildDescriptionName(ItemInstance const&);
		void getMobToSpawn(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getTexture(signed char,int);
		void ~PodzolBlock();
		void ~PodzolBlock();
};
