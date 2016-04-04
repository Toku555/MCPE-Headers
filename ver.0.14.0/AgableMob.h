#pragma once
class AgableMob{
	public:
		AgableMob(BlockSource &);
		void _grewUp(void);
		void _internalSetSize(float);
		void addAdditionalSaveData(CompoundTag &);
		void ageUp(int,bool);
		void aiStep(void);
		void getAge(void);
		void getAnimalFlag(int);
		void getShadowRadius(void);
		void isBaby(void);
		void readAdditionalSaveData(CompoundTag const&);
		void resolveDeathLoot(int);
		void setAge(int);
		void setAnimalFlag(int,bool);
		void setSize(float,float);
		void updateSize(bool);
		void ~AgableMob();
		void ~AgableMob();
};
