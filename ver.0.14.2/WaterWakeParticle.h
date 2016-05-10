#pragma once
class WaterWakeParticle{
	public:
		WaterWakeParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void ~WaterWakeParticle();
		void ~WaterWakeParticle();
};
