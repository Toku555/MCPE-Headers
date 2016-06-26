#pragma once
class PigZombie{
	public:
		PigZombie(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void alert(Entity *);
		void canSpawn(void);
		void dropDeathLoot(void);
		void findAttackTarget(void);
		void getAmbientSound(void);
		void getAttackTime(void);
		void getBaseSpeed(void);
		void getCarriedItem(void);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getTexture(void);
		void hurt(Entity *,int);
		void interactWithPlayer(Player *);
		void readAdditionalSaveData(CompoundTag *);
		void tick(void);
		void useNewAi(void);
		void ~PigZombie();
		void ~PigZombie();
};
