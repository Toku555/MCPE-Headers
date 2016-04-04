#pragma once
class MobFlameParticle{
	public:
		MobFlameParticle(BlockSource &,ParticleType);
		void getEntity(void);
		void getParticleLightColor(float);
		void getParticleTexture(void);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void setEntity(Entity &);
		void ~MobFlameParticle();
		void ~MobFlameParticle();
};
