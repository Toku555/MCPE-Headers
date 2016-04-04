#pragma once
class Pig{
	public:
		Pig(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void canBeControlledByRider(void);
		void canInteractWith(Player &);
		void createBreedOffspring(Animal &);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getInteractText(Player &);
		void getRideHeight(void);
		void hasSaddle(void);
		void interactWithPlayer(Player &);
		void isFood(ItemInstance const&);
		void onLightningHit(void);
		void registerAttributes(void);
		void setSaddle(bool);
		void useNewAi(void);
		void ~Pig();
		void ~Pig();
};
