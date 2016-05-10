#pragma once
class SnowBlock{
	public:
		SnowBlock(std::string const&,int,std::string const&);
		void calcGroundFriction(Mob &,BlockPos const&);
		void getCollisionShape(AABB &,BlockSource &,BlockPos const&,Entity *);
		void getResource(Random &,int,int);
		void getResourceCount(Random &,int,int);
		void tick(BlockSource &,BlockPos const&,Random &);
		void waterSpreadCausesSpawn(void);
		void ~SnowBlock();
		void ~SnowBlock();
};
