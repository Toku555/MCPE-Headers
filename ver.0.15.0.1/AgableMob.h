#pragma once
class AgableMob{
	public:
		AgableMob(BlockSource &);
		AgableMob(BlockSource &);
		void _grewUp(void);
		void _grewUp(void);
		void _internalSetSize(float);
		void addAdditionalSaveData(CompoundTag &);
		void addAdditionalSaveData(CompoundTag &);
		void ageUp(int,bool);
		void ageUp(int,bool);
		void aiStep(void);
		void aiStep(void);
		void getAge(void);
		void getAge(void);
		void getAnimalFlag(int);
		void getAnimalFlag(int);
		void getShadowRadius(void);
		void getShadowRadius(void);
		void isBaby(void);
		void isBaby(void);
		void readAdditionalSaveData(CompoundTag const&);
		void readAdditionalSaveData(CompoundTag const&);
		void resolveDeathLoot(int);
		void resolveDeathLoot(int);
		void setAge(int);
		void setAge(int);
		void setAnimalFlag(int,bool);
		void setAnimalFlag(int,bool);
		void setSize(float,float);
		void setSize(float,float);
		void updateSize(bool);
		void updateSize(bool);
		void ~AgableMob();
		void ~AgableMob();
};
