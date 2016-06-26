#pragma once
class Pig{
	public:
		Pig(Level *);
		void canBeControlledByRider(void);
		void getAmbientSound(void);
		void getBaseSpeed(void);
		void getBreedOffspring(Animal *);
		void getDeathLoot(void);
		void getDeathSound(void);
		void getEntityTypeId(void);
		void getHurtSound(void);
		void getMaxHealth(void);
		void hasSaddle(void);
		void interactWithPlayer(Player *);
		void isFood(ItemInstance const*);
		void setSaddle(bool);
		void useNewAi(void);
		void ~Pig();
		void ~Pig();
};
