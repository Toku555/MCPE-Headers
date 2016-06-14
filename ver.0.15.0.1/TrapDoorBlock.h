#pragma once
class TrapDoorBlock{
	public:
		TrapDoorBlock(std::string const&,int,Material const&);
		TrapDoorBlock(std::string const&,int,Material const&);
		void _isOpen(uchar);
		void _isUpsideDown(uchar);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void getDir(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isInteractiveBlock(void);
		void isInteractiveBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void setOpen(BlockSource &,BlockPos const&,bool);
		void setOpen(BlockSource &,BlockPos const&,bool);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~TrapDoorBlock();
		void ~TrapDoorBlock();
};
