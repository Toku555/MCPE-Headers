#pragma once
class Particle{
	public:
		Particle(BlockSource &,ParticleType);
		Particle(BlockSource &,ParticleType);
		void _init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void _init(Vec3 const&,Vec3 const&,int,ParticleEngine &);
		void getParticleLightColor(float);
		void getParticleLightColor(float);
		void getParticleTexture(void);
		void getParticleTexture(void);
		void initStaticResources(mce::TextureGroup &);
		void initStaticResources(mce::TextureGroup &);
		void move(Vec3 const&);
		void move(Vec3 const&);
		void normalTick(void);
		void normalTick(void);
		void render(Tessellator &,float,float,float,float,float,float);
		void render(Tessellator &,float,float,float,float,float,float);
		void scale(float);
		void setPos(Vec3 const&);
		void setPos(Vec3 const&);
		void setPower(float);
		void setPower(float);
		void setSize(float);
		void setSize(float);
		void ~Particle();
		void ~Particle();
		void ~Particle();
		void ~Particle();
};
