#pragma once
class Ghast{
	public:
		Ghast(BlockSource &);
		Ghast(BlockSource &);
		void _canReach(Vec3 const&,float);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void _getSoundVolume(void);
		void _getSoundVolume(void);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void canSpawn(bool);
		void canSpawn(bool);
		void causeFallDamage(float);
		void causeFallDamage(float);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void getDeathLoot(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getExperienceReward(void);
		void hurt(EntityDamageSource const&,int);
		void hurt(EntityDamageSource const&,int);
		void isCharging(void);
		void isCharging(void);
		void newServerAiStep(void);
		void newServerAiStep(void);
		void onLadder(bool);
		void onLadder(bool);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void registerAttributes(void);
		void travel(float,float);
		void travel(float,float);
		void useNewAi(void);
		void useNewAi(void);
		void ~Ghast();
		void ~Ghast();
		void ~Ghast();
		void ~Ghast();
};
