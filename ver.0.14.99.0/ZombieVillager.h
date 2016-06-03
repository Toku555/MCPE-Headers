#pragma once
class ZombieVillager{
	public:
		ZombieVillager(BlockSource &);
		ZombieVillager(BlockSource &);
		void _finishConversion(void);
		void _finishConversion(void);
		void _getConversionProgress(void);
		void _getConversionProgress(void);
		void _startConverting(int);
		void _startConverting(int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void determineStartingGear(void);
		void determineStartingGear(void);
		void finalizeMobSpawn(void);
		void finalizeMobSpawn(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getProfession(void);
		void getProfession(void);
		void handleEntityEvent(EntityEvent,int);
		void handleEntityEvent(EntityEvent,int);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void isConverting(void);
		void isConverting(void);
		void normalTick(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void setHideFromSunGoal(void);
		void setHideFromSunGoal(void);
		void setProfession(Profession);
		void setProfession(Profession);
		void ~ZombieVillager();
		void ~ZombieVillager();
};
