#pragma once
class CropBlock{
	public:
		CropBlock(std::string const&,int);
		CropBlock(std::string const&,int);
		CropBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getBasePlantId(void);
		void getBasePlantId(void);
		void getBaseSeed(void);
		void getBaseSeed(void);
		void getGrowthSpeed(BlockSource &,BlockPos const&);
		void getGrowthSpeed(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVariant(int);
		void getVariant(int);
		void isCropBlock(void);
		void isCropBlock(void);
		void mayPlaceOn(Block const&);
		void mayPlaceOn(Block const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~CropBlock();
		void ~CropBlock();
};
