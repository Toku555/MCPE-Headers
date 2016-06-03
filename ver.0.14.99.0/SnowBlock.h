#pragma once
class SnowBlock{
	public:
		SnowBlock(std::string const&,int);
		SnowBlock(std::string const&,int);
		void calcGroundFriction(Mob &,BlockPos const&);
		void calcGroundFriction(Mob &,BlockPos const&);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getResource(Random &,int,int);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void tick(BlockSource &,BlockPos const&,Random &);
		void waterSpreadCausesSpawn(void);
		void waterSpreadCausesSpawn(void);
		void ~SnowBlock();
		void ~SnowBlock();
};
