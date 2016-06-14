#pragma once
class FarmBlock{
	public:
		FarmBlock(std::string const&,int);
		FarmBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getVariant(int);
		void getVariant(int);
		void isNearWater(BlockSource &,BlockPos const&);
		void isNearWater(BlockSource &,BlockPos const&);
		void isUnderCrops(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onFallOn(BlockSource &,BlockPos const&,Entity *,float);
		void onFallOn(BlockSource &,BlockPos const&,Entity *,float);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~FarmBlock();
		void ~FarmBlock();
};
