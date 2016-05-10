#pragma once
class CarrotBlock{
	public:
		CarrotBlock(std::string const&,int);
		void getBasePlantId(void);
		void getBaseSeed(void);
		void getResourceCount(Random &,int,int);
		void getTexture(signed char,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~CarrotBlock();
		void ~CarrotBlock();
};
