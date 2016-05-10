#pragma once
class Golem{
	public:
		Golem(BlockSource &);
		void _getAmbientSound(void);
		void _getDeathSound(void);
		void _getHurtSound(void);
		void causeFallDamage(float);
		void getAmbientSoundInterval(void);
		void ~Golem();
		void ~Golem();
};
