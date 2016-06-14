#pragma once
class PigZombie{
	public:
		PigZombie(BlockSource &);
		PigZombie(BlockSource &);
		void _alert(Mob &);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void canSpawn(bool);
		void canSpawn(bool);
		void determineStartingGear(void);
		void determineStartingGear(void);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void dropRareDeathLoot(void);
		void dropRareDeathLoot(void);
		void finalizeMobSpawn(void);
		void finalizeMobSpawn(void);
		void findAttackTarget(void);
		void findAttackTarget(void);
		void getAttackTime(void);
		void getAttackTime(void);
		void getBabyProbability(void);
		void getBabyProbability(void);
		void getDeathLoot(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getExperienceReward(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void isAngry(void);
		void normalTick(void);
		void normalTick(void);
		void postInit(void);
		void postInit(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void registerAttributes(void);
		void setTarget(Mob *);
		void setTarget(Mob *);
		void ~PigZombie();
		void ~PigZombie();
};
