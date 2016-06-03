#pragma once
class HugeExplosionParticle{
	public:
		HugeExplosionParticle(BlockSource &,ParticleType);
		HugeExplosionParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~HugeExplosionParticle();
		void ~HugeExplosionParticle();
};
