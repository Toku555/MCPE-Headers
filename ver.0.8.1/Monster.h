#pragma once
class Monster{
	public:
		Monster(Level *);
		void aiStep(void);
		void canSpawn(void);
		void checkHurtTarget(Entity *,float);
		void doHurtTarget(Entity *);
		void findAttackTarget(void);
		void getAttackDamage(Entity *);
		void getAttackTime(void);
		void getCreatureBaseType(void);
		void getWalkTargetValue(int,int,int);
		void hurt(Entity *,int);
		void isDarkEnoughToSpawn(void);
		void tick(void);
		void ~Monster();
		void ~Monster();
};
