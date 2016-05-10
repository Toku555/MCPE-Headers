#pragma once
class WaterAnimal{
	public:
		WaterAnimal(BlockSource &);
		void canSpawn(bool);
		void getAmbientSoundInterval(void);
		void getExperienceReward(Player &);
		void normalTick(void);
		void registerAttributes(void);
		void ~WaterAnimal();
		void ~WaterAnimal();
};
