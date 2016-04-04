#pragma once
class DispenserBlock{
	public:
		DispenserBlock(std::string const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void dispenseFrom(BlockSource &,BlockPos const&);
		void ejectItem(BlockSource &,Vec3 const&,signed char,ItemInstance *);
		void ejectItem(BlockSource &,Vec3 const&,signed char,ItemInstance *,Container &,int);
		void getComparatorSignal(BlockSource &,BlockPos const&,signed char,int);
		void getDispensePosition(BlockSource &,Vec3 const&);
		void getFacing(int);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getSilkTouchItemInstance(uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getTexture(signed char,int);
		void getTickDelay(void);
		void hasComparatorSignal(void);
		void isInteractiveBlock(void);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void onRemove(BlockSource &,BlockPos const&);
		void recalcLockDir(BlockSource &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void ~DispenserBlock();
		void ~DispenserBlock();
};
