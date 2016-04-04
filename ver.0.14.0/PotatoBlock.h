#pragma once
class PotatoBlock{
	public:
		PotatoBlock(std::string const&,int);
		void getBasePlantId(void);
		void getBaseSeed(void);
		void getResourceCount(Random &,int,int);
		void getTexture(signed char,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~PotatoBlock();
		void ~PotatoBlock();
};
