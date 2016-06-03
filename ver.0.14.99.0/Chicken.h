#pragma once
class Chicken{
	public:
		Chicken(BlockSource &);
		Chicken(BlockSource &);
		Chicken(BlockSource &);
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
		void aiStep(void);
		void aiStep(void);
		void canAddRider(Entity &);
		void canAddRider(Entity &);
		void causeFallDamage(float);
		void causeFallDamage(float);
		void createBreedOffspring(Animal &);
		void createBreedOffspring(Animal &);
		void dropDeathLoot(int);
		void dropDeathLoot(int);
		void getEntityTypeId(void);
		void getEntityTypeId(void);
		void getExperienceReward(void);
		void getExperienceReward(void);
		void getFlap(void);
		void getFlap(void);
		void getFlapSpeed(void);
		void getFlapSpeed(void);
		void getOFlap(void);
		void getOFlap(void);
		void getOFlapSpeed(void);
		void getOFlapSpeed(void);
		void isFood(ItemInstance const&);
		void isFood(ItemInstance const&);
		void positionRider(Entity &);
		void positionRider(Entity &);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void registerAttributes(void);
		void registerAttributes(void);
		void useNewAi(void);
		void useNewAi(void);
		void ~Chicken();
		void ~Chicken();
};