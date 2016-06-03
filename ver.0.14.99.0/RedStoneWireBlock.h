#pragma once
class RedStoneWireBlock{
	public:
		RedStoneWireBlock(std::string const&,int);
		RedStoneWireBlock(std::string const&,int);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getColor(int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void isRedstoneBlock(void);
		void isRedstoneBlock(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void shouldConnectTo(BlockSource &,BlockPos const&,int);
		void shouldConnectTo(BlockSource &,BlockPos const&,int);
		void ~RedStoneWireBlock();
		void ~RedStoneWireBlock();
};
