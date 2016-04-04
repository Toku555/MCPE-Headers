#pragma once
class RandomPos{
	public:
		void generateRandomPos(Vec3 &,PathfinderMob &,int,int,Vec3*);
		void getPos(Vec3 &,PathfinderMob &,int,int);
		void getPosAvoid(Vec3 &,PathfinderMob &,int,int,Vec3 const&);
		void getPosTowards(Vec3 &,PathfinderMob &,int,int,Vec3 const&);
		void snapToGround(BlockPos &,PathfinderMob const&,int);
};
