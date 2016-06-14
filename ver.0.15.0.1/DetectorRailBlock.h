#pragma once
class DetectorRailBlock{
	public:
		DetectorRailBlock(std::string const&,int);
		DetectorRailBlock(std::string const&,int);
		void checkPressed(BlockSource &,BlockPos const&,int);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getSearchBB(BlockPos);
		void getTickDelay(void);
		void getVariant(int);
		void getVariant(int);
		void handlePressed(BlockSource &,BlockPos const&,int,bool);
		void handlePressed(BlockSource &,BlockPos const&,int,bool);
		void hasComparatorSignal(void);
		void hasComparatorSignal(void);
		void isRedstoneBlock(void);
		void isRedstoneBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~DetectorRailBlock();
		void ~DetectorRailBlock();
};
