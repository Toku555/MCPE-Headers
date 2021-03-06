#pragma once
class DoorBlock{
	public:
		DoorBlock(std::string const&,int,Material const&,DoorBlock::DoorType);
		DoorBlock(std::string const&,int,Material const&,DoorBlock::DoorType);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getCompositeData(BlockSource &,BlockPos const&);
		void getCompositeData(BlockSource &,BlockPos const&);
		void getDir(BlockSource &,BlockPos const&);
		void getDir(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSilkTouchItemInstance(uchar);
		void getSilkTouchItemInstance(uchar);
		void getVariant(int);
		void getVariant(int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void hasRightHinge(uchar);
		void isInteractiveBlock(void);
		void isInteractiveBlock(void);
		void isOpen(BlockSource &,BlockPos const&);
		void isOpen(BlockSource &,BlockPos const&);
		void isOpen(int);
		void isUpper(uchar);
		void isUpper(uchar);
		void isWaterBlocking(void);
		void isWaterBlocking(void);
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
		void setOpen(BlockSource &,BlockPos const&,bool,Mob *);
		void setOpen(BlockSource &,BlockPos const&,bool,Mob *);
		void shouldFlipTexture(int,signed char);
		void shouldFlipTexture(int,signed char);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void use(Player &,BlockPos const&);
		void ~DoorBlock();
		void ~DoorBlock();
};
