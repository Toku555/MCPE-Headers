#pragma once
class FarmBlock{
	public:
		FarmBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void getTexture(signed char,int);
		void isNearWater(BlockSource &,BlockPos const&);
		void isUnderCrops(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onFallOn(BlockSource &,BlockPos const&,Entity *,float);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~FarmBlock();
		void ~FarmBlock();
};
