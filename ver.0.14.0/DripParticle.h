#pragma once
class DripParticle{
	public:
		void getParticleLightColor(float);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void ~DripParticle();
		void ~DripParticle();
};
