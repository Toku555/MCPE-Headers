#pragma once
class PortalParticle{
	public:
		PortalParticle(BlockSource &,ParticleType);
		PortalParticle(BlockSource &,ParticleType);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~PortalParticle();
		void ~PortalParticle();
};
