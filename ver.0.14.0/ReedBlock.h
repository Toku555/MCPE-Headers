#pragma once
class ReedBlock{
	public:
		ReedBlock(std::string const&,int,std::string const&);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void checkAlive(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getColor(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void isWaterBlocking(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onFertilized(BlockSource &,BlockPos const&,Player *);
		void onGraphicsModeChanged(bool,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~ReedBlock();
		void ~ReedBlock();
};
