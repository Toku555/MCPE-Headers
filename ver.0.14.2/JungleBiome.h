#pragma once
class JungleBiome{
	public:
		JungleBiome(int,bool);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getGrassFeature(Random *);
		void getTreeFeature(Random *);
		void ~JungleBiome();
		void ~JungleBiome();
};
