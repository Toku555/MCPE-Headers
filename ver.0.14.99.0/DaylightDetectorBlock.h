#pragma once
class DaylightDetectorBlock{
	public:
		DaylightDetectorBlock(std::string const&,int,bool);
		DaylightDetectorBlock(std::string const&,int,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void getVariant(int);
		void getVariant(int);
		void isInteractiveBlock(void);
		void isInteractiveBlock(void);
		void isRedstoneBlock(void);
		void isRedstoneBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void updateShape(BlockSource &,BlockPos const&);
		void updateShape(BlockSource &,BlockPos const&);
		void updateSignalStrength(BlockSource &,BlockPos const&);
		void updateSignalStrength(BlockSource &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~DaylightDetectorBlock();
		void ~DaylightDetectorBlock();
};
