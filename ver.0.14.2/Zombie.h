#pragma once
class Zombie{
	public:
		Zombie(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _internalSetSize(float);
		void _playStepSound(BlockPos const&,int);
		void _updateSize(bool);
		void addAdditionalSaveData(CompoundTag &);
		void canAddRider(Entity &);
		void determineStartingGear(void);
		void die(EntityDamageSource const&);
		void dropRareDeathLoot(void);
		void finalizeMobSpawn(void);
		void getArmorValue(void);
		void getBabyProbability(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void isBaby(void);
		void positionRider(Entity &);
		void postInit(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setBaby(bool);
		void setSize(float,float);
		void useNewAi(void);
		void ~Zombie();
		void ~Zombie();
};
