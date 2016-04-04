#pragma once
class Blaze{
	public:
		Blaze(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void aiStep(void);
		void causeFallDamage(float);
		void checkHurtTarget(Entity *,float);
		void dropDeathLoot(int);
		void getBrightness(float);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void isCharged(void);
		void isDarkEnoughToSpawn(void);
		void isOnFire(void);
		void registerAttributes(void);
		void setCharged(bool);
		void useNewAi(void);
		void ~Blaze();
		void ~Blaze();
};
