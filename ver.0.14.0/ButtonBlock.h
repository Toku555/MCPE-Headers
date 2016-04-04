#pragma once
class ButtonBlock{
	public:
		ButtonBlock(std::string const&,int,std::string,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void blocksLight(void);
		void canAttachTo(BlockSource &,BlockPos const&,signed char);
		void checkCanSurvive(BlockSource &,BlockPos const&);
		void checkPressed(BlockSource &,BlockPos const&);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getPlacementDataValue(Mob &,BlockPos const&,signed char,Vec3 const&,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getShape(AABB &,uchar);
		void getSpawnResourcesAuxValue(uchar);
		void getTickDelay(void);
		void getVisualShape(uchar,AABB &,bool);
		void isInteractiveBlock(void);
		void isRedstoneBlock(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void mayPlace(BlockSource &,BlockPos const&,signed char);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void onRedstoneUpdate(BlockSource &,BlockPos const&,int,bool);
		void tick(BlockSource &,BlockPos const&,Random &);
		void use(Player &,BlockPos const&);
		void ~ButtonBlock();
		void ~ButtonBlock();
};
