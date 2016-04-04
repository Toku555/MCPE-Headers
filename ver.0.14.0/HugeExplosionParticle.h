#pragma once
class HugeExplosionParticle{
	public:
		HugeExplosionParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~HugeExplosionParticle();
		void ~HugeExplosionParticle();
};
