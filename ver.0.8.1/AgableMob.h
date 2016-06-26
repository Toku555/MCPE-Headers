#pragma once
class AgableMob{
	public:
		AgableMob(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void aiStep(void);
		void getAge(void);
		void getShadowRadius(void);
		void isBaby(void);
		void readAdditionalSaveData(CompoundTag *);
		void setAge(int);
		void ~AgableMob();
		void ~AgableMob();
};
