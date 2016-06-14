#pragma once
class FenceGateBlock{
	public:
		FenceGateBlock(std::string const&,int,WoodBlockType);
		FenceGateBlock(std::string const&,int,WoodBlockType);
		void _checkIsInWall(BlockSource &,BlockPos const&);
		void _checkIsInWall(BlockSource &,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getDirection(int);
		void getDirection(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void isInWall(int);
		void isInWall(int);
		void isInteractiveBlock(void);
		void isInteractiveBlock(void);
		void isOpen(int);
		void isOpen(int);
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
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~FenceGateBlock();
		void ~FenceGateBlock();
};
