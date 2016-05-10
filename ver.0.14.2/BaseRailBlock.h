#pragma once
class BaseRailBlock{
	public:
		BaseRailBlock(std::string const&,int,bool);
		void Rail(BlockSource &,BlockPos const&);
		void canConnectTo(BaseRailBlock::Rail&);
		void connectTo(BaseRailBlock::Rail&);
		void connectsTo(BaseRailBlock::Rail&);
		void getRail(BlockPos const&);
		void hasConnection(BlockPos const&);
		void hasNeighborRail(BlockPos const&);
		void place(bool,bool);
		void removeSoftConnections(void);
		void updateConnections(int);
		void _createCircuitComponent(BlockSource &,BlockPos const&,uchar);
		void _isFacingWestEast(BlockSource &,BlockPos const&);
		void _updatePlacement(BlockSource &,BlockPos const&,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void isRail(BlockSource &,BlockPos const&);
		void isRail(int);
		void isRedstoneBlock(void);
		void isUsesDataBit(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRemove(BlockSource &,BlockPos const&);
		void updateDir(BlockSource &,BlockPos const&,bool);
		void updateState(BlockSource &,BlockPos const&,int,int,int);
		void ~BaseRailBlock();
		void ~BaseRailBlock();
};
