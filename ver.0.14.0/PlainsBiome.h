#pragma once
class PlainsBiome{
	public:
		PlainsBiome(int);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getRandomFlowerTypeAndData(Random &,BlockPos const&);
		void getTreeFeature(Random *);
		void ~PlainsBiome();
		void ~PlainsBiome();
};
