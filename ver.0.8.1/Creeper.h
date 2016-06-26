#pragma once
class Creeper{
	public:
		Creeper(Level *);
		void checkCantSeeTarget(Entity *,float);
		void checkHurtTarget(Entity *,float);
		void getBaseSpeed(void);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void getSwellDir(void);
		void getSwelling(float);
		void interactWithPlayer(Player *);
		void setSwellDir(int);
		void tick(void);
		void useNewAi(void);
		void ~Creeper();
		void ~Creeper();
};
