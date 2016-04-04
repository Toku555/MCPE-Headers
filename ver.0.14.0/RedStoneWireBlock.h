#pragma once
class RedStoneWireBlock{
	public:
		RedStoneWireBlock(std::string const&,int);
		void animateTick(BlockSource &,BlockPos const&,Random &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getColor(BlockSource &,BlockPos const&);
		void getColor(int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getTexCrossUVs(void);
		void getTexLineUVs(void);
		void isRedstoneBlock(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void shouldConnectTo(BlockSource &,BlockPos const&,int);
		void ~RedStoneWireBlock();
		void ~RedStoneWireBlock();
};
