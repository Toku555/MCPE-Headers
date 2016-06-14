#pragma once
class SignBlock{
	public:
		SignBlock(std::string const&,int,bool);
		SignBlock(std::string const&,int,bool);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void checkIsPathable(Entity &,BlockPos const&,BlockPos const&);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getAABB(BlockSource &,BlockPos const&,AABB &,int,bool,int);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getShape(int,AABB &);
		void getShape(int,AABB &);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void getVisualShape(BlockSource &,BlockPos const&,AABB &,bool);
		void isWaterBlocking(void);
		void isWaterBlocking(void);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void ~SignBlock();
		void ~SignBlock();
};
