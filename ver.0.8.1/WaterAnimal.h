#pragma once
class WaterAnimal{
	public:
		WaterAnimal(Level *);
		void addAdditonalSaveData(CompoundTag *);
		void canSpawn(void);
		void getAmbientSoundInterval(void);
		void getBaseSpeed(void);
		void getCreatureBaseType(void);
		void getExperienceReward(Player *);
		void isWaterMob(void);
		void readAdditionalSaveData(CompoundTag *);
		void removeWhenFarAway(void);
		void ~WaterAnimal();
		void ~WaterAnimal();
};
