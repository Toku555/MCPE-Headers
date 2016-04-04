#pragma once
class TrapDoorBlock{
	public:
		TrapDoorBlock(std::string const&,int,Material const&);
		void _attachesTo(BlockID);
		void _isOpen(uchar);
		void _isUpsideDown(uchar);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void attack(Player *,BlockPos const&);
		void canBeSilkTouched(void);
		void getDir(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getVisualShape(uchar,AABB &,bool);
		void isInteractiveBlock(void);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void setOpen(BlockSource &,BlockPos const&,bool);
		void use(Player &,BlockPos const&);
		void ~TrapDoorBlock();
		void ~TrapDoorBlock();
};
