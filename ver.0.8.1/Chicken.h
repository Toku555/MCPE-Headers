#pragma once
class Chicken{
	public:
		Chicken(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void aiStep(void);
		void causeFallDamage(float);
		void dropDeathLoot(void);
		void getAmbientSound(void);
		void getBaseSpeed(void);
		void getBreedOffspring(Animal *);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void isFood(ItemInstance const*);
		void readAdditionalSaveData(CompoundTag *);
		void useNewAi(void);
		void ~Chicken();
		void ~Chicken();
};
