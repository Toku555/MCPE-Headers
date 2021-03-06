#pragma once
class TripWireBlock{
	public:
		TripWireBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void blocksLight(void);
		void checkPressed(BlockSource &,BlockPos const&);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getTickDelay(void);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void shouldConnectTo(BlockSource &,BlockPos const&,int,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void updateShape(BlockSource &,BlockPos const&);
		void updateSource(BlockSource &,BlockPos const&,int);
		void ~TripWireBlock();
		void ~TripWireBlock();
};
