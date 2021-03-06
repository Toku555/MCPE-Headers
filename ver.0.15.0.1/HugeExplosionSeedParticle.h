#pragma once
class HugeExplosionSeedParticle{
	public:
		HugeExplosionSeedParticle(BlockSource &,ParticleType);
		HugeExplosionSeedParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~HugeExplosionSeedParticle();
		void ~HugeExplosionSeedParticle();
};
