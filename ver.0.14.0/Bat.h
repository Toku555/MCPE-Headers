#pragma once
class Bat{
	public:
		Bat(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getSoundVolume(void);
		void addAdditionalSaveData(CompoundTag &);
		void canSpawn(bool);
		void causeFallDamage(float);
		void checkFallDamage(float,bool);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getVoicePitch(void);
		void hurt(EntityDamageSource const&,int);
		void isPushable(void);
		void isResting(void);
		void newServerAiStep(void);
		void normalTick(void);
		void push(Entity &,bool);
		void pushEntities(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void setResting(bool);
		void useNewAi(void);
		void ~Bat();
		void ~Bat();
};
