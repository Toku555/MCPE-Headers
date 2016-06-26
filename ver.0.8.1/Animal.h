#pragma once
class Animal{
	public:
		Animal(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void aiStep(void);
		void canMate(Animal const*);
		void canSpawn(void);
		void findAttackTarget(void);
		void getAmbientSoundInterval(void);
		void getCreatureBaseType(void);
		void getWalkTargetValue(int,int,int);
		void hurt(Entity *,int);
		void interactWithPlayer(Player *);
		void isFood(ItemInstance const*);
		void isInLove(void);
		void readAdditionalSaveData(CompoundTag *);
		void removeWhenFarAway(void);
		void resetLove(void);
		void ~Animal();
		void ~Animal();
};
