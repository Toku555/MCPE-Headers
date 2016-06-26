#pragma once
class Skeleton{
	public:
		Skeleton(Level *);
		void aiStep(void);
		void checkHurtTarget(Entity *,float);
		void dropDeathLoot(void);
		void getAmbientSound(void);
		void getBaseSpeed(void);
		void getCarriedItem(void);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void getUseDuration(void);
		void useNewAi(void);
		void ~Skeleton();
		void ~Skeleton();
};
