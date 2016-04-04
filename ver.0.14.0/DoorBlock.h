#pragma once
class DoorBlock{
	public:
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getCompositeData(BlockSource &,BlockPos const&);
		void getDir(BlockSource &,BlockPos const&);
		void getResource(Random &,int,int);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSilkTouchItemInstance(uchar);
		void getTessellatedUVs(void);
		void getTexture(BlockSource &,BlockPos const&,signed char);
		void getTexture(signed char,int);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void hasRightHinge(uchar);
		void isDoorBlock(void);
		void isInteractiveBlock(void);
		void isOpen(BlockSource &,BlockPos const&);
		void isOpen(int);
		void isUpper(uchar);
		void isWaterBlocking(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void playerWillDestroy(Player &,BlockPos const&,int);
		void setOpen(BlockSource &,BlockPos const&,bool,Mob *);
		void shouldFlipTexture(int,signed char);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void ~DoorBlock();
		void ~DoorBlock();
};
