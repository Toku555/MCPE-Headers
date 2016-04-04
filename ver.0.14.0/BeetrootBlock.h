#pragma once
class BeetrootBlock{
	public:
		BeetrootBlock(std::string const&,int);
		void getBasePlantId(void);
		void getBaseSeed(void);
		void getTexture(signed char,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~BeetrootBlock();
		void ~BeetrootBlock();
};
