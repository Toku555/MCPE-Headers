#pragma once
class CactusBlock{
	public:
		CactusBlock(std::string const&,int);
		CactusBlock(std::string const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void canSurvive(BlockSource &,BlockPos const&);
		void canSurvive(BlockSource &,BlockPos const&);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onGraphicsModeChanged(bool,bool,bool);
		void onGraphicsModeChanged(bool,bool,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~CactusBlock();
		void ~CactusBlock();
};
