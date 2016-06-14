#pragma once
class ReedBlock{
	public:
		ReedBlock(std::string const&,int);
		ReedBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void checkAlive(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void isWaterBlocking(void);
		void isWaterBlocking(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onGraphicsModeChanged(bool,bool,bool);
		void onGraphicsModeChanged(bool,bool,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~ReedBlock();
		void ~ReedBlock();
};
