#pragma once
class PortalParticle{
	public:
		void init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void ~PortalParticle();
		void ~PortalParticle();
};
