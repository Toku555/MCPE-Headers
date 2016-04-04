#pragma once
class LeverBlock{
	public:
		LeverBlock(std::string const&,int);
		void _checkCanSurvive(BlockSource &,BlockPos const&);
		void _getDirectionFromData(int);
		void _getOppositeDirectionFromData(int);
		void _getShape(BlockSource &,BlockPos const&,AABB &);
		void _getShape(uchar,AABB &);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void blocksLight(void);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getLeverFacing(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getSignal(BlockSource &,BlockPos const&,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isInteractiveBlock(void);
		void isRedstoneBlock(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRemove(BlockSource &,BlockPos const&);
		void updateShape(BlockSource *,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~LeverBlock();
		void ~LeverBlock();
};
