#pragma once
class Cow{
	public:
		Cow(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void dropDeathLoot(void);
		void getAmbientSound(void);
		void getBaseSpeed(void);
		void getBreedOffspring(Animal *);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void getSoundVolume(void);
		void interactWithPlayer(Player *);
		void readAdditionalSaveData(CompoundTag *);
		void tick(void);
		void useNewAi(void);
		void ~Cow();
		void ~Cow();
};
