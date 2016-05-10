#pragma once
class Chicken{
	public:
		Chicken(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void _playStepSound(BlockPos const&,int);
		void addAdditionalSaveData(CompoundTag &);
		void aiStep(void);
		void canAddRider(Entity &);
		void causeFallDamage(float);
		void createBreedOffspring(Animal &);
		void dropDeathLoot(int);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getFlap(void);
		void getFlapSpeed(void);
		void getOFlap(void);
		void getOFlapSpeed(void);
		void isFood(ItemInstance const&);
		void positionRider(Entity &);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void useNewAi(void);
		void ~Chicken();
		void ~Chicken();
};
