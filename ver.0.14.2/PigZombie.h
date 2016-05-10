#pragma once
class PigZombie{
	public:
		PigZombie(BlockSource &);
		void _alert(Mob &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void addAdditionalSaveData(CompoundTag &);
		void canSpawn(bool);
		void determineStartingGear(void);
		void dropDeathLoot(int);
		void dropRareDeathLoot(void);
		void findAttackTarget(void);
		void getAttackTime(void);
		void getBabyProbability(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void isAngry(void);
		void normalTick(void);
		void postInit(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void ~PigZombie();
		void ~PigZombie();
};
