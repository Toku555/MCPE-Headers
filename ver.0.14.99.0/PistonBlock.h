#pragma once
class PistonBlock{
	public:
		PistonBlock(std::string const&,int,PistonBlock::Type);
		PistonBlock(std::string const&,int,PistonBlock::Type);
		void _setArmCollisionBlock(BlockSource &,BlockPos const&,BlockID);
		void _setArmCollisionBlock(BlockSource &,BlockPos const&,BlockID);
		void _setVisualShape(signed char,float);
		void _setVisualShape(signed char,float);
		void _updateBaseCollision(BlockSource &,BlockPos const&);
		void _updateBaseCollision(BlockSource &,BlockPos const&);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void getMappedFace(signed char,int);
		void getMappedFace(signed char,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSpawnResourcesAuxValue(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getVariant(int);
		void getVariant(int);
		void isSticky(void);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~PistonBlock();
		void ~PistonBlock();
};
