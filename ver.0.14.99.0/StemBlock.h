#pragma once
class StemBlock{
	public:
		StemBlock(std::string const&,int,Block &);
		StemBlock(std::string const&,int,Block &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getColor(int);
		void getConnectDir(BlockSource &,BlockPos const&);
		void getConnectDir(BlockSource &,BlockPos const&);
		void getGrowthSpeed(BlockSource &,BlockPos const&);
		void getGrowthSpeed(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void mayPlaceOn(Block const&);
		void mayPlaceOn(Block const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~StemBlock();
		void ~StemBlock();
};
