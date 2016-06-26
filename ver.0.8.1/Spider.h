#pragma once
class Spider{
	public:
		Spider(Level *);
		void aiStep(void);
		void checkHurtTarget(Entity *,float);
		void findAttackTarget(void);
		void getAmbientSound(void);
		void getBaseSpeed(void);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void getModelScale(void);
		void getShadowRadius(void);
		void isClimbing(void);
		void makeStepSound(void);
		void makeStuckInWeb(void);
		void onLadder(void);
		void setClimbing(bool);
		void tick(void);
		void ~Spider();
		void ~Spider();
};
