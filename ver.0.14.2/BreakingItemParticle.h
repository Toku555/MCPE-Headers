#pragma once
class BreakingItemParticle{
	public:
		void getParticleTexture(void);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~BreakingItemParticle();
		void ~BreakingItemParticle();
};
