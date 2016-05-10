#pragma once
class NetherWartBlock{
	public:
		NetherWartBlock(std::string const&,int,std::string const&);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getTexture(signed char,int);
		void growCropsToMax(BlockSource &,BlockPos const&);
		void mayPlaceOn(Block const&);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~NetherWartBlock();
		void ~NetherWartBlock();
};
