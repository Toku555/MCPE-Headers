#pragma once
class LavaParticle{
	public:
		LavaParticle(BlockSource &,ParticleType);
		LavaParticle(BlockSource &,ParticleType);
		void getParticleLightColor(float);
		void getParticleLightColor(float);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~LavaParticle();
		void ~LavaParticle();
};
