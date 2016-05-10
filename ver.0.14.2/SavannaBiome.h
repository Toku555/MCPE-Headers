#pragma once
class SavannaBiome{
	public:
		SavannaBiome(int);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getTreeFeature(Random *);
		void ~SavannaBiome();
		void ~SavannaBiome();
};
