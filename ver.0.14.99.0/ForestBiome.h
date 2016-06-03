#pragma once
class ForestBiome{
	public:
		ForestBiome(int,int);
		ForestBiome(int,int);
		ForestBiome(int,int);
		void createMutatedCopy(int);
		void createMutatedCopy(int);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void decorate(BlockSource *,Random &,BlockPos const&,bool,float);
		void getRandomFlowerTypeAndData(Random &,BlockPos const&);
		void getRandomFlowerTypeAndData(Random &,BlockPos const&);
		void getTreeFeature(Random *);
		void getTreeFeature(Random *);
		void isHumid(void);
		void isHumid(void);
		void setColor(int);
		void setColor(int);
		void setColor(int,bool);
		void setColor(int,bool);
		void ~ForestBiome();
		void ~ForestBiome();
};
