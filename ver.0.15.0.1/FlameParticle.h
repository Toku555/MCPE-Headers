#pragma once
class FlameParticle{
	public:
		FlameParticle(BlockSource &,ParticleType);
		FlameParticle(BlockSource &,ParticleType);
		void getParticleLightColor(float);
		void getParticleLightColor(float);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~FlameParticle();
		void ~FlameParticle();
};
