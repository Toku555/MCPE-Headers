#pragma once
class TripWireHookBlock{
	public:
		TripWireHookBlock(std::string const&,int);
		TripWireHookBlock(std::string const&,int);
		void _getShape(BlockSource &,BlockPos const&,AABB &);
		void _getShape(uchar,AABB &);
		void _getShape(uchar,AABB &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void calculateState(BlockSource &,BlockPos const&,bool,int,bool,int,int);
		void calculateState(BlockSource &,BlockPos const&,bool,int,bool,int,int);
		void checkCanSurvive(BlockSource &,BlockPos const&);
		void checkCanSurvive(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getTickDelay(void);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isRedstoneBlock(void);
		void isRedstoneBlock(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void notifyNeighbors(BlockSource &,BlockPos const&,int);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void playSound(BlockSource &,BlockPos const&,bool,bool,bool,bool);
		void playSound(BlockSource &,BlockPos const&,bool,bool,bool,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void updateShape(BlockSource &,BlockPos const&);
		void updateShape(BlockSource &,BlockPos const&);
		void ~TripWireHookBlock();
		void ~TripWireHookBlock();
};
