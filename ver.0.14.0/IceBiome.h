#pragma once
class IceBiome{
	public:
		IceBiome(int,bool);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getTreeFeature(Random *);
		void ~IceBiome();
		void ~IceBiome();
};
