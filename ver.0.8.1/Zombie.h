#pragma once
class Zombie{
	public:
		Zombie(Level *);
		void aiStep(void);
		void die(Entity *);
		void getAmbientSound(void);
		void getArmorValue(void);
		void getAttackDamage(Entity *);
		void getBaseSpeed(void);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void setUseNewAi(bool);
		void useNewAi(void);
		void ~Zombie();
		void ~Zombie();
};
