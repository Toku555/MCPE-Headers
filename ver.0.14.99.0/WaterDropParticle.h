#pragma once
class WaterDropParticle{
	public:
		WaterDropParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void ~WaterDropParticle();
		void ~WaterDropParticle();
};
