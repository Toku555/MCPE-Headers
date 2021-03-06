#pragma once
class Village{
	public:
		Village(Level *);
		void addAdditionalSaveData(CompoundTag &);
		void addAggressor(Mob *);
		void addDoorInfo(DoorInfo *);
		void addVillager(EntityUniqueID const&);
		void calcInfo(void);
		void canRemove(void);
		void canSpawnAt(BlockPos const&,BlockPos const&);
		void canSpawnAt(int,int,int,int,int,int);
		void checkNeedMoreVillagers(void);
		void countGolem(void);
		void debugDraw(void);
		void findRandomSpawnPos(Vec3 &,BlockPos const&,BlockPos const&);
		void findRandomSpawnPos(Vec3 &,int,int,int,int,int,int);
		void getBestDoorInfo(BlockPos const&);
		void getBestDoorInfo(Vec3 const&);
		void getBestDoorInfo(int,int,int);
		void getCenter(void);
		void getClosestAggressor(Entity *);
		void getClosestBadStandingPlayer(Entity *);
		void getClosestDoorInfo(BlockPos const&);
		void getClosestDoorInfo(Vec3 const&);
		void getClosestDoorInfo(int,int,int);
		void getDoorCount(void);
		void getDoorInfos(void);
		void getIdealPopulationSize(void);
		void getPopulationSize(void);
		void getRadius(void);
		void getStableAge(void);
		void getStanding(EntityUniqueID const&);
		void hasDoorInfo(DoorInfo *);
		void isBadStanding(EntityUniqueID const&);
		void isBreedTimerOk(void);
		void isDoor(BlockPos const&);
		void isDoor(int,int,int);
		void isGoodStanding(EntityUniqueID const&);
		void isInside(BlockPos const&);
		void isInside(int,int,int);
		void isVeryBadStanding(EntityUniqueID const&);
		void modifyStanding(EntityUniqueID const&,int);
		void readAdditionalSaveData(CompoundTag const&);
		void removeVillager(EntityUniqueID const&);
		void resetNoBreedTimer(void);
		void rewardAllPlayers(int);
		void setLevel(Level *);
		void tick(int);
		void updateAggressors(void);
		void updateDoors(void);
		void villagerLivesHere(EntityUniqueID const&);
		void ~Village();
};
