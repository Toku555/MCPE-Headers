#pragma once
class PistonArmBlock{
	public:
		PistonArmBlock(std::string const&,int);
		PistonArmBlock(std::string const&,int);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void addCollisionShapes(BlockSource &,BlockPos const&,AABB const*,std::vector<AABB,std::allocator<AABB>> &,Entity *);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void asItemInstance(BlockSource &,BlockPos const&,int);
		void canBeSilkTouched(void);
		void canBeSilkTouched(void);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void getSecondPart(BlockSource &,BlockPos const&,BlockPos&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void neighborChanged(BlockSource &,BlockPos const&,BlockPos const&);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void spawnResources(BlockSource &,BlockPos const&,int,float,int);
		void ~PistonArmBlock();
		void ~PistonArmBlock();
};
