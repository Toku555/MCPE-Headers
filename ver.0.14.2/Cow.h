#pragma once
class Cow{
	public:
		Cow(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void addAdditionalSaveData(CompoundTag &);
		void canInteractWith(Player &);
		void createBreedOffspring(Animal &);
		void dropDeathLoot(int);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getInteractText(Player &);
		void getRideHeight(void);
		void interactWithPlayer(Player &);
		void isFood(ItemInstance const&);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void useNewAi(void);
		void ~Cow();
		void ~Cow();
};
