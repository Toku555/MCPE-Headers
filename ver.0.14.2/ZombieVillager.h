#pragma once
class ZombieVillager{
	public:
		ZombieVillager(BlockSource &);
		void _finishConversion(void);
		void _getConversionProgress(void);
		void _startConverting(int);
		void addAdditionalSaveData(CompoundTag &);
		void determineStartingGear(void);
		void finalizeMobSpawn(void);
		void getEntityTypeId(void);
		void getProfession(void);
		void handleEntityEvent(EntityEvent);
		void interactWithPlayer(Player &);
		void isConverting(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void setProfession(Profession);
		void ~ZombieVillager();
		void ~ZombieVillager();
};
