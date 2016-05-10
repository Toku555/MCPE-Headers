#pragma once
class BasePressurePlateBlock{
	public:
		BasePressurePlateBlock(std::string const&,int,std::string const&,Material const&);
		void blocksLight(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void checkPressed(BlockSource &,BlockPos const&,int,int);
		void entityInside(BlockSource &,BlockPos const&,Entity &);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getSensitiveAABB(BlockPos const&);
		void getTickDelay(void);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(uchar,AABB &,bool);
		void isRedstoneBlock(void);
		void mayPlace(BlockSource &,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void onLoaded(BlockSource &,BlockPos const&);
		void onPlace(BlockSource &,BlockPos const&);
		void tick(BlockSource &,BlockPos const&,Random &);
		void ~BasePressurePlateBlock();
		void ~BasePressurePlateBlock();
};
