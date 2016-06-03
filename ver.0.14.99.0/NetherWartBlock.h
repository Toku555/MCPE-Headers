#pragma once
class NetherWartBlock{
	public:
		NetherWartBlock(std::string const&,int);
		NetherWartBlock(std::string const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void growCropsToMax(BlockSource &,BlockPos const&);
		void mayPlaceOn(Block const&);
		void mayPlaceOn(Block const&);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~NetherWartBlock();
		void ~NetherWartBlock();
};
