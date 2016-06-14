#pragma once
class Cow{
	public:
		Cow(BlockSource &);
		Cow(BlockSource &);
		Cow(BlockSource &);
		void _getAmbientSound(void);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void _playStepSound(BlockPos const&,int);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void canInteractWith(Player &);
		void canInteractWith(Player &);
		void createBreedOffspring(Animal &);
		void createBreedOffspring(Animal &);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void getDeathLoot(void);
		void getDeathLoot(void);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getInteractText(Player &);
		void getInteractText(Player &);
		void getRideHeight(void);
		void getRideHeight(void);
		void interactWithPlayer(Player &);
		void interactWithPlayer(Player &);
		void isFood(ItemInstance const&);
		void isFood(ItemInstance const&);
		void normalTick(void);
		void normalTick(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void registerAttributes(void);
		void useNewAi(void);
		void useNewAi(void);
		void ~Cow();
		void ~Cow();
};