#pragma once
class MobSpawner{
	public:
		void addMob(Level *,Mob *,float,float,float,float,float,bool);
		void finalizeMobSettings(Mob *,Level *,float,float,float);
		void getRandomPosWithin(Level *,int,int);
		void isSpawnPositionOk(MobCategory const&,Level *,int,int,int);
		void makeBabyMob(Mob *,float);
		void postProcessSpawnMobs(Level *,Biome *,int,int,int,int,Random *);
		void tick(Level *,bool,bool);
};
